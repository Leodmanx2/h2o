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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_syms_5, 1, (MRB_SYM(delete), ), const);
static const mrb_code gem_mrblib_mruby_env_proc_iseq_5[15] = {
0x34,0x04,0x00,0x00,0x12,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_lv_5, 2, (MRB_SYM(k), 0,), const);
static const mrb_irep gem_mrblib_mruby_env_proc_irep_5 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_env_proc_iseq_5,
  NULL,gem_mrblib_mruby_env_proc_syms_5,NULL,
  gem_mrblib_mruby_env_proc_lv_5,
  NULL,					/* debug_info */
  15,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_env_proc_reps_2[1] = {
  &gem_mrblib_mruby_env_proc_irep_5,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_syms_2, 2, (MRB_SYM(keys), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_env_proc_iseq_2[21] = {
0x34,0x00,0x00,0x00,0x12,0x02,0x2f,0x02,0x00,0x00,0x57,0x03,0x00,0x30,0x02,0x01,0x00,0x12,0x02,0x38,
0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_lv_2, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_env_proc_irep_2 = {
  2,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_env_proc_iseq_2,
  NULL,gem_mrblib_mruby_env_proc_syms_2,gem_mrblib_mruby_env_proc_reps_2,
  gem_mrblib_mruby_env_proc_lv_2,
  NULL,					/* debug_info */
  21,0,2,1,0
};
static const mrb_code gem_mrblib_mruby_env_proc_iseq_3[25] = {
0x34,0x04,0x00,0x00,0x12,0x04,0x01,0x05,0x01,0x23,0x04,0x01,0x03,0x04,0x12,0x04,0x01,0x05,0x01,0x11,
0x06,0x24,0x04,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_lv_3, 3, (MRB_SYM(key), 0,MRB_SYM(old), ), const);
static const mrb_irep gem_mrblib_mruby_env_proc_irep_3 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_env_proc_iseq_3,
  NULL,NULL,NULL,
  gem_mrblib_mruby_env_proc_lv_3,
  NULL,					/* debug_info */
  25,0,0,0,0
};
static const mrb_pool_value gem_mrblib_mruby_env_proc_pool_4[1] = {
{IREP_TT_STR|(15<<2), {"\x6b\x65\x79\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64\x3a\x20"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_syms_4, 6, (MRB_SYM(NONE), MRB_SYM_Q(key), MRB_SYM(call), MRB_OPSYM(neq), MRB_SYM(KeyError), MRB_SYM(raise), ), const);
static const mrb_code gem_mrblib_mruby_env_proc_iseq_4[91] = {
0x34,0x04,0x20,0x01,0x25,0x00,0x03,0x25,0x00,0x03,0x1d,0x02,0x00,0x01,0x05,0x01,0x2d,0x04,0x01,0x01,
0x27,0x04,0x00,0x0a,0x12,0x04,0x01,0x05,0x01,0x23,0x04,0x25,0x00,0x37,0x01,0x04,0x03,0x27,0x04,0x00,
0x0d,0x01,0x04,0x03,0x01,0x05,0x01,0x2f,0x04,0x02,0x01,0x25,0x00,0x23,0x01,0x04,0x02,0x1d,0x05,0x00,
0x2f,0x04,0x03,0x01,0x27,0x04,0x00,0x06,0x01,0x04,0x02,0x25,0x00,0x0f,0x1d,0x05,0x04,0x51,0x06,0x00,
0x01,0x07,0x01,0x52,0x06,0x2d,0x04,0x05,0x02,0x38,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_lv_4, 3, (MRB_SYM(key), MRB_SYM(default), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_env_proc_irep_4 = {
  4,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_env_proc_iseq_4,
  gem_mrblib_mruby_env_proc_pool_4,gem_mrblib_mruby_env_proc_syms_4,NULL,
  gem_mrblib_mruby_env_proc_lv_4,
  NULL,					/* debug_info */
  91,1,6,0,0
};
static const mrb_irep *gem_mrblib_mruby_env_proc_reps_1[3] = {
  &gem_mrblib_mruby_env_proc_irep_2,
  &gem_mrblib_mruby_env_proc_irep_3,
  &gem_mrblib_mruby_env_proc_irep_4,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_syms_1, 10, (MRB_SYM(Object), MRB_SYM(new), MRB_SYM(NONE), MRB_SYM_Q(include), MRB_SYM_Q(has_key), MRB_SYM_Q(key), MRB_SYM_Q(member), MRB_SYM(clear), MRB_SYM(delete), MRB_SYM(fetch), ), const);
static const mrb_code gem_mrblib_mruby_env_proc_iseq_1[45] = {
0x1d,0x01,0x00,0x2f,0x01,0x01,0x00,0x1e,0x01,0x02,0x60,0x03,0x04,0x60,0x05,0x04,0x60,0x06,0x04,0x63,
0x01,0x58,0x02,0x00,0x5f,0x01,0x07,0x63,0x01,0x58,0x02,0x01,0x5f,0x01,0x08,0x63,0x01,0x58,0x02,0x02,
0x5f,0x01,0x09,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_env_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_env_proc_iseq_1,
  NULL,gem_mrblib_mruby_env_proc_syms_1,gem_mrblib_mruby_env_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  45,0,10,3,0
};
static const mrb_irep *gem_mrblib_mruby_env_proc_reps_0[1] = {
  &gem_mrblib_mruby_env_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_env_proc_syms_0, 1, (MRB_SYM(ENV), ), const);
static const mrb_code gem_mrblib_mruby_env_proc_iseq_0[11] = {
0x1d,0x01,0x00,0x62,0x01,0x5e,0x01,0x00,0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_env_proc_irep_0 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_env_proc_iseq_0,
  NULL,gem_mrblib_mruby_env_proc_syms_0,gem_mrblib_mruby_env_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  11,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_env_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_env_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_env_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_env_gem_init(mrb_state *mrb);
void mrb_mruby_env_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_env_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_env_proc_init_syms(mrb);
  mrb_mruby_env_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_env_proc);
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

void GENERATED_TMP_mrb_mruby_env_gem_final(mrb_state *mrb) {
  mrb_mruby_env_gem_final(mrb);
}
