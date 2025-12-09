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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_3, 3, (MRB_SYM(Chain), MRB_SYM(Enumerator), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_3[26] = {
0x34,0x00,0x10,0x00,0x1d,0x03,0x01,0x1f,0x03,0x00,0x12,0x04,0x47,0x04,0x01,0x01,0x05,0x01,0x49,0x04,
0x2f,0x03,0x02,0x0f,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_3, 2, (MRB_SYM(args), 0,), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_3 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_3,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_3,NULL,
  gem_mrblib_mruby_enum_chain_proc_lv_3,
  NULL,					/* debug_info */
  26,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_chain_proc_reps_1[1] = {
  &gem_mrblib_mruby_enum_chain_proc_irep_3,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_1, 1, (MRB_SYM(chain), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_1[10] = {
0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_1,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_1,gem_mrblib_mruby_enum_chain_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  10,0,1,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_6, 2, (MRB_SYM(Chain), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_6[18] = {
0x34,0x04,0x00,0x00,0x1d,0x03,0x00,0x12,0x04,0x01,0x05,0x01,0x2f,0x03,0x01,0x02,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_6, 2, (MRB_SYM(other), 0,), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_6 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_6,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_6,NULL,
  gem_mrblib_mruby_enum_chain_proc_lv_6,
  NULL,					/* debug_info */
  18,0,2,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_10, 3, (MRB_SYM(freeze), MRB_IVSYM(enums), MRB_IVSYM(pos), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_10[21] = {
0x34,0x00,0x10,0x00,0x01,0x03,0x01,0x2f,0x03,0x00,0x00,0x1a,0x03,0x01,0x05,0x03,0x1a,0x03,0x02,0x38,
0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_10, 2, (MRB_SYM(args), 0,), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_10 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_10,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_10,NULL,
  gem_mrblib_mruby_enum_chain_proc_lv_10,
  NULL,					/* debug_info */
  21,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_11, 5, (MRB_SYM(to_enum), MRB_IVSYM(enums), MRB_SYM(size), MRB_IVSYM(pos), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_11[63] = {
0x34,0x00,0x00,0x01,0x01,0x03,0x01,0x26,0x03,0x00,0x06,0x2d,0x03,0x00,0x00,0x38,0x03,0x06,0x02,0x01,
0x03,0x02,0x19,0x04,0x01,0x2f,0x04,0x02,0x00,0x43,0x03,0x27,0x03,0x00,0x18,0x1a,0x02,0x03,0x19,0x03,
0x01,0x01,0x04,0x02,0x23,0x03,0x01,0x04,0x01,0x30,0x03,0x04,0x00,0x3d,0x02,0x01,0x25,0xff,0xd8,0x12,
0x03,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_11, 2, (MRB_SYM(block), MRB_SYM(i), ), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_11 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_11,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_11,NULL,
  gem_mrblib_mruby_enum_chain_proc_lv_11,
  NULL,					/* debug_info */
  63,0,5,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_28, 2, (MRB_SYM(size), MRB_SYM_Q(respond_to), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_28[36] = {
0x34,0x08,0x00,0x00,0x01,0x04,0x02,0x10,0x05,0x00,0x2f,0x04,0x01,0x01,0x26,0x04,0x00,0x04,0x11,0x04,
0x39,0x04,0x01,0x04,0x01,0x01,0x05,0x02,0x2f,0x05,0x00,0x00,0x3c,0x04,0x38,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_28, 3, (MRB_SYM(a), MRB_SYM(e), 0,), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_28 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_28,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_28,NULL,
  gem_mrblib_mruby_enum_chain_proc_lv_28,
  NULL,					/* debug_info */
  36,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_chain_proc_reps_12[1] = {
  &gem_mrblib_mruby_enum_chain_proc_irep_28,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_12, 2, (MRB_IVSYM(enums), MRB_SYM(reduce), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_12[18] = {
0x34,0x00,0x00,0x00,0x19,0x02,0x00,0x06,0x03,0x57,0x04,0x00,0x30,0x02,0x01,0x01,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_12, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_12 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_12,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_12,gem_mrblib_mruby_enum_chain_proc_reps_12,
  gem_mrblib_mruby_enum_chain_proc_lv_12,
  NULL,					/* debug_info */
  18,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_13, 5, (MRB_IVSYM(pos), MRB_IVSYM(enums), MRB_SYM(size), MRB_SYM(rewind), MRB_SYM_Q(respond_to), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_13[79] = {
0x34,0x00,0x00,0x00,0x06,0x03,0x19,0x04,0x00,0x44,0x03,0x27,0x03,0x00,0x0c,0x19,0x03,0x00,0x19,0x04,
0x01,0x2f,0x04,0x02,0x00,0x43,0x03,0x27,0x03,0x00,0x2c,0x19,0x03,0x01,0x19,0x04,0x00,0x23,0x03,0x01,
0x02,0x03,0x01,0x03,0x02,0x10,0x04,0x03,0x2f,0x03,0x04,0x01,0x27,0x03,0x00,0x07,0x01,0x03,0x02,0x2f,
0x03,0x03,0x00,0x19,0x03,0x00,0x3f,0x03,0x01,0x1a,0x03,0x00,0x25,0xff,0xb9,0x12,0x03,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_13, 2, (0,MRB_SYM(e), ), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_13 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_13,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_13,NULL,
  gem_mrblib_mruby_enum_chain_proc_lv_13,
  NULL,					/* debug_info */
  79,0,5,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_14, 2, (MRB_SYM(class), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_14[21] = {
0x34,0x04,0x00,0x00,0x12,0x03,0x2f,0x03,0x00,0x00,0x12,0x04,0x01,0x05,0x01,0x2f,0x03,0x01,0x02,0x38,
0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_14, 2, (MRB_SYM(other), 0,), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_14 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_14,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_14,NULL,
  gem_mrblib_mruby_enum_chain_proc_lv_14,
  NULL,					/* debug_info */
  21,0,2,0,0
};
static const mrb_pool_value gem_mrblib_mruby_enum_chain_proc_pool_15[3] = {
{IREP_TT_STR|(2<<2), {"\x23\x3c"}},
{IREP_TT_STR|(2<<2), {"\x3a\x20"}},
{IREP_TT_STR|(1<<2), {"\x3e"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_15, 3, (MRB_SYM(class), MRB_IVSYM(enums), MRB_SYM(inspect), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_15[36] = {
0x34,0x00,0x00,0x00,0x51,0x02,0x00,0x12,0x03,0x2f,0x03,0x00,0x00,0x52,0x02,0x51,0x03,0x01,0x52,0x02,
0x19,0x03,0x01,0x2f,0x03,0x02,0x00,0x52,0x02,0x51,0x03,0x02,0x52,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_lv_15, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_15 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_15,
  gem_mrblib_mruby_enum_chain_proc_pool_15,gem_mrblib_mruby_enum_chain_proc_syms_15,NULL,
  gem_mrblib_mruby_enum_chain_proc_lv_15,
  NULL,					/* debug_info */
  36,3,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_chain_proc_reps_7[6] = {
  &gem_mrblib_mruby_enum_chain_proc_irep_10,
  &gem_mrblib_mruby_enum_chain_proc_irep_11,
  &gem_mrblib_mruby_enum_chain_proc_irep_12,
  &gem_mrblib_mruby_enum_chain_proc_irep_13,
  &gem_mrblib_mruby_enum_chain_proc_irep_14,
  &gem_mrblib_mruby_enum_chain_proc_irep_15,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_7, 8, (MRB_SYM(Enumerable), MRB_SYM(include), MRB_SYM(initialize), MRB_SYM(each), MRB_SYM(size), MRB_SYM(rewind), MRB_OPSYM(add), MRB_SYM(inspect), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_7[57] = {
0x1d,0x02,0x00,0x2d,0x01,0x01,0x01,0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x02,0x63,0x01,0x58,0x02,0x01,
0x5f,0x01,0x03,0x63,0x01,0x58,0x02,0x02,0x5f,0x01,0x04,0x63,0x01,0x58,0x02,0x03,0x5f,0x01,0x05,0x63,
0x01,0x58,0x02,0x04,0x5f,0x01,0x06,0x63,0x01,0x58,0x02,0x05,0x5f,0x01,0x07,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_7 = {
  1,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_7,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_7,gem_mrblib_mruby_enum_chain_proc_reps_7,
  NULL,					/* lv */
  NULL,					/* debug_info */
  57,0,8,6,0
};
static const mrb_irep *gem_mrblib_mruby_enum_chain_proc_reps_2[2] = {
  &gem_mrblib_mruby_enum_chain_proc_irep_6,
  &gem_mrblib_mruby_enum_chain_proc_irep_7,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_2, 2, (MRB_OPSYM(add), MRB_SYM(Chain), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_2[20] = {
0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x11,0x01,0x11,0x02,0x5c,0x01,0x01,0x5e,0x01,0x01,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_2 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_2,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_2,gem_mrblib_mruby_enum_chain_proc_reps_2,
  NULL,					/* lv */
  NULL,					/* debug_info */
  20,0,2,2,0
};
static const mrb_irep *gem_mrblib_mruby_enum_chain_proc_reps_0[2] = {
  &gem_mrblib_mruby_enum_chain_proc_irep_1,
  &gem_mrblib_mruby_enum_chain_proc_irep_2,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_chain_proc_syms_0, 2, (MRB_SYM(Enumerable), MRB_SYM(Enumerator), ), const);
static const mrb_code gem_mrblib_mruby_enum_chain_proc_iseq_0[21] = {
0x11,0x01,0x5d,0x01,0x00,0x5e,0x01,0x00,0x11,0x01,0x11,0x02,0x5c,0x01,0x01,0x5e,0x01,0x01,0x38,0x01,
0x69,};
static const mrb_irep gem_mrblib_mruby_enum_chain_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_chain_proc_iseq_0,
  NULL,gem_mrblib_mruby_enum_chain_proc_syms_0,gem_mrblib_mruby_enum_chain_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  21,0,2,2,0
};
static
const struct RProc gem_mrblib_mruby_enum_chain_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_enum_chain_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_enum_chain_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_enum_chain_gem_init(mrb_state *mrb);
void mrb_mruby_enum_chain_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_enum_chain_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_enum_chain_proc_init_syms(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_enum_chain_proc);
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

void GENERATED_TMP_mrb_mruby_enum_chain_gem_final(mrb_state *mrb) {
}
