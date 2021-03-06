/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.1.6 (alpha)
 **
 **/

#define closcall1(td, clo,a1) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#define closcall3(td, clo,a1,a2,a3) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 2, (closure)(a1), clo,a2,a3); \
} else { \
   ((clo)->fn)(td, 3, clo,a1,a2,a3);\
}
#define return_closcall3(td, clo,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     closcall3(td, (closure) (clo),a1,a2,a3); \
     return;\
 } \
}

#define return_direct3(td, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)_fn,a1,a2,a3); \
 }}

#define closcall4(td, clo,a1,a2,a3,a4) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 3, (closure)(a1), clo,a2,a3,a4); \
} else { \
   ((clo)->fn)(td, 4, clo,a1,a2,a3,a4);\
}
#define return_closcall4(td, clo,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else {\
     closcall4(td, (closure) (clo),a1,a2,a3,a4); \
     return;\
 } \
}

#define return_direct4(td, _fn,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 4); \
     return; \
 } else { \
     (_fn)(td, 4, (closure)_fn,a1,a2,a3,a4); \
 }}

#define closcall5(td, clo,a1,a2,a3,a4,a5) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 4, (closure)(a1), clo,a2,a3,a4,a5); \
} else { \
   ((clo)->fn)(td, 5, clo,a1,a2,a3,a4,a5);\
}
#define return_closcall5(td, clo,a1,a2,a3,a4,a5) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[5]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;\
     GC(td, clo, buf, 5); \
     return; \
 } else {\
     closcall5(td, (closure) (clo),a1,a2,a3,a4,a5); \
     return;\
 } \
}

