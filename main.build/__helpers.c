// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 1; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 1 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 1; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 1 * sizeof(PyObject *));
            memcpy(python_pars + 1, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 1)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 1 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 1; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 1 * sizeof(PyObject *));
                memcpy(python_pars+1 + 1, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 1)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 1);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 1, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 1);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 1);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 2; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 2 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 2; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 2 * sizeof(PyObject *));
            memcpy(python_pars + 2, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 2)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 2 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 2; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 2 * sizeof(PyObject *));
                memcpy(python_pars+1 + 2, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 2)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 2);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 2, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 2);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 2);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 3; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 3 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 3; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 3 * sizeof(PyObject *));
            memcpy(python_pars + 3, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 3)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 3 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 3; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 3 * sizeof(PyObject *));
                memcpy(python_pars+1 + 3, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 3)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 3);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 3, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 3);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 3);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 4; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 4 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 4; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 4 * sizeof(PyObject *));
            memcpy(python_pars + 4, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 4)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 4 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 4; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 4 * sizeof(PyObject *));
                memcpy(python_pars+1 + 4, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 4)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 4);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 4, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 4);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 4);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 5; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 5 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 5; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 5 * sizeof(PyObject *));
            memcpy(python_pars + 5, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 5)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 5 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 5; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 5 * sizeof(PyObject *));
                memcpy(python_pars+1 + 5, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 5)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 5);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 5, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 5);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 5);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 6; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 6 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 6; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 6 * sizeof(PyObject *));
            memcpy(python_pars + 6, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 6)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 6 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 6; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 6 * sizeof(PyObject *));
                memcpy(python_pars+1 + 6, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 6)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 6);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 6, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 6);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 6);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 7; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 7 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 7; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 7 * sizeof(PyObject *));
            memcpy(python_pars + 7, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 7)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 7 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 7; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 7 * sizeof(PyObject *));
                memcpy(python_pars+1 + 7, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 7)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 7);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 7, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 7);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 7);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 8; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 8 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 8; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 8 * sizeof(PyObject *));
            memcpy(python_pars + 8, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 8)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 8 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 8; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 8 * sizeof(PyObject *));
                memcpy(python_pars+1 + 8, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 8)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 8);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 8, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 8);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 8);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 9; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 9 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 9; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 9 * sizeof(PyObject *));
            memcpy(python_pars + 9, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 9)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 9 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 9; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 9 * sizeof(PyObject *));
                memcpy(python_pars+1 + 9, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 9)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 9);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 9, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 9);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 9);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS12(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 12; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 12 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 12; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 12 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 12 * sizeof(PyObject *));
            memcpy(python_pars + 12, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 12)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 12 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 12; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 12 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 12 * sizeof(PyObject *));
                memcpy(python_pars+1 + 12, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 12)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 12 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (12 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 12 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (12 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 12);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 12, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 12);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            12
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 12);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS13(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 13; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 13 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 13; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 13 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 13 * sizeof(PyObject *));
            memcpy(python_pars + 13, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 13)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 13 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 13; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 13 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 13 * sizeof(PyObject *));
                memcpy(python_pars+1 + 13, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 13)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 13 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (13 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 13 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (13 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 13);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 13, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 13);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            13
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 13);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 1; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS1(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS1(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 2; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS2(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS2(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 3; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS3(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS3(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 4; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS4(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS4(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS5(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 5; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    5
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS5(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    5
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS5(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS6(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 6; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    6
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS6(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    6
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS6(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS7(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 7; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    7
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS7(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    7
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS7(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS8(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 8; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    8
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS8(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    8
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS8(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(char const *);
extern PyObject *modulecode_certifi(char const *);
extern PyObject *modulecode_chardet(char const *);
extern PyObject *modulecode_createVm(char const *);
extern PyObject *modulecode_idna(char const *);
extern PyObject *modulecode_inputForm(char const *);
extern PyObject *modulecode_instancesGrid(char const *);
extern PyObject *modulecode_main(char const *);
extern PyObject *modulecode_mainForm(char const *);
extern PyObject *modulecode_npyscreen(char const *);
extern PyObject *modulecode_npyscreen$compatibility_code(char const *);
extern PyObject *modulecode_nuitka(char const *);
extern PyObject *modulecode_nuitka$codegen(char const *);
extern PyObject *modulecode_nuitka$importing(char const *);
extern PyObject *modulecode_nuitka$plugins(char const *);
extern PyObject *modulecode_nuitka$plugins$standard(char const *);
extern PyObject *modulecode_nuitka$specs(char const *);
extern PyObject *modulecode_nuitka$tools(char const *);
extern PyObject *modulecode_nuitka$tree(char const *);
extern PyObject *modulecode_nuitka$utils(char const *);
extern PyObject *modulecode_osc_sdk_python(char const *);
extern PyObject *modulecode_pip(char const *);
extern PyObject *modulecode_pip$_internal(char const *);
extern PyObject *modulecode_pip$_internal$cli(char const *);
extern PyObject *modulecode_pip$_internal$commands(char const *);
extern PyObject *modulecode_pip$_internal$distributions(char const *);
extern PyObject *modulecode_pip$_internal$req(char const *);
extern PyObject *modulecode_pip$_internal$utils(char const *);
extern PyObject *modulecode_pip$_internal$vcs(char const *);
extern PyObject *modulecode_pip$_vendor(char const *);
extern PyObject *modulecode_pip$_vendor$cachecontrol(char const *);
extern PyObject *modulecode_pip$_vendor$cachecontrol$caches(char const *);
extern PyObject *modulecode_pip$_vendor$certifi(char const *);
extern PyObject *modulecode_pip$_vendor$chardet(char const *);
extern PyObject *modulecode_pip$_vendor$colorama(char const *);
extern PyObject *modulecode_pip$_vendor$html5lib(char const *);
extern PyObject *modulecode_pip$_vendor$html5lib$treebuilders(char const *);
extern PyObject *modulecode_pip$_vendor$html5lib$treewalkers(char const *);
extern PyObject *modulecode_pip$_vendor$idna(char const *);
extern PyObject *modulecode_pip$_vendor$msgpack(char const *);
extern PyObject *modulecode_pip$_vendor$packaging(char const *);
extern PyObject *modulecode_pip$_vendor$pkg_resources(char const *);
extern PyObject *modulecode_pip$_vendor$progress(char const *);
extern PyObject *modulecode_pip$_vendor$pytoml(char const *);
extern PyObject *modulecode_pip$_vendor$requests(char const *);
extern PyObject *modulecode_pip$_vendor$urllib3(char const *);
extern PyObject *modulecode_pip$_vendor$urllib3$contrib(char const *);
extern PyObject *modulecode_pip$_vendor$urllib3$util(char const *);
extern PyObject *modulecode_pip$_vendor$webencodings(char const *);
extern PyObject *modulecode_popup(char const *);
extern PyObject *modulecode_profileSelector(char const *);
extern PyObject *modulecode_pyperclip(char const *);
extern PyObject *modulecode_requests(char const *);
extern PyObject *modulecode_ruamel$yaml(char const *);
extern PyObject *modulecode_securityGroupsGrid(char const *);
extern PyObject *modulecode_securityRulesGrid(char const *);
extern PyObject *modulecode_selectableGrid(char const *);
extern PyObject *modulecode_site$$45$packages(char const *);
extern PyObject *modulecode_site$$45$packages$certifi(char const *);
extern PyObject *modulecode_site$$45$packages$certifi$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$certifi$core(char const *);
extern PyObject *modulecode_site$$45$packages$chardet(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$big5freq(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$big5prober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$chardistribution(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$charsetgroupprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$charsetprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$cli(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$cli$chardetect(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$codingstatemachine(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$compat(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$cp949prober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$enums(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$escprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$escsm(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$eucjpprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$euckrfreq(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$euckrprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$euctwfreq(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$euctwprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$gb2312freq(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$gb2312prober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$hebrewprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$jisfreq(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$jpcntx(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$langbulgarianmodel(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$langcyrillicmodel(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$langgreekmodel(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$langhebrewmodel(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$langhungarianmodel(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$langthaimodel(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$langturkishmodel(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$latin1prober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$mbcharsetprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$mbcsgroupprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$mbcssm(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$sbcharsetprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$sbcsgroupprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$sjisprober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$universaldetector(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$utf8prober(char const *);
extern PyObject *modulecode_site$$45$packages$chardet$version(char const *);
extern PyObject *modulecode_site$$45$packages$easy_install(char const *);
extern PyObject *modulecode_site$$45$packages$idna(char const *);
extern PyObject *modulecode_site$$45$packages$idna$codec(char const *);
extern PyObject *modulecode_site$$45$packages$idna$compat(char const *);
extern PyObject *modulecode_site$$45$packages$idna$core(char const *);
extern PyObject *modulecode_site$$45$packages$idna$idnadata(char const *);
extern PyObject *modulecode_site$$45$packages$idna$intranges(char const *);
extern PyObject *modulecode_site$$45$packages$idna$package_data(char const *);
extern PyObject *modulecode_site$$45$packages$idna$uts46data(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$apNPSApplication(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$apNPSApplicationAdvanced(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$apNPSApplicationEvents(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$apNPSApplicationManaged(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$apOptions(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$compatibility_code(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$compatibility_code$npysNPSTree(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$compatibility_code$oldtreeclasses(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$eveventhandler(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmActionForm(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmActionFormV2(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmFileSelector(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmForm(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmFormMultiPage(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmFormMutt(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmFormMuttActive(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmFormWithMenus(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fmPopup(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$fm_form_edit_loop(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$globals(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$muMenu(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$muNewMenu(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$npysGlobalOptions(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$npysNPSFilteredData(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$npysThemeManagers(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$npysThemes(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$npysTree(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$npyspmfuncs(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$npyssafewrapper(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$proto_fm_screen_area(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$stdfmemail(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$utilNotify(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$util_viewhelp(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgFormControlCheckbox(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgNMenuDisplay(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgannotatetextbox(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgautocomplete(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgboxwidget(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgbutton(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgcheckbox(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgcombobox(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgdatecombo(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgeditmultiline(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgfilenamecombo(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wggrid(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wggridcoltitles(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgmonthbox(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgmultiline(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgmultilineeditable(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgmultilinetree(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgmultilinetreeselectable(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgmultiselect(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgmultiselecttree(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgpassword(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgselectone(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgslider(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgtextbox(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgtextbox_controlchrs(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgtextboxunicode(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgtexttokens(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgtitlefield(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgwidget(char const *);
extern PyObject *modulecode_site$$45$packages$npyscreen$wgwidget_proto(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$Builtins(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$Constants(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$Errors(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$MainControl(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$ModuleRegistry(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$OptionParsing(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$Options(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$OutputDirectories(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$PostProcessing(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$PythonOperators(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$PythonVersions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$SourceCodeReferences(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$Tracing(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$TreeXML(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$Variables(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$Version(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$__past__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$SconsInterface(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$appdirs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$appdirs$appdirs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$bin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$bin$scons(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$pefile(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$pefile$ordlookup(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$pefile$ordlookup$oleaut32(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$pefile$ordlookup$ws2_32(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$build$inline_copy$pefile$pefile(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$AsyncgenCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$AttributeCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$BlobCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$BranchCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$BuiltinCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$CallCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ClassCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$CodeGeneration(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$CodeHelpers(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$CodeObjectCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ComparisonCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ConditionalCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ConstantCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$Contexts(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$CoroutineCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$DictCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$Emission(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ErrorCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$EvalCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ExceptionCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ExpressionCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$FrameCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$FunctionCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$GeneratorCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$GlobalsLocalsCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$IdCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ImportCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$Indentation(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$IndexCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$IntegerCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$IteratorCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$LabelCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$LineNumberCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ListCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$LoaderCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$LocalsDictCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$LoopCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ModuleCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$Namify(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$OperationCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$OperatorCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$PrintCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$PythonAPICodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$RaisingCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$Reports(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$ReturnCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$SetCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$SliceCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$StringCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$SubscriptCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$TryCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$TupleCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$VariableCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$VariableDeclarations(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$YieldCodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$c_types(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeBases(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeModuleDictVariables(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeNuitkaBools(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeNuitkaInts(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$c_types$CTypePyObjectPtrs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeVoids(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesAsyncgens(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesCalls(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesConstants(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesCoroutines(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesExceptions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesFrames(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesFreezer(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesFunction(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesGeneratorFunction(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesIterators(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesLoader(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesModules(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesVariables(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$codegen$templates$TemplateDebugWrapper(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$containers(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$containers$odict(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$containers$oset(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$distutils(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$distutils$bdist_nuitka(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$finalizations(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$finalizations$Finalization(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$finalizations$FinalizeBase(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$finalizations$FinalizeMarkups(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$freezer(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$freezer$BytecodeModuleFreezer(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$freezer$DependsExe(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$freezer$Standalone(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$importing(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$importing$ImportCache(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$importing$Importing(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$importing$PreloadedPackages(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$importing$Recursion(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$importing$StandardLibrary(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$importing$Whitelisting(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$AssignNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$AsyncgenNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$AttributeNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinAllNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinAnyNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinComplexNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinDecodingNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinDecoratorNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinDictNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinFormatNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinHashNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinIntegerNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinIteratorNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinLenNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinNextNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinOpenNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinRangeNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinRefNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinSumNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinTypeNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$BuiltinVarsNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$CallNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$Checkers(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ClassNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$CodeObjectSpecs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ComparisonNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ConditionalNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ConstantRefNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ContainerMakingNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ContainerOperationNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$CoroutineNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$DictionaryNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ExceptionNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ExecEvalNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ExpressionBases(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$FrameNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$FunctionNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$FutureSpecs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$GeneratorNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$GlobalsLocalsNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ImportNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$IndicatorMixins(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$IterationHandles(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$LocalsDictNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$LocalsScopes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$LoopNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ModuleAttributeNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ModuleNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$NodeBases(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$NodeMakingHelpers(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$NodeMetaClasses(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$OperatorNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$OutlineNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$PrintNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$ReturnNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$SideEffectNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$SliceNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$StatementNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$StringConcatenationNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$SubscriptNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$TryNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$TypeNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$VariableRefNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$YieldNodes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$shapes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$shapes$BuiltinTypeShapes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$shapes$ControlFlowDescriptions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$nodes$shapes$StandardShapes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations$BytecodeDemotion(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations$FunctionInlining(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations$Graphs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations$Optimization(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations$OptimizeBuiltinCalls(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations$Tags(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations$TraceCollections(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$optimizations$ValueTraces(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$PluginBase(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$Plugins(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$ConsiderPyLintAnnotationsPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$DataFileCollectorPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$DillPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$EnumPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$EventletPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$GeventPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$ImplicitImports(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$MultiprocessingPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$NumpyPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$PbrPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$PmwPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$PySidePyQtPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$TensorflowPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$TkinterPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$plugins$standard$TorchPlugin(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$specs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$specs$BuiltinParameterSpecs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$specs$ParameterSpecs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$Basics(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$general(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$general$dll_report(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$general$dll_report$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$profiler(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$profiler$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$specialize(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$specialize$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$Common(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$Constructs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$OutputComparison(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$SearchModes(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$Valgrind(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$Virtualenv(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$compare_with_cpython(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$compare_with_cpython$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$find_sxs_modules(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$find_sxs_modules$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$measure_construct_performance(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$measure_construct_performance$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$run_nuitka_tests(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tools$testing$run_nuitka_tests$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$Building(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ComplexCallHelperFunctions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$Extractions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$InternalModule(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$Operations(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationAssertStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationAssignmentStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationBooleanExpressions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationCallExpressions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationClasses(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationClasses3(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationComparisonExpressions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationContractionExpressions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationDictionaryCreation(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationExecStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationForLoopStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationFunctionStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationImportStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationLambdaExpressions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationNamespacePackages(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationPrintStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationSequenceCreation(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationSubscriptExpressions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationTryExceptStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationTryFinallyStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationWhileLoopStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationWithStatements(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$ReformulationYieldExpressions(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$SourceReading(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$SyntaxErrors(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$TreeHelpers(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$tree$VariableClosure(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$AppDirs(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$CStrings(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$Execution(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$FileOperations(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$InstanceCounters(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$MemoryUsage(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$ModuleNames(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$SharedLibraries(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$Shebang(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$ThreadedExecutor(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$Timing(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$Utils(char const *);
extern PyObject *modulecode_site$$45$packages$nuitka$utils$WindowsResources(char const *);
extern PyObject *modulecode_site$$45$packages$osc_sdk_python(char const *);
extern PyObject *modulecode_site$$45$packages$osc_sdk_python$authentication(char const *);
extern PyObject *modulecode_site$$45$packages$osc_sdk_python$call(char const *);
extern PyObject *modulecode_site$$45$packages$osc_sdk_python$credentials(char const *);
extern PyObject *modulecode_site$$45$packages$osc_sdk_python$outscale_gateway(char const *);
extern PyObject *modulecode_site$$45$packages$osc_sdk_python$requester(char const *);
extern PyObject *modulecode_site$$45$packages$pip(char const *);
extern PyObject *modulecode_site$$45$packages$pip$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$build_env(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cache(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$autocompletion(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$base_command(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$cmdoptions(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$command_context(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$main(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$main_parser(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$parser(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$req_command(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$cli$status_codes(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$check(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$completion(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$configuration(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$debug(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$download(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$freeze(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$hash(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$help(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$install(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$list(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$search(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$show(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$uninstall(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$commands$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$configuration(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$distributions(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$distributions$base(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$distributions$installed(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$distributions$sdist(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$distributions$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$exceptions(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$index(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$index$collector(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$index$package_finder(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$legacy_resolve(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$locations(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$main(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$candidate(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$format_control(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$index(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$link(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$scheme(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$search_scope(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$selection_prefs(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$target_python(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$models$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$network(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$network$auth(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$network$cache(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$network$download(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$network$session(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$network$utils(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$network$xmlrpc(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$build(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$build$metadata(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$build$metadata_legacy(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$build$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$build$wheel_legacy(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$check(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$freeze(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$install(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$install$editable_legacy(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$install$legacy(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$install$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$operations$prepare(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$pep425tags(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$pyproject(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$req(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$req$constructors(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$req$req_file(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$req$req_install(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$req$req_set(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$req$req_tracker(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$req$req_uninstall(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$self_outdated_check(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$appdirs(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$deprecation(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$distutils_args(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$encoding(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$entrypoints(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$filesystem(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$filetypes(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$glibc(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$hashes(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$inject_securetransport(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$logging(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$marker_files(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$misc(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$models(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$packaging(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$pkg_resources(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$setuptools_build(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$subprocess(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$temp_dir(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$typing(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$ui(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$unpacking(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$urls(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$virtualenv(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$utils$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$vcs(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$vcs$bazaar(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$vcs$git(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$vcs$mercurial(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$vcs$subversion(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$vcs$versioncontrol(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_internal$wheel_builder(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$appdirs(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$_cmd(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$adapter(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$cache(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$caches(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$caches$file_cache(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$caches$redis_cache(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$controller(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$filewrapper(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$heuristics(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$serialize(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$cachecontrol$wrapper(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$certifi(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$certifi$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$certifi$core(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$big5freq(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$big5prober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$chardistribution(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$charsetgroupprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$charsetprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$cli(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$cli$chardetect(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$codingstatemachine(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$cp949prober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$enums(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$escprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$escsm(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$eucjpprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$euckrfreq(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$euckrprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$euctwfreq(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$euctwprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$gb2312freq(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$gb2312prober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$hebrewprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$jisfreq(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$jpcntx(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$langbulgarianmodel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$langcyrillicmodel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$langgreekmodel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$langhebrewmodel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$langhungarianmodel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$langthaimodel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$langturkishmodel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$latin1prober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$mbcharsetprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$mbcsgroupprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$mbcssm(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$sbcharsetprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$sbcsgroupprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$sjisprober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$universaldetector(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$utf8prober(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$chardet$version(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$colorama(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$colorama$ansi(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$colorama$ansitowin32(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$colorama$initialise(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$colorama$win32(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$colorama$winterm(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$contextlib2(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$_backport(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$_backport$misc(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$_backport$shutil(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$_backport$sysconfig(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$_backport$tarfile(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$database(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$index(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$locators(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$manifest(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$markers(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$metadata(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$resources(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$scripts(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$util(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$version(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distlib$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$distro(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$_ihatexml(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$_inputstream(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$_tokenizer(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$_trie(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$_trie$_base(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$_trie$datrie(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$_trie$py(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$_utils(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$constants(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$filters(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$filters$alphabeticalattributes(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$filters$base(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$filters$inject_meta_charset(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$filters$lint(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$filters$optionaltags(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$filters$sanitizer(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$filters$whitespace(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$html5parser(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$serializer(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treeadapters(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treeadapters$genshi(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treeadapters$sax(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders$base(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders$dom(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders$etree(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders$etree_lxml(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$base(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$dom(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$etree(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$etree_lxml(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$genshi(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$idna(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$idna$codec(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$idna$compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$idna$core(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$idna$idnadata(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$idna$intranges(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$idna$package_data(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$idna$uts46data(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$ipaddress(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$msgpack(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$msgpack$_version(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$msgpack$exceptions(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$msgpack$fallback(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$__about__(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$_compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$_structures(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$_typing(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$markers(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$requirements(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$specifiers(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$tags(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$utils(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$packaging$version(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$_in_process(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$build(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$check(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$colorlog(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$dirtools(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$envbuild(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$meta(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pep517$wrappers(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pkg_resources(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pkg_resources$py31compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$progress(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$progress$bar(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$progress$counter(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$progress$spinner(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pyparsing(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pytoml(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pytoml$core(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pytoml$parser(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pytoml$test(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pytoml$utils(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$pytoml$writer(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$__version__(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$_internal_utils(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$adapters(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$api(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$auth(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$certs(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$compat(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$cookies(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$exceptions(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$help(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$hooks(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$models(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$packages(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$sessions(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$status_codes(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$structures(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$requests$utils(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$retrying(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$six(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$_collections(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$connection(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$connectionpool(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$_appengine_environ(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$_securetransport(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$_securetransport$bindings(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$_securetransport$low_level(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$appengine(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$ntlmpool(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$pyopenssl(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$securetransport(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$socks(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$exceptions(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$fields(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$filepost(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$packages(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$packages$backports(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$packages$backports$makefile(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$packages$six(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$packages$ssl_match_hostname(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$packages$ssl_match_hostname$_implementation(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$poolmanager(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$request(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$response(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$connection(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$queue(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$request(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$response(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$retry(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$ssl_(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$timeout(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$url(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$urllib3$util$wait(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$webencodings(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$webencodings$labels(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$webencodings$mklabels(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$webencodings$tests(char const *);
extern PyObject *modulecode_site$$45$packages$pip$_vendor$webencodings$x_user_defined(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$appdirs(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging$__about__(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging$_compat(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging$_structures(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging$markers(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging$requirements(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging$specifiers(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging$utils(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$packaging$version(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$pyparsing(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$_vendor$six(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$extern(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$py2_warn(char const *);
extern PyObject *modulecode_site$$45$packages$pkg_resources$py31compat(char const *);
extern PyObject *modulecode_site$$45$packages$pyperclip(char const *);
extern PyObject *modulecode_site$$45$packages$pyperclip$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$requests(char const *);
extern PyObject *modulecode_site$$45$packages$requests$__version__(char const *);
extern PyObject *modulecode_site$$45$packages$requests$_internal_utils(char const *);
extern PyObject *modulecode_site$$45$packages$requests$adapters(char const *);
extern PyObject *modulecode_site$$45$packages$requests$api(char const *);
extern PyObject *modulecode_site$$45$packages$requests$auth(char const *);
extern PyObject *modulecode_site$$45$packages$requests$certs(char const *);
extern PyObject *modulecode_site$$45$packages$requests$compat(char const *);
extern PyObject *modulecode_site$$45$packages$requests$cookies(char const *);
extern PyObject *modulecode_site$$45$packages$requests$exceptions(char const *);
extern PyObject *modulecode_site$$45$packages$requests$help(char const *);
extern PyObject *modulecode_site$$45$packages$requests$hooks(char const *);
extern PyObject *modulecode_site$$45$packages$requests$models(char const *);
extern PyObject *modulecode_site$$45$packages$requests$packages(char const *);
extern PyObject *modulecode_site$$45$packages$requests$sessions(char const *);
extern PyObject *modulecode_site$$45$packages$requests$status_codes(char const *);
extern PyObject *modulecode_site$$45$packages$requests$structures(char const *);
extern PyObject *modulecode_site$$45$packages$requests$utils(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$anchor(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$comments(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$compat(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$composer(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$configobjwalker(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$constructor(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$cyaml(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$dumper(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$emitter(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$error(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$events(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$loader(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$main(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$nodes(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$parser(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$reader(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$representer(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$resolver(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$scalarbool(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$scalarfloat(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$scalarint(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$scalarstring(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$scanner(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$serializer(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$timestamp(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$tokens(char const *);
extern PyObject *modulecode_site$$45$packages$ruamel$yaml$util(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_deprecation_warning(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_imp(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$ordered_set(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$__about__(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$_compat(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$_structures(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$markers(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$requirements(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$specifiers(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$tags(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$utils(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$packaging$version(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$pyparsing(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$_vendor$six(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$archive_util(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$build_meta(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$alias(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$bdist_egg(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$bdist_rpm(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$bdist_wininst(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$build_clib(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$build_ext(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$build_py(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$develop(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$dist_info(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$easy_install(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$egg_info(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$install(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$install_egg_info(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$install_lib(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$install_scripts(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$py36compat(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$register(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$rotate(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$saveopts(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$sdist(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$setopt(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$test(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$upload(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$command$upload_docs(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$config(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$dep_util(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$depends(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$dist(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$errors(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$extension(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$extern(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$glob(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$installer(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$launch(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$lib2to3_ex(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$monkey(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$msvc(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$namespaces(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$package_index(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$py27compat(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$py31compat(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$py33compat(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$py34compat(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$sandbox(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$site$$45$patch(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$ssl_support(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$unicode_utils(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$version(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$setuptools$windows_support(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$_collections(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$connection(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$connectionpool(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$_appengine_environ(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$_securetransport(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$_securetransport$bindings(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$_securetransport$low_level(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$appengine(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$ntlmpool(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$pyopenssl(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$securetransport(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$contrib$socks(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$exceptions(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$fields(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$filepost(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$packages(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$packages$backports(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$packages$backports$makefile(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$packages$six(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$packages$ssl_match_hostname(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$packages$ssl_match_hostname$_implementation(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$poolmanager(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$request(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$response(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$connection(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$queue(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$request(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$response(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$retry(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$ssl_(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$timeout(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$url(char const *);
extern PyObject *modulecode_site$$45$packages$urllib3$util$wait(char const *);
extern PyObject *modulecode_site$$45$packages$wheel(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$__main__(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$_version(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$bdist_wheel(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$cli(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$cli$convert(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$cli$install(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$cli$pack(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$cli$unpack(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$macosx_libfile(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$metadata(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$pep425tags(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$pkginfo(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$util(char const *);
extern PyObject *modulecode_site$$45$packages$wheel$wheelfile(char const *);
extern PyObject *modulecode_urllib3(char const *);
extern PyObject *modulecode_urllib3$contrib(char const *);
extern PyObject *modulecode_urllib3$packages(char const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(char const *);
extern PyObject *modulecode_urllib3$util(char const *);
extern PyObject *modulecode_virtualMachine(char const *);
extern PyObject *modulecode_volumesGrid(char const *);
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    {"__main__", modulecode___main__, 0, 0, },
    {"certifi", modulecode_certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"chardet", modulecode_chardet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"createVm", modulecode_createVm, 0, 0, },
    {"idna", modulecode_idna, 0, 0, NUITKA_PACKAGE_FLAG},
    {"inputForm", modulecode_inputForm, 0, 0, },
    {"instancesGrid", modulecode_instancesGrid, 0, 0, },
    {"main", modulecode_main, 0, 0, },
    {"mainForm", modulecode_mainForm, 0, 0, },
    {"npyscreen", modulecode_npyscreen, 0, 0, NUITKA_PACKAGE_FLAG},
    {"npyscreen.compatibility_code", modulecode_npyscreen$compatibility_code, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka", modulecode_nuitka, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka.codegen", modulecode_nuitka$codegen, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka.importing", modulecode_nuitka$importing, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka.plugins", modulecode_nuitka$plugins, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka.plugins.standard", modulecode_nuitka$plugins$standard, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka.specs", modulecode_nuitka$specs, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka.tools", modulecode_nuitka$tools, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka.tree", modulecode_nuitka$tree, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nuitka.utils", modulecode_nuitka$utils, 0, 0, NUITKA_PACKAGE_FLAG},
    {"osc_sdk_python", modulecode_osc_sdk_python, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip", modulecode_pip, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._internal", modulecode_pip$_internal, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._internal.cli", modulecode_pip$_internal$cli, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._internal.commands", modulecode_pip$_internal$commands, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._internal.distributions", modulecode_pip$_internal$distributions, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._internal.req", modulecode_pip$_internal$req, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._internal.utils", modulecode_pip$_internal$utils, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._internal.vcs", modulecode_pip$_internal$vcs, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor", modulecode_pip$_vendor, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.cachecontrol", modulecode_pip$_vendor$cachecontrol, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.cachecontrol.caches", modulecode_pip$_vendor$cachecontrol$caches, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.certifi", modulecode_pip$_vendor$certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.chardet", modulecode_pip$_vendor$chardet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.colorama", modulecode_pip$_vendor$colorama, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.html5lib", modulecode_pip$_vendor$html5lib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.html5lib.treebuilders", modulecode_pip$_vendor$html5lib$treebuilders, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.html5lib.treewalkers", modulecode_pip$_vendor$html5lib$treewalkers, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.idna", modulecode_pip$_vendor$idna, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.msgpack", modulecode_pip$_vendor$msgpack, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.packaging", modulecode_pip$_vendor$packaging, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.pkg_resources", modulecode_pip$_vendor$pkg_resources, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.progress", modulecode_pip$_vendor$progress, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.pytoml", modulecode_pip$_vendor$pytoml, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.requests", modulecode_pip$_vendor$requests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.urllib3", modulecode_pip$_vendor$urllib3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.urllib3.contrib", modulecode_pip$_vendor$urllib3$contrib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.urllib3.util", modulecode_pip$_vendor$urllib3$util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pip._vendor.webencodings", modulecode_pip$_vendor$webencodings, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pkg_resources", NULL, 2632654, 99841, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor", NULL, 2732495, 180, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.packaging", NULL, 2732675, 554, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources.extern", NULL, 2733229, 2415, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"popup", modulecode_popup, 0, 0, },
    {"profileSelector", modulecode_profileSelector, 0, 0, },
    {"pyperclip", modulecode_pyperclip, 0, 0, NUITKA_PACKAGE_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"ruamel.yaml", modulecode_ruamel$yaml, 0, 0, NUITKA_PACKAGE_FLAG},
    {"securityGroupsGrid", modulecode_securityGroupsGrid, 0, 0, },
    {"securityRulesGrid", modulecode_securityRulesGrid, 0, 0, },
    {"selectableGrid", modulecode_selectableGrid, 0, 0, },
    {"setuptools", NULL, 2735644, 7684, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.command", NULL, 2743328, 704, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.extern", NULL, 2744032, 2429, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"site-packages", modulecode_site$$45$packages, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.certifi", modulecode_site$$45$packages$certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.certifi.__main__", modulecode_site$$45$packages$certifi$__main__, 0, 0, },
    {"site-packages.certifi.core", modulecode_site$$45$packages$certifi$core, 0, 0, },
    {"site-packages.chardet", modulecode_site$$45$packages$chardet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.chardet.big5freq", modulecode_site$$45$packages$chardet$big5freq, 0, 0, },
    {"site-packages.chardet.big5prober", modulecode_site$$45$packages$chardet$big5prober, 0, 0, },
    {"site-packages.chardet.chardistribution", modulecode_site$$45$packages$chardet$chardistribution, 0, 0, },
    {"site-packages.chardet.charsetgroupprober", modulecode_site$$45$packages$chardet$charsetgroupprober, 0, 0, },
    {"site-packages.chardet.charsetprober", modulecode_site$$45$packages$chardet$charsetprober, 0, 0, },
    {"site-packages.chardet.cli", modulecode_site$$45$packages$chardet$cli, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.chardet.cli.chardetect", modulecode_site$$45$packages$chardet$cli$chardetect, 0, 0, },
    {"site-packages.chardet.codingstatemachine", modulecode_site$$45$packages$chardet$codingstatemachine, 0, 0, },
    {"site-packages.chardet.compat", modulecode_site$$45$packages$chardet$compat, 0, 0, },
    {"site-packages.chardet.cp949prober", modulecode_site$$45$packages$chardet$cp949prober, 0, 0, },
    {"site-packages.chardet.enums", modulecode_site$$45$packages$chardet$enums, 0, 0, },
    {"site-packages.chardet.escprober", modulecode_site$$45$packages$chardet$escprober, 0, 0, },
    {"site-packages.chardet.escsm", modulecode_site$$45$packages$chardet$escsm, 0, 0, },
    {"site-packages.chardet.eucjpprober", modulecode_site$$45$packages$chardet$eucjpprober, 0, 0, },
    {"site-packages.chardet.euckrfreq", modulecode_site$$45$packages$chardet$euckrfreq, 0, 0, },
    {"site-packages.chardet.euckrprober", modulecode_site$$45$packages$chardet$euckrprober, 0, 0, },
    {"site-packages.chardet.euctwfreq", modulecode_site$$45$packages$chardet$euctwfreq, 0, 0, },
    {"site-packages.chardet.euctwprober", modulecode_site$$45$packages$chardet$euctwprober, 0, 0, },
    {"site-packages.chardet.gb2312freq", modulecode_site$$45$packages$chardet$gb2312freq, 0, 0, },
    {"site-packages.chardet.gb2312prober", modulecode_site$$45$packages$chardet$gb2312prober, 0, 0, },
    {"site-packages.chardet.hebrewprober", modulecode_site$$45$packages$chardet$hebrewprober, 0, 0, },
    {"site-packages.chardet.jisfreq", modulecode_site$$45$packages$chardet$jisfreq, 0, 0, },
    {"site-packages.chardet.jpcntx", modulecode_site$$45$packages$chardet$jpcntx, 0, 0, },
    {"site-packages.chardet.langbulgarianmodel", modulecode_site$$45$packages$chardet$langbulgarianmodel, 0, 0, },
    {"site-packages.chardet.langcyrillicmodel", modulecode_site$$45$packages$chardet$langcyrillicmodel, 0, 0, },
    {"site-packages.chardet.langgreekmodel", modulecode_site$$45$packages$chardet$langgreekmodel, 0, 0, },
    {"site-packages.chardet.langhebrewmodel", modulecode_site$$45$packages$chardet$langhebrewmodel, 0, 0, },
    {"site-packages.chardet.langhungarianmodel", modulecode_site$$45$packages$chardet$langhungarianmodel, 0, 0, },
    {"site-packages.chardet.langthaimodel", modulecode_site$$45$packages$chardet$langthaimodel, 0, 0, },
    {"site-packages.chardet.langturkishmodel", modulecode_site$$45$packages$chardet$langturkishmodel, 0, 0, },
    {"site-packages.chardet.latin1prober", modulecode_site$$45$packages$chardet$latin1prober, 0, 0, },
    {"site-packages.chardet.mbcharsetprober", modulecode_site$$45$packages$chardet$mbcharsetprober, 0, 0, },
    {"site-packages.chardet.mbcsgroupprober", modulecode_site$$45$packages$chardet$mbcsgroupprober, 0, 0, },
    {"site-packages.chardet.mbcssm", modulecode_site$$45$packages$chardet$mbcssm, 0, 0, },
    {"site-packages.chardet.sbcharsetprober", modulecode_site$$45$packages$chardet$sbcharsetprober, 0, 0, },
    {"site-packages.chardet.sbcsgroupprober", modulecode_site$$45$packages$chardet$sbcsgroupprober, 0, 0, },
    {"site-packages.chardet.sjisprober", modulecode_site$$45$packages$chardet$sjisprober, 0, 0, },
    {"site-packages.chardet.universaldetector", modulecode_site$$45$packages$chardet$universaldetector, 0, 0, },
    {"site-packages.chardet.utf8prober", modulecode_site$$45$packages$chardet$utf8prober, 0, 0, },
    {"site-packages.chardet.version", modulecode_site$$45$packages$chardet$version, 0, 0, },
    {"site-packages.easy_install", modulecode_site$$45$packages$easy_install, 0, 0, },
    {"site-packages.idna", modulecode_site$$45$packages$idna, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.idna.codec", modulecode_site$$45$packages$idna$codec, 0, 0, },
    {"site-packages.idna.compat", modulecode_site$$45$packages$idna$compat, 0, 0, },
    {"site-packages.idna.core", modulecode_site$$45$packages$idna$core, 0, 0, },
    {"site-packages.idna.idnadata", modulecode_site$$45$packages$idna$idnadata, 0, 0, },
    {"site-packages.idna.intranges", modulecode_site$$45$packages$idna$intranges, 0, 0, },
    {"site-packages.idna.package_data", modulecode_site$$45$packages$idna$package_data, 0, 0, },
    {"site-packages.idna.uts46data", modulecode_site$$45$packages$idna$uts46data, 0, 0, },
    {"site-packages.npyscreen", modulecode_site$$45$packages$npyscreen, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.npyscreen.apNPSApplication", modulecode_site$$45$packages$npyscreen$apNPSApplication, 0, 0, },
    {"site-packages.npyscreen.apNPSApplicationAdvanced", modulecode_site$$45$packages$npyscreen$apNPSApplicationAdvanced, 0, 0, },
    {"site-packages.npyscreen.apNPSApplicationEvents", modulecode_site$$45$packages$npyscreen$apNPSApplicationEvents, 0, 0, },
    {"site-packages.npyscreen.apNPSApplicationManaged", modulecode_site$$45$packages$npyscreen$apNPSApplicationManaged, 0, 0, },
    {"site-packages.npyscreen.apOptions", modulecode_site$$45$packages$npyscreen$apOptions, 0, 0, },
    {"site-packages.npyscreen.compatibility_code", modulecode_site$$45$packages$npyscreen$compatibility_code, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.npyscreen.compatibility_code.npysNPSTree", modulecode_site$$45$packages$npyscreen$compatibility_code$npysNPSTree, 0, 0, },
    {"site-packages.npyscreen.compatibility_code.oldtreeclasses", modulecode_site$$45$packages$npyscreen$compatibility_code$oldtreeclasses, 0, 0, },
    {"site-packages.npyscreen.eveventhandler", modulecode_site$$45$packages$npyscreen$eveventhandler, 0, 0, },
    {"site-packages.npyscreen.fmActionForm", modulecode_site$$45$packages$npyscreen$fmActionForm, 0, 0, },
    {"site-packages.npyscreen.fmActionFormV2", modulecode_site$$45$packages$npyscreen$fmActionFormV2, 0, 0, },
    {"site-packages.npyscreen.fmFileSelector", modulecode_site$$45$packages$npyscreen$fmFileSelector, 0, 0, },
    {"site-packages.npyscreen.fmForm", modulecode_site$$45$packages$npyscreen$fmForm, 0, 0, },
    {"site-packages.npyscreen.fmFormMultiPage", modulecode_site$$45$packages$npyscreen$fmFormMultiPage, 0, 0, },
    {"site-packages.npyscreen.fmFormMutt", modulecode_site$$45$packages$npyscreen$fmFormMutt, 0, 0, },
    {"site-packages.npyscreen.fmFormMuttActive", modulecode_site$$45$packages$npyscreen$fmFormMuttActive, 0, 0, },
    {"site-packages.npyscreen.fmFormWithMenus", modulecode_site$$45$packages$npyscreen$fmFormWithMenus, 0, 0, },
    {"site-packages.npyscreen.fmPopup", modulecode_site$$45$packages$npyscreen$fmPopup, 0, 0, },
    {"site-packages.npyscreen.fm_form_edit_loop", modulecode_site$$45$packages$npyscreen$fm_form_edit_loop, 0, 0, },
    {"site-packages.npyscreen.globals", modulecode_site$$45$packages$npyscreen$globals, 0, 0, },
    {"site-packages.npyscreen.muMenu", modulecode_site$$45$packages$npyscreen$muMenu, 0, 0, },
    {"site-packages.npyscreen.muNewMenu", modulecode_site$$45$packages$npyscreen$muNewMenu, 0, 0, },
    {"site-packages.npyscreen.npysGlobalOptions", modulecode_site$$45$packages$npyscreen$npysGlobalOptions, 0, 0, },
    {"site-packages.npyscreen.npysNPSFilteredData", modulecode_site$$45$packages$npyscreen$npysNPSFilteredData, 0, 0, },
    {"site-packages.npyscreen.npysThemeManagers", modulecode_site$$45$packages$npyscreen$npysThemeManagers, 0, 0, },
    {"site-packages.npyscreen.npysThemes", modulecode_site$$45$packages$npyscreen$npysThemes, 0, 0, },
    {"site-packages.npyscreen.npysTree", modulecode_site$$45$packages$npyscreen$npysTree, 0, 0, },
    {"site-packages.npyscreen.npyspmfuncs", modulecode_site$$45$packages$npyscreen$npyspmfuncs, 0, 0, },
    {"site-packages.npyscreen.npyssafewrapper", modulecode_site$$45$packages$npyscreen$npyssafewrapper, 0, 0, },
    {"site-packages.npyscreen.proto_fm_screen_area", modulecode_site$$45$packages$npyscreen$proto_fm_screen_area, 0, 0, },
    {"site-packages.npyscreen.stdfmemail", modulecode_site$$45$packages$npyscreen$stdfmemail, 0, 0, },
    {"site-packages.npyscreen.utilNotify", modulecode_site$$45$packages$npyscreen$utilNotify, 0, 0, },
    {"site-packages.npyscreen.util_viewhelp", modulecode_site$$45$packages$npyscreen$util_viewhelp, 0, 0, },
    {"site-packages.npyscreen.wgFormControlCheckbox", modulecode_site$$45$packages$npyscreen$wgFormControlCheckbox, 0, 0, },
    {"site-packages.npyscreen.wgNMenuDisplay", modulecode_site$$45$packages$npyscreen$wgNMenuDisplay, 0, 0, },
    {"site-packages.npyscreen.wgannotatetextbox", modulecode_site$$45$packages$npyscreen$wgannotatetextbox, 0, 0, },
    {"site-packages.npyscreen.wgautocomplete", modulecode_site$$45$packages$npyscreen$wgautocomplete, 0, 0, },
    {"site-packages.npyscreen.wgboxwidget", modulecode_site$$45$packages$npyscreen$wgboxwidget, 0, 0, },
    {"site-packages.npyscreen.wgbutton", modulecode_site$$45$packages$npyscreen$wgbutton, 0, 0, },
    {"site-packages.npyscreen.wgcheckbox", modulecode_site$$45$packages$npyscreen$wgcheckbox, 0, 0, },
    {"site-packages.npyscreen.wgcombobox", modulecode_site$$45$packages$npyscreen$wgcombobox, 0, 0, },
    {"site-packages.npyscreen.wgdatecombo", modulecode_site$$45$packages$npyscreen$wgdatecombo, 0, 0, },
    {"site-packages.npyscreen.wgeditmultiline", modulecode_site$$45$packages$npyscreen$wgeditmultiline, 0, 0, },
    {"site-packages.npyscreen.wgfilenamecombo", modulecode_site$$45$packages$npyscreen$wgfilenamecombo, 0, 0, },
    {"site-packages.npyscreen.wggrid", modulecode_site$$45$packages$npyscreen$wggrid, 0, 0, },
    {"site-packages.npyscreen.wggridcoltitles", modulecode_site$$45$packages$npyscreen$wggridcoltitles, 0, 0, },
    {"site-packages.npyscreen.wgmonthbox", modulecode_site$$45$packages$npyscreen$wgmonthbox, 0, 0, },
    {"site-packages.npyscreen.wgmultiline", modulecode_site$$45$packages$npyscreen$wgmultiline, 0, 0, },
    {"site-packages.npyscreen.wgmultilineeditable", modulecode_site$$45$packages$npyscreen$wgmultilineeditable, 0, 0, },
    {"site-packages.npyscreen.wgmultilinetree", modulecode_site$$45$packages$npyscreen$wgmultilinetree, 0, 0, },
    {"site-packages.npyscreen.wgmultilinetreeselectable", modulecode_site$$45$packages$npyscreen$wgmultilinetreeselectable, 0, 0, },
    {"site-packages.npyscreen.wgmultiselect", modulecode_site$$45$packages$npyscreen$wgmultiselect, 0, 0, },
    {"site-packages.npyscreen.wgmultiselecttree", modulecode_site$$45$packages$npyscreen$wgmultiselecttree, 0, 0, },
    {"site-packages.npyscreen.wgpassword", modulecode_site$$45$packages$npyscreen$wgpassword, 0, 0, },
    {"site-packages.npyscreen.wgselectone", modulecode_site$$45$packages$npyscreen$wgselectone, 0, 0, },
    {"site-packages.npyscreen.wgslider", modulecode_site$$45$packages$npyscreen$wgslider, 0, 0, },
    {"site-packages.npyscreen.wgtextbox", modulecode_site$$45$packages$npyscreen$wgtextbox, 0, 0, },
    {"site-packages.npyscreen.wgtextbox_controlchrs", modulecode_site$$45$packages$npyscreen$wgtextbox_controlchrs, 0, 0, },
    {"site-packages.npyscreen.wgtextboxunicode", modulecode_site$$45$packages$npyscreen$wgtextboxunicode, 0, 0, },
    {"site-packages.npyscreen.wgtexttokens", modulecode_site$$45$packages$npyscreen$wgtexttokens, 0, 0, },
    {"site-packages.npyscreen.wgtitlefield", modulecode_site$$45$packages$npyscreen$wgtitlefield, 0, 0, },
    {"site-packages.npyscreen.wgwidget", modulecode_site$$45$packages$npyscreen$wgwidget, 0, 0, },
    {"site-packages.npyscreen.wgwidget_proto", modulecode_site$$45$packages$npyscreen$wgwidget_proto, 0, 0, },
    {"site-packages.nuitka", modulecode_site$$45$packages$nuitka, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.Builtins", modulecode_site$$45$packages$nuitka$Builtins, 0, 0, },
    {"site-packages.nuitka.Constants", modulecode_site$$45$packages$nuitka$Constants, 0, 0, },
    {"site-packages.nuitka.Errors", modulecode_site$$45$packages$nuitka$Errors, 0, 0, },
    {"site-packages.nuitka.MainControl", modulecode_site$$45$packages$nuitka$MainControl, 0, 0, },
    {"site-packages.nuitka.ModuleRegistry", modulecode_site$$45$packages$nuitka$ModuleRegistry, 0, 0, },
    {"site-packages.nuitka.OptionParsing", modulecode_site$$45$packages$nuitka$OptionParsing, 0, 0, },
    {"site-packages.nuitka.Options", modulecode_site$$45$packages$nuitka$Options, 0, 0, },
    {"site-packages.nuitka.OutputDirectories", modulecode_site$$45$packages$nuitka$OutputDirectories, 0, 0, },
    {"site-packages.nuitka.PostProcessing", modulecode_site$$45$packages$nuitka$PostProcessing, 0, 0, },
    {"site-packages.nuitka.PythonOperators", modulecode_site$$45$packages$nuitka$PythonOperators, 0, 0, },
    {"site-packages.nuitka.PythonVersions", modulecode_site$$45$packages$nuitka$PythonVersions, 0, 0, },
    {"site-packages.nuitka.SourceCodeReferences", modulecode_site$$45$packages$nuitka$SourceCodeReferences, 0, 0, },
    {"site-packages.nuitka.Tracing", modulecode_site$$45$packages$nuitka$Tracing, 0, 0, },
    {"site-packages.nuitka.TreeXML", modulecode_site$$45$packages$nuitka$TreeXML, 0, 0, },
    {"site-packages.nuitka.Variables", modulecode_site$$45$packages$nuitka$Variables, 0, 0, },
    {"site-packages.nuitka.Version", modulecode_site$$45$packages$nuitka$Version, 0, 0, },
    {"site-packages.nuitka.__main__", modulecode_site$$45$packages$nuitka$__main__, 0, 0, },
    {"site-packages.nuitka.__past__", modulecode_site$$45$packages$nuitka$__past__, 0, 0, },
    {"site-packages.nuitka.build", modulecode_site$$45$packages$nuitka$build, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.build.SconsInterface", modulecode_site$$45$packages$nuitka$build$SconsInterface, 0, 0, },
    {"site-packages.nuitka.build.inline_copy", modulecode_site$$45$packages$nuitka$build$inline_copy, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.build.inline_copy.appdirs", modulecode_site$$45$packages$nuitka$build$inline_copy$appdirs, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.build.inline_copy.appdirs.appdirs", modulecode_site$$45$packages$nuitka$build$inline_copy$appdirs$appdirs, 0, 0, },
    {"site-packages.nuitka.build.inline_copy.bin", modulecode_site$$45$packages$nuitka$build$inline_copy$bin, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.build.inline_copy.bin.scons", modulecode_site$$45$packages$nuitka$build$inline_copy$bin$scons, 0, 0, },
    {"site-packages.nuitka.build.inline_copy.pefile", modulecode_site$$45$packages$nuitka$build$inline_copy$pefile, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.build.inline_copy.pefile.ordlookup", modulecode_site$$45$packages$nuitka$build$inline_copy$pefile$ordlookup, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.build.inline_copy.pefile.ordlookup.oleaut32", modulecode_site$$45$packages$nuitka$build$inline_copy$pefile$ordlookup$oleaut32, 0, 0, },
    {"site-packages.nuitka.build.inline_copy.pefile.ordlookup.ws2_32", modulecode_site$$45$packages$nuitka$build$inline_copy$pefile$ordlookup$ws2_32, 0, 0, },
    {"site-packages.nuitka.build.inline_copy.pefile.pefile", modulecode_site$$45$packages$nuitka$build$inline_copy$pefile$pefile, 0, 0, },
    {"site-packages.nuitka.codegen", modulecode_site$$45$packages$nuitka$codegen, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.codegen.AsyncgenCodes", modulecode_site$$45$packages$nuitka$codegen$AsyncgenCodes, 0, 0, },
    {"site-packages.nuitka.codegen.AttributeCodes", modulecode_site$$45$packages$nuitka$codegen$AttributeCodes, 0, 0, },
    {"site-packages.nuitka.codegen.BlobCodes", modulecode_site$$45$packages$nuitka$codegen$BlobCodes, 0, 0, },
    {"site-packages.nuitka.codegen.BranchCodes", modulecode_site$$45$packages$nuitka$codegen$BranchCodes, 0, 0, },
    {"site-packages.nuitka.codegen.BuiltinCodes", modulecode_site$$45$packages$nuitka$codegen$BuiltinCodes, 0, 0, },
    {"site-packages.nuitka.codegen.CallCodes", modulecode_site$$45$packages$nuitka$codegen$CallCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ClassCodes", modulecode_site$$45$packages$nuitka$codegen$ClassCodes, 0, 0, },
    {"site-packages.nuitka.codegen.CodeGeneration", modulecode_site$$45$packages$nuitka$codegen$CodeGeneration, 0, 0, },
    {"site-packages.nuitka.codegen.CodeHelpers", modulecode_site$$45$packages$nuitka$codegen$CodeHelpers, 0, 0, },
    {"site-packages.nuitka.codegen.CodeObjectCodes", modulecode_site$$45$packages$nuitka$codegen$CodeObjectCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ComparisonCodes", modulecode_site$$45$packages$nuitka$codegen$ComparisonCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ConditionalCodes", modulecode_site$$45$packages$nuitka$codegen$ConditionalCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ConstantCodes", modulecode_site$$45$packages$nuitka$codegen$ConstantCodes, 0, 0, },
    {"site-packages.nuitka.codegen.Contexts", modulecode_site$$45$packages$nuitka$codegen$Contexts, 0, 0, },
    {"site-packages.nuitka.codegen.CoroutineCodes", modulecode_site$$45$packages$nuitka$codegen$CoroutineCodes, 0, 0, },
    {"site-packages.nuitka.codegen.DictCodes", modulecode_site$$45$packages$nuitka$codegen$DictCodes, 0, 0, },
    {"site-packages.nuitka.codegen.Emission", modulecode_site$$45$packages$nuitka$codegen$Emission, 0, 0, },
    {"site-packages.nuitka.codegen.ErrorCodes", modulecode_site$$45$packages$nuitka$codegen$ErrorCodes, 0, 0, },
    {"site-packages.nuitka.codegen.EvalCodes", modulecode_site$$45$packages$nuitka$codegen$EvalCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ExceptionCodes", modulecode_site$$45$packages$nuitka$codegen$ExceptionCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ExpressionCodes", modulecode_site$$45$packages$nuitka$codegen$ExpressionCodes, 0, 0, },
    {"site-packages.nuitka.codegen.FrameCodes", modulecode_site$$45$packages$nuitka$codegen$FrameCodes, 0, 0, },
    {"site-packages.nuitka.codegen.FunctionCodes", modulecode_site$$45$packages$nuitka$codegen$FunctionCodes, 0, 0, },
    {"site-packages.nuitka.codegen.GeneratorCodes", modulecode_site$$45$packages$nuitka$codegen$GeneratorCodes, 0, 0, },
    {"site-packages.nuitka.codegen.GlobalsLocalsCodes", modulecode_site$$45$packages$nuitka$codegen$GlobalsLocalsCodes, 0, 0, },
    {"site-packages.nuitka.codegen.IdCodes", modulecode_site$$45$packages$nuitka$codegen$IdCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ImportCodes", modulecode_site$$45$packages$nuitka$codegen$ImportCodes, 0, 0, },
    {"site-packages.nuitka.codegen.Indentation", modulecode_site$$45$packages$nuitka$codegen$Indentation, 0, 0, },
    {"site-packages.nuitka.codegen.IndexCodes", modulecode_site$$45$packages$nuitka$codegen$IndexCodes, 0, 0, },
    {"site-packages.nuitka.codegen.IntegerCodes", modulecode_site$$45$packages$nuitka$codegen$IntegerCodes, 0, 0, },
    {"site-packages.nuitka.codegen.IteratorCodes", modulecode_site$$45$packages$nuitka$codegen$IteratorCodes, 0, 0, },
    {"site-packages.nuitka.codegen.LabelCodes", modulecode_site$$45$packages$nuitka$codegen$LabelCodes, 0, 0, },
    {"site-packages.nuitka.codegen.LineNumberCodes", modulecode_site$$45$packages$nuitka$codegen$LineNumberCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ListCodes", modulecode_site$$45$packages$nuitka$codegen$ListCodes, 0, 0, },
    {"site-packages.nuitka.codegen.LoaderCodes", modulecode_site$$45$packages$nuitka$codegen$LoaderCodes, 0, 0, },
    {"site-packages.nuitka.codegen.LocalsDictCodes", modulecode_site$$45$packages$nuitka$codegen$LocalsDictCodes, 0, 0, },
    {"site-packages.nuitka.codegen.LoopCodes", modulecode_site$$45$packages$nuitka$codegen$LoopCodes, 0, 0, },
    {"site-packages.nuitka.codegen.ModuleCodes", modulecode_site$$45$packages$nuitka$codegen$ModuleCodes, 0, 0, },
    {"site-packages.nuitka.codegen.Namify", modulecode_site$$45$packages$nuitka$codegen$Namify, 0, 0, },
    {"site-packages.nuitka.codegen.OperationCodes", modulecode_site$$45$packages$nuitka$codegen$OperationCodes, 0, 0, },
    {"site-packages.nuitka.codegen.OperatorCodes", modulecode_site$$45$packages$nuitka$codegen$OperatorCodes, 0, 0, },
    {"site-packages.nuitka.codegen.PrintCodes", modulecode_site$$45$packages$nuitka$codegen$PrintCodes, 0, 0, },
    {"site-packages.nuitka.codegen.PythonAPICodes", modulecode_site$$45$packages$nuitka$codegen$PythonAPICodes, 0, 0, },
    {"site-packages.nuitka.codegen.RaisingCodes", modulecode_site$$45$packages$nuitka$codegen$RaisingCodes, 0, 0, },
    {"site-packages.nuitka.codegen.Reports", modulecode_site$$45$packages$nuitka$codegen$Reports, 0, 0, },
    {"site-packages.nuitka.codegen.ReturnCodes", modulecode_site$$45$packages$nuitka$codegen$ReturnCodes, 0, 0, },
    {"site-packages.nuitka.codegen.SetCodes", modulecode_site$$45$packages$nuitka$codegen$SetCodes, 0, 0, },
    {"site-packages.nuitka.codegen.SliceCodes", modulecode_site$$45$packages$nuitka$codegen$SliceCodes, 0, 0, },
    {"site-packages.nuitka.codegen.StringCodes", modulecode_site$$45$packages$nuitka$codegen$StringCodes, 0, 0, },
    {"site-packages.nuitka.codegen.SubscriptCodes", modulecode_site$$45$packages$nuitka$codegen$SubscriptCodes, 0, 0, },
    {"site-packages.nuitka.codegen.TryCodes", modulecode_site$$45$packages$nuitka$codegen$TryCodes, 0, 0, },
    {"site-packages.nuitka.codegen.TupleCodes", modulecode_site$$45$packages$nuitka$codegen$TupleCodes, 0, 0, },
    {"site-packages.nuitka.codegen.VariableCodes", modulecode_site$$45$packages$nuitka$codegen$VariableCodes, 0, 0, },
    {"site-packages.nuitka.codegen.VariableDeclarations", modulecode_site$$45$packages$nuitka$codegen$VariableDeclarations, 0, 0, },
    {"site-packages.nuitka.codegen.YieldCodes", modulecode_site$$45$packages$nuitka$codegen$YieldCodes, 0, 0, },
    {"site-packages.nuitka.codegen.c_types", modulecode_site$$45$packages$nuitka$codegen$c_types, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.codegen.c_types.CTypeBases", modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeBases, 0, 0, },
    {"site-packages.nuitka.codegen.c_types.CTypeModuleDictVariables", modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeModuleDictVariables, 0, 0, },
    {"site-packages.nuitka.codegen.c_types.CTypeNuitkaBools", modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeNuitkaBools, 0, 0, },
    {"site-packages.nuitka.codegen.c_types.CTypeNuitkaInts", modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeNuitkaInts, 0, 0, },
    {"site-packages.nuitka.codegen.c_types.CTypePyObjectPtrs", modulecode_site$$45$packages$nuitka$codegen$c_types$CTypePyObjectPtrs, 0, 0, },
    {"site-packages.nuitka.codegen.c_types.CTypeVoids", modulecode_site$$45$packages$nuitka$codegen$c_types$CTypeVoids, 0, 0, },
    {"site-packages.nuitka.codegen.templates", modulecode_site$$45$packages$nuitka$codegen$templates, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.codegen.templates.CodeTemplatesAsyncgens", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesAsyncgens, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesCalls", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesCalls, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesConstants", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesConstants, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesCoroutines", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesCoroutines, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesExceptions", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesExceptions, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesFrames", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesFrames, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesFreezer", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesFreezer, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesFunction", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesFunction, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesGeneratorFunction", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesGeneratorFunction, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesIterators", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesIterators, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesLoader", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesLoader, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesModules", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesModules, 0, 0, },
    {"site-packages.nuitka.codegen.templates.CodeTemplatesVariables", modulecode_site$$45$packages$nuitka$codegen$templates$CodeTemplatesVariables, 0, 0, },
    {"site-packages.nuitka.codegen.templates.TemplateDebugWrapper", modulecode_site$$45$packages$nuitka$codegen$templates$TemplateDebugWrapper, 0, 0, },
    {"site-packages.nuitka.containers", modulecode_site$$45$packages$nuitka$containers, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.containers.odict", modulecode_site$$45$packages$nuitka$containers$odict, 0, 0, },
    {"site-packages.nuitka.containers.oset", modulecode_site$$45$packages$nuitka$containers$oset, 0, 0, },
    {"site-packages.nuitka.distutils", modulecode_site$$45$packages$nuitka$distutils, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.distutils.bdist_nuitka", modulecode_site$$45$packages$nuitka$distutils$bdist_nuitka, 0, 0, },
    {"site-packages.nuitka.finalizations", modulecode_site$$45$packages$nuitka$finalizations, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.finalizations.Finalization", modulecode_site$$45$packages$nuitka$finalizations$Finalization, 0, 0, },
    {"site-packages.nuitka.finalizations.FinalizeBase", modulecode_site$$45$packages$nuitka$finalizations$FinalizeBase, 0, 0, },
    {"site-packages.nuitka.finalizations.FinalizeMarkups", modulecode_site$$45$packages$nuitka$finalizations$FinalizeMarkups, 0, 0, },
    {"site-packages.nuitka.freezer", modulecode_site$$45$packages$nuitka$freezer, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.freezer.BytecodeModuleFreezer", modulecode_site$$45$packages$nuitka$freezer$BytecodeModuleFreezer, 0, 0, },
    {"site-packages.nuitka.freezer.DependsExe", modulecode_site$$45$packages$nuitka$freezer$DependsExe, 0, 0, },
    {"site-packages.nuitka.freezer.Standalone", modulecode_site$$45$packages$nuitka$freezer$Standalone, 0, 0, },
    {"site-packages.nuitka.importing", modulecode_site$$45$packages$nuitka$importing, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.importing.ImportCache", modulecode_site$$45$packages$nuitka$importing$ImportCache, 0, 0, },
    {"site-packages.nuitka.importing.Importing", modulecode_site$$45$packages$nuitka$importing$Importing, 0, 0, },
    {"site-packages.nuitka.importing.PreloadedPackages", modulecode_site$$45$packages$nuitka$importing$PreloadedPackages, 0, 0, },
    {"site-packages.nuitka.importing.Recursion", modulecode_site$$45$packages$nuitka$importing$Recursion, 0, 0, },
    {"site-packages.nuitka.importing.StandardLibrary", modulecode_site$$45$packages$nuitka$importing$StandardLibrary, 0, 0, },
    {"site-packages.nuitka.importing.Whitelisting", modulecode_site$$45$packages$nuitka$importing$Whitelisting, 0, 0, },
    {"site-packages.nuitka.nodes", modulecode_site$$45$packages$nuitka$nodes, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.nodes.AssignNodes", modulecode_site$$45$packages$nuitka$nodes$AssignNodes, 0, 0, },
    {"site-packages.nuitka.nodes.AsyncgenNodes", modulecode_site$$45$packages$nuitka$nodes$AsyncgenNodes, 0, 0, },
    {"site-packages.nuitka.nodes.AttributeNodes", modulecode_site$$45$packages$nuitka$nodes$AttributeNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinAllNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinAllNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinAnyNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinAnyNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinComplexNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinComplexNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinDecodingNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinDecodingNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinDecoratorNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinDecoratorNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinDictNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinDictNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinFormatNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinFormatNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinHashNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinHashNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinIntegerNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinIntegerNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinIteratorNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinIteratorNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinLenNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinLenNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinNextNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinNextNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinOpenNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinOpenNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinRangeNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinRangeNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinRefNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinRefNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinSumNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinSumNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinTypeNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinTypeNodes, 0, 0, },
    {"site-packages.nuitka.nodes.BuiltinVarsNodes", modulecode_site$$45$packages$nuitka$nodes$BuiltinVarsNodes, 0, 0, },
    {"site-packages.nuitka.nodes.CallNodes", modulecode_site$$45$packages$nuitka$nodes$CallNodes, 0, 0, },
    {"site-packages.nuitka.nodes.Checkers", modulecode_site$$45$packages$nuitka$nodes$Checkers, 0, 0, },
    {"site-packages.nuitka.nodes.ClassNodes", modulecode_site$$45$packages$nuitka$nodes$ClassNodes, 0, 0, },
    {"site-packages.nuitka.nodes.CodeObjectSpecs", modulecode_site$$45$packages$nuitka$nodes$CodeObjectSpecs, 0, 0, },
    {"site-packages.nuitka.nodes.ComparisonNodes", modulecode_site$$45$packages$nuitka$nodes$ComparisonNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ConditionalNodes", modulecode_site$$45$packages$nuitka$nodes$ConditionalNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ConstantRefNodes", modulecode_site$$45$packages$nuitka$nodes$ConstantRefNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ContainerMakingNodes", modulecode_site$$45$packages$nuitka$nodes$ContainerMakingNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ContainerOperationNodes", modulecode_site$$45$packages$nuitka$nodes$ContainerOperationNodes, 0, 0, },
    {"site-packages.nuitka.nodes.CoroutineNodes", modulecode_site$$45$packages$nuitka$nodes$CoroutineNodes, 0, 0, },
    {"site-packages.nuitka.nodes.DictionaryNodes", modulecode_site$$45$packages$nuitka$nodes$DictionaryNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ExceptionNodes", modulecode_site$$45$packages$nuitka$nodes$ExceptionNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ExecEvalNodes", modulecode_site$$45$packages$nuitka$nodes$ExecEvalNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ExpressionBases", modulecode_site$$45$packages$nuitka$nodes$ExpressionBases, 0, 0, },
    {"site-packages.nuitka.nodes.FrameNodes", modulecode_site$$45$packages$nuitka$nodes$FrameNodes, 0, 0, },
    {"site-packages.nuitka.nodes.FunctionNodes", modulecode_site$$45$packages$nuitka$nodes$FunctionNodes, 0, 0, },
    {"site-packages.nuitka.nodes.FutureSpecs", modulecode_site$$45$packages$nuitka$nodes$FutureSpecs, 0, 0, },
    {"site-packages.nuitka.nodes.GeneratorNodes", modulecode_site$$45$packages$nuitka$nodes$GeneratorNodes, 0, 0, },
    {"site-packages.nuitka.nodes.GlobalsLocalsNodes", modulecode_site$$45$packages$nuitka$nodes$GlobalsLocalsNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ImportNodes", modulecode_site$$45$packages$nuitka$nodes$ImportNodes, 0, 0, },
    {"site-packages.nuitka.nodes.IndicatorMixins", modulecode_site$$45$packages$nuitka$nodes$IndicatorMixins, 0, 0, },
    {"site-packages.nuitka.nodes.IterationHandles", modulecode_site$$45$packages$nuitka$nodes$IterationHandles, 0, 0, },
    {"site-packages.nuitka.nodes.LocalsDictNodes", modulecode_site$$45$packages$nuitka$nodes$LocalsDictNodes, 0, 0, },
    {"site-packages.nuitka.nodes.LocalsScopes", modulecode_site$$45$packages$nuitka$nodes$LocalsScopes, 0, 0, },
    {"site-packages.nuitka.nodes.LoopNodes", modulecode_site$$45$packages$nuitka$nodes$LoopNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ModuleAttributeNodes", modulecode_site$$45$packages$nuitka$nodes$ModuleAttributeNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ModuleNodes", modulecode_site$$45$packages$nuitka$nodes$ModuleNodes, 0, 0, },
    {"site-packages.nuitka.nodes.NodeBases", modulecode_site$$45$packages$nuitka$nodes$NodeBases, 0, 0, },
    {"site-packages.nuitka.nodes.NodeMakingHelpers", modulecode_site$$45$packages$nuitka$nodes$NodeMakingHelpers, 0, 0, },
    {"site-packages.nuitka.nodes.NodeMetaClasses", modulecode_site$$45$packages$nuitka$nodes$NodeMetaClasses, 0, 0, },
    {"site-packages.nuitka.nodes.OperatorNodes", modulecode_site$$45$packages$nuitka$nodes$OperatorNodes, 0, 0, },
    {"site-packages.nuitka.nodes.OutlineNodes", modulecode_site$$45$packages$nuitka$nodes$OutlineNodes, 0, 0, },
    {"site-packages.nuitka.nodes.PrintNodes", modulecode_site$$45$packages$nuitka$nodes$PrintNodes, 0, 0, },
    {"site-packages.nuitka.nodes.ReturnNodes", modulecode_site$$45$packages$nuitka$nodes$ReturnNodes, 0, 0, },
    {"site-packages.nuitka.nodes.SideEffectNodes", modulecode_site$$45$packages$nuitka$nodes$SideEffectNodes, 0, 0, },
    {"site-packages.nuitka.nodes.SliceNodes", modulecode_site$$45$packages$nuitka$nodes$SliceNodes, 0, 0, },
    {"site-packages.nuitka.nodes.StatementNodes", modulecode_site$$45$packages$nuitka$nodes$StatementNodes, 0, 0, },
    {"site-packages.nuitka.nodes.StringConcatenationNodes", modulecode_site$$45$packages$nuitka$nodes$StringConcatenationNodes, 0, 0, },
    {"site-packages.nuitka.nodes.SubscriptNodes", modulecode_site$$45$packages$nuitka$nodes$SubscriptNodes, 0, 0, },
    {"site-packages.nuitka.nodes.TryNodes", modulecode_site$$45$packages$nuitka$nodes$TryNodes, 0, 0, },
    {"site-packages.nuitka.nodes.TypeNodes", modulecode_site$$45$packages$nuitka$nodes$TypeNodes, 0, 0, },
    {"site-packages.nuitka.nodes.VariableRefNodes", modulecode_site$$45$packages$nuitka$nodes$VariableRefNodes, 0, 0, },
    {"site-packages.nuitka.nodes.YieldNodes", modulecode_site$$45$packages$nuitka$nodes$YieldNodes, 0, 0, },
    {"site-packages.nuitka.nodes.shapes", modulecode_site$$45$packages$nuitka$nodes$shapes, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.nodes.shapes.BuiltinTypeShapes", modulecode_site$$45$packages$nuitka$nodes$shapes$BuiltinTypeShapes, 0, 0, },
    {"site-packages.nuitka.nodes.shapes.ControlFlowDescriptions", modulecode_site$$45$packages$nuitka$nodes$shapes$ControlFlowDescriptions, 0, 0, },
    {"site-packages.nuitka.nodes.shapes.StandardShapes", modulecode_site$$45$packages$nuitka$nodes$shapes$StandardShapes, 0, 0, },
    {"site-packages.nuitka.optimizations", modulecode_site$$45$packages$nuitka$optimizations, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.optimizations.BytecodeDemotion", modulecode_site$$45$packages$nuitka$optimizations$BytecodeDemotion, 0, 0, },
    {"site-packages.nuitka.optimizations.FunctionInlining", modulecode_site$$45$packages$nuitka$optimizations$FunctionInlining, 0, 0, },
    {"site-packages.nuitka.optimizations.Graphs", modulecode_site$$45$packages$nuitka$optimizations$Graphs, 0, 0, },
    {"site-packages.nuitka.optimizations.Optimization", modulecode_site$$45$packages$nuitka$optimizations$Optimization, 0, 0, },
    {"site-packages.nuitka.optimizations.OptimizeBuiltinCalls", modulecode_site$$45$packages$nuitka$optimizations$OptimizeBuiltinCalls, 0, 0, },
    {"site-packages.nuitka.optimizations.Tags", modulecode_site$$45$packages$nuitka$optimizations$Tags, 0, 0, },
    {"site-packages.nuitka.optimizations.TraceCollections", modulecode_site$$45$packages$nuitka$optimizations$TraceCollections, 0, 0, },
    {"site-packages.nuitka.optimizations.ValueTraces", modulecode_site$$45$packages$nuitka$optimizations$ValueTraces, 0, 0, },
    {"site-packages.nuitka.plugins", modulecode_site$$45$packages$nuitka$plugins, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.plugins.PluginBase", modulecode_site$$45$packages$nuitka$plugins$PluginBase, 0, 0, },
    {"site-packages.nuitka.plugins.Plugins", modulecode_site$$45$packages$nuitka$plugins$Plugins, 0, 0, },
    {"site-packages.nuitka.plugins.standard", modulecode_site$$45$packages$nuitka$plugins$standard, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.plugins.standard.ConsiderPyLintAnnotationsPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$ConsiderPyLintAnnotationsPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.DataFileCollectorPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$DataFileCollectorPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.DillPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$DillPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.EnumPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$EnumPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.EventletPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$EventletPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.GeventPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$GeventPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.ImplicitImports", modulecode_site$$45$packages$nuitka$plugins$standard$ImplicitImports, 0, 0, },
    {"site-packages.nuitka.plugins.standard.MultiprocessingPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$MultiprocessingPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.NumpyPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$NumpyPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.PbrPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$PbrPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.PmwPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$PmwPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.PySidePyQtPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$PySidePyQtPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.TensorflowPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$TensorflowPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.TkinterPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$TkinterPlugin, 0, 0, },
    {"site-packages.nuitka.plugins.standard.TorchPlugin", modulecode_site$$45$packages$nuitka$plugins$standard$TorchPlugin, 0, 0, },
    {"site-packages.nuitka.specs", modulecode_site$$45$packages$nuitka$specs, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.specs.BuiltinParameterSpecs", modulecode_site$$45$packages$nuitka$specs$BuiltinParameterSpecs, 0, 0, },
    {"site-packages.nuitka.specs.ParameterSpecs", modulecode_site$$45$packages$nuitka$specs$ParameterSpecs, 0, 0, },
    {"site-packages.nuitka.tools", modulecode_site$$45$packages$nuitka$tools, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.Basics", modulecode_site$$45$packages$nuitka$tools$Basics, 0, 0, },
    {"site-packages.nuitka.tools.general", modulecode_site$$45$packages$nuitka$tools$general, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.general.dll_report", modulecode_site$$45$packages$nuitka$tools$general$dll_report, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.general.dll_report.__main__", modulecode_site$$45$packages$nuitka$tools$general$dll_report$__main__, 0, 0, },
    {"site-packages.nuitka.tools.profiler", modulecode_site$$45$packages$nuitka$tools$profiler, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.profiler.__main__", modulecode_site$$45$packages$nuitka$tools$profiler$__main__, 0, 0, },
    {"site-packages.nuitka.tools.specialize", modulecode_site$$45$packages$nuitka$tools$specialize, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.specialize.__main__", modulecode_site$$45$packages$nuitka$tools$specialize$__main__, 0, 0, },
    {"site-packages.nuitka.tools.testing", modulecode_site$$45$packages$nuitka$tools$testing, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.testing.Common", modulecode_site$$45$packages$nuitka$tools$testing$Common, 0, 0, },
    {"site-packages.nuitka.tools.testing.Constructs", modulecode_site$$45$packages$nuitka$tools$testing$Constructs, 0, 0, },
    {"site-packages.nuitka.tools.testing.OutputComparison", modulecode_site$$45$packages$nuitka$tools$testing$OutputComparison, 0, 0, },
    {"site-packages.nuitka.tools.testing.SearchModes", modulecode_site$$45$packages$nuitka$tools$testing$SearchModes, 0, 0, },
    {"site-packages.nuitka.tools.testing.Valgrind", modulecode_site$$45$packages$nuitka$tools$testing$Valgrind, 0, 0, },
    {"site-packages.nuitka.tools.testing.Virtualenv", modulecode_site$$45$packages$nuitka$tools$testing$Virtualenv, 0, 0, },
    {"site-packages.nuitka.tools.testing.compare_with_cpython", modulecode_site$$45$packages$nuitka$tools$testing$compare_with_cpython, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.testing.compare_with_cpython.__main__", modulecode_site$$45$packages$nuitka$tools$testing$compare_with_cpython$__main__, 0, 0, },
    {"site-packages.nuitka.tools.testing.find_sxs_modules", modulecode_site$$45$packages$nuitka$tools$testing$find_sxs_modules, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.testing.find_sxs_modules.__main__", modulecode_site$$45$packages$nuitka$tools$testing$find_sxs_modules$__main__, 0, 0, },
    {"site-packages.nuitka.tools.testing.measure_construct_performance", modulecode_site$$45$packages$nuitka$tools$testing$measure_construct_performance, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.testing.measure_construct_performance.__main__", modulecode_site$$45$packages$nuitka$tools$testing$measure_construct_performance$__main__, 0, 0, },
    {"site-packages.nuitka.tools.testing.run_nuitka_tests", modulecode_site$$45$packages$nuitka$tools$testing$run_nuitka_tests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tools.testing.run_nuitka_tests.__main__", modulecode_site$$45$packages$nuitka$tools$testing$run_nuitka_tests$__main__, 0, 0, },
    {"site-packages.nuitka.tree", modulecode_site$$45$packages$nuitka$tree, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.tree.Building", modulecode_site$$45$packages$nuitka$tree$Building, 0, 0, },
    {"site-packages.nuitka.tree.ComplexCallHelperFunctions", modulecode_site$$45$packages$nuitka$tree$ComplexCallHelperFunctions, 0, 0, },
    {"site-packages.nuitka.tree.Extractions", modulecode_site$$45$packages$nuitka$tree$Extractions, 0, 0, },
    {"site-packages.nuitka.tree.InternalModule", modulecode_site$$45$packages$nuitka$tree$InternalModule, 0, 0, },
    {"site-packages.nuitka.tree.Operations", modulecode_site$$45$packages$nuitka$tree$Operations, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationAssertStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationAssertStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationAssignmentStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationAssignmentStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationBooleanExpressions", modulecode_site$$45$packages$nuitka$tree$ReformulationBooleanExpressions, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationCallExpressions", modulecode_site$$45$packages$nuitka$tree$ReformulationCallExpressions, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationClasses", modulecode_site$$45$packages$nuitka$tree$ReformulationClasses, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationClasses3", modulecode_site$$45$packages$nuitka$tree$ReformulationClasses3, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationComparisonExpressions", modulecode_site$$45$packages$nuitka$tree$ReformulationComparisonExpressions, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationContractionExpressions", modulecode_site$$45$packages$nuitka$tree$ReformulationContractionExpressions, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationDictionaryCreation", modulecode_site$$45$packages$nuitka$tree$ReformulationDictionaryCreation, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationExecStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationExecStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationForLoopStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationForLoopStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationFunctionStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationFunctionStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationImportStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationImportStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationLambdaExpressions", modulecode_site$$45$packages$nuitka$tree$ReformulationLambdaExpressions, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationNamespacePackages", modulecode_site$$45$packages$nuitka$tree$ReformulationNamespacePackages, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationPrintStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationPrintStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationSequenceCreation", modulecode_site$$45$packages$nuitka$tree$ReformulationSequenceCreation, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationSubscriptExpressions", modulecode_site$$45$packages$nuitka$tree$ReformulationSubscriptExpressions, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationTryExceptStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationTryExceptStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationTryFinallyStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationTryFinallyStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationWhileLoopStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationWhileLoopStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationWithStatements", modulecode_site$$45$packages$nuitka$tree$ReformulationWithStatements, 0, 0, },
    {"site-packages.nuitka.tree.ReformulationYieldExpressions", modulecode_site$$45$packages$nuitka$tree$ReformulationYieldExpressions, 0, 0, },
    {"site-packages.nuitka.tree.SourceReading", modulecode_site$$45$packages$nuitka$tree$SourceReading, 0, 0, },
    {"site-packages.nuitka.tree.SyntaxErrors", modulecode_site$$45$packages$nuitka$tree$SyntaxErrors, 0, 0, },
    {"site-packages.nuitka.tree.TreeHelpers", modulecode_site$$45$packages$nuitka$tree$TreeHelpers, 0, 0, },
    {"site-packages.nuitka.tree.VariableClosure", modulecode_site$$45$packages$nuitka$tree$VariableClosure, 0, 0, },
    {"site-packages.nuitka.utils", modulecode_site$$45$packages$nuitka$utils, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.nuitka.utils.AppDirs", modulecode_site$$45$packages$nuitka$utils$AppDirs, 0, 0, },
    {"site-packages.nuitka.utils.CStrings", modulecode_site$$45$packages$nuitka$utils$CStrings, 0, 0, },
    {"site-packages.nuitka.utils.Execution", modulecode_site$$45$packages$nuitka$utils$Execution, 0, 0, },
    {"site-packages.nuitka.utils.FileOperations", modulecode_site$$45$packages$nuitka$utils$FileOperations, 0, 0, },
    {"site-packages.nuitka.utils.InstanceCounters", modulecode_site$$45$packages$nuitka$utils$InstanceCounters, 0, 0, },
    {"site-packages.nuitka.utils.MemoryUsage", modulecode_site$$45$packages$nuitka$utils$MemoryUsage, 0, 0, },
    {"site-packages.nuitka.utils.ModuleNames", modulecode_site$$45$packages$nuitka$utils$ModuleNames, 0, 0, },
    {"site-packages.nuitka.utils.SharedLibraries", modulecode_site$$45$packages$nuitka$utils$SharedLibraries, 0, 0, },
    {"site-packages.nuitka.utils.Shebang", modulecode_site$$45$packages$nuitka$utils$Shebang, 0, 0, },
    {"site-packages.nuitka.utils.ThreadedExecutor", modulecode_site$$45$packages$nuitka$utils$ThreadedExecutor, 0, 0, },
    {"site-packages.nuitka.utils.Timing", modulecode_site$$45$packages$nuitka$utils$Timing, 0, 0, },
    {"site-packages.nuitka.utils.Utils", modulecode_site$$45$packages$nuitka$utils$Utils, 0, 0, },
    {"site-packages.nuitka.utils.WindowsResources", modulecode_site$$45$packages$nuitka$utils$WindowsResources, 0, 0, },
    {"site-packages.osc_sdk_python", modulecode_site$$45$packages$osc_sdk_python, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.osc_sdk_python.authentication", modulecode_site$$45$packages$osc_sdk_python$authentication, 0, 0, },
    {"site-packages.osc_sdk_python.call", modulecode_site$$45$packages$osc_sdk_python$call, 0, 0, },
    {"site-packages.osc_sdk_python.credentials", modulecode_site$$45$packages$osc_sdk_python$credentials, 0, 0, },
    {"site-packages.osc_sdk_python.outscale_gateway", modulecode_site$$45$packages$osc_sdk_python$outscale_gateway, 0, 0, },
    {"site-packages.osc_sdk_python.requester", modulecode_site$$45$packages$osc_sdk_python$requester, 0, 0, },
    {"site-packages.pip", modulecode_site$$45$packages$pip, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip.__main__", modulecode_site$$45$packages$pip$__main__, 0, 0, },
    {"site-packages.pip._internal", modulecode_site$$45$packages$pip$_internal, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.build_env", modulecode_site$$45$packages$pip$_internal$build_env, 0, 0, },
    {"site-packages.pip._internal.cache", modulecode_site$$45$packages$pip$_internal$cache, 0, 0, },
    {"site-packages.pip._internal.cli", modulecode_site$$45$packages$pip$_internal$cli, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.cli.autocompletion", modulecode_site$$45$packages$pip$_internal$cli$autocompletion, 0, 0, },
    {"site-packages.pip._internal.cli.base_command", modulecode_site$$45$packages$pip$_internal$cli$base_command, 0, 0, },
    {"site-packages.pip._internal.cli.cmdoptions", modulecode_site$$45$packages$pip$_internal$cli$cmdoptions, 0, 0, },
    {"site-packages.pip._internal.cli.command_context", modulecode_site$$45$packages$pip$_internal$cli$command_context, 0, 0, },
    {"site-packages.pip._internal.cli.main", modulecode_site$$45$packages$pip$_internal$cli$main, 0, 0, },
    {"site-packages.pip._internal.cli.main_parser", modulecode_site$$45$packages$pip$_internal$cli$main_parser, 0, 0, },
    {"site-packages.pip._internal.cli.parser", modulecode_site$$45$packages$pip$_internal$cli$parser, 0, 0, },
    {"site-packages.pip._internal.cli.req_command", modulecode_site$$45$packages$pip$_internal$cli$req_command, 0, 0, },
    {"site-packages.pip._internal.cli.status_codes", modulecode_site$$45$packages$pip$_internal$cli$status_codes, 0, 0, },
    {"site-packages.pip._internal.commands", modulecode_site$$45$packages$pip$_internal$commands, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.commands.check", modulecode_site$$45$packages$pip$_internal$commands$check, 0, 0, },
    {"site-packages.pip._internal.commands.completion", modulecode_site$$45$packages$pip$_internal$commands$completion, 0, 0, },
    {"site-packages.pip._internal.commands.configuration", modulecode_site$$45$packages$pip$_internal$commands$configuration, 0, 0, },
    {"site-packages.pip._internal.commands.debug", modulecode_site$$45$packages$pip$_internal$commands$debug, 0, 0, },
    {"site-packages.pip._internal.commands.download", modulecode_site$$45$packages$pip$_internal$commands$download, 0, 0, },
    {"site-packages.pip._internal.commands.freeze", modulecode_site$$45$packages$pip$_internal$commands$freeze, 0, 0, },
    {"site-packages.pip._internal.commands.hash", modulecode_site$$45$packages$pip$_internal$commands$hash, 0, 0, },
    {"site-packages.pip._internal.commands.help", modulecode_site$$45$packages$pip$_internal$commands$help, 0, 0, },
    {"site-packages.pip._internal.commands.install", modulecode_site$$45$packages$pip$_internal$commands$install, 0, 0, },
    {"site-packages.pip._internal.commands.list", modulecode_site$$45$packages$pip$_internal$commands$list, 0, 0, },
    {"site-packages.pip._internal.commands.search", modulecode_site$$45$packages$pip$_internal$commands$search, 0, 0, },
    {"site-packages.pip._internal.commands.show", modulecode_site$$45$packages$pip$_internal$commands$show, 0, 0, },
    {"site-packages.pip._internal.commands.uninstall", modulecode_site$$45$packages$pip$_internal$commands$uninstall, 0, 0, },
    {"site-packages.pip._internal.commands.wheel", modulecode_site$$45$packages$pip$_internal$commands$wheel, 0, 0, },
    {"site-packages.pip._internal.configuration", modulecode_site$$45$packages$pip$_internal$configuration, 0, 0, },
    {"site-packages.pip._internal.distributions", modulecode_site$$45$packages$pip$_internal$distributions, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.distributions.base", modulecode_site$$45$packages$pip$_internal$distributions$base, 0, 0, },
    {"site-packages.pip._internal.distributions.installed", modulecode_site$$45$packages$pip$_internal$distributions$installed, 0, 0, },
    {"site-packages.pip._internal.distributions.sdist", modulecode_site$$45$packages$pip$_internal$distributions$sdist, 0, 0, },
    {"site-packages.pip._internal.distributions.wheel", modulecode_site$$45$packages$pip$_internal$distributions$wheel, 0, 0, },
    {"site-packages.pip._internal.exceptions", modulecode_site$$45$packages$pip$_internal$exceptions, 0, 0, },
    {"site-packages.pip._internal.index", modulecode_site$$45$packages$pip$_internal$index, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.index.collector", modulecode_site$$45$packages$pip$_internal$index$collector, 0, 0, },
    {"site-packages.pip._internal.index.package_finder", modulecode_site$$45$packages$pip$_internal$index$package_finder, 0, 0, },
    {"site-packages.pip._internal.legacy_resolve", modulecode_site$$45$packages$pip$_internal$legacy_resolve, 0, 0, },
    {"site-packages.pip._internal.locations", modulecode_site$$45$packages$pip$_internal$locations, 0, 0, },
    {"site-packages.pip._internal.main", modulecode_site$$45$packages$pip$_internal$main, 0, 0, },
    {"site-packages.pip._internal.models", modulecode_site$$45$packages$pip$_internal$models, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.models.candidate", modulecode_site$$45$packages$pip$_internal$models$candidate, 0, 0, },
    {"site-packages.pip._internal.models.format_control", modulecode_site$$45$packages$pip$_internal$models$format_control, 0, 0, },
    {"site-packages.pip._internal.models.index", modulecode_site$$45$packages$pip$_internal$models$index, 0, 0, },
    {"site-packages.pip._internal.models.link", modulecode_site$$45$packages$pip$_internal$models$link, 0, 0, },
    {"site-packages.pip._internal.models.scheme", modulecode_site$$45$packages$pip$_internal$models$scheme, 0, 0, },
    {"site-packages.pip._internal.models.search_scope", modulecode_site$$45$packages$pip$_internal$models$search_scope, 0, 0, },
    {"site-packages.pip._internal.models.selection_prefs", modulecode_site$$45$packages$pip$_internal$models$selection_prefs, 0, 0, },
    {"site-packages.pip._internal.models.target_python", modulecode_site$$45$packages$pip$_internal$models$target_python, 0, 0, },
    {"site-packages.pip._internal.models.wheel", modulecode_site$$45$packages$pip$_internal$models$wheel, 0, 0, },
    {"site-packages.pip._internal.network", modulecode_site$$45$packages$pip$_internal$network, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.network.auth", modulecode_site$$45$packages$pip$_internal$network$auth, 0, 0, },
    {"site-packages.pip._internal.network.cache", modulecode_site$$45$packages$pip$_internal$network$cache, 0, 0, },
    {"site-packages.pip._internal.network.download", modulecode_site$$45$packages$pip$_internal$network$download, 0, 0, },
    {"site-packages.pip._internal.network.session", modulecode_site$$45$packages$pip$_internal$network$session, 0, 0, },
    {"site-packages.pip._internal.network.utils", modulecode_site$$45$packages$pip$_internal$network$utils, 0, 0, },
    {"site-packages.pip._internal.network.xmlrpc", modulecode_site$$45$packages$pip$_internal$network$xmlrpc, 0, 0, },
    {"site-packages.pip._internal.operations", modulecode_site$$45$packages$pip$_internal$operations, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.operations.build", modulecode_site$$45$packages$pip$_internal$operations$build, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.operations.build.metadata", modulecode_site$$45$packages$pip$_internal$operations$build$metadata, 0, 0, },
    {"site-packages.pip._internal.operations.build.metadata_legacy", modulecode_site$$45$packages$pip$_internal$operations$build$metadata_legacy, 0, 0, },
    {"site-packages.pip._internal.operations.build.wheel", modulecode_site$$45$packages$pip$_internal$operations$build$wheel, 0, 0, },
    {"site-packages.pip._internal.operations.build.wheel_legacy", modulecode_site$$45$packages$pip$_internal$operations$build$wheel_legacy, 0, 0, },
    {"site-packages.pip._internal.operations.check", modulecode_site$$45$packages$pip$_internal$operations$check, 0, 0, },
    {"site-packages.pip._internal.operations.freeze", modulecode_site$$45$packages$pip$_internal$operations$freeze, 0, 0, },
    {"site-packages.pip._internal.operations.install", modulecode_site$$45$packages$pip$_internal$operations$install, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.operations.install.editable_legacy", modulecode_site$$45$packages$pip$_internal$operations$install$editable_legacy, 0, 0, },
    {"site-packages.pip._internal.operations.install.legacy", modulecode_site$$45$packages$pip$_internal$operations$install$legacy, 0, 0, },
    {"site-packages.pip._internal.operations.install.wheel", modulecode_site$$45$packages$pip$_internal$operations$install$wheel, 0, 0, },
    {"site-packages.pip._internal.operations.prepare", modulecode_site$$45$packages$pip$_internal$operations$prepare, 0, 0, },
    {"site-packages.pip._internal.pep425tags", modulecode_site$$45$packages$pip$_internal$pep425tags, 0, 0, },
    {"site-packages.pip._internal.pyproject", modulecode_site$$45$packages$pip$_internal$pyproject, 0, 0, },
    {"site-packages.pip._internal.req", modulecode_site$$45$packages$pip$_internal$req, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.req.constructors", modulecode_site$$45$packages$pip$_internal$req$constructors, 0, 0, },
    {"site-packages.pip._internal.req.req_file", modulecode_site$$45$packages$pip$_internal$req$req_file, 0, 0, },
    {"site-packages.pip._internal.req.req_install", modulecode_site$$45$packages$pip$_internal$req$req_install, 0, 0, },
    {"site-packages.pip._internal.req.req_set", modulecode_site$$45$packages$pip$_internal$req$req_set, 0, 0, },
    {"site-packages.pip._internal.req.req_tracker", modulecode_site$$45$packages$pip$_internal$req$req_tracker, 0, 0, },
    {"site-packages.pip._internal.req.req_uninstall", modulecode_site$$45$packages$pip$_internal$req$req_uninstall, 0, 0, },
    {"site-packages.pip._internal.self_outdated_check", modulecode_site$$45$packages$pip$_internal$self_outdated_check, 0, 0, },
    {"site-packages.pip._internal.utils", modulecode_site$$45$packages$pip$_internal$utils, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.utils.appdirs", modulecode_site$$45$packages$pip$_internal$utils$appdirs, 0, 0, },
    {"site-packages.pip._internal.utils.compat", modulecode_site$$45$packages$pip$_internal$utils$compat, 0, 0, },
    {"site-packages.pip._internal.utils.deprecation", modulecode_site$$45$packages$pip$_internal$utils$deprecation, 0, 0, },
    {"site-packages.pip._internal.utils.distutils_args", modulecode_site$$45$packages$pip$_internal$utils$distutils_args, 0, 0, },
    {"site-packages.pip._internal.utils.encoding", modulecode_site$$45$packages$pip$_internal$utils$encoding, 0, 0, },
    {"site-packages.pip._internal.utils.entrypoints", modulecode_site$$45$packages$pip$_internal$utils$entrypoints, 0, 0, },
    {"site-packages.pip._internal.utils.filesystem", modulecode_site$$45$packages$pip$_internal$utils$filesystem, 0, 0, },
    {"site-packages.pip._internal.utils.filetypes", modulecode_site$$45$packages$pip$_internal$utils$filetypes, 0, 0, },
    {"site-packages.pip._internal.utils.glibc", modulecode_site$$45$packages$pip$_internal$utils$glibc, 0, 0, },
    {"site-packages.pip._internal.utils.hashes", modulecode_site$$45$packages$pip$_internal$utils$hashes, 0, 0, },
    {"site-packages.pip._internal.utils.inject_securetransport", modulecode_site$$45$packages$pip$_internal$utils$inject_securetransport, 0, 0, },
    {"site-packages.pip._internal.utils.logging", modulecode_site$$45$packages$pip$_internal$utils$logging, 0, 0, },
    {"site-packages.pip._internal.utils.marker_files", modulecode_site$$45$packages$pip$_internal$utils$marker_files, 0, 0, },
    {"site-packages.pip._internal.utils.misc", modulecode_site$$45$packages$pip$_internal$utils$misc, 0, 0, },
    {"site-packages.pip._internal.utils.models", modulecode_site$$45$packages$pip$_internal$utils$models, 0, 0, },
    {"site-packages.pip._internal.utils.packaging", modulecode_site$$45$packages$pip$_internal$utils$packaging, 0, 0, },
    {"site-packages.pip._internal.utils.pkg_resources", modulecode_site$$45$packages$pip$_internal$utils$pkg_resources, 0, 0, },
    {"site-packages.pip._internal.utils.setuptools_build", modulecode_site$$45$packages$pip$_internal$utils$setuptools_build, 0, 0, },
    {"site-packages.pip._internal.utils.subprocess", modulecode_site$$45$packages$pip$_internal$utils$subprocess, 0, 0, },
    {"site-packages.pip._internal.utils.temp_dir", modulecode_site$$45$packages$pip$_internal$utils$temp_dir, 0, 0, },
    {"site-packages.pip._internal.utils.typing", modulecode_site$$45$packages$pip$_internal$utils$typing, 0, 0, },
    {"site-packages.pip._internal.utils.ui", modulecode_site$$45$packages$pip$_internal$utils$ui, 0, 0, },
    {"site-packages.pip._internal.utils.unpacking", modulecode_site$$45$packages$pip$_internal$utils$unpacking, 0, 0, },
    {"site-packages.pip._internal.utils.urls", modulecode_site$$45$packages$pip$_internal$utils$urls, 0, 0, },
    {"site-packages.pip._internal.utils.virtualenv", modulecode_site$$45$packages$pip$_internal$utils$virtualenv, 0, 0, },
    {"site-packages.pip._internal.utils.wheel", modulecode_site$$45$packages$pip$_internal$utils$wheel, 0, 0, },
    {"site-packages.pip._internal.vcs", modulecode_site$$45$packages$pip$_internal$vcs, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._internal.vcs.bazaar", modulecode_site$$45$packages$pip$_internal$vcs$bazaar, 0, 0, },
    {"site-packages.pip._internal.vcs.git", modulecode_site$$45$packages$pip$_internal$vcs$git, 0, 0, },
    {"site-packages.pip._internal.vcs.mercurial", modulecode_site$$45$packages$pip$_internal$vcs$mercurial, 0, 0, },
    {"site-packages.pip._internal.vcs.subversion", modulecode_site$$45$packages$pip$_internal$vcs$subversion, 0, 0, },
    {"site-packages.pip._internal.vcs.versioncontrol", modulecode_site$$45$packages$pip$_internal$vcs$versioncontrol, 0, 0, },
    {"site-packages.pip._internal.wheel_builder", modulecode_site$$45$packages$pip$_internal$wheel_builder, 0, 0, },
    {"site-packages.pip._vendor", modulecode_site$$45$packages$pip$_vendor, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.appdirs", modulecode_site$$45$packages$pip$_vendor$appdirs, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol", modulecode_site$$45$packages$pip$_vendor$cachecontrol, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.cachecontrol._cmd", modulecode_site$$45$packages$pip$_vendor$cachecontrol$_cmd, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.adapter", modulecode_site$$45$packages$pip$_vendor$cachecontrol$adapter, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.cache", modulecode_site$$45$packages$pip$_vendor$cachecontrol$cache, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.caches", modulecode_site$$45$packages$pip$_vendor$cachecontrol$caches, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.cachecontrol.caches.file_cache", modulecode_site$$45$packages$pip$_vendor$cachecontrol$caches$file_cache, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.caches.redis_cache", modulecode_site$$45$packages$pip$_vendor$cachecontrol$caches$redis_cache, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.compat", modulecode_site$$45$packages$pip$_vendor$cachecontrol$compat, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.controller", modulecode_site$$45$packages$pip$_vendor$cachecontrol$controller, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.filewrapper", modulecode_site$$45$packages$pip$_vendor$cachecontrol$filewrapper, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.heuristics", modulecode_site$$45$packages$pip$_vendor$cachecontrol$heuristics, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.serialize", modulecode_site$$45$packages$pip$_vendor$cachecontrol$serialize, 0, 0, },
    {"site-packages.pip._vendor.cachecontrol.wrapper", modulecode_site$$45$packages$pip$_vendor$cachecontrol$wrapper, 0, 0, },
    {"site-packages.pip._vendor.certifi", modulecode_site$$45$packages$pip$_vendor$certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.certifi.__main__", modulecode_site$$45$packages$pip$_vendor$certifi$__main__, 0, 0, },
    {"site-packages.pip._vendor.certifi.core", modulecode_site$$45$packages$pip$_vendor$certifi$core, 0, 0, },
    {"site-packages.pip._vendor.chardet", modulecode_site$$45$packages$pip$_vendor$chardet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.chardet.big5freq", modulecode_site$$45$packages$pip$_vendor$chardet$big5freq, 0, 0, },
    {"site-packages.pip._vendor.chardet.big5prober", modulecode_site$$45$packages$pip$_vendor$chardet$big5prober, 0, 0, },
    {"site-packages.pip._vendor.chardet.chardistribution", modulecode_site$$45$packages$pip$_vendor$chardet$chardistribution, 0, 0, },
    {"site-packages.pip._vendor.chardet.charsetgroupprober", modulecode_site$$45$packages$pip$_vendor$chardet$charsetgroupprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.charsetprober", modulecode_site$$45$packages$pip$_vendor$chardet$charsetprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.cli", modulecode_site$$45$packages$pip$_vendor$chardet$cli, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.chardet.cli.chardetect", modulecode_site$$45$packages$pip$_vendor$chardet$cli$chardetect, 0, 0, },
    {"site-packages.pip._vendor.chardet.codingstatemachine", modulecode_site$$45$packages$pip$_vendor$chardet$codingstatemachine, 0, 0, },
    {"site-packages.pip._vendor.chardet.compat", modulecode_site$$45$packages$pip$_vendor$chardet$compat, 0, 0, },
    {"site-packages.pip._vendor.chardet.cp949prober", modulecode_site$$45$packages$pip$_vendor$chardet$cp949prober, 0, 0, },
    {"site-packages.pip._vendor.chardet.enums", modulecode_site$$45$packages$pip$_vendor$chardet$enums, 0, 0, },
    {"site-packages.pip._vendor.chardet.escprober", modulecode_site$$45$packages$pip$_vendor$chardet$escprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.escsm", modulecode_site$$45$packages$pip$_vendor$chardet$escsm, 0, 0, },
    {"site-packages.pip._vendor.chardet.eucjpprober", modulecode_site$$45$packages$pip$_vendor$chardet$eucjpprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.euckrfreq", modulecode_site$$45$packages$pip$_vendor$chardet$euckrfreq, 0, 0, },
    {"site-packages.pip._vendor.chardet.euckrprober", modulecode_site$$45$packages$pip$_vendor$chardet$euckrprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.euctwfreq", modulecode_site$$45$packages$pip$_vendor$chardet$euctwfreq, 0, 0, },
    {"site-packages.pip._vendor.chardet.euctwprober", modulecode_site$$45$packages$pip$_vendor$chardet$euctwprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.gb2312freq", modulecode_site$$45$packages$pip$_vendor$chardet$gb2312freq, 0, 0, },
    {"site-packages.pip._vendor.chardet.gb2312prober", modulecode_site$$45$packages$pip$_vendor$chardet$gb2312prober, 0, 0, },
    {"site-packages.pip._vendor.chardet.hebrewprober", modulecode_site$$45$packages$pip$_vendor$chardet$hebrewprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.jisfreq", modulecode_site$$45$packages$pip$_vendor$chardet$jisfreq, 0, 0, },
    {"site-packages.pip._vendor.chardet.jpcntx", modulecode_site$$45$packages$pip$_vendor$chardet$jpcntx, 0, 0, },
    {"site-packages.pip._vendor.chardet.langbulgarianmodel", modulecode_site$$45$packages$pip$_vendor$chardet$langbulgarianmodel, 0, 0, },
    {"site-packages.pip._vendor.chardet.langcyrillicmodel", modulecode_site$$45$packages$pip$_vendor$chardet$langcyrillicmodel, 0, 0, },
    {"site-packages.pip._vendor.chardet.langgreekmodel", modulecode_site$$45$packages$pip$_vendor$chardet$langgreekmodel, 0, 0, },
    {"site-packages.pip._vendor.chardet.langhebrewmodel", modulecode_site$$45$packages$pip$_vendor$chardet$langhebrewmodel, 0, 0, },
    {"site-packages.pip._vendor.chardet.langhungarianmodel", modulecode_site$$45$packages$pip$_vendor$chardet$langhungarianmodel, 0, 0, },
    {"site-packages.pip._vendor.chardet.langthaimodel", modulecode_site$$45$packages$pip$_vendor$chardet$langthaimodel, 0, 0, },
    {"site-packages.pip._vendor.chardet.langturkishmodel", modulecode_site$$45$packages$pip$_vendor$chardet$langturkishmodel, 0, 0, },
    {"site-packages.pip._vendor.chardet.latin1prober", modulecode_site$$45$packages$pip$_vendor$chardet$latin1prober, 0, 0, },
    {"site-packages.pip._vendor.chardet.mbcharsetprober", modulecode_site$$45$packages$pip$_vendor$chardet$mbcharsetprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.mbcsgroupprober", modulecode_site$$45$packages$pip$_vendor$chardet$mbcsgroupprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.mbcssm", modulecode_site$$45$packages$pip$_vendor$chardet$mbcssm, 0, 0, },
    {"site-packages.pip._vendor.chardet.sbcharsetprober", modulecode_site$$45$packages$pip$_vendor$chardet$sbcharsetprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.sbcsgroupprober", modulecode_site$$45$packages$pip$_vendor$chardet$sbcsgroupprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.sjisprober", modulecode_site$$45$packages$pip$_vendor$chardet$sjisprober, 0, 0, },
    {"site-packages.pip._vendor.chardet.universaldetector", modulecode_site$$45$packages$pip$_vendor$chardet$universaldetector, 0, 0, },
    {"site-packages.pip._vendor.chardet.utf8prober", modulecode_site$$45$packages$pip$_vendor$chardet$utf8prober, 0, 0, },
    {"site-packages.pip._vendor.chardet.version", modulecode_site$$45$packages$pip$_vendor$chardet$version, 0, 0, },
    {"site-packages.pip._vendor.colorama", modulecode_site$$45$packages$pip$_vendor$colorama, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.colorama.ansi", modulecode_site$$45$packages$pip$_vendor$colorama$ansi, 0, 0, },
    {"site-packages.pip._vendor.colorama.ansitowin32", modulecode_site$$45$packages$pip$_vendor$colorama$ansitowin32, 0, 0, },
    {"site-packages.pip._vendor.colorama.initialise", modulecode_site$$45$packages$pip$_vendor$colorama$initialise, 0, 0, },
    {"site-packages.pip._vendor.colorama.win32", modulecode_site$$45$packages$pip$_vendor$colorama$win32, 0, 0, },
    {"site-packages.pip._vendor.colorama.winterm", modulecode_site$$45$packages$pip$_vendor$colorama$winterm, 0, 0, },
    {"site-packages.pip._vendor.contextlib2", modulecode_site$$45$packages$pip$_vendor$contextlib2, 0, 0, },
    {"site-packages.pip._vendor.distlib", modulecode_site$$45$packages$pip$_vendor$distlib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.distlib._backport", modulecode_site$$45$packages$pip$_vendor$distlib$_backport, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.distlib._backport.misc", modulecode_site$$45$packages$pip$_vendor$distlib$_backport$misc, 0, 0, },
    {"site-packages.pip._vendor.distlib._backport.shutil", modulecode_site$$45$packages$pip$_vendor$distlib$_backport$shutil, 0, 0, },
    {"site-packages.pip._vendor.distlib._backport.sysconfig", modulecode_site$$45$packages$pip$_vendor$distlib$_backport$sysconfig, 0, 0, },
    {"site-packages.pip._vendor.distlib._backport.tarfile", modulecode_site$$45$packages$pip$_vendor$distlib$_backport$tarfile, 0, 0, },
    {"site-packages.pip._vendor.distlib.compat", modulecode_site$$45$packages$pip$_vendor$distlib$compat, 0, 0, },
    {"site-packages.pip._vendor.distlib.database", modulecode_site$$45$packages$pip$_vendor$distlib$database, 0, 0, },
    {"site-packages.pip._vendor.distlib.index", modulecode_site$$45$packages$pip$_vendor$distlib$index, 0, 0, },
    {"site-packages.pip._vendor.distlib.locators", modulecode_site$$45$packages$pip$_vendor$distlib$locators, 0, 0, },
    {"site-packages.pip._vendor.distlib.manifest", modulecode_site$$45$packages$pip$_vendor$distlib$manifest, 0, 0, },
    {"site-packages.pip._vendor.distlib.markers", modulecode_site$$45$packages$pip$_vendor$distlib$markers, 0, 0, },
    {"site-packages.pip._vendor.distlib.metadata", modulecode_site$$45$packages$pip$_vendor$distlib$metadata, 0, 0, },
    {"site-packages.pip._vendor.distlib.resources", modulecode_site$$45$packages$pip$_vendor$distlib$resources, 0, 0, },
    {"site-packages.pip._vendor.distlib.scripts", modulecode_site$$45$packages$pip$_vendor$distlib$scripts, 0, 0, },
    {"site-packages.pip._vendor.distlib.util", modulecode_site$$45$packages$pip$_vendor$distlib$util, 0, 0, },
    {"site-packages.pip._vendor.distlib.version", modulecode_site$$45$packages$pip$_vendor$distlib$version, 0, 0, },
    {"site-packages.pip._vendor.distlib.wheel", modulecode_site$$45$packages$pip$_vendor$distlib$wheel, 0, 0, },
    {"site-packages.pip._vendor.distro", modulecode_site$$45$packages$pip$_vendor$distro, 0, 0, },
    {"site-packages.pip._vendor.html5lib", modulecode_site$$45$packages$pip$_vendor$html5lib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.html5lib._ihatexml", modulecode_site$$45$packages$pip$_vendor$html5lib$_ihatexml, 0, 0, },
    {"site-packages.pip._vendor.html5lib._inputstream", modulecode_site$$45$packages$pip$_vendor$html5lib$_inputstream, 0, 0, },
    {"site-packages.pip._vendor.html5lib._tokenizer", modulecode_site$$45$packages$pip$_vendor$html5lib$_tokenizer, 0, 0, },
    {"site-packages.pip._vendor.html5lib._trie", modulecode_site$$45$packages$pip$_vendor$html5lib$_trie, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.html5lib._trie._base", modulecode_site$$45$packages$pip$_vendor$html5lib$_trie$_base, 0, 0, },
    {"site-packages.pip._vendor.html5lib._trie.datrie", modulecode_site$$45$packages$pip$_vendor$html5lib$_trie$datrie, 0, 0, },
    {"site-packages.pip._vendor.html5lib._trie.py", modulecode_site$$45$packages$pip$_vendor$html5lib$_trie$py, 0, 0, },
    {"site-packages.pip._vendor.html5lib._utils", modulecode_site$$45$packages$pip$_vendor$html5lib$_utils, 0, 0, },
    {"site-packages.pip._vendor.html5lib.constants", modulecode_site$$45$packages$pip$_vendor$html5lib$constants, 0, 0, },
    {"site-packages.pip._vendor.html5lib.filters", modulecode_site$$45$packages$pip$_vendor$html5lib$filters, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.html5lib.filters.alphabeticalattributes", modulecode_site$$45$packages$pip$_vendor$html5lib$filters$alphabeticalattributes, 0, 0, },
    {"site-packages.pip._vendor.html5lib.filters.base", modulecode_site$$45$packages$pip$_vendor$html5lib$filters$base, 0, 0, },
    {"site-packages.pip._vendor.html5lib.filters.inject_meta_charset", modulecode_site$$45$packages$pip$_vendor$html5lib$filters$inject_meta_charset, 0, 0, },
    {"site-packages.pip._vendor.html5lib.filters.lint", modulecode_site$$45$packages$pip$_vendor$html5lib$filters$lint, 0, 0, },
    {"site-packages.pip._vendor.html5lib.filters.optionaltags", modulecode_site$$45$packages$pip$_vendor$html5lib$filters$optionaltags, 0, 0, },
    {"site-packages.pip._vendor.html5lib.filters.sanitizer", modulecode_site$$45$packages$pip$_vendor$html5lib$filters$sanitizer, 0, 0, },
    {"site-packages.pip._vendor.html5lib.filters.whitespace", modulecode_site$$45$packages$pip$_vendor$html5lib$filters$whitespace, 0, 0, },
    {"site-packages.pip._vendor.html5lib.html5parser", modulecode_site$$45$packages$pip$_vendor$html5lib$html5parser, 0, 0, },
    {"site-packages.pip._vendor.html5lib.serializer", modulecode_site$$45$packages$pip$_vendor$html5lib$serializer, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treeadapters", modulecode_site$$45$packages$pip$_vendor$html5lib$treeadapters, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.html5lib.treeadapters.genshi", modulecode_site$$45$packages$pip$_vendor$html5lib$treeadapters$genshi, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treeadapters.sax", modulecode_site$$45$packages$pip$_vendor$html5lib$treeadapters$sax, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treebuilders", modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.html5lib.treebuilders.base", modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders$base, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treebuilders.dom", modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders$dom, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treebuilders.etree", modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders$etree, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treebuilders.etree_lxml", modulecode_site$$45$packages$pip$_vendor$html5lib$treebuilders$etree_lxml, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treewalkers", modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.html5lib.treewalkers.base", modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$base, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treewalkers.dom", modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$dom, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treewalkers.etree", modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$etree, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treewalkers.etree_lxml", modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$etree_lxml, 0, 0, },
    {"site-packages.pip._vendor.html5lib.treewalkers.genshi", modulecode_site$$45$packages$pip$_vendor$html5lib$treewalkers$genshi, 0, 0, },
    {"site-packages.pip._vendor.idna", modulecode_site$$45$packages$pip$_vendor$idna, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.idna.codec", modulecode_site$$45$packages$pip$_vendor$idna$codec, 0, 0, },
    {"site-packages.pip._vendor.idna.compat", modulecode_site$$45$packages$pip$_vendor$idna$compat, 0, 0, },
    {"site-packages.pip._vendor.idna.core", modulecode_site$$45$packages$pip$_vendor$idna$core, 0, 0, },
    {"site-packages.pip._vendor.idna.idnadata", modulecode_site$$45$packages$pip$_vendor$idna$idnadata, 0, 0, },
    {"site-packages.pip._vendor.idna.intranges", modulecode_site$$45$packages$pip$_vendor$idna$intranges, 0, 0, },
    {"site-packages.pip._vendor.idna.package_data", modulecode_site$$45$packages$pip$_vendor$idna$package_data, 0, 0, },
    {"site-packages.pip._vendor.idna.uts46data", modulecode_site$$45$packages$pip$_vendor$idna$uts46data, 0, 0, },
    {"site-packages.pip._vendor.ipaddress", modulecode_site$$45$packages$pip$_vendor$ipaddress, 0, 0, },
    {"site-packages.pip._vendor.msgpack", modulecode_site$$45$packages$pip$_vendor$msgpack, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.msgpack._version", modulecode_site$$45$packages$pip$_vendor$msgpack$_version, 0, 0, },
    {"site-packages.pip._vendor.msgpack.exceptions", modulecode_site$$45$packages$pip$_vendor$msgpack$exceptions, 0, 0, },
    {"site-packages.pip._vendor.msgpack.fallback", modulecode_site$$45$packages$pip$_vendor$msgpack$fallback, 0, 0, },
    {"site-packages.pip._vendor.packaging", modulecode_site$$45$packages$pip$_vendor$packaging, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.packaging.__about__", modulecode_site$$45$packages$pip$_vendor$packaging$__about__, 0, 0, },
    {"site-packages.pip._vendor.packaging._compat", modulecode_site$$45$packages$pip$_vendor$packaging$_compat, 0, 0, },
    {"site-packages.pip._vendor.packaging._structures", modulecode_site$$45$packages$pip$_vendor$packaging$_structures, 0, 0, },
    {"site-packages.pip._vendor.packaging._typing", modulecode_site$$45$packages$pip$_vendor$packaging$_typing, 0, 0, },
    {"site-packages.pip._vendor.packaging.markers", modulecode_site$$45$packages$pip$_vendor$packaging$markers, 0, 0, },
    {"site-packages.pip._vendor.packaging.requirements", modulecode_site$$45$packages$pip$_vendor$packaging$requirements, 0, 0, },
    {"site-packages.pip._vendor.packaging.specifiers", modulecode_site$$45$packages$pip$_vendor$packaging$specifiers, 0, 0, },
    {"site-packages.pip._vendor.packaging.tags", modulecode_site$$45$packages$pip$_vendor$packaging$tags, 0, 0, },
    {"site-packages.pip._vendor.packaging.utils", modulecode_site$$45$packages$pip$_vendor$packaging$utils, 0, 0, },
    {"site-packages.pip._vendor.packaging.version", modulecode_site$$45$packages$pip$_vendor$packaging$version, 0, 0, },
    {"site-packages.pip._vendor.pep517", modulecode_site$$45$packages$pip$_vendor$pep517, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.pep517._in_process", modulecode_site$$45$packages$pip$_vendor$pep517$_in_process, 0, 0, },
    {"site-packages.pip._vendor.pep517.build", modulecode_site$$45$packages$pip$_vendor$pep517$build, 0, 0, },
    {"site-packages.pip._vendor.pep517.check", modulecode_site$$45$packages$pip$_vendor$pep517$check, 0, 0, },
    {"site-packages.pip._vendor.pep517.colorlog", modulecode_site$$45$packages$pip$_vendor$pep517$colorlog, 0, 0, },
    {"site-packages.pip._vendor.pep517.compat", modulecode_site$$45$packages$pip$_vendor$pep517$compat, 0, 0, },
    {"site-packages.pip._vendor.pep517.dirtools", modulecode_site$$45$packages$pip$_vendor$pep517$dirtools, 0, 0, },
    {"site-packages.pip._vendor.pep517.envbuild", modulecode_site$$45$packages$pip$_vendor$pep517$envbuild, 0, 0, },
    {"site-packages.pip._vendor.pep517.meta", modulecode_site$$45$packages$pip$_vendor$pep517$meta, 0, 0, },
    {"site-packages.pip._vendor.pep517.wrappers", modulecode_site$$45$packages$pip$_vendor$pep517$wrappers, 0, 0, },
    {"site-packages.pip._vendor.pkg_resources", modulecode_site$$45$packages$pip$_vendor$pkg_resources, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.pkg_resources.py31compat", modulecode_site$$45$packages$pip$_vendor$pkg_resources$py31compat, 0, 0, },
    {"site-packages.pip._vendor.progress", modulecode_site$$45$packages$pip$_vendor$progress, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.progress.bar", modulecode_site$$45$packages$pip$_vendor$progress$bar, 0, 0, },
    {"site-packages.pip._vendor.progress.counter", modulecode_site$$45$packages$pip$_vendor$progress$counter, 0, 0, },
    {"site-packages.pip._vendor.progress.spinner", modulecode_site$$45$packages$pip$_vendor$progress$spinner, 0, 0, },
    {"site-packages.pip._vendor.pyparsing", modulecode_site$$45$packages$pip$_vendor$pyparsing, 0, 0, },
    {"site-packages.pip._vendor.pytoml", modulecode_site$$45$packages$pip$_vendor$pytoml, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.pytoml.core", modulecode_site$$45$packages$pip$_vendor$pytoml$core, 0, 0, },
    {"site-packages.pip._vendor.pytoml.parser", modulecode_site$$45$packages$pip$_vendor$pytoml$parser, 0, 0, },
    {"site-packages.pip._vendor.pytoml.test", modulecode_site$$45$packages$pip$_vendor$pytoml$test, 0, 0, },
    {"site-packages.pip._vendor.pytoml.utils", modulecode_site$$45$packages$pip$_vendor$pytoml$utils, 0, 0, },
    {"site-packages.pip._vendor.pytoml.writer", modulecode_site$$45$packages$pip$_vendor$pytoml$writer, 0, 0, },
    {"site-packages.pip._vendor.requests", modulecode_site$$45$packages$pip$_vendor$requests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.requests.__version__", modulecode_site$$45$packages$pip$_vendor$requests$__version__, 0, 0, },
    {"site-packages.pip._vendor.requests._internal_utils", modulecode_site$$45$packages$pip$_vendor$requests$_internal_utils, 0, 0, },
    {"site-packages.pip._vendor.requests.adapters", modulecode_site$$45$packages$pip$_vendor$requests$adapters, 0, 0, },
    {"site-packages.pip._vendor.requests.api", modulecode_site$$45$packages$pip$_vendor$requests$api, 0, 0, },
    {"site-packages.pip._vendor.requests.auth", modulecode_site$$45$packages$pip$_vendor$requests$auth, 0, 0, },
    {"site-packages.pip._vendor.requests.certs", modulecode_site$$45$packages$pip$_vendor$requests$certs, 0, 0, },
    {"site-packages.pip._vendor.requests.compat", modulecode_site$$45$packages$pip$_vendor$requests$compat, 0, 0, },
    {"site-packages.pip._vendor.requests.cookies", modulecode_site$$45$packages$pip$_vendor$requests$cookies, 0, 0, },
    {"site-packages.pip._vendor.requests.exceptions", modulecode_site$$45$packages$pip$_vendor$requests$exceptions, 0, 0, },
    {"site-packages.pip._vendor.requests.help", modulecode_site$$45$packages$pip$_vendor$requests$help, 0, 0, },
    {"site-packages.pip._vendor.requests.hooks", modulecode_site$$45$packages$pip$_vendor$requests$hooks, 0, 0, },
    {"site-packages.pip._vendor.requests.models", modulecode_site$$45$packages$pip$_vendor$requests$models, 0, 0, },
    {"site-packages.pip._vendor.requests.packages", modulecode_site$$45$packages$pip$_vendor$requests$packages, 0, 0, },
    {"site-packages.pip._vendor.requests.sessions", modulecode_site$$45$packages$pip$_vendor$requests$sessions, 0, 0, },
    {"site-packages.pip._vendor.requests.status_codes", modulecode_site$$45$packages$pip$_vendor$requests$status_codes, 0, 0, },
    {"site-packages.pip._vendor.requests.structures", modulecode_site$$45$packages$pip$_vendor$requests$structures, 0, 0, },
    {"site-packages.pip._vendor.requests.utils", modulecode_site$$45$packages$pip$_vendor$requests$utils, 0, 0, },
    {"site-packages.pip._vendor.retrying", modulecode_site$$45$packages$pip$_vendor$retrying, 0, 0, },
    {"site-packages.pip._vendor.six", modulecode_site$$45$packages$pip$_vendor$six, 0, 0, },
    {"site-packages.pip._vendor.urllib3", modulecode_site$$45$packages$pip$_vendor$urllib3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.urllib3._collections", modulecode_site$$45$packages$pip$_vendor$urllib3$_collections, 0, 0, },
    {"site-packages.pip._vendor.urllib3.connection", modulecode_site$$45$packages$pip$_vendor$urllib3$connection, 0, 0, },
    {"site-packages.pip._vendor.urllib3.connectionpool", modulecode_site$$45$packages$pip$_vendor$urllib3$connectionpool, 0, 0, },
    {"site-packages.pip._vendor.urllib3.contrib", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.urllib3.contrib._appengine_environ", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$_appengine_environ, 0, 0, },
    {"site-packages.pip._vendor.urllib3.contrib._securetransport", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$_securetransport, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.urllib3.contrib._securetransport.bindings", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$_securetransport$bindings, 0, 0, },
    {"site-packages.pip._vendor.urllib3.contrib._securetransport.low_level", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$_securetransport$low_level, 0, 0, },
    {"site-packages.pip._vendor.urllib3.contrib.appengine", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$appengine, 0, 0, },
    {"site-packages.pip._vendor.urllib3.contrib.ntlmpool", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$ntlmpool, 0, 0, },
    {"site-packages.pip._vendor.urllib3.contrib.pyopenssl", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$pyopenssl, 0, 0, },
    {"site-packages.pip._vendor.urllib3.contrib.securetransport", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$securetransport, 0, 0, },
    {"site-packages.pip._vendor.urllib3.contrib.socks", modulecode_site$$45$packages$pip$_vendor$urllib3$contrib$socks, 0, 0, },
    {"site-packages.pip._vendor.urllib3.exceptions", modulecode_site$$45$packages$pip$_vendor$urllib3$exceptions, 0, 0, },
    {"site-packages.pip._vendor.urllib3.fields", modulecode_site$$45$packages$pip$_vendor$urllib3$fields, 0, 0, },
    {"site-packages.pip._vendor.urllib3.filepost", modulecode_site$$45$packages$pip$_vendor$urllib3$filepost, 0, 0, },
    {"site-packages.pip._vendor.urllib3.packages", modulecode_site$$45$packages$pip$_vendor$urllib3$packages, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.urllib3.packages.backports", modulecode_site$$45$packages$pip$_vendor$urllib3$packages$backports, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.urllib3.packages.backports.makefile", modulecode_site$$45$packages$pip$_vendor$urllib3$packages$backports$makefile, 0, 0, },
    {"site-packages.pip._vendor.urllib3.packages.six", modulecode_site$$45$packages$pip$_vendor$urllib3$packages$six, 0, 0, },
    {"site-packages.pip._vendor.urllib3.packages.ssl_match_hostname", modulecode_site$$45$packages$pip$_vendor$urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.urllib3.packages.ssl_match_hostname._implementation", modulecode_site$$45$packages$pip$_vendor$urllib3$packages$ssl_match_hostname$_implementation, 0, 0, },
    {"site-packages.pip._vendor.urllib3.poolmanager", modulecode_site$$45$packages$pip$_vendor$urllib3$poolmanager, 0, 0, },
    {"site-packages.pip._vendor.urllib3.request", modulecode_site$$45$packages$pip$_vendor$urllib3$request, 0, 0, },
    {"site-packages.pip._vendor.urllib3.response", modulecode_site$$45$packages$pip$_vendor$urllib3$response, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util", modulecode_site$$45$packages$pip$_vendor$urllib3$util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.urllib3.util.connection", modulecode_site$$45$packages$pip$_vendor$urllib3$util$connection, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util.queue", modulecode_site$$45$packages$pip$_vendor$urllib3$util$queue, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util.request", modulecode_site$$45$packages$pip$_vendor$urllib3$util$request, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util.response", modulecode_site$$45$packages$pip$_vendor$urllib3$util$response, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util.retry", modulecode_site$$45$packages$pip$_vendor$urllib3$util$retry, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util.ssl_", modulecode_site$$45$packages$pip$_vendor$urllib3$util$ssl_, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util.timeout", modulecode_site$$45$packages$pip$_vendor$urllib3$util$timeout, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util.url", modulecode_site$$45$packages$pip$_vendor$urllib3$util$url, 0, 0, },
    {"site-packages.pip._vendor.urllib3.util.wait", modulecode_site$$45$packages$pip$_vendor$urllib3$util$wait, 0, 0, },
    {"site-packages.pip._vendor.webencodings", modulecode_site$$45$packages$pip$_vendor$webencodings, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pip._vendor.webencodings.labels", modulecode_site$$45$packages$pip$_vendor$webencodings$labels, 0, 0, },
    {"site-packages.pip._vendor.webencodings.mklabels", modulecode_site$$45$packages$pip$_vendor$webencodings$mklabels, 0, 0, },
    {"site-packages.pip._vendor.webencodings.tests", modulecode_site$$45$packages$pip$_vendor$webencodings$tests, 0, 0, },
    {"site-packages.pip._vendor.webencodings.x_user_defined", modulecode_site$$45$packages$pip$_vendor$webencodings$x_user_defined, 0, 0, },
    {"site-packages.pkg_resources", modulecode_site$$45$packages$pkg_resources, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pkg_resources._vendor", modulecode_site$$45$packages$pkg_resources$_vendor, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pkg_resources._vendor.appdirs", modulecode_site$$45$packages$pkg_resources$_vendor$appdirs, 0, 0, },
    {"site-packages.pkg_resources._vendor.packaging", modulecode_site$$45$packages$pkg_resources$_vendor$packaging, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pkg_resources._vendor.packaging.__about__", modulecode_site$$45$packages$pkg_resources$_vendor$packaging$__about__, 0, 0, },
    {"site-packages.pkg_resources._vendor.packaging._compat", modulecode_site$$45$packages$pkg_resources$_vendor$packaging$_compat, 0, 0, },
    {"site-packages.pkg_resources._vendor.packaging._structures", modulecode_site$$45$packages$pkg_resources$_vendor$packaging$_structures, 0, 0, },
    {"site-packages.pkg_resources._vendor.packaging.markers", modulecode_site$$45$packages$pkg_resources$_vendor$packaging$markers, 0, 0, },
    {"site-packages.pkg_resources._vendor.packaging.requirements", modulecode_site$$45$packages$pkg_resources$_vendor$packaging$requirements, 0, 0, },
    {"site-packages.pkg_resources._vendor.packaging.specifiers", modulecode_site$$45$packages$pkg_resources$_vendor$packaging$specifiers, 0, 0, },
    {"site-packages.pkg_resources._vendor.packaging.utils", modulecode_site$$45$packages$pkg_resources$_vendor$packaging$utils, 0, 0, },
    {"site-packages.pkg_resources._vendor.packaging.version", modulecode_site$$45$packages$pkg_resources$_vendor$packaging$version, 0, 0, },
    {"site-packages.pkg_resources._vendor.pyparsing", modulecode_site$$45$packages$pkg_resources$_vendor$pyparsing, 0, 0, },
    {"site-packages.pkg_resources._vendor.six", modulecode_site$$45$packages$pkg_resources$_vendor$six, 0, 0, },
    {"site-packages.pkg_resources.extern", modulecode_site$$45$packages$pkg_resources$extern, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pkg_resources.py2_warn", modulecode_site$$45$packages$pkg_resources$py2_warn, 0, 0, },
    {"site-packages.pkg_resources.py31compat", modulecode_site$$45$packages$pkg_resources$py31compat, 0, 0, },
    {"site-packages.pyperclip", modulecode_site$$45$packages$pyperclip, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.pyperclip.__main__", modulecode_site$$45$packages$pyperclip$__main__, 0, 0, },
    {"site-packages.requests", modulecode_site$$45$packages$requests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.requests.__version__", modulecode_site$$45$packages$requests$__version__, 0, 0, },
    {"site-packages.requests._internal_utils", modulecode_site$$45$packages$requests$_internal_utils, 0, 0, },
    {"site-packages.requests.adapters", modulecode_site$$45$packages$requests$adapters, 0, 0, },
    {"site-packages.requests.api", modulecode_site$$45$packages$requests$api, 0, 0, },
    {"site-packages.requests.auth", modulecode_site$$45$packages$requests$auth, 0, 0, },
    {"site-packages.requests.certs", modulecode_site$$45$packages$requests$certs, 0, 0, },
    {"site-packages.requests.compat", modulecode_site$$45$packages$requests$compat, 0, 0, },
    {"site-packages.requests.cookies", modulecode_site$$45$packages$requests$cookies, 0, 0, },
    {"site-packages.requests.exceptions", modulecode_site$$45$packages$requests$exceptions, 0, 0, },
    {"site-packages.requests.help", modulecode_site$$45$packages$requests$help, 0, 0, },
    {"site-packages.requests.hooks", modulecode_site$$45$packages$requests$hooks, 0, 0, },
    {"site-packages.requests.models", modulecode_site$$45$packages$requests$models, 0, 0, },
    {"site-packages.requests.packages", modulecode_site$$45$packages$requests$packages, 0, 0, },
    {"site-packages.requests.sessions", modulecode_site$$45$packages$requests$sessions, 0, 0, },
    {"site-packages.requests.status_codes", modulecode_site$$45$packages$requests$status_codes, 0, 0, },
    {"site-packages.requests.structures", modulecode_site$$45$packages$requests$structures, 0, 0, },
    {"site-packages.requests.utils", modulecode_site$$45$packages$requests$utils, 0, 0, },
    {"site-packages.ruamel", modulecode_site$$45$packages$ruamel, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.ruamel.yaml", modulecode_site$$45$packages$ruamel$yaml, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.ruamel.yaml.anchor", modulecode_site$$45$packages$ruamel$yaml$anchor, 0, 0, },
    {"site-packages.ruamel.yaml.comments", modulecode_site$$45$packages$ruamel$yaml$comments, 0, 0, },
    {"site-packages.ruamel.yaml.compat", modulecode_site$$45$packages$ruamel$yaml$compat, 0, 0, },
    {"site-packages.ruamel.yaml.composer", modulecode_site$$45$packages$ruamel$yaml$composer, 0, 0, },
    {"site-packages.ruamel.yaml.configobjwalker", modulecode_site$$45$packages$ruamel$yaml$configobjwalker, 0, 0, },
    {"site-packages.ruamel.yaml.constructor", modulecode_site$$45$packages$ruamel$yaml$constructor, 0, 0, },
    {"site-packages.ruamel.yaml.cyaml", modulecode_site$$45$packages$ruamel$yaml$cyaml, 0, 0, },
    {"site-packages.ruamel.yaml.dumper", modulecode_site$$45$packages$ruamel$yaml$dumper, 0, 0, },
    {"site-packages.ruamel.yaml.emitter", modulecode_site$$45$packages$ruamel$yaml$emitter, 0, 0, },
    {"site-packages.ruamel.yaml.error", modulecode_site$$45$packages$ruamel$yaml$error, 0, 0, },
    {"site-packages.ruamel.yaml.events", modulecode_site$$45$packages$ruamel$yaml$events, 0, 0, },
    {"site-packages.ruamel.yaml.loader", modulecode_site$$45$packages$ruamel$yaml$loader, 0, 0, },
    {"site-packages.ruamel.yaml.main", modulecode_site$$45$packages$ruamel$yaml$main, 0, 0, },
    {"site-packages.ruamel.yaml.nodes", modulecode_site$$45$packages$ruamel$yaml$nodes, 0, 0, },
    {"site-packages.ruamel.yaml.parser", modulecode_site$$45$packages$ruamel$yaml$parser, 0, 0, },
    {"site-packages.ruamel.yaml.reader", modulecode_site$$45$packages$ruamel$yaml$reader, 0, 0, },
    {"site-packages.ruamel.yaml.representer", modulecode_site$$45$packages$ruamel$yaml$representer, 0, 0, },
    {"site-packages.ruamel.yaml.resolver", modulecode_site$$45$packages$ruamel$yaml$resolver, 0, 0, },
    {"site-packages.ruamel.yaml.scalarbool", modulecode_site$$45$packages$ruamel$yaml$scalarbool, 0, 0, },
    {"site-packages.ruamel.yaml.scalarfloat", modulecode_site$$45$packages$ruamel$yaml$scalarfloat, 0, 0, },
    {"site-packages.ruamel.yaml.scalarint", modulecode_site$$45$packages$ruamel$yaml$scalarint, 0, 0, },
    {"site-packages.ruamel.yaml.scalarstring", modulecode_site$$45$packages$ruamel$yaml$scalarstring, 0, 0, },
    {"site-packages.ruamel.yaml.scanner", modulecode_site$$45$packages$ruamel$yaml$scanner, 0, 0, },
    {"site-packages.ruamel.yaml.serializer", modulecode_site$$45$packages$ruamel$yaml$serializer, 0, 0, },
    {"site-packages.ruamel.yaml.timestamp", modulecode_site$$45$packages$ruamel$yaml$timestamp, 0, 0, },
    {"site-packages.ruamel.yaml.tokens", modulecode_site$$45$packages$ruamel$yaml$tokens, 0, 0, },
    {"site-packages.ruamel.yaml.util", modulecode_site$$45$packages$ruamel$yaml$util, 0, 0, },
    {"site-packages.setuptools", modulecode_site$$45$packages$setuptools, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.setuptools._deprecation_warning", modulecode_site$$45$packages$setuptools$_deprecation_warning, 0, 0, },
    {"site-packages.setuptools._imp", modulecode_site$$45$packages$setuptools$_imp, 0, 0, },
    {"site-packages.setuptools._vendor", modulecode_site$$45$packages$setuptools$_vendor, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.setuptools._vendor.ordered_set", modulecode_site$$45$packages$setuptools$_vendor$ordered_set, 0, 0, },
    {"site-packages.setuptools._vendor.packaging", modulecode_site$$45$packages$setuptools$_vendor$packaging, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.setuptools._vendor.packaging.__about__", modulecode_site$$45$packages$setuptools$_vendor$packaging$__about__, 0, 0, },
    {"site-packages.setuptools._vendor.packaging._compat", modulecode_site$$45$packages$setuptools$_vendor$packaging$_compat, 0, 0, },
    {"site-packages.setuptools._vendor.packaging._structures", modulecode_site$$45$packages$setuptools$_vendor$packaging$_structures, 0, 0, },
    {"site-packages.setuptools._vendor.packaging.markers", modulecode_site$$45$packages$setuptools$_vendor$packaging$markers, 0, 0, },
    {"site-packages.setuptools._vendor.packaging.requirements", modulecode_site$$45$packages$setuptools$_vendor$packaging$requirements, 0, 0, },
    {"site-packages.setuptools._vendor.packaging.specifiers", modulecode_site$$45$packages$setuptools$_vendor$packaging$specifiers, 0, 0, },
    {"site-packages.setuptools._vendor.packaging.tags", modulecode_site$$45$packages$setuptools$_vendor$packaging$tags, 0, 0, },
    {"site-packages.setuptools._vendor.packaging.utils", modulecode_site$$45$packages$setuptools$_vendor$packaging$utils, 0, 0, },
    {"site-packages.setuptools._vendor.packaging.version", modulecode_site$$45$packages$setuptools$_vendor$packaging$version, 0, 0, },
    {"site-packages.setuptools._vendor.pyparsing", modulecode_site$$45$packages$setuptools$_vendor$pyparsing, 0, 0, },
    {"site-packages.setuptools._vendor.six", modulecode_site$$45$packages$setuptools$_vendor$six, 0, 0, },
    {"site-packages.setuptools.archive_util", modulecode_site$$45$packages$setuptools$archive_util, 0, 0, },
    {"site-packages.setuptools.build_meta", modulecode_site$$45$packages$setuptools$build_meta, 0, 0, },
    {"site-packages.setuptools.command", modulecode_site$$45$packages$setuptools$command, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.setuptools.command.alias", modulecode_site$$45$packages$setuptools$command$alias, 0, 0, },
    {"site-packages.setuptools.command.bdist_egg", modulecode_site$$45$packages$setuptools$command$bdist_egg, 0, 0, },
    {"site-packages.setuptools.command.bdist_rpm", modulecode_site$$45$packages$setuptools$command$bdist_rpm, 0, 0, },
    {"site-packages.setuptools.command.bdist_wininst", modulecode_site$$45$packages$setuptools$command$bdist_wininst, 0, 0, },
    {"site-packages.setuptools.command.build_clib", modulecode_site$$45$packages$setuptools$command$build_clib, 0, 0, },
    {"site-packages.setuptools.command.build_ext", modulecode_site$$45$packages$setuptools$command$build_ext, 0, 0, },
    {"site-packages.setuptools.command.build_py", modulecode_site$$45$packages$setuptools$command$build_py, 0, 0, },
    {"site-packages.setuptools.command.develop", modulecode_site$$45$packages$setuptools$command$develop, 0, 0, },
    {"site-packages.setuptools.command.dist_info", modulecode_site$$45$packages$setuptools$command$dist_info, 0, 0, },
    {"site-packages.setuptools.command.easy_install", modulecode_site$$45$packages$setuptools$command$easy_install, 0, 0, },
    {"site-packages.setuptools.command.egg_info", modulecode_site$$45$packages$setuptools$command$egg_info, 0, 0, },
    {"site-packages.setuptools.command.install", modulecode_site$$45$packages$setuptools$command$install, 0, 0, },
    {"site-packages.setuptools.command.install_egg_info", modulecode_site$$45$packages$setuptools$command$install_egg_info, 0, 0, },
    {"site-packages.setuptools.command.install_lib", modulecode_site$$45$packages$setuptools$command$install_lib, 0, 0, },
    {"site-packages.setuptools.command.install_scripts", modulecode_site$$45$packages$setuptools$command$install_scripts, 0, 0, },
    {"site-packages.setuptools.command.py36compat", modulecode_site$$45$packages$setuptools$command$py36compat, 0, 0, },
    {"site-packages.setuptools.command.register", modulecode_site$$45$packages$setuptools$command$register, 0, 0, },
    {"site-packages.setuptools.command.rotate", modulecode_site$$45$packages$setuptools$command$rotate, 0, 0, },
    {"site-packages.setuptools.command.saveopts", modulecode_site$$45$packages$setuptools$command$saveopts, 0, 0, },
    {"site-packages.setuptools.command.sdist", modulecode_site$$45$packages$setuptools$command$sdist, 0, 0, },
    {"site-packages.setuptools.command.setopt", modulecode_site$$45$packages$setuptools$command$setopt, 0, 0, },
    {"site-packages.setuptools.command.test", modulecode_site$$45$packages$setuptools$command$test, 0, 0, },
    {"site-packages.setuptools.command.upload", modulecode_site$$45$packages$setuptools$command$upload, 0, 0, },
    {"site-packages.setuptools.command.upload_docs", modulecode_site$$45$packages$setuptools$command$upload_docs, 0, 0, },
    {"site-packages.setuptools.config", modulecode_site$$45$packages$setuptools$config, 0, 0, },
    {"site-packages.setuptools.dep_util", modulecode_site$$45$packages$setuptools$dep_util, 0, 0, },
    {"site-packages.setuptools.depends", modulecode_site$$45$packages$setuptools$depends, 0, 0, },
    {"site-packages.setuptools.dist", modulecode_site$$45$packages$setuptools$dist, 0, 0, },
    {"site-packages.setuptools.errors", modulecode_site$$45$packages$setuptools$errors, 0, 0, },
    {"site-packages.setuptools.extension", modulecode_site$$45$packages$setuptools$extension, 0, 0, },
    {"site-packages.setuptools.extern", modulecode_site$$45$packages$setuptools$extern, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.setuptools.glob", modulecode_site$$45$packages$setuptools$glob, 0, 0, },
    {"site-packages.setuptools.installer", modulecode_site$$45$packages$setuptools$installer, 0, 0, },
    {"site-packages.setuptools.launch", modulecode_site$$45$packages$setuptools$launch, 0, 0, },
    {"site-packages.setuptools.lib2to3_ex", modulecode_site$$45$packages$setuptools$lib2to3_ex, 0, 0, },
    {"site-packages.setuptools.monkey", modulecode_site$$45$packages$setuptools$monkey, 0, 0, },
    {"site-packages.setuptools.msvc", modulecode_site$$45$packages$setuptools$msvc, 0, 0, },
    {"site-packages.setuptools.namespaces", modulecode_site$$45$packages$setuptools$namespaces, 0, 0, },
    {"site-packages.setuptools.package_index", modulecode_site$$45$packages$setuptools$package_index, 0, 0, },
    {"site-packages.setuptools.py27compat", modulecode_site$$45$packages$setuptools$py27compat, 0, 0, },
    {"site-packages.setuptools.py31compat", modulecode_site$$45$packages$setuptools$py31compat, 0, 0, },
    {"site-packages.setuptools.py33compat", modulecode_site$$45$packages$setuptools$py33compat, 0, 0, },
    {"site-packages.setuptools.py34compat", modulecode_site$$45$packages$setuptools$py34compat, 0, 0, },
    {"site-packages.setuptools.sandbox", modulecode_site$$45$packages$setuptools$sandbox, 0, 0, },
    {"site-packages.setuptools.site-patch", modulecode_site$$45$packages$setuptools$site$$45$patch, 0, 0, },
    {"site-packages.setuptools.ssl_support", modulecode_site$$45$packages$setuptools$ssl_support, 0, 0, },
    {"site-packages.setuptools.unicode_utils", modulecode_site$$45$packages$setuptools$unicode_utils, 0, 0, },
    {"site-packages.setuptools.version", modulecode_site$$45$packages$setuptools$version, 0, 0, },
    {"site-packages.setuptools.wheel", modulecode_site$$45$packages$setuptools$wheel, 0, 0, },
    {"site-packages.setuptools.windows_support", modulecode_site$$45$packages$setuptools$windows_support, 0, 0, },
    {"site-packages.urllib3", modulecode_site$$45$packages$urllib3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.urllib3._collections", modulecode_site$$45$packages$urllib3$_collections, 0, 0, },
    {"site-packages.urllib3.connection", modulecode_site$$45$packages$urllib3$connection, 0, 0, },
    {"site-packages.urllib3.connectionpool", modulecode_site$$45$packages$urllib3$connectionpool, 0, 0, },
    {"site-packages.urllib3.contrib", modulecode_site$$45$packages$urllib3$contrib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.urllib3.contrib._appengine_environ", modulecode_site$$45$packages$urllib3$contrib$_appengine_environ, 0, 0, },
    {"site-packages.urllib3.contrib._securetransport", modulecode_site$$45$packages$urllib3$contrib$_securetransport, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.urllib3.contrib._securetransport.bindings", modulecode_site$$45$packages$urllib3$contrib$_securetransport$bindings, 0, 0, },
    {"site-packages.urllib3.contrib._securetransport.low_level", modulecode_site$$45$packages$urllib3$contrib$_securetransport$low_level, 0, 0, },
    {"site-packages.urllib3.contrib.appengine", modulecode_site$$45$packages$urllib3$contrib$appengine, 0, 0, },
    {"site-packages.urllib3.contrib.ntlmpool", modulecode_site$$45$packages$urllib3$contrib$ntlmpool, 0, 0, },
    {"site-packages.urllib3.contrib.pyopenssl", modulecode_site$$45$packages$urllib3$contrib$pyopenssl, 0, 0, },
    {"site-packages.urllib3.contrib.securetransport", modulecode_site$$45$packages$urllib3$contrib$securetransport, 0, 0, },
    {"site-packages.urllib3.contrib.socks", modulecode_site$$45$packages$urllib3$contrib$socks, 0, 0, },
    {"site-packages.urllib3.exceptions", modulecode_site$$45$packages$urllib3$exceptions, 0, 0, },
    {"site-packages.urllib3.fields", modulecode_site$$45$packages$urllib3$fields, 0, 0, },
    {"site-packages.urllib3.filepost", modulecode_site$$45$packages$urllib3$filepost, 0, 0, },
    {"site-packages.urllib3.packages", modulecode_site$$45$packages$urllib3$packages, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.urllib3.packages.backports", modulecode_site$$45$packages$urllib3$packages$backports, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.urllib3.packages.backports.makefile", modulecode_site$$45$packages$urllib3$packages$backports$makefile, 0, 0, },
    {"site-packages.urllib3.packages.six", modulecode_site$$45$packages$urllib3$packages$six, 0, 0, },
    {"site-packages.urllib3.packages.ssl_match_hostname", modulecode_site$$45$packages$urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.urllib3.packages.ssl_match_hostname._implementation", modulecode_site$$45$packages$urllib3$packages$ssl_match_hostname$_implementation, 0, 0, },
    {"site-packages.urllib3.poolmanager", modulecode_site$$45$packages$urllib3$poolmanager, 0, 0, },
    {"site-packages.urllib3.request", modulecode_site$$45$packages$urllib3$request, 0, 0, },
    {"site-packages.urllib3.response", modulecode_site$$45$packages$urllib3$response, 0, 0, },
    {"site-packages.urllib3.util", modulecode_site$$45$packages$urllib3$util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.urllib3.util.connection", modulecode_site$$45$packages$urllib3$util$connection, 0, 0, },
    {"site-packages.urllib3.util.queue", modulecode_site$$45$packages$urllib3$util$queue, 0, 0, },
    {"site-packages.urllib3.util.request", modulecode_site$$45$packages$urllib3$util$request, 0, 0, },
    {"site-packages.urllib3.util.response", modulecode_site$$45$packages$urllib3$util$response, 0, 0, },
    {"site-packages.urllib3.util.retry", modulecode_site$$45$packages$urllib3$util$retry, 0, 0, },
    {"site-packages.urllib3.util.ssl_", modulecode_site$$45$packages$urllib3$util$ssl_, 0, 0, },
    {"site-packages.urllib3.util.timeout", modulecode_site$$45$packages$urllib3$util$timeout, 0, 0, },
    {"site-packages.urllib3.util.url", modulecode_site$$45$packages$urllib3$util$url, 0, 0, },
    {"site-packages.urllib3.util.wait", modulecode_site$$45$packages$urllib3$util$wait, 0, 0, },
    {"site-packages.wheel", modulecode_site$$45$packages$wheel, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.wheel.__main__", modulecode_site$$45$packages$wheel$__main__, 0, 0, },
    {"site-packages.wheel._version", modulecode_site$$45$packages$wheel$_version, 0, 0, },
    {"site-packages.wheel.bdist_wheel", modulecode_site$$45$packages$wheel$bdist_wheel, 0, 0, },
    {"site-packages.wheel.cli", modulecode_site$$45$packages$wheel$cli, 0, 0, NUITKA_PACKAGE_FLAG},
    {"site-packages.wheel.cli.convert", modulecode_site$$45$packages$wheel$cli$convert, 0, 0, },
    {"site-packages.wheel.cli.install", modulecode_site$$45$packages$wheel$cli$install, 0, 0, },
    {"site-packages.wheel.cli.pack", modulecode_site$$45$packages$wheel$cli$pack, 0, 0, },
    {"site-packages.wheel.cli.unpack", modulecode_site$$45$packages$wheel$cli$unpack, 0, 0, },
    {"site-packages.wheel.macosx_libfile", modulecode_site$$45$packages$wheel$macosx_libfile, 0, 0, },
    {"site-packages.wheel.metadata", modulecode_site$$45$packages$wheel$metadata, 0, 0, },
    {"site-packages.wheel.pep425tags", modulecode_site$$45$packages$wheel$pep425tags, 0, 0, },
    {"site-packages.wheel.pkginfo", modulecode_site$$45$packages$wheel$pkginfo, 0, 0, },
    {"site-packages.wheel.util", modulecode_site$$45$packages$wheel$util, 0, 0, },
    {"site-packages.wheel.wheelfile", modulecode_site$$45$packages$wheel$wheelfile, 0, 0, },
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"virtualMachine", modulecode_virtualMachine, 0, 0, },
    {"volumesGrid", modulecode_volumesGrid, 0, 0, },
    {"wheel", NULL, 2746461, 186, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wheel.cli", NULL, 2746647, 3028, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

void setupMetaPathBasedLoader(void) {
    static bool init_done = false;

    if (init_done == false)
    {
        registerMetaPathBasedUnfreezer(meta_path_loader_entries);
        init_done = true;
    }
}
