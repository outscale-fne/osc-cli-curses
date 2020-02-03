/* Generated code for Python module 'pip._vendor.html5lib.treebuilders'
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

/* The "_module_pip$_vendor$html5lib$treebuilders" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pip$_vendor$html5lib$treebuilders;
PyDictObject *moduledict_pip$_vendor$html5lib$treebuilders;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_digest_fcd298b0b457c2e16b17ce0875dee677;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_treeType;
extern PyObject *const_str_plain_lxml;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_etree_tuple;
extern PyObject *const_str_plain_etree;
extern PyObject *const_int_0;
extern PyObject *const_tuple_71e079c707cf8157794a464706859a24_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain__utils;
static PyObject *const_str_digest_6fd5276ded082d87b52e0de89d5f2017;
extern PyObject *const_str_plain_getETreeModule;
extern PyObject *const_str_plain_TreeBuilder;
extern PyObject *const_str_digest_4373f01b7ee88b7b93c83cf3d0547222;
extern PyObject *const_tuple_str_plain_minidom_tuple;
extern PyObject *const_tuple_str_plain_etree_lxml_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_dom;
extern PyObject *const_str_digest_c487580c3465cc8df6a9bfea86515ebb;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_minidom;
extern PyObject *const_str_digest_686e0da4e0a4d965cf89063db3410ec0;
extern PyObject *const_tuple_str_plain_dom_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_str_plain_default_etree_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_list_str_digest_c487580c3465cc8df6a9bfea86515ebb_list;
extern PyObject *const_str_plain_getDomModule;
extern PyObject *const_str_plain_etree_lxml;
extern PyObject *const_str_plain_default_etree;
extern PyObject *const_str_plain_getTreeBuilder;
extern PyObject *const_str_digest_8dd0c0992f8da622dfce2e2fc5195478;
extern PyObject *const_str_digest_220d6e7337dc1ec3b15d3d50653ebf6a;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_implementation;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_treeBuilderCache;
extern PyObject *const_str_plain_lower;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_6fd5276ded082d87b52e0de89d5f2017 = UNSTREAM_STRING_ASCII(&constant_bin[ 212747 ], 42, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$html5lib$treebuilders(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_629b85ad5a0990ae5ac46ed2cac0eb02;
static PyCodeObject *codeobj_4884412cf7583151cd7d00b8f7e8b241;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_4373f01b7ee88b7b93c83cf3d0547222;
    codeobj_629b85ad5a0990ae5ac46ed2cac0eb02 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_digest_6fd5276ded082d87b52e0de89d5f2017, const_tuple_empty, 0, 0, 0);
    codeobj_4884412cf7583151cd7d00b8f7e8b241 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_getTreeBuilder, const_tuple_71e079c707cf8157794a464706859a24_tuple, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pip$_vendor$html5lib$treebuilders$$$function_1_getTreeBuilder(PyObject *defaults);


// The module function definitions.
static PyObject *impl_pip$_vendor$html5lib$treebuilders$$$function_1_getTreeBuilder(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_treeType = python_pars[0];
    PyObject *par_implementation = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_dom = NULL;
    PyObject *var_minidom = NULL;
    PyObject *var_etree_lxml = NULL;
    PyObject *var_etree = NULL;
    struct Nuitka_FrameObject *frame_4884412cf7583151cd7d00b8f7e8b241;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4884412cf7583151cd7d00b8f7e8b241 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_4884412cf7583151cd7d00b8f7e8b241, codeobj_4884412cf7583151cd7d00b8f7e8b241, module_pip$_vendor$html5lib$treebuilders, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_4884412cf7583151cd7d00b8f7e8b241 = cache_frame_4884412cf7583151cd7d00b8f7e8b241;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4884412cf7583151cd7d00b8f7e8b241);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4884412cf7583151cd7d00b8f7e8b241) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_treeType);
        tmp_called_instance_1 = par_treeType;
        frame_4884412cf7583151cd7d00b8f7e8b241->m_frame.f_lineno = 67;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_lower);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_treeType;
            assert(old != NULL);
            par_treeType = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_treeType);
        tmp_compexpr_left_1 = par_treeType;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_treeBuilderCache);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_treeBuilderCache);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1601 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(par_treeType);
            tmp_compexpr_left_2 = par_treeType;
            tmp_compexpr_right_2 = const_str_plain_dom;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_import_name_from_1;
                PyObject *tmp_name_name_1;
                PyObject *tmp_globals_name_1;
                PyObject *tmp_locals_name_1;
                PyObject *tmp_fromlist_name_1;
                PyObject *tmp_level_name_1;
                tmp_name_name_1 = const_str_empty;
                tmp_globals_name_1 = (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders;
                tmp_locals_name_1 = Py_None;
                tmp_fromlist_name_1 = const_tuple_str_plain_dom_tuple;
                tmp_level_name_1 = const_int_pos_1;
                frame_4884412cf7583151cd7d00b8f7e8b241->m_frame.f_lineno = 70;
                tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
                if (tmp_import_name_from_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                if (PyModule_Check(tmp_import_name_from_1)) {
                   tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                        tmp_import_name_from_1,
                        (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders,
                        const_str_plain_dom,
                        const_int_pos_1
                    );
                } else {
                   tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_dom);
                }

                Py_DECREF(tmp_import_name_from_1);
                if (tmp_assign_source_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                assert(var_dom == NULL);
                var_dom = tmp_assign_source_2;
            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT(par_implementation);
                tmp_compexpr_left_3 = par_implementation;
                tmp_compexpr_right_3 = Py_None;
                tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    PyObject *tmp_assign_source_3;
                    PyObject *tmp_import_name_from_2;
                    PyObject *tmp_name_name_2;
                    PyObject *tmp_globals_name_2;
                    PyObject *tmp_locals_name_2;
                    PyObject *tmp_fromlist_name_2;
                    PyObject *tmp_level_name_2;
                    tmp_name_name_2 = const_str_digest_686e0da4e0a4d965cf89063db3410ec0;
                    tmp_globals_name_2 = (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders;
                    tmp_locals_name_2 = Py_None;
                    tmp_fromlist_name_2 = const_tuple_str_plain_minidom_tuple;
                    tmp_level_name_2 = const_int_0;
                    frame_4884412cf7583151cd7d00b8f7e8b241->m_frame.f_lineno = 73;
                    tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
                    if (tmp_import_name_from_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_minidom);
                    Py_DECREF(tmp_import_name_from_2);
                    if (tmp_assign_source_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert(var_minidom == NULL);
                    var_minidom = tmp_assign_source_3;
                }
                {
                    PyObject *tmp_assign_source_4;
                    CHECK_OBJECT(var_minidom);
                    tmp_assign_source_4 = var_minidom;
                    {
                        PyObject *old = par_implementation;
                        assert(old != NULL);
                        par_implementation = tmp_assign_source_4;
                        Py_INCREF(par_implementation);
                        Py_DECREF(old);
                    }

                }
                branch_no_3:;
            }
            {
                PyObject *tmp_source_name_1;
                PyObject *tmp_dircall_arg1_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_dircall_arg2_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_dircall_arg3_1;
                CHECK_OBJECT(var_dom);
                tmp_source_name_2 = var_dom;
                tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_getDomModule);
                if (tmp_dircall_arg1_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_implementation);
                tmp_tuple_element_1 = par_implementation;
                tmp_dircall_arg2_1 = PyTuple_New(1);
                Py_INCREF(tmp_tuple_element_1);
                PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(par_kwargs);
                tmp_dircall_arg3_1 = par_kwargs;
                Py_INCREF(tmp_dircall_arg3_1);

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                    tmp_source_name_1 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict(dir_call_args);
                }
                if (tmp_source_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_TreeBuilder);
                Py_DECREF(tmp_source_name_1);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT(par_treeType);
                tmp_compexpr_left_4 = par_treeType;
                tmp_compexpr_right_4 = const_str_plain_lxml;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_4;
                } else {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_import_name_from_3;
                    PyObject *tmp_name_name_3;
                    PyObject *tmp_globals_name_3;
                    PyObject *tmp_locals_name_3;
                    PyObject *tmp_fromlist_name_3;
                    PyObject *tmp_level_name_3;
                    tmp_name_name_3 = const_str_empty;
                    tmp_globals_name_3 = (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders;
                    tmp_locals_name_3 = Py_None;
                    tmp_fromlist_name_3 = const_tuple_str_plain_etree_lxml_tuple;
                    tmp_level_name_3 = const_int_pos_1;
                    frame_4884412cf7583151cd7d00b8f7e8b241->m_frame.f_lineno = 78;
                    tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
                    if (tmp_import_name_from_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    if (PyModule_Check(tmp_import_name_from_3)) {
                       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                            tmp_import_name_from_3,
                            (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders,
                            const_str_plain_etree_lxml,
                            const_int_pos_1
                        );
                    } else {
                       tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_etree_lxml);
                    }

                    Py_DECREF(tmp_import_name_from_3);
                    if (tmp_assign_source_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert(var_etree_lxml == NULL);
                    var_etree_lxml = tmp_assign_source_5;
                }
                {
                    PyObject *tmp_ass_subvalue_1;
                    PyObject *tmp_source_name_3;
                    PyObject *tmp_ass_subscribed_1;
                    PyObject *tmp_mvar_value_2;
                    PyObject *tmp_ass_subscript_1;
                    CHECK_OBJECT(var_etree_lxml);
                    tmp_source_name_3 = var_etree_lxml;
                    tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_TreeBuilder);
                    if (tmp_ass_subvalue_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 79;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_treeBuilderCache);

                    if (unlikely(tmp_mvar_value_2 == NULL)) {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_treeBuilderCache);
                    }

                    if (tmp_mvar_value_2 == NULL) {
                        Py_DECREF(tmp_ass_subvalue_1);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 1601 ], 38, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 79;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_ass_subscribed_1 = tmp_mvar_value_2;
                    CHECK_OBJECT(par_treeType);
                    tmp_ass_subscript_1 = par_treeType;
                    tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
                    Py_DECREF(tmp_ass_subvalue_1);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 79;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    CHECK_OBJECT(par_treeType);
                    tmp_compexpr_left_5 = par_treeType;
                    tmp_compexpr_right_5 = const_str_plain_etree;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 80;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_5;
                    } else {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_assign_source_6;
                        PyObject *tmp_import_name_from_4;
                        PyObject *tmp_name_name_4;
                        PyObject *tmp_globals_name_4;
                        PyObject *tmp_locals_name_4;
                        PyObject *tmp_fromlist_name_4;
                        PyObject *tmp_level_name_4;
                        tmp_name_name_4 = const_str_empty;
                        tmp_globals_name_4 = (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders;
                        tmp_locals_name_4 = Py_None;
                        tmp_fromlist_name_4 = const_tuple_str_plain_etree_tuple;
                        tmp_level_name_4 = const_int_pos_1;
                        frame_4884412cf7583151cd7d00b8f7e8b241->m_frame.f_lineno = 81;
                        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
                        if (tmp_import_name_from_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        if (PyModule_Check(tmp_import_name_from_4)) {
                           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                                tmp_import_name_from_4,
                                (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders,
                                const_str_plain_etree,
                                const_int_pos_1
                            );
                        } else {
                           tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_etree);
                        }

                        Py_DECREF(tmp_import_name_from_4);
                        if (tmp_assign_source_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert(var_etree == NULL);
                        var_etree = tmp_assign_source_6;
                    }
                    {
                        nuitka_bool tmp_condition_result_6;
                        PyObject *tmp_compexpr_left_6;
                        PyObject *tmp_compexpr_right_6;
                        CHECK_OBJECT(par_implementation);
                        tmp_compexpr_left_6 = par_implementation;
                        tmp_compexpr_right_6 = Py_None;
                        tmp_condition_result_6 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_6;
                        } else {
                            goto branch_no_6;
                        }
                        branch_yes_6:;
                        {
                            PyObject *tmp_assign_source_7;
                            PyObject *tmp_mvar_value_3;
                            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_default_etree);

                            if (unlikely(tmp_mvar_value_3 == NULL)) {
                                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_default_etree);
                            }

                            if (tmp_mvar_value_3 == NULL) {

                                exception_type = PyExc_NameError;
                                Py_INCREF(exception_type);
                                exception_value = UNSTREAM_STRING(&constant_bin[ 1639 ], 35, 0);
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                                CHAIN_EXCEPTION(exception_value);

                                exception_lineno = 83;
                                type_description_1 = "ooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_assign_source_7 = tmp_mvar_value_3;
                            {
                                PyObject *old = par_implementation;
                                assert(old != NULL);
                                par_implementation = tmp_assign_source_7;
                                Py_INCREF(par_implementation);
                                Py_DECREF(old);
                            }

                        }
                        branch_no_6:;
                    }
                    {
                        PyObject *tmp_source_name_4;
                        PyObject *tmp_dircall_arg1_2;
                        PyObject *tmp_source_name_5;
                        PyObject *tmp_dircall_arg2_2;
                        PyObject *tmp_tuple_element_2;
                        PyObject *tmp_dircall_arg3_2;
                        CHECK_OBJECT(var_etree);
                        tmp_source_name_5 = var_etree;
                        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_getETreeModule);
                        if (tmp_dircall_arg1_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_implementation);
                        tmp_tuple_element_2 = par_implementation;
                        tmp_dircall_arg2_2 = PyTuple_New(1);
                        Py_INCREF(tmp_tuple_element_2);
                        PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_2);
                        CHECK_OBJECT(par_kwargs);
                        tmp_dircall_arg3_2 = par_kwargs;
                        Py_INCREF(tmp_dircall_arg3_2);

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                            tmp_source_name_4 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict(dir_call_args);
                        }
                        if (tmp_source_name_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_TreeBuilder);
                        Py_DECREF(tmp_source_name_4);
                        if (tmp_return_value == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        tmp_left_name_1 = const_str_digest_8dd0c0992f8da622dfce2e2fc5195478;
                        CHECK_OBJECT(par_treeType);
                        tmp_right_name_1 = par_treeType;
                        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
                        if (tmp_make_exception_arg_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 87;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_4884412cf7583151cd7d00b8f7e8b241->m_frame.f_lineno = 87;
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
                        Py_DECREF(tmp_make_exception_arg_1);
                        assert(!(tmp_raise_type_1 == NULL));
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 87;
                        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_treeBuilderCache);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_treeBuilderCache);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1601 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT(par_treeType);
        tmp_args_element_name_1 = par_treeType;
        frame_4884412cf7583151cd7d00b8f7e8b241->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4884412cf7583151cd7d00b8f7e8b241);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4884412cf7583151cd7d00b8f7e8b241);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4884412cf7583151cd7d00b8f7e8b241);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4884412cf7583151cd7d00b8f7e8b241, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4884412cf7583151cd7d00b8f7e8b241->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4884412cf7583151cd7d00b8f7e8b241, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4884412cf7583151cd7d00b8f7e8b241,
        type_description_1,
        par_treeType,
        par_implementation,
        par_kwargs,
        var_dom,
        var_minidom,
        var_etree_lxml,
        var_etree
    );


    // Release cached frame.
    if (frame_4884412cf7583151cd7d00b8f7e8b241 == cache_frame_4884412cf7583151cd7d00b8f7e8b241) {
        Py_DECREF(frame_4884412cf7583151cd7d00b8f7e8b241);
    }
    cache_frame_4884412cf7583151cd7d00b8f7e8b241 = NULL;

    assertFrameObject(frame_4884412cf7583151cd7d00b8f7e8b241);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(pip$_vendor$html5lib$treebuilders$$$function_1_getTreeBuilder);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_treeType);
    Py_DECREF(par_treeType);
    par_treeType = NULL;

    Py_XDECREF(par_implementation);
    par_implementation = NULL;

    Py_XDECREF(var_dom);
    var_dom = NULL;

    Py_XDECREF(var_minidom);
    var_minidom = NULL;

    Py_XDECREF(var_etree_lxml);
    var_etree_lxml = NULL;

    Py_XDECREF(var_etree);
    var_etree = NULL;

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

    CHECK_OBJECT((PyObject *)par_treeType);
    Py_DECREF(par_treeType);
    par_treeType = NULL;

    Py_XDECREF(par_implementation);
    par_implementation = NULL;

    Py_XDECREF(var_dom);
    var_dom = NULL;

    Py_XDECREF(var_minidom);
    var_minidom = NULL;

    Py_XDECREF(var_etree_lxml);
    var_etree_lxml = NULL;

    Py_XDECREF(var_etree);
    var_etree = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(pip$_vendor$html5lib$treebuilders$$$function_1_getTreeBuilder);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pip$_vendor$html5lib$treebuilders$$$function_1_getTreeBuilder(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pip$_vendor$html5lib$treebuilders$$$function_1_getTreeBuilder,
        const_str_plain_getTreeBuilder,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4884412cf7583151cd7d00b8f7e8b241,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pip$_vendor$html5lib$treebuilders,
        const_str_digest_fcd298b0b457c2e16b17ce0875dee677,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$html5lib$treebuilders =
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

function_impl_code functable_pip$_vendor$html5lib$treebuilders[] = {
    impl_pip$_vendor$html5lib$treebuilders$$$function_1_getTreeBuilder,
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

    function_impl_code *current = functable_pip$_vendor$html5lib$treebuilders;
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

    if (offset > sizeof(functable_pip$_vendor$html5lib$treebuilders) || offset < 0) {
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
        functable_pip$_vendor$html5lib$treebuilders[offset],
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
        module_pip$_vendor$html5lib$treebuilders,
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
PyObject *modulecode_pip$_vendor$html5lib$treebuilders(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_pip$_vendor$html5lib$treebuilders;
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
    PRINT_STRING("pip._vendor.html5lib.treebuilders: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pip._vendor.html5lib.treebuilders: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pip._vendor.html5lib.treebuilders: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpip$_vendor$html5lib$treebuilders\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$html5lib$treebuilders = Py_InitModule4(
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
    mdef_pip$_vendor$html5lib$treebuilders.m_name = module_full_name;
    module_pip$_vendor$html5lib$treebuilders = PyModule_Create(&mdef_pip$_vendor$html5lib$treebuilders);
#endif

    moduledict_pip$_vendor$html5lib$treebuilders = MODULE_DICT(module_pip$_vendor$html5lib$treebuilders);

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
        moduledict_pip$_vendor$html5lib$treebuilders,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pip$_vendor$html5lib$treebuilders,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pip$_vendor$html5lib$treebuilders,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_pip$_vendor$html5lib$treebuilders,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_pip$_vendor$html5lib$treebuilders,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pip$_vendor$html5lib$treebuilders);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_pip$_vendor$html5lib$treebuilders);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_629b85ad5a0990ae5ac46ed2cac0eb02;
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
        tmp_assign_source_1 = const_str_digest_220d6e7337dc1ec3b15d3d50653ebf6a;
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_4373f01b7ee88b7b93c83cf3d0547222;
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_digest_c487580c3465cc8df6a9bfea86515ebb_list);
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_629b85ad5a0990ae5ac46ed2cac0eb02 = MAKE_MODULE_FRAME(codeobj_629b85ad5a0990ae5ac46ed2cac0eb02, module_pip$_vendor$html5lib$treebuilders);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_629b85ad5a0990ae5ac46ed2cac0eb02);
    assert(Py_REFCNT(frame_629b85ad5a0990ae5ac46ed2cac0eb02) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_4373f01b7ee88b7b93c83cf3d0547222;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        frame_629b85ad5a0990ae5ac46ed2cac0eb02->m_frame.f_lineno = 32;
        tmp_assign_source_5 = PyImport_ImportModule("__future__");
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_division);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_unicode_literals);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_8);
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

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__utils;
        tmp_globals_name_1 = (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_default_etree_tuple;
        tmp_level_name_1 = const_int_pos_2;
        frame_629b85ad5a0990ae5ac46ed2cac0eb02->m_frame.f_lineno = 34;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pip$_vendor$html5lib$treebuilders,
                const_str_plain_default_etree,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_default_etree);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_default_etree, tmp_assign_source_9);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_629b85ad5a0990ae5ac46ed2cac0eb02);
#endif
    popFrameStack();

    assertFrameObject(frame_629b85ad5a0990ae5ac46ed2cac0eb02);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_629b85ad5a0990ae5ac46ed2cac0eb02);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_629b85ad5a0990ae5ac46ed2cac0eb02, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_629b85ad5a0990ae5ac46ed2cac0eb02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_629b85ad5a0990ae5ac46ed2cac0eb02, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_treeBuilderCache, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_11 = MAKE_FUNCTION_pip$_vendor$html5lib$treebuilders$$$function_1_getTreeBuilder(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_pip$_vendor$html5lib$treebuilders, (Nuitka_StringObject *)const_str_plain_getTreeBuilder, tmp_assign_source_11);
    }

    return module_pip$_vendor$html5lib$treebuilders;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