#define return_direct5(td, _fn,a1,a2,a3,a4,a5) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[5]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 5); \
     return; \
 } else { \
     (_fn)(td, 5, (closure)_fn,a1,a2,a3,a4,a5); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros = NULL;
object __glo_macro_117expand_scheme_cyclone_macros = NULL;
object __glo_macro_117macro_127_scheme_cyclone_macros = NULL;
object __glo_define_91syntax_127_scheme_cyclone_macros = NULL;
object __glo_macro_117get_91defined_91macros_scheme_cyclone_macros = NULL;
object __glo_macro_117get_91env_scheme_cyclone_macros = NULL;
object __glo_macro_117load_91env_67_scheme_cyclone_macros = NULL;
object __glo_macro_117add_67_scheme_cyclone_macros = NULL;
object __glo__85macro_117defined_91macros_85_scheme_cyclone_macros = NULL;
object __glo__85macro_117env_85_scheme_cyclone_macros = NULL;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91set_67_scheme_base;
extern object __glo_type_91slot_91offset_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_eval_scheme_eval;
extern object __glo_eval_91from_91c_scheme_eval;
extern object __glo_create_91environment_scheme_eval;
extern object __glo_setup_91environment_scheme_eval;
extern object __glo_tagged_91list_127_scheme_cyclone_util;
extern object __glo_if_127_scheme_cyclone_util;
extern object __glo_begin_127_scheme_cyclone_util;
extern object __glo_lambda_127_scheme_cyclone_util;
extern object __glo_env_117enclosing_91environment_scheme_cyclone_util;
extern object __glo_env_117first_91frame_scheme_cyclone_util;
extern object __glo_env_117the_91empty_91environment_scheme_cyclone_util;
extern object __glo_env_117make_91frame_scheme_cyclone_util;
extern object __glo_env_117frame_91variables_scheme_cyclone_util;
extern object __glo_env_117frame_91values_scheme_cyclone_util;
extern object __glo_env_117add_91binding_91to_91frame_67_scheme_cyclone_util;
extern object __glo_env_117extend_91environment_scheme_cyclone_util;
extern object __glo_env_117lookup_scheme_cyclone_util;
extern object __glo_env_117lookup_91variable_91value_scheme_cyclone_util;
extern object __glo_env_117_191lookup_91variable_91value_scheme_cyclone_util;
extern object __glo_env_117set_91variable_91value_67_scheme_cyclone_util;
extern object __glo_env_117define_91variable_67_scheme_cyclone_util;
extern object __glo_Cyc_91er_91rename_scheme_cyclone_util;
extern object __glo_Cyc_91er_91compare_127_scheme_cyclone_util;
extern object __glo_mangle_scheme_cyclone_util;
extern object __glo_mangle_91global_scheme_cyclone_util;
extern object __glo_gensym_scheme_cyclone_util;
extern object __glo_delete_scheme_cyclone_util;
extern object __glo_delete_91duplicates_scheme_cyclone_util;
extern object __glo_list_91index2_scheme_cyclone_util;
extern object __glo_list_91insert_91at_67_scheme_cyclone_util;
extern object __glo_list_91prefix_127_scheme_cyclone_util;
extern object __glo_string_91replace_91all_scheme_cyclone_util;
extern object __glo_filter_scheme_cyclone_util;
#include "cyclone/runtime.h"
defsymbol(quote);
defsymbol(define_91syntax);
defsymbol(macro);
static void __lambda_27(void *data, int argc, closure _,object k_7323) ;
static void __lambda_26(void *data, int argc, object self_7380, object r_7327) ;
static void __lambda_25(void *data, int argc, object self_7381, object r_7325) ;
static void __lambda_24(void *data, int argc, object self_7382, object r_7326) ;
static void __lambda_23(void *data, int argc, closure _,object k_7330, object exp_7310, object macro_739, object mac_91env_738) ;
static void __lambda_22(void *data, int argc, object self_7383, object r_7345) ;
static void __lambda_21(void *data, int argc, object self_7384, object compiled_91macro_127_7312) ;
static void __lambda_20(void *data, int argc, object self_7385, object r_7339) ;
static void __lambda_19(void *data, int argc, object self_7386, object r_7337) ;
static void __lambda_18(void *data, int argc, object self_7387, object r_7338) ;
static void __lambda_17(void *data, int argc, object self_7388, object r_7335) ;
static void __lambda_16(void *data, int argc, object self_7389, object r_7333) ;
static void __lambda_15(void *data, int argc, object self_7390, object k_7342) ;
static void __lambda_14(void *data, int argc, closure _,object k_7348, object exp_7314, object defined_91macros_7313) ;
static void __lambda_13(void *data, int argc, closure _,object k_7352, object exp_7315) ;
static void __lambda_12(void *data, int argc, object self_7391, object r_7353) ;
static void __lambda_11(void *data, int argc, closure _,object k_7356) ;
static void __lambda_10(void *data, int argc, closure _,object k_7359) ;
static void __lambda_9(void *data, int argc, closure _,object k_7362, object defined_91macros_7317, object base_91env_7316) ;
static void __lambda_8(void *data, int argc, object self_7392, object r_7364) ;
static void __lambda_7(void *data, int argc, object self_7393, object k_7367, object v_7318) ;
static void __lambda_6(void *data, int argc, object self_7394, object r_7368) ;
static void __lambda_5(void *data, int argc, object self_7395, object r_7366) ;
static void __lambda_4(void *data, int argc, object self_7396, object r_7365) ;
static void __lambda_3(void *data, int argc, object self_7397, object r_7363) ;
static void __lambda_2(void *data, int argc, closure _,object k_7372, object name_7320, object body_7319) ;
static void __lambda_1(void *data, int argc, object self_7398, object r_7374) ;
static void __lambda_0(void *data, int argc, object self_7399, object r_7373) ;

static void __lambda_27(void *data, int argc, closure _,object k_7323) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:lib-init:schemecyclonemacros");

closureN_type c_73217;
c_73217.hdr.mark = gc_color_red;
 c_73217.hdr.grayed = 0;
c_73217.tag = closureN_tag;
 c_73217.fn = (function_type)__lambda_26;
c_73217.num_args = 1;
c_73217.num_elements = 1;
c_73217.elements = (object *)alloca(sizeof(object) * 1);
c_73217.elements[0] = k_7323;

return_closcall1(data,(closure)&c_73217,  NULL);; 
}

static void __lambda_26(void *data, int argc, object self_7380, object r_7327) {
  
closureN_type c_73219;
c_73219.hdr.mark = gc_color_red;
 c_73219.hdr.grayed = 0;
c_73219.tag = closureN_tag;
 c_73219.fn = (function_type)__lambda_25;
c_73219.num_args = 1;
c_73219.num_elements = 1;
c_73219.elements = (object *)alloca(sizeof(object) * 1);
c_73219.elements[0] = ((closureN)self_7380)->elements[0];

return_closcall1(data,(closure)&c_73219,  global_set(__glo__85macro_117env_85_scheme_cyclone_macros, r_7327));; 
}

