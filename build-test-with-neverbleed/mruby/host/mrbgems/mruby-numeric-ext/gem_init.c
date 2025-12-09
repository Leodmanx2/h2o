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

static const mrb_code gem_mrblib_mruby_numeric_ext_proc_iseq_2[12] = {
0x34,0x00,0x00,0x00,0x12,0x02,0x06,0x03,0x42,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_numeric_ext_proc_lv_2, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_numeric_ext_proc_irep_2 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_numeric_ext_proc_iseq_2,
  NULL,NULL,NULL,
  gem_mrblib_mruby_numeric_ext_proc_lv_2,
  NULL,					/* debug_info */
  12,0,0,0,0
};
static const mrb_code gem_mrblib_mruby_numeric_ext_proc_iseq_3[23] = {
0x34,0x00,0x00,0x00,0x12,0x02,0x06,0x03,0x42,0x02,0x27,0x02,0x00,0x05,0x11,0x02,0x25,0x00,0x02,0x12,
0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_numeric_ext_proc_lv_3, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_numeric_ext_proc_irep_3 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_numeric_ext_proc_iseq_3,
  NULL,NULL,NULL,
  gem_mrblib_mruby_numeric_ext_proc_lv_3,
  NULL,					/* debug_info */
  23,0,0,0,0
};
static const mrb_code gem_mrblib_mruby_numeric_ext_proc_iseq_4[12] = {
0x34,0x00,0x00,0x00,0x12,0x02,0x06,0x03,0x45,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_numeric_ext_proc_lv_4, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_numeric_ext_proc_irep_4 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_numeric_ext_proc_iseq_4,
  NULL,NULL,NULL,
  gem_mrblib_mruby_numeric_ext_proc_lv_4,
  NULL,					/* debug_info */
  12,0,0,0,0
};
static const mrb_code gem_mrblib_mruby_numeric_ext_proc_iseq_5[12] = {
0x34,0x00,0x00,0x00,0x12,0x02,0x06,0x03,0x43,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_numeric_ext_proc_lv_5, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_numeric_ext_proc_irep_5 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_numeric_ext_proc_iseq_5,
  NULL,NULL,NULL,
  gem_mrblib_mruby_numeric_ext_proc_lv_5,
  NULL,					/* debug_info */
  12,0,0,0,0
};
static const mrb_irep *gem_mrblib_mruby_numeric_ext_proc_reps_1[4] = {
  &gem_mrblib_mruby_numeric_ext_proc_irep_2,
  &gem_mrblib_mruby_numeric_ext_proc_irep_3,
  &gem_mrblib_mruby_numeric_ext_proc_irep_4,
  &gem_mrblib_mruby_numeric_ext_proc_irep_5,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_numeric_ext_proc_syms_1, 4, (MRB_SYM_Q(zero), MRB_SYM_Q(nonzero), MRB_SYM_Q(positive), MRB_SYM_Q(negative), ), const);
static const mrb_code gem_mrblib_mruby_numeric_ext_proc_iseq_1[34] = {
0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x63,0x01,0x58,0x02,0x01,0x5f,0x01,0x01,0x63,0x01,0x58,0x02,
0x02,0x5f,0x01,0x02,0x63,0x01,0x58,0x02,0x03,0x5f,0x01,0x03,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_numeric_ext_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_numeric_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_numeric_ext_proc_syms_1,gem_mrblib_mruby_numeric_ext_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  34,0,4,4,0
};
static const mrb_irep *gem_mrblib_mruby_numeric_ext_proc_reps_0[1] = {
  &gem_mrblib_mruby_numeric_ext_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_numeric_ext_proc_syms_0, 1, (MRB_SYM(Numeric), ), const);
static const mrb_code gem_mrblib_mruby_numeric_ext_proc_iseq_0[13] = {
0x11,0x01,0x11,0x02,0x5c,0x01,0x00,0x5e,0x01,0x00,0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_numeric_ext_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_numeric_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_numeric_ext_proc_syms_0,gem_mrblib_mruby_numeric_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_numeric_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_numeric_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_numeric_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_numeric_ext_gem_init(mrb_state *mrb);
void mrb_mruby_numeric_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_numeric_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_numeric_ext_proc_init_syms(mrb);
  mrb_mruby_numeric_ext_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_numeric_ext_proc);
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

void GENERATED_TMP_mrb_mruby_numeric_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_numeric_ext_gem_final(mrb);
}
