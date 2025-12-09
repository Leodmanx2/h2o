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

static const mrb_pool_value gem_mrblib_mruby_print_proc_pool_2[1] = {
{IREP_TT_STR|(1<<2), {"\x0a"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_2, 4, (MRB_SYM(size), MRB_SYM(inspect), MRB_SYM(__printstr__), MRB_SYM(__svalue), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_2[66] = {
0x34,0x00,0x10,0x00,0x06,0x03,0x01,0x05,0x01,0x2f,0x05,0x00,0x00,0x01,0x04,0x05,0x01,0x05,0x03,0x01,
0x06,0x04,0x43,0x05,0x27,0x05,0x00,0x1d,0x01,0x06,0x01,0x01,0x07,0x03,0x23,0x06,0x2f,0x06,0x01,0x00,
0x2d,0x05,0x02,0x01,0x51,0x06,0x00,0x2d,0x05,0x02,0x01,0x3d,0x03,0x01,0x25,0xff,0xd7,0x01,0x05,0x01,
0x2f,0x05,0x03,0x00,0x38,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_lv_2, 4, (MRB_SYM(args), 0,MRB_SYM(i), MRB_SYM(len), ), const);
static const mrb_irep gem_mrblib_mruby_print_proc_irep_2 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_2,
  gem_mrblib_mruby_print_proc_pool_2,gem_mrblib_mruby_print_proc_syms_2,NULL,
  gem_mrblib_mruby_print_proc_lv_2,
  NULL,					/* debug_info */
  66,1,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_3, 3, (MRB_SYM(size), MRB_SYM(to_s), MRB_SYM(__printstr__), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_3[54] = {
0x34,0x00,0x10,0x00,0x06,0x03,0x01,0x05,0x01,0x2f,0x05,0x00,0x00,0x01,0x04,0x05,0x01,0x05,0x03,0x01,
0x06,0x04,0x43,0x05,0x27,0x05,0x00,0x16,0x01,0x06,0x01,0x01,0x07,0x03,0x23,0x06,0x2f,0x06,0x01,0x00,
0x2d,0x05,0x02,0x01,0x3d,0x03,0x01,0x25,0xff,0xde,0x11,0x05,0x38,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_lv_3, 4, (MRB_SYM(args), 0,MRB_SYM(i), MRB_SYM(len), ), const);
static const mrb_irep gem_mrblib_mruby_print_proc_irep_3 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_3,
  NULL,gem_mrblib_mruby_print_proc_syms_3,NULL,
  gem_mrblib_mruby_print_proc_lv_3,
  NULL,					/* debug_info */
  54,0,3,0,0
};
static const mrb_pool_value gem_mrblib_mruby_print_proc_pool_4[1] = {
{IREP_TT_STR|(1<<2), {"\x0a"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_4, 7, (MRB_SYM(size), MRB_SYM(Array), MRB_SYM_Q(kind_of), MRB_SYM(puts), MRB_SYM(to_s), MRB_SYM(__printstr__), MRB_OPSYM(neq), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_4[137] = {
0x34,0x00,0x10,0x00,0x06,0x03,0x01,0x06,0x01,0x2f,0x06,0x00,0x00,0x01,0x04,0x06,0x01,0x06,0x03,0x01,
0x07,0x04,0x43,0x06,0x27,0x06,0x00,0x57,0x01,0x06,0x01,0x01,0x07,0x03,0x23,0x06,0x01,0x05,0x06,0x01,
0x06,0x05,0x1d,0x07,0x01,0x2f,0x06,0x02,0x01,0x27,0x06,0x00,0x0e,0x11,0x07,0x01,0x08,0x05,0x49,0x07,
0x2d,0x06,0x03,0x0f,0x25,0x00,0x2a,0x01,0x06,0x05,0x2f,0x06,0x04,0x00,0x01,0x05,0x06,0x01,0x07,0x05,
0x2d,0x06,0x05,0x01,0x01,0x06,0x05,0x05,0x07,0x23,0x06,0x51,0x07,0x00,0x2f,0x06,0x06,0x01,0x27,0x06,
0x00,0x07,0x51,0x07,0x00,0x2d,0x06,0x05,0x01,0x3d,0x03,0x01,0x25,0xff,0x9d,0x01,0x06,0x04,0x06,0x07,
0x42,0x06,0x27,0x06,0x00,0x07,0x51,0x07,0x00,0x2d,0x06,0x05,0x01,0x11,0x06,0x38,0x06,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_lv_4, 5, (MRB_SYM(args), 0,MRB_SYM(i), MRB_SYM(len), MRB_SYM(s), ), const);
static const mrb_irep gem_mrblib_mruby_print_proc_irep_4 = {
  6,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_4,
  gem_mrblib_mruby_print_proc_pool_4,gem_mrblib_mruby_print_proc_syms_4,NULL,
  gem_mrblib_mruby_print_proc_lv_4,
  NULL,					/* debug_info */
  137,1,7,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_5, 2, (MRB_SYM(sprintf), MRB_SYM(__printstr__), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_5[23] = {
0x34,0x00,0x10,0x00,0x11,0x05,0x01,0x06,0x01,0x49,0x05,0x2d,0x04,0x00,0x0f,0x2d,0x03,0x01,0x01,0x11,
0x03,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_lv_5, 2, (MRB_SYM(args), 0,), const);
static const mrb_irep gem_mrblib_mruby_print_proc_irep_5 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_5,
  NULL,gem_mrblib_mruby_print_proc_syms_5,NULL,
  gem_mrblib_mruby_print_proc_lv_5,
  NULL,					/* debug_info */
  23,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_print_proc_reps_1[4] = {
  &gem_mrblib_mruby_print_proc_irep_2,
  &gem_mrblib_mruby_print_proc_irep_3,
  &gem_mrblib_mruby_print_proc_irep_4,
  &gem_mrblib_mruby_print_proc_irep_5,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_1, 4, (MRB_SYM(p), MRB_SYM(print), MRB_SYM(puts), MRB_SYM(printf), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_1[34] = {
0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x63,0x01,0x58,0x02,0x01,0x5f,0x01,0x01,0x63,0x01,0x58,0x02,
0x02,0x5f,0x01,0x02,0x63,0x01,0x58,0x02,0x03,0x5f,0x01,0x03,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_print_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_1,
  NULL,gem_mrblib_mruby_print_proc_syms_1,gem_mrblib_mruby_print_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  34,0,4,4,0
};
static const mrb_irep *gem_mrblib_mruby_print_proc_reps_0[1] = {
  &gem_mrblib_mruby_print_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_0, 1, (MRB_SYM(Kernel), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_0[11] = {
0x11,0x01,0x5d,0x01,0x00,0x5e,0x01,0x00,0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_print_proc_irep_0 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_0,
  NULL,gem_mrblib_mruby_print_proc_syms_0,gem_mrblib_mruby_print_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  11,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_print_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_print_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_print_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_print_gem_init(mrb_state *mrb);
void mrb_mruby_print_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_print_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_print_proc_init_syms(mrb);
  mrb_mruby_print_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_print_proc);
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

void GENERATED_TMP_mrb_mruby_print_gem_final(mrb_state *mrb) {
  mrb_mruby_print_gem_final(mrb);
}
