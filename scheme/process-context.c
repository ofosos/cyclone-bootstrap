/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.6 (Pre-release)
 **
 **/

#define closcall1(td,clo,a1) if (type_of(clo) == cons_tag || prim(clo)) { Cyc_apply(td,0, (closure)(a1), clo); } else { ((clo)->fn)(td,1,clo,a1);}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td,clo,buf,1); return; \
 } else {closcall1(td,(closure) (clo),a1); return;}}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 1); return; \
 } else { (_fn)(td,1,(closure)_fn,a1); }}

#define closcall2(td,clo,a1,a2) if (type_of(clo) == cons_tag || prim(clo)) { Cyc_apply(td,1, (closure)(a1), clo,a2); } else { ((clo)->fn)(td,2,clo,a1,a2);}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td,clo,buf,2); return; \
 } else {closcall2(td,(closure) (clo),a1,a2); return;}}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 2); return; \
 } else { (_fn)(td,2,(closure)_fn,a1,a2); }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemeprocess_19191context_scheme_process_91context = NULL;
object __glo_get_91environment_91variable_scheme_process_91context = NULL;
object __glo_command_91line_scheme_process_91context = NULL;
object __glo_emergency_91exit_scheme_process_91context = NULL;
#include "cyclone/runtime.h"
static void __lambda_3(void *data, int argc, closure _,object k_733) ;
static void __lambda_2(void *data, int argc, object self_737, object r_734) ;
static void __lambda_1(void *data, int argc, closure _, object k, object env_var) ;
static void __lambda_0(void *data, int argc, closure _, object k) ;

static void __lambda_3(void *data, int argc, closure _,object k_733) {
  Cyc_st_add(data, "scheme/process-context.sld:lib-init:schemeprocess_91context");

closureN_type c_7312;
c_7312.hdr.mark = gc_color_red;
 c_7312.hdr.grayed = 0;
c_7312.tag = closureN_tag;
 c_7312.fn = (function_type)__lambda_2;
c_7312.num_args = 1;
c_7312.num_elt = 1;
c_7312.elts = (object *)alloca(sizeof(object) * 1);
c_7312.elts[0] = k_733;

return_closcall1(data,(closure)&c_7312,  obj_int2obj(0));; 
}

static void __lambda_2(void *data, int argc, object self_737, object r_734) {
  return_closcall1(data,  ((closureN)self_737)->elts[0],  global_set(__glo_emergency_91exit_scheme_process_91context, primitive_exit));; 
}

static void __lambda_1(void *data, int argc, closure _, object k, object env_var) { 
        const char *v = NULL;
        Cyc_check_str(data, env_var);
        v = getenv(string_str(env_var));
        if (v == NULL) {
          return_closcall1(data, k, boolean_f);
        } else {
          make_string(str, v);
          return_closcall1(data, k, &str);
        }
       }
static void __lambda_0(void *data, int argc, closure _, object k) { int i;
        object lis = NULL;
        for (i = _cyc_argc; i > 0; i--) {
          object ps = alloca(sizeof(string_type));
          object pl = alloca(sizeof(cons_type));
          make_string(s, _cyc_argv[i - 1]);
          memcpy(ps, &s, sizeof(string_type));
          ((list)pl)->hdr.mark = gc_color_red;
          ((list)pl)->hdr.grayed = 0;
          ((list)pl)->tag = cons_tag;
          ((list)pl)->cons_car = ps;
          ((list)pl)->cons_cdr = lis;
          lis = pl;
        }
        return_closcall1(data, k, lis);  }
void c_schemeprocess_91context_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemeprocess_19191context_scheme_process_91context);
  add_global((object *) &__glo_get_91environment_91variable_scheme_process_91context);
  add_global((object *) &__glo_command_91line_scheme_process_91context);
  add_global((object *) &__glo_emergency_91exit_scheme_process_91context);
  mclosure0(c_7310, (function_type)__lambda_3);c_7310.num_args = 0; 
  __glo_lib_91init_117schemeprocess_19191context_scheme_process_91context = &c_7310; 
  mclosure0(c_739, (function_type)__lambda_1);c_739.num_args = 1; 
  __glo_get_91environment_91variable_scheme_process_91context = &c_739; 
  mclosure0(c_738, (function_type)__lambda_0);c_738.num_args = 0; 
  __glo_command_91line_scheme_process_91context = &c_738; 
  __glo_emergency_91exit_scheme_process_91context = boolean_f; 

  make_cvar(cvar_7317, (object *)&__glo_lib_91init_117schemeprocess_19191context_scheme_process_91context);make_cons(pair_7318, find_or_add_symbol("lib-init:schemeprocess_91context"), &cvar_7317);
  make_cvar(cvar_7319, (object *)&__glo_get_91environment_91variable_scheme_process_91context);make_cons(pair_7320, find_or_add_symbol("get-environment-variable"), &cvar_7319);
  make_cvar(cvar_7321, (object *)&__glo_command_91line_scheme_process_91context);make_cons(pair_7322, find_or_add_symbol("command-line"), &cvar_7321);
  make_cvar(cvar_7323, (object *)&__glo_emergency_91exit_scheme_process_91context);make_cons(pair_7324, find_or_add_symbol("emergency-exit"), &cvar_7323);
make_cons(c_7325, &pair_7318,Cyc_global_variables);
make_cons(c_7326, &pair_7320, &c_7325);
make_cons(c_7327, &pair_7322, &c_7326);
make_cons(c_7328, &pair_7324, &c_7327);
Cyc_global_variables = &c_7328;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemeprocess_19191context_scheme_process_91context)->fn)(data, 1, cont, cont);
}
