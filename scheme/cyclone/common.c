/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014 Justin Ethier
 ** Version 0.0.3 (Pre-release)
 **
 **/

#define closcall1(td,cfn,a1) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,0, (closure)a1, cfn); } else { ((cfn)->fn)(td,1,cfn,a1);}
/* Check for GC, then call given continuation closure */
#define return_closcall1(td,cfn,a1) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td,cfn,buf,1); return; \
 } else {closcall1(td,(closure) (cfn),a1); return;}}

/* Check for GC, then call C function directly */
#define return_direct1(td,_fn,a1) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 1); return; \
 } else { (_fn)(td,1,(closure)_fn,a1); }}

#define closcall2(td,cfn,a1,a2) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,1, (closure)a1, cfn,a2); } else { ((cfn)->fn)(td,2,cfn,a1,a2);}
/* Check for GC, then call given continuation closure */
#define return_closcall2(td,cfn,a1,a2) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td,cfn,buf,2); return; \
 } else {closcall2(td,(closure) (cfn),a1,a2); return;}}

/* Check for GC, then call C function directly */
#define return_direct2(td,_fn,a1,a2) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 2); return; \
 } else { (_fn)(td,2,(closure)_fn,a1,a2); }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemecyclonecommon = nil;
object __glo__85c_91file_91header_91comment_85 = nil;
object __glo__85Cyc_91version_91banner_85 = nil;
object __glo__85version_91banner_85 = nil;
object __glo__85version_85 = nil;
#include "cyclone/runtime.h"
static void __lambda_5(void *data, int argc, closure _,object k_733) ;
static void __lambda_4(void *data, int argc, object self_7317, object r_734) ;
static void __lambda_3(void *data, int argc, object self_7318, object r_738) ;
static void __lambda_2(void *data, int argc, object self_7319, object r_735) ;
static void __lambda_1(void *data, int argc, object self_7320, object r_736) ;
static void __lambda_0(void *data, int argc, object self_7321, object r_737) ;

static void __lambda_5(void *data, int argc, closure _,object k_733) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7325;
c_7325.hdr.mark = gc_color_red;
 c_7325.hdr.grayed = 0;
c_7325.tag = closureN_tag;
 c_7325.fn = (function_type)__lambda_4;
c_7325.num_args = 1;
c_7325.num_elt = 1;
c_7325.elts = (object *)alloca(sizeof(object) * 1);
c_7325.elts[0] = k_733;


make_int(c_7352, 0);
return_closcall1(data,(closure)&c_7325,  &c_7352);; 
}

static void __lambda_4(void *data, int argc, object self_7317, object r_734) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7327;
c_7327.hdr.mark = gc_color_red;
 c_7327.hdr.grayed = 0;
c_7327.tag = closureN_tag;
 c_7327.fn = (function_type)__lambda_3;
c_7327.num_args = 1;
c_7327.num_elt = 1;
c_7327.elts = (object *)alloca(sizeof(object) * 1);
c_7327.elts[0] = ((closureN)self_7317)->elts[0];


make_string(c_7350, "\n              :@ \n            @@@  \n          @@@@:  \n        `@@@@@+  \n       .@@@+@@@      Cyclone  \n       @@     @@     Scheme-to-C compiler\n      ,@             https://github.com/justinethier/cyclone\n      '@        \n      .@        \n       @@     #@     (c) 2014 Justin Ethier\n       `@@@#@@@.     Version ");

make_string(c_7351, "\n        #@@@@@   \n        +@@@+    \n        @@#      \n      `@.  \n     \n");

object c_7349 = Cyc_string_append(data,(closure)&c_7327,3,&c_7350, __glo__85version_85, &c_7351);
return_closcall1(data,(closure)&c_7327,  c_7349);; 
}

static void __lambda_3(void *data, int argc, object self_7318, object r_738) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7329;
c_7329.hdr.mark = gc_color_red;
 c_7329.hdr.grayed = 0;
c_7329.tag = closureN_tag;
 c_7329.fn = (function_type)__lambda_2;
c_7329.num_args = 1;
c_7329.num_elt = 1;
c_7329.elts = (object *)alloca(sizeof(object) * 1);
c_7329.elts[0] = ((closureN)self_7318)->elts[0];