static void __lambda_25(void *data, int argc, object self_7381, object r_7325) {
  
closureN_type c_73221;
c_73221.hdr.mark = gc_color_red;
 c_73221.hdr.grayed = 0;
c_73221.tag = closureN_tag;
 c_73221.fn = (function_type)__lambda_24;
c_73221.num_args = 1;
c_73221.num_elements = 1;
c_73221.elements = (object *)alloca(sizeof(object) * 1);
c_73221.elements[0] = ((closureN)self_7381)->elements[0];

return_closcall1(data,(closure)&c_73221,  NULL);; 
}

static void __lambda_24(void *data, int argc, object self_7382, object r_7326) {
  return_closcall1(data,  ((closureN)self_7382)->elements[0],  global_set(__glo__85macro_117defined_91macros_85_scheme_cyclone_macros, r_7326));; 
}

static void __lambda_23(void *data, int argc, closure _,object k_7330, object exp_7310, object macro_739, object mac_91env_738) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:macro:expand");

closureN_type c_73157;
c_73157.hdr.mark = gc_color_red;
 c_73157.hdr.grayed = 0;
c_73157.tag = closureN_tag;
 c_73157.fn = (function_type)__lambda_22;
c_73157.num_args = 1;
c_73157.num_elements = 4;
c_73157.elements = (object *)alloca(sizeof(object) * 4);
c_73157.elements[0] = exp_7310;
c_73157.elements[1] = k_7330;
c_73157.elements[2] = mac_91env_738;
c_73157.elements[3] = macro_739;

return_closcall1(data,(closure)&c_73157,  Cyc_cadr(data, macro_739));; 
}

static void __lambda_22(void *data, int argc, object self_7383, object r_7345) {
  
closureN_type c_73159;
c_73159.hdr.mark = gc_color_red;
 c_73159.hdr.grayed = 0;
c_73159.tag = closureN_tag;
 c_73159.fn = (function_type)__lambda_15;
c_73159.num_args = 0;
c_73159.num_elements = 2;
c_73159.elements = (object *)alloca(sizeof(object) * 2);
c_73159.elements[0] = ((closureN)self_7383)->elements[3];
c_73159.elements[1] = r_7345;


closureN_type c_73177;
c_73177.hdr.mark = gc_color_red;
 c_73177.hdr.grayed = 0;
c_73177.tag = closureN_tag;
 c_73177.fn = (function_type)__lambda_21;
c_73177.num_args = 1;
c_73177.num_elements = 4;
c_73177.elements = (object *)alloca(sizeof(object) * 4);
c_73177.elements[0] = ((closureN)self_7383)->elements[0];
c_73177.elements[1] = ((closureN)self_7383)->elements[1];
c_73177.elements[2] = ((closureN)self_7383)->elements[2];
c_73177.elements[3] = ((closureN)self_7383)->elements[3];

return_closcall1(data,(closure)&c_73159,  &c_73177);; 
}

static void __lambda_21(void *data, int argc, object self_7384, object compiled_91macro_127_7312) {
  if( (boolean_f != ((closureN)self_7384)->elements[3]) ){ 
  if( (boolean_f != compiled_91macro_127_7312) ){ 
  
closureN_type c_73180;
c_73180.hdr.mark = gc_color_red;
 c_73180.hdr.grayed = 0;
c_73180.tag = closureN_tag;
 c_73180.fn = (function_type)__lambda_16;
c_73180.num_args = 1;
c_73180.num_elements = 3;
c_73180.elements = (object *)alloca(sizeof(object) * 3);
c_73180.elements[0] = ((closureN)self_7384)->elements[0];
c_73180.elements[1] = ((closureN)self_7384)->elements[1];
c_73180.elements[2] = ((closureN)self_7384)->elements[3];

return_closcall2(data,  __glo_Cyc_91er_91rename_scheme_cyclone_util,  &c_73180, ((closureN)self_7384)->elements[2]);
} else { 
  
closureN_type c_73191;
c_73191.hdr.mark = gc_color_red;
 c_73191.hdr.grayed = 0;
c_73191.tag = closureN_tag;
 c_73191.fn = (function_type)__lambda_20;
c_73191.num_args = 1;
c_73191.num_elements = 4;
c_73191.elements = (object *)alloca(sizeof(object) * 4);
c_73191.elements[0] = ((closureN)self_7384)->elements[0];
c_73191.elements[1] = ((closureN)self_7384)->elements[1];
c_73191.elements[2] = ((closureN)self_7384)->elements[2];
c_73191.elements[3] = ((closureN)self_7384)->elements[3];

return_closcall1(data,(closure)&c_73191,  quote_quote);}

} else { 
  
make_string(c_73211, "macro not found");
return_closcall3(data,  __glo_error_scheme_base,  ((closureN)self_7384)->elements[1], &c_73211, ((closureN)self_7384)->elements[0]);}
; 
}

