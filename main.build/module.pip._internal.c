/* Generated code for Python module 'pip._internal'
 * created by Nuitka version 0.6.7
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_pip$_internal" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pip$_internal;
PyDictObject *moduledict_pip$_internal;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_digest_26a1468b16098c6893c39d923fe28bc6;
extern PyObject *const_tuple_str_plain_args_str_plain__wrapper_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_main;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_a6676f64ba7ba986ef4a5b8a020b9815;
extern PyObject *const_int_0;
static PyObject *const_str_digest_5530fb7c1e01aedcdbcbec5a8323b946;
extern PyObject *const_str_plain_pip;
extern PyObject *const_tuple_str_plain_Optional_str_plain_List_tuple;
extern PyObject *const_list_str_digest_a6676f64ba7ba986ef4a5b8a020b9815_list;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain__wrapper_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_tuple_str_plain_MYPY_CHECK_RUNNING_tuple;
extern PyObject *const_str_plain_Optional;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_List;
extern PyObject *const_str_plain_MYPY_CHECK_RUNNING;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_digest_b9f06f66cb065b3c56dd7513b961b39c;
extern PyObject *const_str_digest_84da31fe0349e4172f8bbe00424153a5;
extern PyObject *const_str_plain__wrapper;
extern PyObject *const_str_digest_6fcba234fc2ea8cf1ccf8de288eb167e;
extern PyObject *const_str_digest_ba13d0aefba45886898aee53633f218d;
extern PyObject *const_str_plain_typing;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_5530fb7c1e01aedcdbcbec5a8323b946 = UNSTREAM_STRING_ASCII(&constant_bin[ 212345 ], 22, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_internal(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_15d5926ffeb1726cc56e6ab7eb2a1bce;
static PyCodeObject *codeobj_f0d081b09162c188a4412cf773f8fd2f;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_ba13d0aefba45886898aee53633f218d;
    codeobj_15d5926ffeb1726cc56e6ab7eb2a1bce = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_5530fb7c1e01aedcdbcbec5a8323b946, const_tuple_empty, 0, 0, 0);
    codeobj_f0d081b09162c188a4412cf773f8fd2f = MAKE_CODEOBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_main, const_tuple_str_plain_args_str_plain__wrapper_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pip$_internal$$$function_1_main(PyObject *defaults);


// The module function definitions.
static PyObject *impl_pip$_internal$$$function_1_main(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *var__wrapper = NULL;
    struct Nuitka_FrameObject *frame_f0d081b09162c188a4412cf773f8fd2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f0d081b09162c188a4412cf773f8fd2f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_f0d081b09162c188a4412cf773f8fd2f, codeobj_f0d081b09162c188a4412cf773f8fd2f, module_pip$_internal, sizeof(void *)+sizeof(void *));
    frame_f0d081b09162c188a4412cf773f8fd2f = cache_frame_f0d081b09162c188a4412cf773f8fd2f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f0d081b09162c188a4412cf773f8fd2f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f0d081b09162c188a4412cf773f8fd2f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_b9f06f66cb065b3c56dd7513b961b39c;
        tmp_globals_name_1 = (PyObject *)moduledict_pip$_internal;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain__wrapper_tuple;
        tmp_level_name_1 = const_int_0;
        frame_f0d081b09162c188a4412cf773f8fd2f->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain__wrapper);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__wrapper == NULL);
        var__wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var__wrapper);
        tmp_called_name_1 = var__wrapper;
        CHECK_OBJECT(par_args);
        tmp_args_element_name_1 = par_args;
        frame_f0d081b09162c188a4412cf773f8fd2f->m_frame.f_lineno = 18;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0d081b09162c188a4412cf773f8fd2f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0d081b09162c188a4412cf773f8fd2f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0d081b09162c188a4412cf773f8fd2f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0d081b09162c188a4412cf773f8fd2f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f0d081b09162c188a4412cf773f8fd2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0d081b09162c188a4412cf773f8fd2f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f0d081b09162c188a4412cf773f8fd2f,
        type_description_1,
        par_args,
        var__wrapper
    );


    // Release cached frame.
    if (frame_f0d081b09162c188a4412cf773f8fd2f == cache_frame_f0d081b09162c188a4412cf773f8fd2f) {
        Py_DECREF(frame_f0d081b09162c188a4412cf773f8fd2f);
    }
    cache_frame_f0d081b09162c188a4412cf773f8fd2f = NULL;

    assertFrameObject(frame_f0d081b09162c188a4412cf773f8fd2f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(pip$_internal$$$function_1_main);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var__wrapper);
    Py_DECREF(var__wrapper);
    var__wrapper = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var__wrapper);
    var__wrapper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(pip$_internal$$$function_1_main);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pip$_internal$$$function_1_main(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pip$_internal$$$function_1_main,
        const_str_plain_main,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f0d081b09162c188a4412cf773f8fd2f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pip$_internal,
        const_str_digest_6fcba234fc2ea8cf1ccf8de288eb167e,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_internal =
{
    PyModuleDef_HEAD_INIT,
    NULL,                /* m_name, filled later */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_pip$_internal[] = {
    impl_pip$_internal$$$function_1_main,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyErr_Format(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pip$_internal;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyErr_Format(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pip$_internal) || offset < 0) {
        PyErr_Format(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pip$_internal[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pip$_internal,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pip$_internal(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_pip$_internal;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("pip._internal: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pip._internal: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pip._internal: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpip$_internal\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_internal = Py_InitModule4(
        module_full_name,        // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    mdef_pip$_internal.m_name = module_full_name;
    module_pip$_internal = PyModule_Create(&mdef_pip$_internal);
#endif

    moduledict_pip$_internal = MODULE_DICT(module_pip$_internal);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL)
        {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SetItem(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SetItem(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pip$_internal,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pip$_internal,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pip$_internal,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_pip$_internal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_pip$_internal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pip$_internal);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_pip$_internal);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___name__),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF(module_spec_class);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 1
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_15d5926ffeb1726cc56e6ab7eb2a1bce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_ba13d0aefba45886898aee53633f218d;
        UPDATE_STRING_DICT0(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_digest_a6676f64ba7ba986ef4a5b8a020b9815_list);
        UPDATE_STRING_DICT1(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_15d5926ffeb1726cc56e6ab7eb2a1bce = MAKE_MODULE_FRAME(codeobj_15d5926ffeb1726cc56e6ab7eb2a1bce, module_pip$_internal);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_15d5926ffeb1726cc56e6ab7eb2a1bce);
    assert(Py_REFCNT(frame_15d5926ffeb1726cc56e6ab7eb2a1bce) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_ba13d0aefba45886898aee53633f218d;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_84da31fe0349e4172f8bbe00424153a5;
        tmp_globals_name_1 = (PyObject *)moduledict_pip$_internal;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_15d5926ffeb1726cc56e6ab7eb2a1bce->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain_pip, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_26a1468b16098c6893c39d923fe28bc6;
        tmp_globals_name_2 = (PyObject *)moduledict_pip$_internal;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_MYPY_CHECK_RUNNING_tuple;
        tmp_level_name_2 = const_int_0;
        frame_15d5926ffeb1726cc56e6ab7eb2a1bce->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_MYPY_CHECK_RUNNING);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain_MYPY_CHECK_RUNNING, tmp_assign_source_6);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain_MYPY_CHECK_RUNNING);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MYPY_CHECK_RUNNING);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_name_name_3;
            PyObject *tmp_globals_name_3;
            PyObject *tmp_locals_name_3;
            PyObject *tmp_fromlist_name_3;
            PyObject *tmp_level_name_3;
            tmp_name_name_3 = const_str_plain_typing;
            tmp_globals_name_3 = (PyObject *)moduledict_pip$_internal;
            tmp_locals_name_3 = Py_None;
            tmp_fromlist_name_3 = const_tuple_str_plain_Optional_str_plain_List_tuple;
            tmp_level_name_3 = const_int_0;
            frame_15d5926ffeb1726cc56e6ab7eb2a1bce->m_frame.f_lineno = 6;
            tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto frame_exception_exit_1;
            }
            assert(tmp_import_from_1__module == NULL);
            tmp_import_from_1__module = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_import_name_from_2;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_2 = tmp_import_from_1__module;
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_Optional);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain_Optional, tmp_assign_source_8);
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_import_name_from_3;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_3 = tmp_import_from_1__module;
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_List);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain_List, tmp_assign_source_9);
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
        Py_DECREF(tmp_import_from_1__module);
        tmp_import_from_1__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
        Py_DECREF(tmp_import_from_1__module);
        tmp_import_from_1__module = NULL;

        branch_no_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15d5926ffeb1726cc56e6ab7eb2a1bce);
#endif
    popFrameStack();

    assertFrameObject(frame_15d5926ffeb1726cc56e6ab7eb2a1bce);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15d5926ffeb1726cc56e6ab7eb2a1bce);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_15d5926ffeb1726cc56e6ab7eb2a1bce, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_15d5926ffeb1726cc56e6ab7eb2a1bce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15d5926ffeb1726cc56e6ab7eb2a1bce, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_10 = MAKE_FUNCTION_pip$_internal$$$function_1_main(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_pip$_internal, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_10);
    }

    return module_pip$_internal;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
