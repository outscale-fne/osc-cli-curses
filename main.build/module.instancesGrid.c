/* Generated code for Python module 'instancesGrid'
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

/* The "_module_instancesGrid" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_instancesGrid;
PyDictObject *moduledict_instancesGrid;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_c8f05f578eced690c2bc6258659d94fb;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_main;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_self_str_plain_summary_str_plain_vm_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_refresh;
extern PyObject *const_str_plain_VmId;
extern PyObject *const_str_plain_instancesGrid;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_terminated;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_ReadVms;
extern PyObject *const_str_plain_virtualMachine;
extern PyObject *const_str_plain_custom_print_cell;
static PyObject *const_str_plain_on_selection_cb;
extern PyObject *const_str_plain_refreshing;
extern PyObject *const_str_plain_editInstance;
extern PyObject *const_str_plain_VirtualMachine;
extern PyObject *const_int_pos_17;
extern PyObject *const_str_plain_vm;
extern PyObject *const_str_plain_keywords;
static PyObject *const_tuple_044806240e3bc73eefe087be0c71135b_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_SelectableGrid;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_running;
extern PyObject *const_str_plain_createVm;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_summarise;
extern PyObject *const_str_plain_selectableGrid;
extern PyObject *const_str_plain_int;
static PyObject *const_str_digest_bdb94117dd6c6056c79c0f2ba97c7bcf;
extern PyObject *const_str_plain_screen;
static PyObject *const_str_plain_DANGER;
extern PyObject *const_str_plain_stopped;
extern PyObject *const_str_plain_line;
static PyObject *const_str_plain_vms;
extern PyObject *const_str_plain_InstancesGrid;
extern PyObject *const_str_plain_GOODHL;
static PyObject *const_str_plain_stopping;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_form;
extern PyObject *const_str_plain_summary_titles;
extern PyObject *const_str_plain_Vms;
static PyObject *const_str_digest_e10f800a4eb1f3fb7d7d8ef956c53e59;
extern PyObject *const_str_plain_VMs;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_start_updater;
extern PyObject *const_int_0;
static PyObject *const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_column_width;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_17d91b469102518b4bacbfc8c97cef8b;
extern PyObject *const_str_plain_cell;
extern PyObject *const_str_plain_cell_value;
static PyObject *const_str_digest_b42f057c1c75f9041b5951cbe9c01f8f;
extern PyObject *const_str_plain_pyperclip;
extern PyObject *const_str_plain_pending;
static PyObject *const_str_digest_b760b2cfb8f7b453bda650a9b67cf12c;
extern PyObject *const_str_plain_grid_current_value_index;
static PyObject *const_str_digest_6e77ee18636b25408b4db3b903a71b8a;
extern PyObject *const_str_plain_color;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_RED_BLACK;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_y;
static PyObject *const_str_plain__vm;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_GATEWAY;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_CURSOR;
static PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_vm_str_plain__vm_tuple;
extern PyObject *const_str_plain_npyscreen;
static PyObject *const_str_digest_cc2e02ab51b611ac051b0873bbfe95fa;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_str_plain_line_str_plain_self_tuple;
extern PyObject *const_str_plain_on_selection;
extern PyObject *const_str_plain_popup;
extern PyObject *const_str_plain_col_titles;
extern PyObject *const_str_plain_summary;
extern PyObject *const_str_plain_highlight_whole_widget;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_c8f05f578eced690c2bc6258659d94fb = UNSTREAM_STRING_ASCII(&constant_bin[ 211355 ], 22, 0);
    const_tuple_str_plain_self_str_plain_summary_str_plain_vm_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_summary_str_plain_vm_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_summary_str_plain_vm_tuple, 1, const_str_plain_summary); Py_INCREF(const_str_plain_summary);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_summary_str_plain_vm_tuple, 2, const_str_plain_vm); Py_INCREF(const_str_plain_vm);
    const_str_plain_on_selection_cb = UNSTREAM_STRING_ASCII(&constant_bin[ 211377 ], 15, 1);
    const_tuple_044806240e3bc73eefe087be0c71135b_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_044806240e3bc73eefe087be0c71135b_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_044806240e3bc73eefe087be0c71135b_tuple, 1, const_str_plain_screen); Py_INCREF(const_str_plain_screen);
    PyTuple_SET_ITEM(const_tuple_044806240e3bc73eefe087be0c71135b_tuple, 2, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_044806240e3bc73eefe087be0c71135b_tuple, 3, const_str_plain_keywords); Py_INCREF(const_str_plain_keywords);
    PyTuple_SET_ITEM(const_tuple_044806240e3bc73eefe087be0c71135b_tuple, 4, const_str_plain_on_selection_cb); Py_INCREF(const_str_plain_on_selection_cb);
    PyTuple_SET_ITEM(const_tuple_044806240e3bc73eefe087be0c71135b_tuple, 5, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_digest_bdb94117dd6c6056c79c0f2ba97c7bcf = UNSTREAM_STRING_ASCII(&constant_bin[ 211392 ], 47, 0);
    const_str_plain_DANGER = UNSTREAM_STRING_ASCII(&constant_bin[ 211439 ], 6, 1);
    const_str_plain_vms = UNSTREAM_STRING_ASCII(&constant_bin[ 211445 ], 3, 1);
    const_str_plain_stopping = UNSTREAM_STRING_ASCII(&constant_bin[ 211448 ], 8, 1);
    const_str_digest_e10f800a4eb1f3fb7d7d8ef956c53e59 = UNSTREAM_STRING_ASCII(&constant_bin[ 211456 ], 23, 0);
    const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple, 1, const_str_plain_cell); Py_INCREF(const_str_plain_cell);
    PyTuple_SET_ITEM(const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple, 2, const_str_plain_cell_value); Py_INCREF(const_str_plain_cell_value);
    PyTuple_SET_ITEM(const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple, 3, const_str_plain_y); Py_INCREF(const_str_plain_y);
    PyTuple_SET_ITEM(const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple, 4, const_str_plain__); Py_INCREF(const_str_plain__);
    PyTuple_SET_ITEM(const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple, 5, const_str_plain_status); Py_INCREF(const_str_plain_status);
    const_str_digest_17d91b469102518b4bacbfc8c97cef8b = UNSTREAM_STRING_ASCII(&constant_bin[ 211392 ], 22, 0);
    const_str_digest_b42f057c1c75f9041b5951cbe9c01f8f = UNSTREAM_STRING_ASCII(&constant_bin[ 211479 ], 13, 0);
    const_str_digest_b760b2cfb8f7b453bda650a9b67cf12c = UNSTREAM_STRING_ASCII(&constant_bin[ 211492 ], 21, 0);
    const_str_digest_6e77ee18636b25408b4db3b903a71b8a = UNSTREAM_STRING_ASCII(&constant_bin[ 211513 ], 64, 0);
    const_str_plain__vm = UNSTREAM_STRING_ASCII(&constant_bin[ 211577 ], 3, 1);
    const_tuple_str_plain_self_str_plain_data_str_plain_vm_str_plain__vm_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_data_str_plain_vm_str_plain__vm_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_data_str_plain_vm_str_plain__vm_tuple, 1, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_data_str_plain_vm_str_plain__vm_tuple, 2, const_str_plain_vm); Py_INCREF(const_str_plain_vm);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_data_str_plain_vm_str_plain__vm_tuple, 3, const_str_plain__vm); Py_INCREF(const_str_plain__vm);
    const_str_digest_cc2e02ab51b611ac051b0873bbfe95fa = UNSTREAM_STRING_ASCII(&constant_bin[ 211580 ], 31, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_instancesGrid(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_014d81b0ac8dd9f912d3df0544823faa;
static PyCodeObject *codeobj_fb63505c83edb4bbf5974300349c509f;
static PyCodeObject *codeobj_b178cc9fd104e0ed06a6c848cb59805a;
static PyCodeObject *codeobj_85d643750284cd776b3836e69a9b0c08;
static PyCodeObject *codeobj_a3a34389ae749e873aa957d46ee308d6;
static PyCodeObject *codeobj_3284a7e7880b481cae488c67a80dbbad;
static PyCodeObject *codeobj_16d7a07211a67739a37855a6194061dd;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_6e77ee18636b25408b4db3b903a71b8a;
    codeobj_014d81b0ac8dd9f912d3df0544823faa = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_c8f05f578eced690c2bc6258659d94fb, const_tuple_empty, 0, 0, 0);
    codeobj_fb63505c83edb4bbf5974300349c509f = MAKE_CODEOBJECT(module_filename_obj, 12, CO_NOFREE, const_str_plain_InstancesGrid, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_b178cc9fd104e0ed06a6c848cb59805a = MAKE_CODEOBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, const_tuple_044806240e3bc73eefe087be0c71135b_tuple, 2, 0, 0);
    codeobj_85d643750284cd776b3836e69a9b0c08 = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_custom_print_cell, const_tuple_81d2374fc4895b6449157647ccfa09c7_tuple, 3, 0, 0);
    codeobj_a3a34389ae749e873aa957d46ee308d6 = MAKE_CODEOBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_on_selection_cb, const_tuple_str_plain_line_str_plain_self_tuple, 1, 0, 0);
    codeobj_3284a7e7880b481cae488c67a80dbbad = MAKE_CODEOBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_refresh, const_tuple_str_plain_self_str_plain_data_str_plain_vm_str_plain__vm_tuple, 1, 0, 0);
    codeobj_16d7a07211a67739a37855a6194061dd = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_summarise, const_tuple_str_plain_self_str_plain_summary_str_plain_vm_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_instancesGrid$$$function_1___init__();


static PyObject *MAKE_FUNCTION_instancesGrid$$$function_1___init__$$$function_1_on_selection_cb();


static PyObject *MAKE_FUNCTION_instancesGrid$$$function_2_refresh();


static PyObject *MAKE_FUNCTION_instancesGrid$$$function_3_summarise();


static PyObject *MAKE_FUNCTION_instancesGrid$$$function_4_custom_print_cell();


// The module function definitions.
static PyObject *impl_instancesGrid$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    PyObject *par_screen = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_keywords = python_pars[3];
    PyObject *var_on_selection_cb = NULL;
    struct Nuitka_FrameObject *frame_b178cc9fd104e0ed06a6c848cb59805a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b178cc9fd104e0ed06a6c848cb59805a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b178cc9fd104e0ed06a6c848cb59805a, codeobj_b178cc9fd104e0ed06a6c848cb59805a, module_instancesGrid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b178cc9fd104e0ed06a6c848cb59805a = cache_frame_b178cc9fd104e0ed06a6c848cb59805a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b178cc9fd104e0ed06a6c848cb59805a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b178cc9fd104e0ed06a6c848cb59805a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_1;
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "__class__");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 14;
            type_description_1 = "cooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = PyCell_GET(self->m_closure[0]);
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_object_name_1 = PyCell_GET(par_self);
        tmp_source_name_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "cooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___init__);
        Py_DECREF(tmp_source_name_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "cooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_screen);
        tmp_tuple_element_1 = par_screen;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_keywords);
        tmp_dircall_arg4_1 = par_keywords;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "cooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_pos_17;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_1 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_column_width, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "cooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_instancesGrid$$$function_1___init__$$$function_1_on_selection_cb();

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_self;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0]);


        assert(var_on_selection_cb == NULL);
        var_on_selection_cb = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_on_selection_cb);
        tmp_assattr_name_2 = var_on_selection_cb;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_2 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_on_selection, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "cooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_1 = PyCell_GET(par_self);
        frame_b178cc9fd104e0ed06a6c848cb59805a->m_frame.f_lineno = 20;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_refresh);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "cooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_2 = PyCell_GET(par_self);
        frame_b178cc9fd104e0ed06a6c848cb59805a->m_frame.f_lineno = 21;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_start_updater);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "cooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b178cc9fd104e0ed06a6c848cb59805a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b178cc9fd104e0ed06a6c848cb59805a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b178cc9fd104e0ed06a6c848cb59805a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b178cc9fd104e0ed06a6c848cb59805a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b178cc9fd104e0ed06a6c848cb59805a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b178cc9fd104e0ed06a6c848cb59805a,
        type_description_1,
        par_self,
        par_screen,
        par_args,
        par_keywords,
        var_on_selection_cb,
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_b178cc9fd104e0ed06a6c848cb59805a == cache_frame_b178cc9fd104e0ed06a6c848cb59805a) {
        Py_DECREF(frame_b178cc9fd104e0ed06a6c848cb59805a);
    }
    cache_frame_b178cc9fd104e0ed06a6c848cb59805a = NULL;

    assertFrameObject(frame_b178cc9fd104e0ed06a6c848cb59805a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_1___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_on_selection_cb);
    Py_DECREF(var_on_selection_cb);
    var_on_selection_cb = NULL;

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

    Py_XDECREF(var_on_selection_cb);
    var_on_selection_cb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_screen);
    Py_DECREF(par_screen);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_keywords);
    Py_DECREF(par_keywords);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_screen);
    Py_DECREF(par_screen);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_keywords);
    Py_DECREF(par_keywords);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_instancesGrid$$$function_1___init__$$$function_1_on_selection_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_line = python_pars[0];
    struct Nuitka_FrameObject *frame_a3a34389ae749e873aa957d46ee308d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a3a34389ae749e873aa957d46ee308d6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_a3a34389ae749e873aa957d46ee308d6, codeobj_a3a34389ae749e873aa957d46ee308d6, module_instancesGrid, sizeof(void *)+sizeof(void *));
    frame_a3a34389ae749e873aa957d46ee308d6 = cache_frame_a3a34389ae749e873aa957d46ee308d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a3a34389ae749e873aa957d46ee308d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a3a34389ae749e873aa957d46ee308d6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_popup);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_popup);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 586 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 18;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_editInstance);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (PyCell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 18;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = PyCell_GET(self->m_closure[0]);
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_form);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 18;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_line);
        tmp_args_element_name_2 = par_line;
        frame_a3a34389ae749e873aa957d46ee308d6->m_frame.f_lineno = 18;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3a34389ae749e873aa957d46ee308d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3a34389ae749e873aa957d46ee308d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a3a34389ae749e873aa957d46ee308d6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a3a34389ae749e873aa957d46ee308d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3a34389ae749e873aa957d46ee308d6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a3a34389ae749e873aa957d46ee308d6,
        type_description_1,
        par_line,
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_a3a34389ae749e873aa957d46ee308d6 == cache_frame_a3a34389ae749e873aa957d46ee308d6) {
        Py_DECREF(frame_a3a34389ae749e873aa957d46ee308d6);
    }
    cache_frame_a3a34389ae749e873aa957d46ee308d6 = NULL;

    assertFrameObject(frame_a3a34389ae749e873aa957d46ee308d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_1___init__$$$function_1_on_selection_cb);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_line);
    Py_DECREF(par_line);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_line);
    Py_DECREF(par_line);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_instancesGrid$$$function_2_refresh(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_data = NULL;
    PyObject *var_vm = NULL;
    PyObject *var__vm = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3284a7e7880b481cae488c67a80dbbad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_3284a7e7880b481cae488c67a80dbbad = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_3284a7e7880b481cae488c67a80dbbad, codeobj_3284a7e7880b481cae488c67a80dbbad, module_instancesGrid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_3284a7e7880b481cae488c67a80dbbad = cache_frame_3284a7e7880b481cae488c67a80dbbad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3284a7e7880b481cae488c67a80dbbad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3284a7e7880b481cae488c67a80dbbad) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_main);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_main);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 220 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_GATEWAY);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_True;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_refreshing, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_main);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_main);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 220 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 26;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_GATEWAY);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 26;
            tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_ReadVms);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_str_plain_Vms;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(var_data == NULL);
            var_data = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = PyList_New(0);
            CHECK_OBJECT(par_self);
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_vms, tmp_assattr_name_2);
            Py_DECREF(tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_mvar_value_3;
            tmp_assattr_name_3 = PyDict_New();
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_main);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_main);
            }

            if (tmp_mvar_value_3 == NULL) {
                Py_DECREF(tmp_assattr_name_3);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 220 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_assattr_target_3 = tmp_mvar_value_3;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_VMs, tmp_assattr_name_3);
            Py_DECREF(tmp_assattr_name_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_data);
            tmp_iter_arg_1 = var_data;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_1__for_iterator == NULL);
            tmp_for_loop_1__for_iterator = tmp_assign_source_2;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_for_loop_1__for_iterator);
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 29;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_for_loop_1__iter_value);
            tmp_assign_source_4 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_vm;
                var_vm = tmp_assign_source_4;
                Py_INCREF(var_vm);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_virtualMachine);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_virtualMachine);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 613 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 30;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            CHECK_OBJECT(var_vm);
            tmp_args_element_name_1 = var_vm;
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 30;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_VirtualMachine, call_args);
            }

            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var__vm;
                var__vm = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(var__vm);
            tmp_source_name_3 = var__vm;
            tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_status);
            if (tmp_compexpr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_compexpr_right_1 = const_str_plain_running;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            Py_DECREF(tmp_compexpr_left_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT(par_self);
                tmp_source_name_4 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_vms);
                if (tmp_called_instance_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(var__vm);
                tmp_args_element_name_2 = var__vm;
                frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 32;
                {
                    PyObject *call_args[] = {tmp_args_element_name_2};
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_append, call_args);
                }

                Py_DECREF(tmp_called_instance_3);
                if (tmp_call_result_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                Py_DECREF(tmp_call_result_1);
            }
            branch_no_2:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_for_loop_1__iter_value);
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
        Py_DECREF(tmp_for_loop_1__for_iterator);
        tmp_for_loop_1__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        Py_XDECREF(tmp_for_loop_1__iter_value);
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
        Py_DECREF(tmp_for_loop_1__for_iterator);
        tmp_for_loop_1__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_data);
            tmp_iter_arg_2 = var_data;
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_2__for_iterator == NULL);
            tmp_for_loop_2__for_iterator = tmp_assign_source_6;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_for_loop_2__for_iterator);
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 33;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_for_loop_2__iter_value);
            tmp_assign_source_8 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_vm;
                var_vm = tmp_assign_source_8;
                Py_INCREF(var_vm);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_virtualMachine);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_virtualMachine);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 613 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 34;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }

            tmp_called_instance_4 = tmp_mvar_value_5;
            CHECK_OBJECT(var_vm);
            tmp_args_element_name_3 = var_vm;
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 34;
            {
                PyObject *call_args[] = {tmp_args_element_name_3};
                tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_VirtualMachine, call_args);
            }

            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = var__vm;
                var__vm = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT(var__vm);
            tmp_source_name_5 = var__vm;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_status);
            if (tmp_compexpr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_2 = const_str_plain_pending;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_left_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_source_name_6;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT(par_self);
                tmp_source_name_6 = par_self;
                tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_vms);
                if (tmp_called_instance_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT(var__vm);
                tmp_args_element_name_4 = var__vm;
                frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 36;
                {
                    PyObject *call_args[] = {tmp_args_element_name_4};
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_append, call_args);
                }

                Py_DECREF(tmp_called_instance_5);
                if (tmp_call_result_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                Py_DECREF(tmp_call_result_2);
            }
            branch_no_3:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_data);
            tmp_iter_arg_3 = var_data;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_3__for_iterator == NULL);
            tmp_for_loop_3__for_iterator = tmp_assign_source_10;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_for_loop_3__for_iterator);
            tmp_next_source_3 = tmp_for_loop_3__for_iterator;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 37;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_for_loop_3__iter_value;
                tmp_for_loop_3__iter_value = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_for_loop_3__iter_value);
            tmp_assign_source_12 = tmp_for_loop_3__iter_value;
            {
                PyObject *old = var_vm;
                var_vm = tmp_assign_source_12;
                Py_INCREF(var_vm);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_virtualMachine);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_virtualMachine);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 613 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }

            tmp_called_instance_6 = tmp_mvar_value_6;
            CHECK_OBJECT(var_vm);
            tmp_args_element_name_5 = var_vm;
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 38;
            {
                PyObject *call_args[] = {tmp_args_element_name_5};
                tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_VirtualMachine, call_args);
            }

            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var__vm;
                var__vm = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(var__vm);
            tmp_source_name_7 = var__vm;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_status);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_3 = const_str_plain_stopping;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_called_instance_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_6;
                CHECK_OBJECT(par_self);
                tmp_source_name_8 = par_self;
                tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_vms);
                if (tmp_called_instance_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT(var__vm);
                tmp_args_element_name_6 = var__vm;
                frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 40;
                {
                    PyObject *call_args[] = {tmp_args_element_name_6};
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_append, call_args);
                }

                Py_DECREF(tmp_called_instance_7);
                if (tmp_call_result_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                Py_DECREF(tmp_call_result_3);
            }
            branch_no_4:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        goto loop_start_3;
        loop_end_3:;
        goto try_end_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_for_loop_3__iter_value);
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
        Py_DECREF(tmp_for_loop_3__for_iterator);
        tmp_for_loop_3__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        Py_XDECREF(tmp_for_loop_3__iter_value);
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
        Py_DECREF(tmp_for_loop_3__for_iterator);
        tmp_for_loop_3__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(var_data);
            tmp_iter_arg_4 = var_data;
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_4__for_iterator == NULL);
            tmp_for_loop_4__for_iterator = tmp_assign_source_14;
        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_for_loop_4__for_iterator);
            tmp_next_source_4 = tmp_for_loop_4__for_iterator;
            tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_15 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 41;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_for_loop_4__iter_value;
                tmp_for_loop_4__iter_value = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_for_loop_4__iter_value);
            tmp_assign_source_16 = tmp_for_loop_4__iter_value;
            {
                PyObject *old = var_vm;
                var_vm = tmp_assign_source_16;
                Py_INCREF(var_vm);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_virtualMachine);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_virtualMachine);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 613 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 42;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }

            tmp_called_instance_8 = tmp_mvar_value_7;
            CHECK_OBJECT(var_vm);
            tmp_args_element_name_7 = var_vm;
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 42;
            {
                PyObject *call_args[] = {tmp_args_element_name_7};
                tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_VirtualMachine, call_args);
            }

            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = var__vm;
                var__vm = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT(var__vm);
            tmp_source_name_9 = var__vm;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_status);
            if (tmp_compexpr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            tmp_compexpr_right_4 = const_str_plain_stopped;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
            Py_DECREF(tmp_compexpr_left_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_instance_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_8;
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_vms);
                if (tmp_called_instance_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_1 = "oooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT(var__vm);
                tmp_args_element_name_8 = var__vm;
                frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 44;
                {
                    PyObject *call_args[] = {tmp_args_element_name_8};
                    tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_append, call_args);
                }

                Py_DECREF(tmp_called_instance_9);
                if (tmp_call_result_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_1 = "oooo";
                    goto try_except_handler_5;
                }
                Py_DECREF(tmp_call_result_4);
            }
            branch_no_5:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        goto loop_start_4;
        loop_end_4:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_for_loop_4__iter_value);
        tmp_for_loop_4__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_4__for_iterator);
        Py_DECREF(tmp_for_loop_4__for_iterator);
        tmp_for_loop_4__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        Py_XDECREF(tmp_for_loop_4__iter_value);
        tmp_for_loop_4__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_4__for_iterator);
        Py_DECREF(tmp_for_loop_4__for_iterator);
        tmp_for_loop_4__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(var_data);
            tmp_iter_arg_5 = var_data;
            tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_5__for_iterator == NULL);
            tmp_for_loop_5__for_iterator = tmp_assign_source_18;
        }
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_for_loop_5__for_iterator);
            tmp_next_source_5 = tmp_for_loop_5__for_iterator;
            tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_19 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 45;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_for_loop_5__iter_value;
                tmp_for_loop_5__iter_value = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_for_loop_5__iter_value);
            tmp_assign_source_20 = tmp_for_loop_5__iter_value;
            {
                PyObject *old = var_vm;
                var_vm = tmp_assign_source_20;
                Py_INCREF(var_vm);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_virtualMachine);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_virtualMachine);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 613 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 46;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }

            tmp_called_instance_10 = tmp_mvar_value_8;
            CHECK_OBJECT(var_vm);
            tmp_args_element_name_9 = var_vm;
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 46;
            {
                PyObject *call_args[] = {tmp_args_element_name_9};
                tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_VirtualMachine, call_args);
            }

            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var__vm;
                var__vm = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT(var__vm);
            tmp_source_name_11 = var__vm;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_status);
            if (tmp_compexpr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            tmp_compexpr_right_5 = const_str_digest_b42f057c1c75f9041b5951cbe9c01f8f;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
            Py_DECREF(tmp_compexpr_left_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_called_instance_11;
                PyObject *tmp_source_name_12;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT(par_self);
                tmp_source_name_12 = par_self;
                tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_vms);
                if (tmp_called_instance_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "oooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT(var__vm);
                tmp_args_element_name_10 = var__vm;
                frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 48;
                {
                    PyObject *call_args[] = {tmp_args_element_name_10};
                    tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_append, call_args);
                }

                Py_DECREF(tmp_called_instance_11);
                if (tmp_call_result_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "oooo";
                    goto try_except_handler_6;
                }
                Py_DECREF(tmp_call_result_5);
            }
            branch_no_6:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto try_except_handler_6;
        }
        goto loop_start_5;
        loop_end_5:;
        goto try_end_5;
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

        Py_XDECREF(tmp_for_loop_5__iter_value);
        tmp_for_loop_5__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_5__for_iterator);
        Py_DECREF(tmp_for_loop_5__for_iterator);
        tmp_for_loop_5__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_5:;
        Py_XDECREF(tmp_for_loop_5__iter_value);
        tmp_for_loop_5__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_5__for_iterator);
        Py_DECREF(tmp_for_loop_5__for_iterator);
        tmp_for_loop_5__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(var_data);
            tmp_iter_arg_6 = var_data;
            tmp_assign_source_22 = MAKE_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_6__for_iterator == NULL);
            tmp_for_loop_6__for_iterator = tmp_assign_source_22;
        }
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_for_loop_6__for_iterator);
            tmp_next_source_6 = tmp_for_loop_6__for_iterator;
            tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_23 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 49;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_for_loop_6__iter_value;
                tmp_for_loop_6__iter_value = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT(tmp_for_loop_6__iter_value);
            tmp_assign_source_24 = tmp_for_loop_6__iter_value;
            {
                PyObject *old = var_vm;
                var_vm = tmp_assign_source_24;
                Py_INCREF(var_vm);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_virtualMachine);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_virtualMachine);
            }

            if (tmp_mvar_value_9 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 613 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 50;
                type_description_1 = "oooo";
                goto try_except_handler_7;
            }

            tmp_called_instance_12 = tmp_mvar_value_9;
            CHECK_OBJECT(var_vm);
            tmp_args_element_name_11 = var_vm;
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = {tmp_args_element_name_11};
                tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_VirtualMachine, call_args);
            }

            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = var__vm;
                var__vm = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT(var__vm);
            tmp_source_name_13 = var__vm;
            tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_status);
            if (tmp_compexpr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooo";
                goto try_except_handler_7;
            }
            tmp_compexpr_right_6 = const_str_plain_terminated;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
            Py_DECREF(tmp_compexpr_left_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooo";
                goto try_except_handler_7;
            }
            tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_called_instance_13;
                PyObject *tmp_source_name_14;
                PyObject *tmp_call_result_6;
                PyObject *tmp_args_element_name_12;
                CHECK_OBJECT(par_self);
                tmp_source_name_14 = par_self;
                tmp_called_instance_13 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_vms);
                if (tmp_called_instance_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_1 = "oooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT(var__vm);
                tmp_args_element_name_12 = var__vm;
                frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 52;
                {
                    PyObject *call_args[] = {tmp_args_element_name_12};
                    tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_append, call_args);
                }

                Py_DECREF(tmp_called_instance_13);
                if (tmp_call_result_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_1 = "oooo";
                    goto try_except_handler_7;
                }
                Py_DECREF(tmp_call_result_6);
            }
            branch_no_7:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto try_except_handler_7;
        }
        goto loop_start_6;
        loop_end_6:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_for_loop_6__iter_value);
        tmp_for_loop_6__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_6__for_iterator);
        Py_DECREF(tmp_for_loop_6__for_iterator);
        tmp_for_loop_6__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        Py_XDECREF(tmp_for_loop_6__iter_value);
        tmp_for_loop_6__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_6__for_iterator);
        Py_DECREF(tmp_for_loop_6__for_iterator);
        tmp_for_loop_6__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(var_data);
            tmp_iter_arg_7 = var_data;
            tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_7__for_iterator == NULL);
            tmp_for_loop_7__for_iterator = tmp_assign_source_26;
        }
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_for_loop_7__for_iterator);
            tmp_next_source_7 = tmp_for_loop_7__for_iterator;
            tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_27 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 53;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_for_loop_7__iter_value;
                tmp_for_loop_7__iter_value = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_for_loop_7__iter_value);
            tmp_assign_source_28 = tmp_for_loop_7__iter_value;
            {
                PyObject *old = var_vm;
                var_vm = tmp_assign_source_28;
                Py_INCREF(var_vm);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_15;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_main);

            if (unlikely(tmp_mvar_value_10 == NULL)) {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_main);
            }

            if (tmp_mvar_value_10 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 220 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }

            tmp_source_name_16 = tmp_mvar_value_10;
            tmp_source_name_15 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_VMs);
            if (tmp_source_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_update);
            Py_DECREF(tmp_source_name_15);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT(var_vm);
            tmp_subscribed_name_2 = var_vm;
            tmp_subscript_name_2 = const_str_plain_VmId;
            tmp_dict_key_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 54;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT(var_vm);
            tmp_dict_value_1 = var_vm;
            tmp_args_element_name_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_args_element_name_13, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_13);

                exception_lineno = 54;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 54;
            tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_13);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_call_result_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }
            Py_DECREF(tmp_call_result_7);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto try_except_handler_8;
        }
        goto loop_start_7;
        loop_end_7:;
        goto try_end_7;
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

        Py_XDECREF(tmp_for_loop_7__iter_value);
        tmp_for_loop_7__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_7__for_iterator);
        Py_DECREF(tmp_for_loop_7__for_iterator);
        tmp_for_loop_7__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        try_end_7:;
        Py_XDECREF(tmp_for_loop_7__iter_value);
        tmp_for_loop_7__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_7__for_iterator);
        Py_DECREF(tmp_for_loop_7__for_iterator);
        tmp_for_loop_7__for_iterator = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_called_instance_14;
            CHECK_OBJECT(par_self);
            tmp_called_instance_14 = par_self;
            frame_3284a7e7880b481cae488c67a80dbbad->m_frame.f_lineno = 55;
            tmp_iter_arg_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, const_str_plain_summarise);
            if (tmp_iter_arg_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_29 = MAKE_ITERATOR(tmp_iter_arg_8);
            Py_DECREF(tmp_iter_arg_8);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooo";
                goto try_except_handler_9;
            }
            assert(tmp_tuple_unpack_1__source_iter == NULL);
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_29;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_30 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooo";
                exception_lineno = 55;
                goto try_except_handler_10;
            }
            assert(tmp_tuple_unpack_1__element_1 == NULL);
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_31 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooo";
                exception_lineno = 55;
                goto try_except_handler_10;
            }
            assert(tmp_tuple_unpack_1__element_2 == NULL);
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL)
                {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration))
                    {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_1 = "oooo";
                        exception_lineno = 55;
                        goto try_except_handler_10;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
                PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 2)");
#endif
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                type_description_1 = "oooo";
                exception_lineno = 55;
                goto try_except_handler_10;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
        Py_DECREF(tmp_tuple_unpack_1__source_iter);
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        try_end_8:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
        Py_DECREF(tmp_tuple_unpack_1__source_iter);
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
            tmp_assattr_name_4 = tmp_tuple_unpack_1__element_1;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_col_titles, tmp_assattr_name_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooo";
                goto try_except_handler_9;
            }
        }
        Py_XDECREF(tmp_tuple_unpack_1__element_1);
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_assattr_target_5;
            CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
            tmp_assattr_name_5 = tmp_tuple_unpack_1__element_2;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_values, tmp_assattr_name_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooo";
                goto try_except_handler_9;
            }
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_1__element_1);
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_1__element_2);
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_1;
        // End of try:
        try_end_9:;
        Py_XDECREF(tmp_tuple_unpack_1__element_2);
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            tmp_assattr_name_6 = Py_False;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_6 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_refreshing, tmp_assattr_name_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3284a7e7880b481cae488c67a80dbbad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3284a7e7880b481cae488c67a80dbbad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3284a7e7880b481cae488c67a80dbbad, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_3284a7e7880b481cae488c67a80dbbad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3284a7e7880b481cae488c67a80dbbad, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3284a7e7880b481cae488c67a80dbbad,
        type_description_1,
        par_self,
        var_data,
        var_vm,
        var__vm
    );


    // Release cached frame.
    if (frame_3284a7e7880b481cae488c67a80dbbad == cache_frame_3284a7e7880b481cae488c67a80dbbad) {
        Py_DECREF(frame_3284a7e7880b481cae488c67a80dbbad);
    }
    cache_frame_3284a7e7880b481cae488c67a80dbbad = NULL;

    assertFrameObject(frame_3284a7e7880b481cae488c67a80dbbad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_2_refresh);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_data);
    var_data = NULL;

    Py_XDECREF(var_vm);
    var_vm = NULL;

    Py_XDECREF(var__vm);
    var__vm = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_data);
    var_data = NULL;

    Py_XDECREF(var_vm);
    var_vm = NULL;

    Py_XDECREF(var__vm);
    var__vm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_2_refresh);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_instancesGrid$$$function_3_summarise(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_summary = NULL;
    PyObject *var_vm = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_16d7a07211a67739a37855a6194061dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_16d7a07211a67739a37855a6194061dd = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_summary == NULL);
        var_summary = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_16d7a07211a67739a37855a6194061dd, codeobj_16d7a07211a67739a37855a6194061dd, module_instancesGrid, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_16d7a07211a67739a37855a6194061dd = cache_frame_16d7a07211a67739a37855a6194061dd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_16d7a07211a67739a37855a6194061dd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_16d7a07211a67739a37855a6194061dd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_vms);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 60;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_vm;
            var_vm = tmp_assign_source_4;
            Py_INCREF(var_vm);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_summary);
        tmp_source_name_2 = var_summary;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_append);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_vm);
        tmp_called_instance_1 = var_vm;
        frame_16d7a07211a67739a37855a6194061dd->m_frame.f_lineno = 61;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_summarise);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_16d7a07211a67739a37855a6194061dd->m_frame.f_lineno = 61;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 60;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_virtualMachine);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_virtualMachine);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 613 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        frame_16d7a07211a67739a37855a6194061dd->m_frame.f_lineno = 62;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_summary_titles);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_summary);
        tmp_tuple_element_1 = var_summary;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_16d7a07211a67739a37855a6194061dd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_16d7a07211a67739a37855a6194061dd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_16d7a07211a67739a37855a6194061dd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_16d7a07211a67739a37855a6194061dd, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_16d7a07211a67739a37855a6194061dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16d7a07211a67739a37855a6194061dd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_16d7a07211a67739a37855a6194061dd,
        type_description_1,
        par_self,
        var_summary,
        var_vm
    );


    // Release cached frame.
    if (frame_16d7a07211a67739a37855a6194061dd == cache_frame_16d7a07211a67739a37855a6194061dd) {
        Py_DECREF(frame_16d7a07211a67739a37855a6194061dd);
    }
    cache_frame_16d7a07211a67739a37855a6194061dd = NULL;

    assertFrameObject(frame_16d7a07211a67739a37855a6194061dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_3_summarise);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_summary);
    Py_DECREF(var_summary);
    var_summary = NULL;

    Py_XDECREF(var_vm);
    var_vm = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)var_summary);
    Py_DECREF(var_summary);
    var_summary = NULL;

    Py_XDECREF(var_vm);
    var_vm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_3_summarise);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_instancesGrid$$$function_4_custom_print_cell(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cell = python_pars[1];
    PyObject *par_cell_value = python_pars[2];
    PyObject *var_y = NULL;
    PyObject *var__ = NULL;
    PyObject *var_status = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_85d643750284cd776b3836e69a9b0c08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_85d643750284cd776b3836e69a9b0c08 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_85d643750284cd776b3836e69a9b0c08, codeobj_85d643750284cd776b3836e69a9b0c08, module_instancesGrid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_85d643750284cd776b3836e69a9b0c08 = cache_frame_85d643750284cd776b3836e69a9b0c08;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_85d643750284cd776b3836e69a9b0c08);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_85d643750284cd776b3836e69a9b0c08) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_cell);
        tmp_source_name_1 = par_cell;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_grid_current_value_index);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_cell);
            tmp_source_name_2 = par_cell;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_grid_current_value_index);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert(tmp_tuple_unpack_1__source_iter == NULL);
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_2 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooo";
                exception_lineno = 67;
                goto try_except_handler_3;
            }
            assert(tmp_tuple_unpack_1__element_1 == NULL);
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_3 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooo";
                exception_lineno = 67;
                goto try_except_handler_3;
            }
            assert(tmp_tuple_unpack_1__element_2 == NULL);
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL)
                {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration))
                    {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_1 = "oooooo";
                        exception_lineno = 67;
                        goto try_except_handler_3;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
                PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 2)");
#endif
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                type_description_1 = "oooooo";
                exception_lineno = 67;
                goto try_except_handler_3;
            }
        }
        goto try_end_1;
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

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
        Py_DECREF(tmp_tuple_unpack_1__source_iter);
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_tuple_unpack_1__element_1);
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_1__element_2);
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
        Py_DECREF(tmp_tuple_unpack_1__source_iter);
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
            tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
            assert(var_y == NULL);
            Py_INCREF(tmp_assign_source_4);
            var_y = tmp_assign_source_4;
        }
        Py_XDECREF(tmp_tuple_unpack_1__element_1);
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
            tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
            assert(var__ == NULL);
            Py_INCREF(tmp_assign_source_5);
            var__ = tmp_assign_source_5;
        }
        Py_XDECREF(tmp_tuple_unpack_1__element_2);
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_values);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_y);
            tmp_subscript_name_1 = var_y;
            tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_2);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_2, 0);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert(var_status == NULL);
            var_status = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_True;
            CHECK_OBJECT(par_cell);
            tmp_assattr_target_1 = par_cell;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_highlight_whole_widget, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(var_status);
            tmp_compexpr_left_1 = var_status;
            tmp_compexpr_right_1 = const_str_plain_running;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                tmp_assattr_name_2 = const_str_plain_GOODHL;
                CHECK_OBJECT(par_cell);
                tmp_assattr_target_2 = par_cell;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_color, tmp_assattr_name_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT(var_status);
                tmp_compexpr_left_2 = var_status;
                tmp_compexpr_right_2 = const_str_plain_pending;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    PyObject *tmp_assattr_name_3;
                    PyObject *tmp_assattr_target_3;
                    tmp_assattr_name_3 = const_str_plain_RED_BLACK;
                    CHECK_OBJECT(par_cell);
                    tmp_assattr_target_3 = par_cell;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_color, tmp_assattr_name_3);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_3;
                    PyObject *tmp_compexpr_right_3;
                    CHECK_OBJECT(var_status);
                    tmp_compexpr_left_3 = var_status;
                    tmp_compexpr_right_3 = const_str_plain_stopping;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_1 = "oooooo";
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
                        PyObject *tmp_assattr_name_4;
                        PyObject *tmp_assattr_target_4;
                        tmp_assattr_name_4 = const_str_plain_RED_BLACK;
                        CHECK_OBJECT(par_cell);
                        tmp_assattr_target_4 = par_cell;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_color, tmp_assattr_name_4);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        nuitka_bool tmp_condition_result_5;
                        PyObject *tmp_compexpr_left_4;
                        PyObject *tmp_compexpr_right_4;
                        CHECK_OBJECT(var_status);
                        tmp_compexpr_left_4 = var_status;
                        tmp_compexpr_right_4 = const_str_plain_stopped;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                        if (tmp_res == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_1 = "oooooo";
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
                            PyObject *tmp_assattr_name_5;
                            PyObject *tmp_assattr_target_5;
                            tmp_assattr_name_5 = const_str_plain_CURSOR;
                            CHECK_OBJECT(par_cell);
                            tmp_assattr_target_5 = par_cell;
                            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_color, tmp_assattr_name_5);
                            if (tmp_result == false) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 77;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }
                        }
                        goto branch_end_5;
                        branch_no_5:;
                        {
                            nuitka_bool tmp_condition_result_6;
                            int tmp_or_left_truth_1;
                            nuitka_bool tmp_or_left_value_1;
                            nuitka_bool tmp_or_right_value_1;
                            PyObject *tmp_compexpr_left_5;
                            PyObject *tmp_compexpr_right_5;
                            PyObject *tmp_compexpr_left_6;
                            PyObject *tmp_compexpr_right_6;
                            CHECK_OBJECT(var_status);
                            tmp_compexpr_left_5 = var_status;
                            tmp_compexpr_right_5 = const_str_plain_terminated;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                            if (tmp_res == -1) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 78;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
                            if (tmp_or_left_truth_1 == 1) {
                                goto or_left_1;
                            } else {
                                goto or_right_1;
                            }
                            or_right_1:;
                            CHECK_OBJECT(var_status);
                            tmp_compexpr_left_6 = var_status;
                            tmp_compexpr_right_6 = const_str_digest_b42f057c1c75f9041b5951cbe9c01f8f;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
                            if (tmp_res == -1) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 78;
                                type_description_1 = "oooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            tmp_condition_result_6 = tmp_or_right_value_1;
                            goto or_end_1;
                            or_left_1:;
                            tmp_condition_result_6 = tmp_or_left_value_1;
                            or_end_1:;
                            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                                goto branch_yes_6;
                            } else {
                                goto branch_no_6;
                            }
                            branch_yes_6:;
                            {
                                PyObject *tmp_assattr_name_6;
                                PyObject *tmp_assattr_target_6;
                                tmp_assattr_name_6 = const_str_plain_DANGER;
                                CHECK_OBJECT(par_cell);
                                tmp_assattr_target_6 = par_cell;
                                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_color, tmp_assattr_name_6);
                                if (tmp_result == false) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 79;
                                    type_description_1 = "oooooo";
                                    goto frame_exception_exit_1;
                                }
                            }
                            branch_no_6:;
                        }
                        branch_end_5:;
                    }
                    branch_end_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_85d643750284cd776b3836e69a9b0c08);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_85d643750284cd776b3836e69a9b0c08);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_85d643750284cd776b3836e69a9b0c08, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_85d643750284cd776b3836e69a9b0c08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85d643750284cd776b3836e69a9b0c08, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_85d643750284cd776b3836e69a9b0c08,
        type_description_1,
        par_self,
        par_cell,
        par_cell_value,
        var_y,
        var__,
        var_status
    );


    // Release cached frame.
    if (frame_85d643750284cd776b3836e69a9b0c08 == cache_frame_85d643750284cd776b3836e69a9b0c08) {
        Py_DECREF(frame_85d643750284cd776b3836e69a9b0c08);
    }
    cache_frame_85d643750284cd776b3836e69a9b0c08 = NULL;

    assertFrameObject(frame_85d643750284cd776b3836e69a9b0c08);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_4_custom_print_cell);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_y);
    var_y = NULL;

    Py_XDECREF(var__);
    var__ = NULL;

    Py_XDECREF(var_status);
    var_status = NULL;

    goto function_return_exit;
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

    Py_XDECREF(var_y);
    var_y = NULL;

    Py_XDECREF(var__);
    var__ = NULL;

    Py_XDECREF(var_status);
    var_status = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(instancesGrid$$$function_4_custom_print_cell);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cell);
    Py_DECREF(par_cell);
    CHECK_OBJECT(par_cell_value);
    Py_DECREF(par_cell_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cell);
    Py_DECREF(par_cell);
    CHECK_OBJECT(par_cell_value);
    Py_DECREF(par_cell_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_instancesGrid$$$function_1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_instancesGrid$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_17d91b469102518b4bacbfc8c97cef8b,
#endif
        codeobj_b178cc9fd104e0ed06a6c848cb59805a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_instancesGrid,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_instancesGrid$$$function_1___init__$$$function_1_on_selection_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_instancesGrid$$$function_1___init__$$$function_1_on_selection_cb,
        const_str_plain_on_selection_cb,
#if PYTHON_VERSION >= 300
        const_str_digest_bdb94117dd6c6056c79c0f2ba97c7bcf,
#endif
        codeobj_a3a34389ae749e873aa957d46ee308d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_instancesGrid,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_instancesGrid$$$function_2_refresh() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_instancesGrid$$$function_2_refresh,
        const_str_plain_refresh,
#if PYTHON_VERSION >= 300
        const_str_digest_b760b2cfb8f7b453bda650a9b67cf12c,
#endif
        codeobj_3284a7e7880b481cae488c67a80dbbad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_instancesGrid,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_instancesGrid$$$function_3_summarise() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_instancesGrid$$$function_3_summarise,
        const_str_plain_summarise,
#if PYTHON_VERSION >= 300
        const_str_digest_e10f800a4eb1f3fb7d7d8ef956c53e59,
#endif
        codeobj_16d7a07211a67739a37855a6194061dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_instancesGrid,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_instancesGrid$$$function_4_custom_print_cell() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_instancesGrid$$$function_4_custom_print_cell,
        const_str_plain_custom_print_cell,
#if PYTHON_VERSION >= 300
        const_str_digest_cc2e02ab51b611ac051b0873bbfe95fa,
#endif
        codeobj_85d643750284cd776b3836e69a9b0c08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_instancesGrid,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_instancesGrid =
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

function_impl_code functable_instancesGrid[] = {
    impl_instancesGrid$$$function_1___init__$$$function_1_on_selection_cb,
    impl_instancesGrid$$$function_1___init__,
    impl_instancesGrid$$$function_2_refresh,
    impl_instancesGrid$$$function_3_summarise,
    impl_instancesGrid$$$function_4_custom_print_cell,
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

    function_impl_code *current = functable_instancesGrid;
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

    if (offset > sizeof(functable_instancesGrid) || offset < 0) {
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
        functable_instancesGrid[offset],
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
        module_instancesGrid,
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
PyObject *modulecode_instancesGrid(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_instancesGrid;
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
    PRINT_STRING("instancesGrid: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("instancesGrid: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("instancesGrid: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initinstancesGrid\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_instancesGrid = Py_InitModule4(
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
    mdef_instancesGrid.m_name = module_full_name;
    module_instancesGrid = PyModule_Create(&mdef_instancesGrid);
#endif

    moduledict_instancesGrid = MODULE_DICT(module_instancesGrid);

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
        moduledict_instancesGrid,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_instancesGrid,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_instancesGrid,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_instancesGrid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_instancesGrid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_instancesGrid);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_instancesGrid);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___name__),
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
#if 0
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = PyCell_EMPTY();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_014d81b0ac8dd9f912d3df0544823faa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_instancesGrid_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_fb63505c83edb4bbf5974300349c509f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fb63505c83edb4bbf5974300349c509f_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_6e77ee18636b25408b4db3b903a71b8a;
        UPDATE_STRING_DICT0(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_014d81b0ac8dd9f912d3df0544823faa = MAKE_MODULE_FRAME(codeobj_014d81b0ac8dd9f912d3df0544823faa, module_instancesGrid);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_014d81b0ac8dd9f912d3df0544823faa);
    assert(Py_REFCNT(frame_014d81b0ac8dd9f912d3df0544823faa) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_6e77ee18636b25408b4db3b903a71b8a;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___spec__);

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
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_npyscreen;
        tmp_globals_name_1 = (PyObject *)moduledict_instancesGrid;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_npyscreen, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_pyperclip;
        tmp_globals_name_2 = (PyObject *)moduledict_instancesGrid;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_pyperclip, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_main;
        tmp_globals_name_3 = (PyObject *)moduledict_instancesGrid;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_selectableGrid;
        tmp_globals_name_4 = (PyObject *)moduledict_instancesGrid;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 6;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_selectableGrid, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_virtualMachine;
        tmp_globals_name_5 = (PyObject *)moduledict_instancesGrid;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_virtualMachine, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_createVm;
        tmp_globals_name_6 = (PyObject *)moduledict_instancesGrid;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 8;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_createVm, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_popup;
        tmp_globals_name_7 = (PyObject *)moduledict_instancesGrid;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = const_int_0;
        frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 9;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_popup, tmp_assign_source_10);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_selectableGrid);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_selectableGrid);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_SelectableGrid);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_assign_source_11 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_11, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
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


            exception_lineno = 12;

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


            exception_lineno = 12;

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


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_13 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
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


            exception_lineno = 12;

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


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_source_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_2, const_str_plain___prepare__);
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain___prepare__);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_InstancesGrid;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 12;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_1;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_14;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_source_name_4 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_4, const_str_plain___getitem__);
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

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
                PyObject *tmp_source_name_5;
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


                    exception_lineno = 12;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
                CHECK_OBJECT(tmp_class_creation_1__prepared);
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
                assert(!(tmp_source_name_5 == NULL));
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain___name__);
                Py_DECREF(tmp_source_name_5);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_1);

                    exception_lineno = 12;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 12;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 12;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_15;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_instancesGrid_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_instancesGrid;
        tmp_res = PyObject_SetItem(locals_instancesGrid_12, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_InstancesGrid;
        tmp_res = PyObject_SetItem(locals_instancesGrid_12, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_fb63505c83edb4bbf5974300349c509f_2, codeobj_fb63505c83edb4bbf5974300349c509f, module_instancesGrid, sizeof(void *));
        frame_fb63505c83edb4bbf5974300349c509f_2 = cache_frame_fb63505c83edb4bbf5974300349c509f_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fb63505c83edb4bbf5974300349c509f_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fb63505c83edb4bbf5974300349c509f_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_instancesGrid$$$function_1___init__();

        ((struct Nuitka_FunctionObject *)tmp_dictset_value)->m_closure[0] = outline_0_var___class__;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_dictset_value)->m_closure[0]);


        tmp_res = PyObject_SetItem(locals_instancesGrid_12, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_instancesGrid$$$function_2_refresh();



        tmp_res = PyObject_SetItem(locals_instancesGrid_12, const_str_plain_refresh, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_instancesGrid$$$function_3_summarise();



        tmp_res = PyObject_SetItem(locals_instancesGrid_12, const_str_plain_summarise, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_instancesGrid$$$function_4_custom_print_cell();



        tmp_res = PyObject_SetItem(locals_instancesGrid_12, const_str_plain_custom_print_cell, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fb63505c83edb4bbf5974300349c509f_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fb63505c83edb4bbf5974300349c509f_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fb63505c83edb4bbf5974300349c509f_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_fb63505c83edb4bbf5974300349c509f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fb63505c83edb4bbf5974300349c509f_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_fb63505c83edb4bbf5974300349c509f_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_fb63505c83edb4bbf5974300349c509f_2 == cache_frame_fb63505c83edb4bbf5974300349c509f_2) {
            Py_DECREF(frame_fb63505c83edb4bbf5974300349c509f_2);
        }
        cache_frame_fb63505c83edb4bbf5974300349c509f_2 = NULL;

        assertFrameObject(frame_fb63505c83edb4bbf5974300349c509f_2);

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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_InstancesGrid;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_instancesGrid_12;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_014d81b0ac8dd9f912d3df0544823faa->m_frame.f_lineno = 12;
            tmp_assign_source_17 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            {
                PyObject *old = PyCell_GET(outline_0_var___class__);
                PyCell_SET(outline_0_var___class__, tmp_assign_source_17);
                Py_XDECREF(old);
            }

        }
        CHECK_OBJECT(PyCell_GET(outline_0_var___class__));
        tmp_assign_source_16 = PyCell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(instancesGrid);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_instancesGrid_12);
        locals_instancesGrid_12 = NULL;
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

        Py_DECREF(locals_instancesGrid_12);
        locals_instancesGrid_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(instancesGrid);
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

        CHECK_OBJECT((PyObject *)outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(instancesGrid);
        return NULL;
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_instancesGrid, (Nuitka_StringObject *)const_str_plain_InstancesGrid, tmp_assign_source_16);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_014d81b0ac8dd9f912d3df0544823faa);
#endif
    popFrameStack();

    assertFrameObject(frame_014d81b0ac8dd9f912d3df0544823faa);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_014d81b0ac8dd9f912d3df0544823faa);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_014d81b0ac8dd9f912d3df0544823faa, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_014d81b0ac8dd9f912d3df0544823faa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_014d81b0ac8dd9f912d3df0544823faa, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
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


    return module_instancesGrid;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