static void __lambda_20(void *data, int argc, object self_7385, object r_7339) {
  
closureN_type c_73193;
c_73193.hdr.mark = gc_color_red;
 c_73193.hdr.grayed = 0;
c_73193.tag = closureN_tag;
 c_73193.fn = (function_type)__lambda_19;
c_73193.num_args = 1;
c_73193.num_elements = 3;
c_73193.elements = (object *)alloca(sizeof(object) * 3);
c_73193.elements[0] = ((closureN)self_7385)->elements[1];
c_73193.elements[1] = ((closureN)self_7385)->elements[2];
c_73193.elements[2] = ((closureN)self_7385)->elements[3];

return_closcall3(data,  __glo__list_scheme_base,  &c_73193, r_7339, ((closureN)self_7385)->elements[0]);; 
}

static void __lambda_19(void *data, int argc, object self_7386, object r_7337) {
  
closureN_type c_73195;
c_73195.hdr.mark = gc_color_red;
 c_73195.hdr.grayed = 0;
c_73195.tag = closureN_tag;
 c_73195.fn = (function_type)__lambda_18;
c_73195.num_args = 1;
c_73195.num_elements = 4;
c_73195.elements = (object *)alloca(sizeof(object) * 4);
c_73195.elements[0] = ((closureN)self_7386)->elements[0];
c_73195.elements[1] = ((closureN)self_7386)->elements[1];
c_73195.elements[2] = ((closureN)self_7386)->elements[2];
c_73195.elements[3] = r_7337;

return_closcall2(data,  __glo_Cyc_91er_91rename_scheme_cyclone_util,  &c_73195, ((closureN)self_7386)->elements[1]);; 
}

static void __lambda_18(void *data, int argc, object self_7387, object r_7338) {
  
closureN_type c_73197;
c_73197.hdr.mark = gc_color_red;
 c_73197.hdr.grayed = 0;
c_73197.tag = closureN_tag;
 c_73197.fn = (function_type)__lambda_17;
c_73197.num_args = 1;
c_73197.num_elements = 2;
c_73197.elements = (object *)alloca(sizeof(object) * 2);
c_73197.elements[0] = ((closureN)self_7387)->elements[0];
c_73197.elements[1] = ((closureN)self_7387)->elements[1];

return_closcall5(data,  __glo__list_scheme_base,  &c_73197, Cyc_get_cvar(Cyc_cadr(data, ((closureN)self_7387)->elements[2])), ((closureN)self_7387)->elements[3], r_7338, __glo_Cyc_91er_91compare_127_scheme_cyclone_util);; 
}

static void __lambda_17(void *data, int argc, object self_7388, object r_7335) {
  return_closcall3(data,  __glo_eval_scheme_eval,  ((closureN)self_7388)->elements[0], r_7335, ((closureN)self_7388)->elements[1]);; 
}

static void __lambda_16(void *data, int argc, object self_7389, object r_7333) {
  return_closcall4(data,  Cyc_get_cvar(Cyc_cadr(data, ((closureN)self_7389)->elements[2])),  ((closureN)self_7389)->elements[1], ((closureN)self_7389)->elements[0], r_7333, __glo_Cyc_91er_91compare_127_scheme_cyclone_util);; 
}

static void __lambda_15(void *data, int argc, object self_7390, object k_7342) {
  if( (boolean_f != Cyc_is_macro(Cyc_get_cvar(((closureN)self_7390)->elements[1]))) ){ 
  return_closcall1(data,  k_7342,  Cyc_is_macro(Cyc_get_cvar(((closureN)self_7390)->elements[1])));
} else { 
  return_closcall1(data,  k_7342,  Cyc_is_procedure(data, Cyc_cadr(data, ((closureN)self_7390)->elements[0])));}
; 
}

