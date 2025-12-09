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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_2, 2, (MRB_SYM(read), MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_2[34] = {
0x34,0x00,0x00,0x01,0x12,0x03,0x2f,0x03,0x00,0x00,0x01,0x02,0x03,0x27,0x03,0x00,0x0d,0x01,0x03,0x01,
0x01,0x04,0x02,0x2f,0x03,0x01,0x01,0x25,0xff,0xe6,0x12,0x03,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_lv_2, 2, (MRB_SYM(block), MRB_SYM(s), ), const);
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_2 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_2,
  NULL,gem_mrblib_mruby_dir_proc_syms_2,NULL,
  gem_mrblib_mruby_dir_proc_lv_2,
  NULL,					/* debug_info */
  34,0,2,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_14, 2, (MRB_SYM(read), MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_14[36] = {
0x34,0x04,0x00,0x00,0x01,0x04,0x01,0x2f,0x04,0x00,0x00,0x01,0x03,0x04,0x27,0x04,0x00,0x0e,0x21,0x04,
0x03,0x00,0x01,0x05,0x03,0x2f,0x04,0x01,0x01,0x25,0xff,0xe4,0x11,0x04,0x38,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_lv_14, 3, (MRB_SYM(d), 0,MRB_SYM(s), ), const);
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_14 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_14,
  NULL,gem_mrblib_mruby_dir_proc_syms_14,NULL,
  gem_mrblib_mruby_dir_proc_lv_14,
  NULL,					/* debug_info */
  36,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_dir_proc_reps_3[1] = {
  &gem_mrblib_mruby_dir_proc_irep_14,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_3, 1, (MRB_SYM(open), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_3[21] = {
0x34,0x04,0x00,0x00,0x47,0x03,0x00,0x12,0x04,0x01,0x05,0x01,0x57,0x06,0x00,0x30,0x04,0x00,0x01,0x38,
0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_lv_3, 3, (MRB_SYM(path), 0,MRB_SYM(a), ), const);
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_3 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_3,
  NULL,gem_mrblib_mruby_dir_proc_syms_3,gem_mrblib_mruby_dir_proc_reps_3,
  gem_mrblib_mruby_dir_proc_lv_3,
  NULL,					/* debug_info */
  21,0,1,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_21, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_21[17] = {
0x34,0x04,0x00,0x00,0x21,0x03,0x02,0x00,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_lv_21, 2, (MRB_SYM(f), 0,), const);
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_21 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_21,
  NULL,gem_mrblib_mruby_dir_proc_syms_21,NULL,
  gem_mrblib_mruby_dir_proc_lv_21,
  NULL,					/* debug_info */
  17,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_dir_proc_reps_4[1] = {
  &gem_mrblib_mruby_dir_proc_irep_21,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_4, 2, (MRB_SYM(open), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_4[45] = {
0x34,0x04,0x00,0x01,0x01,0x03,0x02,0x27,0x03,0x00,0x13,0x12,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,
0x57,0x04,0x00,0x30,0x03,0x01,0x00,0x25,0x00,0x0d,0x12,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x2f,
0x03,0x01,0x00,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_lv_4, 2, (MRB_SYM(path), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_4 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_4,
  NULL,gem_mrblib_mruby_dir_proc_syms_4,gem_mrblib_mruby_dir_proc_reps_4,
  gem_mrblib_mruby_dir_proc_lv_4,
  NULL,					/* debug_info */
  45,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_5, 3, (MRB_SYM(new), MRB_SYM(call), MRB_SYM(close), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_5[71] = {
0x34,0x04,0x00,0x01,0x01,0x04,0x02,0x27,0x04,0x00,0x24,0x12,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,
0x01,0x03,0x04,0x01,0x04,0x02,0x01,0x05,0x03,0x2f,0x04,0x01,0x01,0x2a,0x06,0x01,0x07,0x03,0x2f,0x07,
0x02,0x00,0x2c,0x06,0x25,0x00,0x09,0x12,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x38,0x04,0x01,0x00,
0x00,0x00,0x17,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x21,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_lv_5, 3, (MRB_SYM(path), MRB_SYM(block), MRB_SYM(d), ), const);
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_5 = {
  4,9,1,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_5,
  NULL,gem_mrblib_mruby_dir_proc_syms_5,NULL,
  gem_mrblib_mruby_dir_proc_lv_5,
  NULL,					/* debug_info */
  58,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_6, 3, (MRB_SYM(getwd), MRB_SYM(_chdir), MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_6[82] = {
0x34,0x04,0x00,0x01,0x12,0x03,0x01,0x05,0x02,0x27,0x05,0x00,0x2d,0x12,0x05,0x2f,0x05,0x00,0x00,0x01,
0x04,0x05,0x12,0x05,0x01,0x06,0x01,0x2f,0x05,0x01,0x01,0x01,0x05,0x02,0x01,0x06,0x01,0x2f,0x05,0x02,
0x01,0x2a,0x07,0x01,0x08,0x03,0x01,0x09,0x04,0x2f,0x08,0x01,0x01,0x2c,0x07,0x25,0x00,0x09,0x12,0x05,
0x01,0x06,0x01,0x2f,0x05,0x01,0x01,0x38,0x05,0x01,0x00,0x00,0x00,0x16,0x00,0x00,0x00,0x29,0x00,0x00,
0x00,0x29,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_lv_6, 4, (MRB_SYM(path), MRB_SYM(block), MRB_SYM(my), MRB_SYM(wd), ), const);
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_6 = {
  5,11,1,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_6,
  NULL,gem_mrblib_mruby_dir_proc_syms_6,NULL,
  gem_mrblib_mruby_dir_proc_lv_6,
  NULL,					/* debug_info */
  69,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_7, 7, (MRB_SYM_Q(exists), MRB_SYM_Q(exist), MRB_SYM(pwd), MRB_SYM(getwd), MRB_SYM(rmdir), MRB_SYM(delete), MRB_SYM(unlink), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_7[16] = {
0x60,0x00,0x01,0x60,0x02,0x03,0x60,0x04,0x05,0x60,0x06,0x05,0x11,0x01,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_7 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_7,
  NULL,gem_mrblib_mruby_dir_proc_syms_7,NULL,
  NULL,					/* lv */
  NULL,					/* debug_info */
  16,0,7,0,0
};
static const mrb_irep *gem_mrblib_mruby_dir_proc_reps_1[6] = {
  &gem_mrblib_mruby_dir_proc_irep_2,
  &gem_mrblib_mruby_dir_proc_irep_3,
  &gem_mrblib_mruby_dir_proc_irep_4,
  &gem_mrblib_mruby_dir_proc_irep_5,
  &gem_mrblib_mruby_dir_proc_irep_6,
  &gem_mrblib_mruby_dir_proc_irep_7,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_1, 9, (MRB_SYM(each), MRB_SYM(pos), MRB_SYM(tell), MRB_SYM_E(pos), MRB_SYM(seek), MRB_SYM(entries), MRB_SYM(foreach), MRB_SYM(open), MRB_SYM(chdir), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_1[63] = {
0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x60,0x01,0x02,0x60,0x03,0x04,0x12,0x01,0x62,0x01,0x58,0x02,
0x01,0x5f,0x01,0x05,0x12,0x01,0x62,0x01,0x58,0x02,0x02,0x5f,0x01,0x06,0x12,0x01,0x62,0x01,0x58,0x02,
0x03,0x5f,0x01,0x07,0x12,0x01,0x62,0x01,0x58,0x02,0x04,0x5f,0x01,0x08,0x12,0x01,0x62,0x01,0x5e,0x01,
0x05,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_1,
  NULL,gem_mrblib_mruby_dir_proc_syms_1,gem_mrblib_mruby_dir_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  63,0,9,6,0
};
static const mrb_irep *gem_mrblib_mruby_dir_proc_reps_0[1] = {
  &gem_mrblib_mruby_dir_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_dir_proc_syms_0, 1, (MRB_SYM(Dir), ), const);
static const mrb_code gem_mrblib_mruby_dir_proc_iseq_0[13] = {
0x11,0x01,0x11,0x02,0x5c,0x01,0x00,0x5e,0x01,0x00,0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_dir_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_dir_proc_iseq_0,
  NULL,gem_mrblib_mruby_dir_proc_syms_0,gem_mrblib_mruby_dir_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_dir_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_dir_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_dir_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_dir_gem_init(mrb_state *mrb);
void mrb_mruby_dir_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_dir_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_dir_proc_init_syms(mrb);
  mrb_mruby_dir_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_dir_proc);
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

void GENERATED_TMP_mrb_mruby_dir_gem_final(mrb_state *mrb) {
  mrb_mruby_dir_gem_final(mrb);
}
