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

static const mrb_pool_value gem_mrblib_mruby_rational_proc_pool_3[2] = {
{IREP_TT_STR|(1<<2), {"\x28"}},
{IREP_TT_STR|(1<<2), {"\x29"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_syms_3, 1, (MRB_SYM(to_s), ), const);
static const mrb_code gem_mrblib_mruby_rational_proc_iseq_3[20] = {
0x34,0x00,0x00,0x00,0x51,0x02,0x00,0x2d,0x03,0x00,0x00,0x52,0x02,0x51,0x03,0x01,0x52,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_lv_3, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_rational_proc_irep_3 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_rational_proc_iseq_3,
  gem_mrblib_mruby_rational_proc_pool_3,gem_mrblib_mruby_rational_proc_syms_3,NULL,
  gem_mrblib_mruby_rational_proc_lv_3,
  NULL,					/* debug_info */
  20,2,1,0,0
};
static const mrb_pool_value gem_mrblib_mruby_rational_proc_pool_4[2] = {
{IREP_TT_STR|(0<<2), {""}},
{IREP_TT_STR|(1<<2), {"\x2f"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_syms_4, 2, (MRB_SYM(numerator), MRB_SYM(denominator), ), const);
static const mrb_code gem_mrblib_mruby_rational_proc_iseq_4[26] = {
0x34,0x00,0x00,0x00,0x51,0x02,0x00,0x2d,0x03,0x00,0x00,0x52,0x02,0x51,0x03,0x01,0x52,0x02,0x2d,0x03,
0x01,0x00,0x52,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_lv_4, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_rational_proc_irep_4 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_rational_proc_iseq_4,
  gem_mrblib_mruby_rational_proc_pool_4,gem_mrblib_mruby_rational_proc_syms_4,NULL,
  gem_mrblib_mruby_rational_proc_lv_4,
  NULL,					/* debug_info */
  26,2,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_rational_proc_reps_1[2] = {
  &gem_mrblib_mruby_rational_proc_irep_3,
  &gem_mrblib_mruby_rational_proc_irep_4,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_syms_1, 2, (MRB_SYM(inspect), MRB_SYM(to_s), ), const);
static const mrb_code gem_mrblib_mruby_rational_proc_iseq_1[18] = {
0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x63,0x01,0x58,0x02,0x01,0x5f,0x01,0x01,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_rational_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_rational_proc_iseq_1,
  NULL,gem_mrblib_mruby_rational_proc_syms_1,gem_mrblib_mruby_rational_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  18,0,2,2,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_syms_9, 1, (MRB_SYM(Rational), ), const);
static const mrb_code gem_mrblib_mruby_rational_proc_iseq_9[14] = {
0x34,0x00,0x00,0x00,0x12,0x03,0x07,0x04,0x2d,0x02,0x00,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_lv_9, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_rational_proc_irep_9 = {
  2,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_rational_proc_iseq_9,
  NULL,gem_mrblib_mruby_rational_proc_syms_9,NULL,
  gem_mrblib_mruby_rational_proc_lv_9,
  NULL,					/* debug_info */
  14,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_rational_proc_reps_2[1] = {
  &gem_mrblib_mruby_rational_proc_irep_9,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_syms_2, 1, (MRB_SYM(to_r), ), const);
static const mrb_code gem_mrblib_mruby_rational_proc_iseq_2[10] = {
0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_rational_proc_irep_2 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_rational_proc_iseq_2,
  NULL,gem_mrblib_mruby_rational_proc_syms_2,gem_mrblib_mruby_rational_proc_reps_2,
  NULL,					/* lv */
  NULL,					/* debug_info */
  10,0,1,1,0
};
static const mrb_irep *gem_mrblib_mruby_rational_proc_reps_0[2] = {
  &gem_mrblib_mruby_rational_proc_irep_1,
  &gem_mrblib_mruby_rational_proc_irep_2,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_rational_proc_syms_0, 2, (MRB_SYM(Numeric), MRB_SYM(Rational), ), const);
static const mrb_code gem_mrblib_mruby_rational_proc_iseq_0[24] = {
0x11,0x01,0x1d,0x02,0x00,0x5c,0x01,0x01,0x5e,0x01,0x00,0x11,0x01,0x11,0x02,0x5c,0x01,0x00,0x5e,0x01,
0x01,0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_rational_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_rational_proc_iseq_0,
  NULL,gem_mrblib_mruby_rational_proc_syms_0,gem_mrblib_mruby_rational_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  24,0,2,2,0
};
static
const struct RProc gem_mrblib_mruby_rational_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_rational_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_rational_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_rational_gem_init(mrb_state *mrb);
void mrb_mruby_rational_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_rational_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_rational_proc_init_syms(mrb);
  mrb_mruby_rational_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_rational_proc);
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

void GENERATED_TMP_mrb_mruby_rational_gem_final(mrb_state *mrb) {
  mrb_mruby_rational_gem_final(mrb);
}