static void __lambda_14(void *data, int argc, closure _,object k_7348, object exp_7314, object defined_91macros_7313) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:macro:macro?");
return_closcall1(data,  k_7348,  assoc(data, Cyc_car(data, exp_7314), defined_91macros_7313));; 
}

static void __lambda_13(void *data, int argc, closure _,object k_7352, object exp_7315) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:define-syntax?");

closureN_type c_73145;
c_73145.hdr.mark = gc_color_red;
 c_73145.hdr.grayed = 0;
c_73145.tag = closureN_tag;
 c_73145.fn = (function_type)__lambda_12;
c_73145.num_args = 1;
c_73145.num_elements = 2;
c_73145.elements = (object *)alloca(sizeof(object) * 2);
c_73145.elements[0] = exp_7315;
c_73145.elements[1] = k_7352;

return_closcall1(data,(closure)&c_73145,  quote_define_91syntax);; 
}

static void __lambda_12(void *data, int argc, object self_7391, object r_7353) {
  return_closcall3(data,  __glo_tagged_91list_127_scheme_cyclone_util,  ((closureN)self_7391)->elements[1], r_7353, ((closureN)self_7391)->elements[0]);; 
}

static void __lambda_11(void *data, int argc, closure _,object k_7356) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:macro:get-defined-macros");
return_closcall1(data,  k_7356,  __glo__85macro_117defined_91macros_85_scheme_cyclone_macros);; 
}

static void __lambda_10(void *data, int argc, closure _,object k_7359) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:macro:get-env");
return_closcall1(data,  k_7359,  __glo__85macro_117env_85_scheme_cyclone_macros);; 
}

static void __lambda_9(void *data, int argc, closure _,object k_7362, object defined_91macros_7317, object base_91env_7316) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:macro:load-env!");

closureN_type c_73117;
c_73117.hdr.mark = gc_color_red;
 c_73117.hdr.grayed = 0;
c_73117.tag = closureN_tag;
 c_73117.fn = (function_type)__lambda_8;
c_73117.num_args = 1;
c_73117.num_elements = 3;
c_73117.elements = (object *)alloca(sizeof(object) * 3);
c_73117.elements[0] = base_91env_7316;
c_73117.elements[1] = defined_91macros_7317;
c_73117.elements[2] = k_7362;

return_closcall3(data,  __glo_map_scheme_base,  &c_73117, primitive_car, defined_91macros_7317);; 
}

static void __lambda_8(void *data, int argc, object self_7392, object r_7364) {
  
closureN_type c_73119;
c_73119.hdr.mark = gc_color_red;
 c_73119.hdr.grayed = 0;
c_73119.tag = closureN_tag;
 c_73119.fn = (function_type)__lambda_5;
c_73119.num_args = 1;
c_73119.num_elements = 4;
c_73119.elements = (object *)alloca(sizeof(object) * 4);
c_73119.elements[0] = ((closureN)self_7392)->elements[0];
c_73119.elements[1] = ((closureN)self_7392)->elements[1];
c_73119.elements[2] = ((closureN)self_7392)->elements[2];
c_73119.elements[3] = r_7364;


mclosure0(c_73131, (function_type)__lambda_7);c_73131.num_args = 1;
return_closcall1(data,(closure)&c_73119,  &c_73131);; 
}

static void __lambda_7(void *data, int argc, object self_7393, object k_7367, object v_7318) {
  
closureN_type c_73133;
c_73133.hdr.mark = gc_color_red;
 c_73133.hdr.grayed = 0;
c_73133.tag = closureN_tag;
 c_73133.fn = (function_type)__lambda_6;
c_73133.num_args = 1;
c_73133.num_elements = 2;
c_73133.elements = (object *)alloca(sizeof(object) * 2);
c_73133.elements[0] = k_7367;
c_73133.elements[1] = v_7318;

return_closcall1(data,(closure)&c_73133,  quote_macro);; 
}

static void __lambda_6(void *data, int argc, object self_7394, object r_7368) {
  return_closcall3(data,  __glo__list_scheme_base,  ((closureN)self_7394)->elements[0], r_7368, Cyc_cdr(data, ((closureN)self_7394)->elements[1]));; 
}

