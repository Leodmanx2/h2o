/*
 * This file is loading the irep
 * Ruby GEM code.
 *
 * IMPORTANT:
 *   This file was generated!
 *   All manual changes will get lost.
 */
#include <stdlib.h>
#include <mruby.h>
#include <mruby/irep.h>
#include <mruby/debug.h>
#include <mruby/proc.h>
#include <mruby/presym.h>

#define mrb_BRACED(...) {__VA_ARGS__}
#define mrb_DEFINE_SYMS_VAR(name, len, syms, qualifier) \
  static qualifier mrb_sym name[len] = mrb_BRACED syms

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_new_fiber_safe_proc_syms_2, 2, (MRB_SYM(allocate), MRB_SYM(initialize), ), const);
static const mrb_code gem_mrblib_mruby_class_new_fiber_safe_proc_iseq_2[32] = {
0x34,0x00,0x10,0x01,0x12,0x04,0x2f,0x04,0x00,0x00,0x01,0x03,0x04,0x01,0x04,0x03,0x11,0x05,0x01,0x06,
0x01,0x49,0x05,0x01,0x06,0x02,0x30,0x04,0x01,0x0f,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_new_fiber_safe_proc_lv_2, 3, (MRB_SYM(args), MRB_SYM(block), MRB_SYM(obj), ), const);
static const mrb_irep gem_mrblib_mruby_class_new_fiber_safe_proc_irep_2 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_new_fiber_safe_proc_iseq_2,
  NULL,gem_mrblib_mruby_class_new_fiber_safe_proc_syms_2,NULL,
  gem_mrblib_mruby_class_new_fiber_safe_proc_lv_2,
  NULL,					/* debug_info */
  32,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_class_new_fiber_safe_proc_reps_1[1] = {
  &gem_mrblib_mruby_class_new_fiber_safe_proc_irep_2,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_new_fiber_safe_proc_syms_1, 1, (MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_class_new_fiber_safe_proc_iseq_1[10] = {
0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_class_new_fiber_safe_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_new_fiber_safe_proc_iseq_1,
  NULL,gem_mrblib_mruby_class_new_fiber_safe_proc_syms_1,gem_mrblib_mruby_class_new_fiber_safe_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  10,0,1,1,0
};
static const mrb_irep *gem_mrblib_mruby_class_new_fiber_safe_proc_reps_0[1] = {
  &gem_mrblib_mruby_class_new_fiber_safe_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_new_fiber_safe_proc_syms_0, 1, (MRB_SYM(Class), ), const);
static const mrb_code gem_mrblib_mruby_class_new_fiber_safe_proc_iseq_0[13] = {
0x11,0x01,0x11,0x02,0x5c,0x01,0x00,0x5e,0x01,0x00,0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_class_new_fiber_safe_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_new_fiber_safe_proc_iseq_0,
  NULL,gem_mrblib_mruby_class_new_fiber_safe_proc_syms_0,gem_mrblib_mruby_class_new_fiber_safe_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_class_new_fiber_safe_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_class_new_fiber_safe_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_class_new_fiber_safe_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_class_new_fiber_safe_gem_init(mrb_state *mrb);
void mrb_mruby_class_new_fiber_safe_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_class_new_fiber_safe_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_class_new_fiber_safe_proc_init_syms(mrb);
  mrb_mruby_class_new_fiber_safe_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_class_new_fiber_safe_proc);
  if (mrb->exc) {
    mrb_print_error(mrb);
    mrb_close(mrb);
    exit(EXIT_FAILURE);
  }
  struct REnv *e = mrb_vm_ci_env(mrb->c->cibase);
  mrb_vm_ci_env_set(mrb->c->cibase, NULL);
  mrb_env_unshare(mrb, e);
  mrb_gc_arena_restore(mrb, ai);
}

void GENERATED_TMP_mrb_mruby_class_new_fiber_safe_gem_final(mrb_state *mrb) {
  mrb_mruby_class_new_fiber_safe_gem_final(mrb);
}