return_closcall1(data,(closure)&c_7329,  global_set(__glo__85version_91banner_85, r_738));; 
}

static void __lambda_2(void *data, int argc, object self_7319, object r_735) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7331;
c_7331.hdr.mark = gc_color_red;
 c_7331.hdr.grayed = 0;
c_7331.tag = closureN_tag;
 c_7331.fn = (function_type)__lambda_1;
c_7331.num_args = 1;
c_7331.num_elt = 1;
c_7331.elts = (object *)alloca(sizeof(object) * 1);
c_7331.elts[0] = ((closureN)self_7319)->elts[0];

return_closcall1(data,(closure)&c_7331,  global_set(__glo__85Cyc_91version_91banner_85, __glo__85version_91banner_85));; 
}

static void __lambda_1(void *data, int argc, object self_7320, object r_736) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7333;
c_7333.hdr.mark = gc_color_red;
 c_7333.hdr.grayed = 0;
c_7333.tag = closureN_tag;
 c_7333.fn = (function_type)__lambda_0;
c_7333.num_args = 1;
c_7333.num_elt = 1;
c_7333.elts = (object *)alloca(sizeof(object) * 1);
c_7333.elts[0] = ((closureN)self_7320)->elts[0];


make_string(c_7341, "/**\n ** This file was automatically generated by the Cyclone scheme compiler\n **\n ** (c) 2014 Justin Ethier\n ** Version ");

make_string(c_7342, "\n **\n **/\n");

object c_7340 = Cyc_string_append(data,(closure)&c_7333,3,&c_7341, __glo__85version_85, &c_7342);
return_closcall1(data,(closure)&c_7333,  c_7340);; 
}

static void __lambda_0(void *data, int argc, object self_7321, object r_737) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");
return_closcall1(data,  ((closureN)self_7321)->elts[0],  global_set(__glo__85c_91file_91header_91comment_85, r_737));; 
}

void c_schemecyclonecommon_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemecyclonecommon);
  add_global((object *) &__glo__85c_91file_91header_91comment_85);
  add_global((object *) &__glo__85Cyc_91version_91banner_85);
  add_global((object *) &__glo__85version_91banner_85);
  add_global((object *) &__glo__85version_85);
  mclosure0(c_7323, (function_type)__lambda_5);c_7323.num_args = 0; 
  __glo_lib_91init_117schemecyclonecommon = &c_7323; 
  __glo__85c_91file_91header_91comment_85 = boolean_f; 
  __glo__85Cyc_91version_91banner_85 = boolean_f; 
  __glo__85version_91banner_85 = boolean_f; 
  make_string(c_7322, "0.0.3 (Pre-release)"); 
  __glo__85version_85 = &c_7322; 

  make_cvar(cvar_7353, (object *)&__glo_lib_91init_117schemecyclonecommon);make_cons(pair_7354, find_or_add_symbol("lib-init:schemecyclonecommon"), &cvar_7353);
  make_cvar(cvar_7355, (object *)&__glo__85c_91file_91header_91comment_85);make_cons(pair_7356, find_or_add_symbol("*c-file-header-comment*"), &cvar_7355);
  make_cvar(cvar_7357, (object *)&__glo__85Cyc_91version_91banner_85);make_cons(pair_7358, find_or_add_symbol("*Cyc-version-banner*"), &cvar_7357);
  make_cvar(cvar_7359, (object *)&__glo__85version_91banner_85);make_cons(pair_7360, find_or_add_symbol("*version-banner*"), &cvar_7359);
  make_cvar(cvar_7361, (object *)&__glo__85version_85);make_cons(pair_7362, find_or_add_symbol("*version*"), &cvar_7361);
make_cons(c_7363, &pair_7354,Cyc_global_variables);
make_cons(c_7364, &pair_7356, &c_7363);
make_cons(c_7365, &pair_7358, &c_7364);
make_cons(c_7366, &pair_7360, &c_7365);
make_cons(c_7367, &pair_7362, &c_7366);
Cyc_global_variables = &c_7367;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemecyclonecommon)->fn)(data, 1, cont, cont);
}