static void __lambda_5(void *data, int argc, object self_7395, object r_7366) {
  
closureN_type c_73121;
c_73121.hdr.mark = gc_color_red;
 c_73121.hdr.grayed = 0;
c_73121.tag = closureN_tag;
 c_73121.fn = (function_type)__lambda_4;
c_73121.num_args = 1;
c_73121.num_elements = 3;
c_73121.elements = (object *)alloca(sizeof(object) * 3);
c_73121.elements[0] = ((closureN)self_7395)->elements[0];
c_73121.elements[1] = ((closureN)self_7395)->elements[2];
c_73121.elements[2] = ((closureN)self_7395)->elements[3];

return_closcall3(data,  __glo_map_scheme_base,  &c_73121, r_7366, ((closureN)self_7395)->elements[1]);; 
}

static void __lambda_4(void *data, int argc, object self_7396, object r_7365) {
  
closureN_type c_73123;
c_73123.hdr.mark = gc_color_red;
 c_73123.hdr.grayed = 0;
c_73123.tag = closureN_tag;
 c_73123.fn = (function_type)__lambda_3;
c_73123.num_args = 1;
c_73123.num_elements = 1;
c_73123.elements = (object *)alloca(sizeof(object) * 1);
c_73123.elements[0] = ((closureN)self_7396)->elements[1];

return_closcall4(data,  __glo_env_117extend_91environment_scheme_cyclone_util,  &c_73123, ((closureN)self_7396)->elements[2], r_7365, ((closureN)self_7396)->elements[0]);; 
}

static void __lambda_3(void *data, int argc, object self_7397, object r_7363) {
  return_closcall1(data,  ((closureN)self_7397)->elements[0],  global_set(__glo__85macro_117env_85_scheme_cyclone_macros, r_7363));; 
}

static void __lambda_2(void *data, int argc, closure _,object k_7372, object name_7320, object body_7319) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:macro:add!");

closureN_type c_73102;
c_73102.hdr.mark = gc_color_red;
 c_73102.hdr.grayed = 0;
c_73102.tag = closureN_tag;
 c_73102.fn = (function_type)__lambda_1;
c_73102.num_args = 1;
c_73102.num_elements = 1;
c_73102.elements = (object *)alloca(sizeof(object) * 1);
c_73102.elements[0] = k_7372;


make_pair(c_73114,name_7320, body_7319);

make_pair(c_73111,&c_73114, __glo__85macro_117defined_91macros_85_scheme_cyclone_macros);
return_closcall1(data,(closure)&c_73102,  &c_73111);; 
}

static void __lambda_1(void *data, int argc, object self_7398, object r_7374) {
  
closureN_type c_73104;
c_73104.hdr.mark = gc_color_red;
 c_73104.hdr.grayed = 0;
c_73104.tag = closureN_tag;
 c_73104.fn = (function_type)__lambda_0;
c_73104.num_args = 1;
c_73104.num_elements = 1;
c_73104.elements = (object *)alloca(sizeof(object) * 1);
c_73104.elements[0] = ((closureN)self_7398)->elements[0];

return_closcall1(data,(closure)&c_73104,  global_set(__glo__85macro_117defined_91macros_85_scheme_cyclone_macros, r_7374));; 
}

static void __lambda_0(void *data, int argc, object self_7399, object r_7373) {
  return_closcall1(data,  ((closureN)self_7399)->elements[0],  boolean_t);; 
}

