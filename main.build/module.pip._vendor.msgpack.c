/* Generated code for Python module 'pip._vendor.msgpack'
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

/* The "_module_pip$_vendor$msgpack" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pip$_vendor$msgpack;
PyDictObject *moduledict_pip$_vendor$msgpack;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_3bd7b9d4fbb14844039a80fae84befd1;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_version_tuple;
extern PyObject *const_tuple_str_plain_Packer_str_plain_unpackb_str_plain_Unpacker_tuple;
extern PyObject *const_str_digest_55f60b05da0494a3913b0ffac4e14f5f;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_ValueError;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_ExtType;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_digest_b167f9d2856419aaed430a579ed5103a;
extern PyObject *const_str_plain_unpack;
extern PyObject *const_str_plain_MSGPACK_PUREPYTHON;
static PyObject *const_str_digest_0847805f154a29358e000982ba74d3a4;
extern PyObject *const_str_plain_unpackb;
extern PyObject *const_str_plain_packb;
extern PyObject *const_tuple_str_digest_b167f9d2856419aaed430a579ed5103a_tuple;
extern PyObject *const_str_plain_Packer;
extern PyObject *const_str_plain_Unpacker;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_digest_f56243c0c005426c66b8c9e9c67aec08;
extern PyObject *const_str_digest_fe7ff725913124693165e347f6aea8ad;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_digest_0a491ae95f25a74c0ea3d4e0e9c8dcb0;
extern PyObject *const_str_plain_TypeError;
extern PyObject *const_str_plain_read;
extern PyObject *const_list_str_digest_f56243c0c005426c66b8c9e9c67aec08_list;
extern PyObject *const_str_plain_ImportError;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_4aa0598ed2b3f0fc30079e2f4a9598f3;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_data;
extern PyObject *const_tuple_str_plain_namedtuple_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain_o_str_plain_kwargs_tuple;
extern PyObject *const_str_plain__version;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_MSGPACK_PUREPYTHON_tuple;
extern PyObject *const_str_plain_dump;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_tuple_str_digest_ca5c3d63d5b90fe7e0e95ad7930b0a81_tuple;
extern PyObject *const_str_digest_3c2adc44cd576f3e16148ee72156fdaf;
extern PyObject *const_str_plain_fallback;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_stream;
extern PyObject *const_str_plain___new__;
extern PyObject *const_tuple_bf97649e11c95849456cd43582875347_tuple;
extern PyObject *const_str_plain__cmsgpack;
extern PyObject *const_str_plain_packer;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_dumps;
extern PyObject *const_str_digest_ca5c3d63d5b90fe7e0e95ad7930b0a81;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_namedtuple;
extern PyObject *const_tuple_str_digest_55f60b05da0494a3913b0ffac4e14f5f_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_30510d9ee9ca0c601da0dad93950753a_tuple;
extern PyObject *const_str_digest_fdbb30dd856764de2679a96bbb1c71c7;
extern PyObject *const_int_pos_127;
extern PyObject *const_str_plain_isinstance;
extern PyObject *const_str_digest_7c3d86edcf6d1c2f5b18701432b5dbf1;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_write;
extern PyObject *const_tuple_str_plain_stream_str_plain_kwargs_str_plain_data_tuple;
extern PyObject *const_str_plain_loads;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_version;
extern PyObject *const_tuple_ed47a57d97c6dec9bddac860bca0b706_tuple;
extern PyObject *const_str_digest_2d719fc741be72351bb0c133d03cdda8;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_0847805f154a29358e000982ba74d3a4 = UNSTREAM_STRING_ASCII(&constant_bin[ 212855 ], 19, 0);
    const_str_digest_0a491ae95f25a74c0ea3d4e0e9c8dcb0 = UNSTREAM_STRING_ASCII(&constant_bin[ 212874 ], 28, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$msgpack(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0ca0cf276820508b97761b392b048abb;
static PyCodeObject *codeobj_8b38f7513c544a6d30093345973d4085;
static PyCodeObject *codeobj_ee2037dce1ae99f0a1961c2a9c697f40;
static PyCodeObject *codeobj_a9d1b5322f0e1d601e37552c9a3f02b4;
static PyCodeObject *codeobj_7208bb16b06930c2e599fc0311c10933;
static PyCodeObject *codeobj_6648848328f48ee43d4e18265877ae78;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_fe7ff725913124693165e347f6aea8ad;
    codeobj_0ca0cf276820508b97761b392b048abb = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_0a491ae95f25a74c0ea3d4e0e9c8dcb0, const_tuple_empty, 0, 0, 0);
    codeobj_8b38f7513c544a6d30093345973d4085 = MAKE_CODEOBJECT(module_filename_obj, 8, CO_NOFREE, const_str_plain_ExtType, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_ee2037dce1ae99f0a1961c2a9c697f40 = MAKE_CODEOBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___new__, const_tuple_ed47a57d97c6dec9bddac860bca0b706_tuple, 3, 0, 0);
    codeobj_a9d1b5322f0e1d601e37552c9a3f02b4 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_pack, const_tuple_bf97649e11c95849456cd43582875347_tuple, 2, 0, 0);
    codeobj_7208bb16b06930c2e599fc0311c10933 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_packb, const_tuple_str_plain_o_str_plain_kwargs_tuple, 1, 0, 0);
    codeobj_6648848328f48ee43d4e18265877ae78 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_unpack, const_tuple_str_plain_stream_str_plain_kwargs_str_plain_data_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pip$_vendor$msgpack$$$function_1___new__();


static PyObject *MAKE_FUNCTION_pip$_vendor$msgpack$$$function_2_pack();


static PyObject *MAKE_FUNCTION_pip$_vendor$msgpack$$$function_3_packb();


static PyObject *MAKE_FUNCTION_pip$_vendor$msgpack$$$function_4_unpack();


// The module function definitions.
static PyObject *impl_pip$_vendor$msgpack$$$function_1___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_code = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_ee2037dce1ae99f0a1961c2a9c697f40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ee2037dce1ae99f0a1961c2a9c697f40 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ee2037dce1ae99f0a1961c2a9c697f40, codeobj_ee2037dce1ae99f0a1961c2a9c697f40, module_pip$_vendor$msgpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ee2037dce1ae99f0a1961c2a9c697f40 = cache_frame_ee2037dce1ae99f0a1961c2a9c697f40;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee2037dce1ae99f0a1961c2a9c697f40);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee2037dce1ae99f0a1961c2a9c697f40) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_isinstance);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1790 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 11;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_code);
        tmp_args_element_name_1 = par_code;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_int);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1822 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 11;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_ee2037dce1ae99f0a1961c2a9c697f40->m_frame.f_lineno = 11;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooN";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_TypeError);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TypeError);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 1847 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 12;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            frame_ee2037dce1ae99f0a1961c2a9c697f40->m_frame.f_lineno = 12;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_2, &PyTuple_GET_ITEM(const_tuple_str_digest_ca5c3d63d5b90fe7e0e95ad7930b0a81_tuple, 0));

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 12;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_isinstance);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1790 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 13;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_3 = par_data;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_bytes);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1878 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 13;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_5;
        frame_ee2037dce1ae99f0a1961c2a9c697f40->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_TypeError);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TypeError);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 1847 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 14;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_6;
            frame_ee2037dce1ae99f0a1961c2a9c697f40->m_frame.f_lineno = 14;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_4, &PyTuple_GET_ITEM(const_tuple_str_digest_b167f9d2856419aaed430a579ed5103a_tuple, 0));

            if (tmp_raise_type_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 14;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_3;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_code);
            tmp_assign_source_1 = par_code;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_1);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = const_int_0;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LTE_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_1 = "oooN";
                goto try_except_handler_1;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_4;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_4 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_1 = "oooN";
                goto try_except_handler_1;
            }
            tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_3 = tmp_comparison_chain_1__comparison_result;
            Py_INCREF(tmp_operand_name_3);
            goto try_return_handler_1;
            branch_no_4:;
        }
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_2 = const_int_pos_127;
            tmp_operand_name_3 = RICH_COMPARE_LTE_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_operand_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_1 = "oooN";
                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack$$$function_1___new__);
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT((PyObject *)tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT((PyObject *)tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;

        goto outline_result_1;
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

        CHECK_OBJECT((PyObject *)tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack$$$function_1___new__);
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_ValueError);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 1905 ], 32, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 16;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_7;
            frame_ee2037dce1ae99f0a1961c2a9c697f40->m_frame.f_lineno = 16;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_5, &PyTuple_GET_ITEM(const_tuple_str_digest_55f60b05da0494a3913b0ffac4e14f5f_tuple, 0));

            if (tmp_raise_type_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 16;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_ExtType);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtType);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1937 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 17;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_8;
        CHECK_OBJECT(par_cls);
        tmp_object_name_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_name_5 = par_cls;
        CHECK_OBJECT(par_code);
        tmp_args_element_name_6 = par_code;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_7 = par_data;
        frame_ee2037dce1ae99f0a1961c2a9c697f40->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain___new__, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2037dce1ae99f0a1961c2a9c697f40);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2037dce1ae99f0a1961c2a9c697f40);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2037dce1ae99f0a1961c2a9c697f40);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee2037dce1ae99f0a1961c2a9c697f40, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ee2037dce1ae99f0a1961c2a9c697f40->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee2037dce1ae99f0a1961c2a9c697f40, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee2037dce1ae99f0a1961c2a9c697f40,
        type_description_1,
        par_cls,
        par_code,
        par_data,
        NULL
    );


    // Release cached frame.
    if (frame_ee2037dce1ae99f0a1961c2a9c697f40 == cache_frame_ee2037dce1ae99f0a1961c2a9c697f40) {
        Py_DECREF(frame_ee2037dce1ae99f0a1961c2a9c697f40);
    }
    cache_frame_ee2037dce1ae99f0a1961c2a9c697f40 = NULL;

    assertFrameObject(frame_ee2037dce1ae99f0a1961c2a9c697f40);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack$$$function_1___new__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pip$_vendor$msgpack$$$function_2_pack(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_o = python_pars[0];
    PyObject *par_stream = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_packer = NULL;
    struct Nuitka_FrameObject *frame_a9d1b5322f0e1d601e37552c9a3f02b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a9d1b5322f0e1d601e37552c9a3f02b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a9d1b5322f0e1d601e37552c9a3f02b4, codeobj_a9d1b5322f0e1d601e37552c9a3f02b4, module_pip$_vendor$msgpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_a9d1b5322f0e1d601e37552c9a3f02b4 = cache_frame_a9d1b5322f0e1d601e37552c9a3f02b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a9d1b5322f0e1d601e37552c9a3f02b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a9d1b5322f0e1d601e37552c9a3f02b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_Packer);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Packer);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1966 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___internal__$$$function_10_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_packer == NULL);
        var_packer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_stream);
        tmp_source_name_1 = par_stream;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_write);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_packer);
        tmp_called_instance_1 = var_packer;
        CHECK_OBJECT(par_o);
        tmp_args_element_name_2 = par_o;
        frame_a9d1b5322f0e1d601e37552c9a3f02b4->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_pack, call_args);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a9d1b5322f0e1d601e37552c9a3f02b4->m_frame.f_lineno = 37;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a9d1b5322f0e1d601e37552c9a3f02b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a9d1b5322f0e1d601e37552c9a3f02b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a9d1b5322f0e1d601e37552c9a3f02b4, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a9d1b5322f0e1d601e37552c9a3f02b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9d1b5322f0e1d601e37552c9a3f02b4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9d1b5322f0e1d601e37552c9a3f02b4,
        type_description_1,
        par_o,
        par_stream,
        par_kwargs,
        var_packer
    );


    // Release cached frame.
    if (frame_a9d1b5322f0e1d601e37552c9a3f02b4 == cache_frame_a9d1b5322f0e1d601e37552c9a3f02b4) {
        Py_DECREF(frame_a9d1b5322f0e1d601e37552c9a3f02b4);
    }
    cache_frame_a9d1b5322f0e1d601e37552c9a3f02b4 = NULL;

    assertFrameObject(frame_a9d1b5322f0e1d601e37552c9a3f02b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack$$$function_2_pack);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_packer);
    Py_DECREF(var_packer);
    var_packer = NULL;

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

    Py_XDECREF(var_packer);
    var_packer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack$$$function_2_pack);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pip$_vendor$msgpack$$$function_3_packb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_o = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_7208bb16b06930c2e599fc0311c10933;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7208bb16b06930c2e599fc0311c10933 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_7208bb16b06930c2e599fc0311c10933, codeobj_7208bb16b06930c2e599fc0311c10933, module_pip$_vendor$msgpack, sizeof(void *)+sizeof(void *));
    frame_7208bb16b06930c2e599fc0311c10933 = cache_frame_7208bb16b06930c2e599fc0311c10933;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7208bb16b06930c2e599fc0311c10933);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7208bb16b06930c2e599fc0311c10933) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_Packer);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Packer);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1966 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_called_instance_1 = impl___internal__$$$function_10_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_o);
        tmp_args_element_name_1 = par_o;
        frame_7208bb16b06930c2e599fc0311c10933->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_pack, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7208bb16b06930c2e599fc0311c10933);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7208bb16b06930c2e599fc0311c10933);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7208bb16b06930c2e599fc0311c10933);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7208bb16b06930c2e599fc0311c10933, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_7208bb16b06930c2e599fc0311c10933->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7208bb16b06930c2e599fc0311c10933, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7208bb16b06930c2e599fc0311c10933,
        type_description_1,
        par_o,
        par_kwargs
    );


    // Release cached frame.
    if (frame_7208bb16b06930c2e599fc0311c10933 == cache_frame_7208bb16b06930c2e599fc0311c10933) {
        Py_DECREF(frame_7208bb16b06930c2e599fc0311c10933);
    }
    cache_frame_7208bb16b06930c2e599fc0311c10933 = NULL;

    assertFrameObject(frame_7208bb16b06930c2e599fc0311c10933);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack$$$function_3_packb);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pip$_vendor$msgpack$$$function_4_unpack(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_6648848328f48ee43d4e18265877ae78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6648848328f48ee43d4e18265877ae78 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_6648848328f48ee43d4e18265877ae78, codeobj_6648848328f48ee43d4e18265877ae78, module_pip$_vendor$msgpack, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_6648848328f48ee43d4e18265877ae78 = cache_frame_6648848328f48ee43d4e18265877ae78;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6648848328f48ee43d4e18265877ae78);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6648848328f48ee43d4e18265877ae78) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_1 = par_stream;
        frame_6648848328f48ee43d4e18265877ae78->m_frame.f_lineno = 56;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_read);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_unpackb);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unpackb);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1994 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT(var_data);
        tmp_tuple_element_1 = var_data;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6648848328f48ee43d4e18265877ae78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6648848328f48ee43d4e18265877ae78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6648848328f48ee43d4e18265877ae78);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6648848328f48ee43d4e18265877ae78, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6648848328f48ee43d4e18265877ae78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6648848328f48ee43d4e18265877ae78, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6648848328f48ee43d4e18265877ae78,
        type_description_1,
        par_stream,
        par_kwargs,
        var_data
    );


    // Release cached frame.
    if (frame_6648848328f48ee43d4e18265877ae78 == cache_frame_6648848328f48ee43d4e18265877ae78) {
        Py_DECREF(frame_6648848328f48ee43d4e18265877ae78);
    }
    cache_frame_6648848328f48ee43d4e18265877ae78 = NULL;

    assertFrameObject(frame_6648848328f48ee43d4e18265877ae78);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack$$$function_4_unpack);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_data);
    Py_DECREF(var_data);
    var_data = NULL;

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

    Py_XDECREF(var_data);
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack$$$function_4_unpack);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pip$_vendor$msgpack$$$function_1___new__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pip$_vendor$msgpack$$$function_1___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 300
        const_str_digest_2d719fc741be72351bb0c133d03cdda8,
#endif
        codeobj_ee2037dce1ae99f0a1961c2a9c697f40,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pip$_vendor$msgpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pip$_vendor$msgpack$$$function_2_pack() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pip$_vendor$msgpack$$$function_2_pack,
        const_str_plain_pack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a9d1b5322f0e1d601e37552c9a3f02b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pip$_vendor$msgpack,
        const_str_digest_7c3d86edcf6d1c2f5b18701432b5dbf1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pip$_vendor$msgpack$$$function_3_packb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pip$_vendor$msgpack$$$function_3_packb,
        const_str_plain_packb,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7208bb16b06930c2e599fc0311c10933,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pip$_vendor$msgpack,
        const_str_digest_4aa0598ed2b3f0fc30079e2f4a9598f3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pip$_vendor$msgpack$$$function_4_unpack() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pip$_vendor$msgpack$$$function_4_unpack,
        const_str_plain_unpack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6648848328f48ee43d4e18265877ae78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pip$_vendor$msgpack,
        const_str_digest_fdbb30dd856764de2679a96bbb1c71c7,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$msgpack =
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

function_impl_code functable_pip$_vendor$msgpack[] = {
    impl_pip$_vendor$msgpack$$$function_1___new__,
    impl_pip$_vendor$msgpack$$$function_2_pack,
    impl_pip$_vendor$msgpack$$$function_3_packb,
    impl_pip$_vendor$msgpack$$$function_4_unpack,
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

    function_impl_code *current = functable_pip$_vendor$msgpack;
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

    if (offset > sizeof(functable_pip$_vendor$msgpack) || offset < 0) {
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
        functable_pip$_vendor$msgpack[offset],
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
        module_pip$_vendor$msgpack,
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
PyObject *modulecode_pip$_vendor$msgpack(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_pip$_vendor$msgpack;
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
    PRINT_STRING("pip._vendor.msgpack: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pip._vendor.msgpack: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pip._vendor.msgpack: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpip$_vendor$msgpack\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$msgpack = Py_InitModule4(
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
    mdef_pip$_vendor$msgpack.m_name = module_full_name;
    module_pip$_vendor$msgpack = PyModule_Create(&mdef_pip$_vendor$msgpack);
#endif

    moduledict_pip$_vendor$msgpack = MODULE_DICT(module_pip$_vendor$msgpack);

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
        moduledict_pip$_vendor$msgpack,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pip$_vendor$msgpack,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pip$_vendor$msgpack,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_pip$_vendor$msgpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_pip$_vendor$msgpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pip$_vendor$msgpack);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_pip$_vendor$msgpack);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_0ca0cf276820508b97761b392b048abb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pip$_vendor$msgpack_8 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8b38f7513c544a6d30093345973d4085_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8b38f7513c544a6d30093345973d4085_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_fe7ff725913124693165e347f6aea8ad;
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_digest_f56243c0c005426c66b8c9e9c67aec08_list);
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_0ca0cf276820508b97761b392b048abb = MAKE_MODULE_FRAME(codeobj_0ca0cf276820508b97761b392b048abb, module_pip$_vendor$msgpack);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0ca0cf276820508b97761b392b048abb);
    assert(Py_REFCNT(frame_0ca0cf276820508b97761b392b048abb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_fe7ff725913124693165e347f6aea8ad;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__version;
        tmp_globals_name_1 = (PyObject *)moduledict_pip$_vendor$msgpack;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_version_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pip$_vendor$msgpack,
                const_str_plain_version,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_version);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_version, tmp_assign_source_5);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_exceptions;
        tmp_globals_name_2 = (PyObject *)moduledict_pip$_vendor$msgpack;
        tmp_locals_name_2 = (PyObject *)moduledict_pip$_vendor$msgpack;
        tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 3;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_pip$_vendor$msgpack, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_collections;
        tmp_globals_name_3 = (PyObject *)moduledict_pip$_vendor$msgpack;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_namedtuple_tuple;
        tmp_level_name_3 = const_int_0;
        frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_namedtuple);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_6);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_namedtuple);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_called_name_1 = tmp_mvar_value_3;
        frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 8;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_30510d9ee9ca0c601da0dad93950753a_tuple, 0));

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_assign_source_7 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_9 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_1, const_str_plain___prepare__);
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain___prepare__);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_ExtType;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 8;
            tmp_assign_source_10 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_1;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_3, const_str_plain___getitem__);
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_1;
            }
            tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_1__metaclass);
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 8;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
                CHECK_OBJECT(tmp_class_creation_1__prepared);
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1(tmp_type_arg_2);
                assert(!(tmp_source_name_4 == NULL));
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain___name__);
                Py_DECREF(tmp_source_name_4);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_1);

                    exception_lineno = 8;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 8;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 8;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_11;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pip$_vendor$msgpack_8 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0847805f154a29358e000982ba74d3a4;
        tmp_res = PyObject_SetItem(locals_pip$_vendor$msgpack_8, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_3c2adc44cd576f3e16148ee72156fdaf;
        tmp_res = PyObject_SetItem(locals_pip$_vendor$msgpack_8, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_ExtType;
        tmp_res = PyObject_SetItem(locals_pip$_vendor$msgpack_8, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_8b38f7513c544a6d30093345973d4085_2, codeobj_8b38f7513c544a6d30093345973d4085, module_pip$_vendor$msgpack, sizeof(void *));
        frame_8b38f7513c544a6d30093345973d4085_2 = cache_frame_8b38f7513c544a6d30093345973d4085_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8b38f7513c544a6d30093345973d4085_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8b38f7513c544a6d30093345973d4085_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_pip$_vendor$msgpack$$$function_1___new__();



        tmp_res = PyObject_SetItem(locals_pip$_vendor$msgpack_8, const_str_plain___new__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8b38f7513c544a6d30093345973d4085_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8b38f7513c544a6d30093345973d4085_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8b38f7513c544a6d30093345973d4085_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_8b38f7513c544a6d30093345973d4085_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8b38f7513c544a6d30093345973d4085_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8b38f7513c544a6d30093345973d4085_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_8b38f7513c544a6d30093345973d4085_2 == cache_frame_8b38f7513c544a6d30093345973d4085_2) {
            Py_DECREF(frame_8b38f7513c544a6d30093345973d4085_2);
        }
        cache_frame_8b38f7513c544a6d30093345973d4085_2 = NULL;

        assertFrameObject(frame_8b38f7513c544a6d30093345973d4085_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_ExtType;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pip$_vendor$msgpack_8;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 8;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pip$_vendor$msgpack_8);
        locals_pip$_vendor$msgpack_8 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pip$_vendor$msgpack_8);
        locals_pip$_vendor$msgpack_8 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack);
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT((PyObject *)outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack);
        return NULL;
        outline_exception_1:;
        exception_lineno = 8;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_ExtType, tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT((PyObject *)tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_os;
        tmp_globals_name_4 = (PyObject *)moduledict_pip$_vendor$msgpack;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 20;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_14);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_os);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
        }

        CHECK_OBJECT(tmp_mvar_value_4);
        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_environ);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 21;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_MSGPACK_PUREPYTHON_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_name_name_5;
            PyObject *tmp_globals_name_5;
            PyObject *tmp_locals_name_5;
            PyObject *tmp_fromlist_name_5;
            PyObject *tmp_level_name_5;
            tmp_name_name_5 = const_str_plain_fallback;
            tmp_globals_name_5 = (PyObject *)moduledict_pip$_vendor$msgpack;
            tmp_locals_name_5 = Py_None;
            tmp_fromlist_name_5 = const_tuple_str_plain_Packer_str_plain_unpackb_str_plain_Unpacker_tuple;
            tmp_level_name_5 = const_int_pos_1;
            frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 22;
            tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto frame_exception_exit_1;
            }
            assert(tmp_import_from_1__module == NULL);
            tmp_import_from_1__module = tmp_assign_source_15;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_import_name_from_3;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_3 = tmp_import_from_1__module;
            if (PyModule_Check(tmp_import_name_from_3)) {
               tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                    tmp_import_name_from_3,
                    (PyObject *)moduledict_pip$_vendor$msgpack,
                    const_str_plain_Packer,
                    const_int_pos_1
                );
            } else {
               tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_Packer);
            }

            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_Packer, tmp_assign_source_16);
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_import_name_from_4;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_4 = tmp_import_from_1__module;
            if (PyModule_Check(tmp_import_name_from_4)) {
               tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                    tmp_import_name_from_4,
                    (PyObject *)moduledict_pip$_vendor$msgpack,
                    const_str_plain_unpackb,
                    const_int_pos_1
                );
            } else {
               tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_unpackb);
            }

            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_unpackb, tmp_assign_source_17);
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_import_name_from_5;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_5 = tmp_import_from_1__module;
            if (PyModule_Check(tmp_import_name_from_5)) {
               tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                    tmp_import_name_from_5,
                    (PyObject *)moduledict_pip$_vendor$msgpack,
                    const_str_plain_Unpacker,
                    const_int_pos_1
                );
            } else {
               tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_Unpacker);
            }

            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_Unpacker, tmp_assign_source_18);
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
        Py_DECREF(tmp_import_from_1__module);
        tmp_import_from_1__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
        Py_DECREF(tmp_import_from_1__module);
        tmp_import_from_1__module = NULL;

        goto branch_end_4;
        branch_no_4:;
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_name_name_6;
            PyObject *tmp_globals_name_6;
            PyObject *tmp_locals_name_6;
            PyObject *tmp_fromlist_name_6;
            PyObject *tmp_level_name_6;
            tmp_name_name_6 = const_str_plain__cmsgpack;
            tmp_globals_name_6 = (PyObject *)moduledict_pip$_vendor$msgpack;
            tmp_locals_name_6 = Py_None;
            tmp_fromlist_name_6 = const_tuple_str_plain_Packer_str_plain_unpackb_str_plain_Unpacker_tuple;
            tmp_level_name_6 = const_int_pos_1;
            frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 25;
            tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_5;
            }
            assert(tmp_import_from_2__module == NULL);
            tmp_import_from_2__module = tmp_assign_source_19;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_import_name_from_6;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_6 = tmp_import_from_2__module;
            if (PyModule_Check(tmp_import_name_from_6)) {
               tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                    tmp_import_name_from_6,
                    (PyObject *)moduledict_pip$_vendor$msgpack,
                    const_str_plain_Packer,
                    const_int_pos_1
                );
            } else {
               tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_Packer);
            }

            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_Packer, tmp_assign_source_20);
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_import_name_from_7;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_7 = tmp_import_from_2__module;
            if (PyModule_Check(tmp_import_name_from_7)) {
               tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                    tmp_import_name_from_7,
                    (PyObject *)moduledict_pip$_vendor$msgpack,
                    const_str_plain_unpackb,
                    const_int_pos_1
                );
            } else {
               tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_unpackb);
            }

            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_unpackb, tmp_assign_source_21);
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_import_name_from_8;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_8 = tmp_import_from_2__module;
            if (PyModule_Check(tmp_import_name_from_8)) {
               tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                    tmp_import_name_from_8,
                    (PyObject *)moduledict_pip$_vendor$msgpack,
                    const_str_plain_Unpacker,
                    const_int_pos_1
                );
            } else {
               tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_Unpacker);
            }

            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_Unpacker, tmp_assign_source_22);
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
        Py_DECREF(tmp_import_from_2__module);
        tmp_import_from_2__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
        Py_DECREF(tmp_import_from_2__module);
        tmp_import_from_2__module = NULL;

        goto try_end_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_type_1);
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_value_1);
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF(exception_preserved_tb_1);

        if (exception_keeper_tb_6 == NULL) {
            exception_keeper_tb_6 = MAKE_TRACEBACK(frame_0ca0cf276820508b97761b392b048abb, exception_keeper_lineno_6);
        } else if (exception_keeper_lineno_6 != 0) {
            exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_0ca0cf276820508b97761b392b048abb, exception_keeper_lineno_6);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
        PyException_SetTraceback(exception_keeper_value_6, (PyObject *)exception_keeper_tb_6);
        PUBLISH_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
        // Tried code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_mvar_value_5;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_ImportError);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2023 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 26;

                goto try_except_handler_7;
            }

            tmp_compexpr_right_1 = tmp_mvar_value_5;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_7;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assign_source_23;
                PyObject *tmp_name_name_7;
                PyObject *tmp_globals_name_7;
                PyObject *tmp_locals_name_7;
                PyObject *tmp_fromlist_name_7;
                PyObject *tmp_level_name_7;
                tmp_name_name_7 = const_str_plain_fallback;
                tmp_globals_name_7 = (PyObject *)moduledict_pip$_vendor$msgpack;
                tmp_locals_name_7 = Py_None;
                tmp_fromlist_name_7 = const_tuple_str_plain_Packer_str_plain_unpackb_str_plain_Unpacker_tuple;
                tmp_level_name_7 = const_int_pos_1;
                frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = 27;
                tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
                if (tmp_assign_source_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;

                    goto try_except_handler_7;
                }
                assert(tmp_import_from_3__module == NULL);
                tmp_import_from_3__module = tmp_assign_source_23;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_import_name_from_9;
                CHECK_OBJECT(tmp_import_from_3__module);
                tmp_import_name_from_9 = tmp_import_from_3__module;
                if (PyModule_Check(tmp_import_name_from_9)) {
                   tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                        tmp_import_name_from_9,
                        (PyObject *)moduledict_pip$_vendor$msgpack,
                        const_str_plain_Packer,
                        const_int_pos_1
                    );
                } else {
                   tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_Packer);
                }

                if (tmp_assign_source_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;

                    goto try_except_handler_8;
                }
                UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_Packer, tmp_assign_source_24);
            }
            {
                PyObject *tmp_assign_source_25;
                PyObject *tmp_import_name_from_10;
                CHECK_OBJECT(tmp_import_from_3__module);
                tmp_import_name_from_10 = tmp_import_from_3__module;
                if (PyModule_Check(tmp_import_name_from_10)) {
                   tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                        tmp_import_name_from_10,
                        (PyObject *)moduledict_pip$_vendor$msgpack,
                        const_str_plain_unpackb,
                        const_int_pos_1
                    );
                } else {
                   tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_unpackb);
                }

                if (tmp_assign_source_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;

                    goto try_except_handler_8;
                }
                UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_unpackb, tmp_assign_source_25);
            }
            {
                PyObject *tmp_assign_source_26;
                PyObject *tmp_import_name_from_11;
                CHECK_OBJECT(tmp_import_from_3__module);
                tmp_import_name_from_11 = tmp_import_from_3__module;
                if (PyModule_Check(tmp_import_name_from_11)) {
                   tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                        tmp_import_name_from_11,
                        (PyObject *)moduledict_pip$_vendor$msgpack,
                        const_str_plain_Unpacker,
                        const_int_pos_1
                    );
                } else {
                   tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_Unpacker);
                }

                if (tmp_assign_source_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;

                    goto try_except_handler_8;
                }
                UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_Unpacker, tmp_assign_source_26);
            }
            goto try_end_5;
            // Exception handler code:
            try_except_handler_8:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
            Py_DECREF(tmp_import_from_3__module);
            tmp_import_from_3__module = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto try_except_handler_7;
            // End of try:
            try_end_5:;
            CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
            Py_DECREF(tmp_import_from_3__module);
            tmp_import_from_3__module = NULL;

            goto branch_end_5;
            branch_no_5:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 24;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_0ca0cf276820508b97761b392b048abb->m_frame) frame_0ca0cf276820508b97761b392b048abb->m_frame.f_lineno = exception_tb->tb_lineno;

            goto try_except_handler_7;
            branch_end_5:;
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
        goto try_end_4;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE(pip$_vendor$msgpack);
        return NULL;
        // End of try:
        try_end_4:;
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_pip$_vendor$msgpack$$$function_2_pack();



        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_pack, tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_pip$_vendor$msgpack$$$function_3_packb();



        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_packb, tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_pip$_vendor$msgpack$$$function_4_unpack();



        UPDATE_STRING_DICT1(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_unpack, tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_unpack);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack);
        }

        CHECK_OBJECT(tmp_mvar_value_6);
        tmp_assign_source_30 = tmp_mvar_value_6;
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_load, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_unpackb);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unpackb);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1994 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_31 = tmp_mvar_value_7;
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_loads, tmp_assign_source_31);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ca0cf276820508b97761b392b048abb);
#endif
    popFrameStack();

    assertFrameObject(frame_0ca0cf276820508b97761b392b048abb);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ca0cf276820508b97761b392b048abb);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_0ca0cf276820508b97761b392b048abb, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0ca0cf276820508b97761b392b048abb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ca0cf276820508b97761b392b048abb, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_pack);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_pack);
        }

        CHECK_OBJECT(tmp_mvar_value_8);
        tmp_assign_source_32 = tmp_mvar_value_8;
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_dump, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_packb);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_packb);
        }

        CHECK_OBJECT(tmp_mvar_value_9);
        tmp_assign_source_33 = tmp_mvar_value_9;
        UPDATE_STRING_DICT0(moduledict_pip$_vendor$msgpack, (Nuitka_StringObject *)const_str_plain_dumps, tmp_assign_source_33);
    }

    return module_pip$_vendor$msgpack;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