void c_schemecyclonemacros_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_quote = find_or_add_symbol("quote");
  quote_define_91syntax = find_or_add_symbol("define-syntax");
  quote_macro = find_or_add_symbol("macro");

  add_global((object *) &__glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros);
  add_global((object *) &__glo_macro_117expand_scheme_cyclone_macros);
  add_global((object *) &__glo_macro_117macro_127_scheme_cyclone_macros);
  add_global((object *) &__glo_define_91syntax_127_scheme_cyclone_macros);
  add_global((object *) &__glo_macro_117get_91defined_91macros_scheme_cyclone_macros);
  add_global((object *) &__glo_macro_117get_91env_scheme_cyclone_macros);
  add_global((object *) &__glo_macro_117load_91env_67_scheme_cyclone_macros);
  add_global((object *) &__glo_macro_117add_67_scheme_cyclone_macros);
  add_global((object *) &__glo__85macro_117defined_91macros_85_scheme_cyclone_macros);
  add_global((object *) &__glo__85macro_117env_85_scheme_cyclone_macros);
  add_symbol(quote_quote);
  add_symbol(quote_define_91syntax);
  add_symbol(quote_macro);
  mclosure0(c_73215, (function_type)__lambda_27);c_73215.num_args = 0; 
  __glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros = &c_73215; 
  mclosure0(c_73155, (function_type)__lambda_23);c_73155.num_args = 3; 
  __glo_macro_117expand_scheme_cyclone_macros = &c_73155; 
  mclosure0(c_73149, (function_type)__lambda_14);c_73149.num_args = 2; 
  __glo_macro_117macro_127_scheme_cyclone_macros = &c_73149; 
  mclosure0(c_73143, (function_type)__lambda_13);c_73143.num_args = 1; 
  __glo_define_91syntax_127_scheme_cyclone_macros = &c_73143; 
  mclosure0(c_73141, (function_type)__lambda_11);c_73141.num_args = 0; 
  __glo_macro_117get_91defined_91macros_scheme_cyclone_macros = &c_73141; 
  mclosure0(c_73139, (function_type)__lambda_10);c_73139.num_args = 0; 
  __glo_macro_117get_91env_scheme_cyclone_macros = &c_73139; 
  mclosure0(c_73115, (function_type)__lambda_9);c_73115.num_args = 2; 
  __glo_macro_117load_91env_67_scheme_cyclone_macros = &c_73115; 
  mclosure0(c_73100, (function_type)__lambda_2);c_73100.num_args = 2; 
  __glo_macro_117add_67_scheme_cyclone_macros = &c_73100; 
  __glo__85macro_117defined_91macros_85_scheme_cyclone_macros = boolean_f; 
  __glo__85macro_117env_85_scheme_cyclone_macros = boolean_f; 

  make_cvar(cvar_73228, (object *)&__glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros);make_pair(pair_73229, find_or_add_symbol("lib-init:schemecyclonemacros"), &cvar_73228);
  make_cvar(cvar_73230, (object *)&__glo_macro_117expand_scheme_cyclone_macros);make_pair(pair_73231, find_or_add_symbol("macro:expand"), &cvar_73230);
  make_cvar(cvar_73232, (object *)&__glo_macro_117macro_127_scheme_cyclone_macros);make_pair(pair_73233, find_or_add_symbol("macro:macro?"), &cvar_73232);
  make_cvar(cvar_73234, (object *)&__glo_define_91syntax_127_scheme_cyclone_macros);make_pair(pair_73235, find_or_add_symbol("define-syntax?"), &cvar_73234);
  make_cvar(cvar_73236, (object *)&__glo_macro_117get_91defined_91macros_scheme_cyclone_macros);make_pair(pair_73237, find_or_add_symbol("macro:get-defined-macros"), &cvar_73236);
  make_cvar(cvar_73238, (object *)&__glo_macro_117get_91env_scheme_cyclone_macros);make_pair(pair_73239, find_or_add_symbol("macro:get-env"), &cvar_73238);
  make_cvar(cvar_73240, (object *)&__glo_macro_117load_91env_67_scheme_cyclone_macros);make_pair(pair_73241, find_or_add_symbol("macro:load-env!"), &cvar_73240);
  make_cvar(cvar_73242, (object *)&__glo_macro_117add_67_scheme_cyclone_macros);make_pair(pair_73243, find_or_add_symbol("macro:add!"), &cvar_73242);
  make_cvar(cvar_73244, (object *)&__glo__85macro_117defined_91macros_85_scheme_cyclone_macros);make_pair(pair_73245, find_or_add_symbol("*macro:defined-macros*"), &cvar_73244);
  make_cvar(cvar_73246, (object *)&__glo__85macro_117env_85_scheme_cyclone_macros);make_pair(pair_73247, find_or_add_symbol("*macro:env*"), &cvar_73246);
make_pair(c_73248, &pair_73229,Cyc_global_variables);
make_pair(c_73249, &pair_73231, &c_73248);
make_pair(c_73250, &pair_73233, &c_73249);
make_pair(c_73251, &pair_73235, &c_73250);
make_pair(c_73252, &pair_73237, &c_73251);
make_pair(c_73253, &pair_73239, &c_73252);
make_pair(c_73254, &pair_73241, &c_73253);
make_pair(c_73255, &pair_73243, &c_73254);
make_pair(c_73256, &pair_73245, &c_73255);
make_pair(c_73257, &pair_73247, &c_73256);
Cyc_global_variables = &c_73257;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros)->fn)(data, 1, cont, cont);
}
