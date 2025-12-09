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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_3, 3, (MRB_SYM(Stat), MRB_SYM(File), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_3[19] = {
0x34,0x04,0x00,0x00,0x1d,0x03,0x01,0x1f,0x03,0x00,0x01,0x04,0x01,0x2f,0x03,0x02,0x01,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_lv_3, 2, (MRB_SYM(fname), 0,), const);
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_3 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_3,
  NULL,gem_mrblib_mruby_file_stat_proc_syms_3,NULL,
  gem_mrblib_mruby_file_stat_proc_lv_3,
  NULL,					/* debug_info */
  19,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_file_stat_proc_reps_1[1] = {
  &gem_mrblib_mruby_file_stat_proc_irep_3,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_1, 1, (MRB_SYM(stat), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_1[12] = {
0x12,0x01,0x62,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_1 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_1,
  NULL,gem_mrblib_mruby_file_stat_proc_syms_1,gem_mrblib_mruby_file_stat_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  12,0,1,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_7, 4, (MRB_SYM(class), MRB_SYM_Q(kind_of), MRB_SYM(mtime), MRB_OPSYM(cmp), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_7[45] = {
0x34,0x04,0x00,0x00,0x01,0x03,0x01,0x12,0x04,0x2f,0x04,0x00,0x00,0x2f,0x03,0x01,0x01,0x27,0x03,0x00,
0x14,0x12,0x03,0x2f,0x03,0x02,0x00,0x01,0x04,0x01,0x2f,0x04,0x02,0x00,0x2f,0x03,0x03,0x01,0x25,0x00,
0x02,0x11,0x03,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_lv_7, 2, (MRB_SYM(other), 0,), const);
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_7 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_7,
  NULL,gem_mrblib_mruby_file_stat_proc_syms_7,NULL,
  gem_mrblib_mruby_file_stat_proc_lv_7,
  NULL,					/* debug_info */
  45,0,4,0,0
};
static const mrb_pool_value gem_mrblib_mruby_file_stat_proc_pool_15[2] = {
{IREP_TT_STR|(0<<2), {""}},
{IREP_TT_STR|(1<<2), {"\x3d"}},
};
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_15[24] = {
0x34,0x08,0x00,0x00,0x51,0x04,0x00,0x01,0x05,0x01,0x52,0x04,0x51,0x05,0x01,0x52,0x04,0x01,0x05,0x02,
0x52,0x04,0x38,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_lv_15, 3, (MRB_SYM(k), MRB_SYM(v), 0,), const);
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_15 = {
  4,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_15,
  gem_mrblib_mruby_file_stat_proc_pool_15,NULL,NULL,
  gem_mrblib_mruby_file_stat_proc_lv_15,
  NULL,					/* debug_info */
  24,2,0,0,0
};
static const mrb_irep *gem_mrblib_mruby_file_stat_proc_reps_8[1] = {
  &gem_mrblib_mruby_file_stat_proc_irep_15,
};
static const mrb_pool_value gem_mrblib_mruby_file_stat_proc_pool_8[20] = {
{IREP_TT_STR|(2<<2), {"\x30\x78"}},
{IREP_TT_STR|(1<<2), {"\x30"}},
{IREP_TT_STR|(3<<2), {"\x64\x65\x76"}},
{IREP_TT_STR|(3<<2), {"\x69\x6e\x6f"}},
{IREP_TT_STR|(4<<2), {"\x6d\x6f\x64\x65"}},
{IREP_TT_STR|(5<<2), {"\x6e\x6c\x69\x6e\x6b"}},
{IREP_TT_STR|(3<<2), {"\x75\x69\x64"}},
{IREP_TT_STR|(3<<2), {"\x67\x69\x64"}},
{IREP_TT_STR|(4<<2), {"\x72\x64\x65\x76"}},
{IREP_TT_STR|(4<<2), {"\x73\x69\x7a\x65"}},
{IREP_TT_STR|(7<<2), {"\x62\x6c\x6b\x73\x69\x7a\x65"}},
{IREP_TT_STR|(6<<2), {"\x62\x6c\x6f\x63\x6b\x73"}},
{IREP_TT_STR|(5<<2), {"\x61\x74\x69\x6d\x65"}},
{IREP_TT_STR|(5<<2), {"\x6d\x74\x69\x6d\x65"}},
{IREP_TT_STR|(5<<2), {"\x63\x74\x69\x6d\x65"}},
{IREP_TT_STR|(9<<2), {"\x62\x69\x72\x74\x68\x74\x69\x6d\x65"}},
{IREP_TT_STR|(2<<2), {"\x23\x3c"}},
{IREP_TT_STR|(1<<2), {"\x20"}},
{IREP_TT_STR|(2<<2), {"\x2c\x20"}},
{IREP_TT_STR|(1<<2), {"\x3e"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_8, 21, (MRB_SYM(dev), MRB_SYM(Fixnum), MRB_SYM_Q(kind_of), MRB_SYM(to_s), MRB_SYM(mode), MRB_SYM(rdev), MRB_SYM(ino), MRB_SYM(nlink), MRB_SYM(uid), MRB_SYM(gid), MRB_SYM(size), MRB_SYM(blksize), MRB_SYM(blocks), MRB_SYM(atime), MRB_SYM(mtime), MRB_SYM(ctime), MRB_SYM(birthtime), MRB_SYM(NotImplementedError), MRB_SYM(class), MRB_SYM(map), MRB_SYM(join), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_8[312] = {
0x34,0x00,0x00,0x00,0x2d,0x06,0x00,0x00,0x01,0x02,0x06,0x01,0x06,0x02,0x1d,0x07,0x01,0x2f,0x06,0x02,
0x01,0x27,0x06,0x00,0x12,0x51,0x06,0x00,0x01,0x07,0x02,0x03,0x08,0x10,0x2f,0x07,0x03,0x01,0x52,0x06,
0x01,0x02,0x06,0x2d,0x06,0x04,0x00,0x01,0x03,0x06,0x01,0x06,0x03,0x1d,0x07,0x01,0x2f,0x06,0x02,0x01,
0x27,0x06,0x00,0x12,0x51,0x06,0x01,0x01,0x07,0x03,0x03,0x08,0x08,0x2f,0x07,0x03,0x01,0x52,0x06,0x01,
0x03,0x06,0x2d,0x06,0x05,0x00,0x01,0x04,0x06,0x01,0x06,0x04,0x1d,0x07,0x01,0x2f,0x06,0x02,0x01,0x27,
0x06,0x00,0x12,0x51,0x06,0x00,0x01,0x07,0x04,0x03,0x08,0x10,0x2f,0x07,0x03,0x01,0x52,0x06,0x01,0x04,
0x06,0x51,0x06,0x02,0x01,0x07,0x02,0x51,0x08,0x03,0x2d,0x09,0x06,0x00,0x51,0x0a,0x04,0x01,0x0b,0x03,
0x51,0x0c,0x05,0x2d,0x0d,0x07,0x00,0x51,0x0e,0x06,0x2d,0x0f,0x08,0x00,0x51,0x10,0x07,0x2d,0x11,0x09,
0x00,0x51,0x12,0x08,0x01,0x13,0x04,0x51,0x14,0x09,0x2d,0x15,0x0a,0x00,0x51,0x16,0x0a,0x2d,0x17,0x0b,
0x00,0x51,0x18,0x0b,0x2d,0x19,0x0c,0x00,0x51,0x1a,0x0c,0x2d,0x1b,0x0d,0x00,0x51,0x1c,0x0d,0x2d,0x1d,
0x0e,0x00,0x51,0x1e,0x0e,0x2d,0x1f,0x0f,0x00,0x53,0x06,0x0d,0x01,0x05,0x06,0x01,0x07,0x05,0x51,0x08,
0x0f,0x2d,0x09,0x10,0x00,0x01,0x06,0x09,0x24,0x07,0x25,0x00,0x14,0x2a,0x06,0x1d,0x07,0x11,0x2b,0x06,
0x07,0x26,0x07,0x00,0x03,0x25,0x00,0x03,0x25,0x00,0x02,0x2c,0x06,0x51,0x06,0x10,0x12,0x07,0x2f,0x07,
0x12,0x00,0x2f,0x07,0x03,0x00,0x52,0x06,0x51,0x07,0x11,0x52,0x06,0x01,0x07,0x05,0x57,0x08,0x00,0x30,
0x07,0x13,0x00,0x51,0x08,0x12,0x2f,0x07,0x14,0x01,0x52,0x06,0x51,0x07,0x13,0x52,0x06,0x38,0x06,0x00,
0x00,0x00,0x00,0xd7,0x00,0x00,0x00,0xe6,0x00,0x00,0x00,0xe9,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_lv_8, 5, (0,MRB_SYM(_dev), MRB_SYM(_mode), MRB_SYM(_rdev), MRB_SYM(stats), ), const);
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_8 = {
  6,33,1,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_8,
  gem_mrblib_mruby_file_stat_proc_pool_8,gem_mrblib_mruby_file_stat_proc_syms_8,gem_mrblib_mruby_file_stat_proc_reps_8,
  gem_mrblib_mruby_file_stat_proc_lv_8,
  NULL,					/* debug_info */
  299,20,21,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_9, 1, (MRB_SYM(size), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_9[32] = {
0x34,0x00,0x00,0x00,0x2d,0x03,0x00,0x00,0x01,0x02,0x03,0x01,0x03,0x02,0x06,0x04,0x42,0x03,0x27,0x03,
0x00,0x05,0x11,0x03,0x25,0x00,0x03,0x01,0x03,0x02,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_lv_9, 2, (0,MRB_SYM(s), ), const);
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_9 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_9,
  NULL,gem_mrblib_mruby_file_stat_proc_syms_9,NULL,
  gem_mrblib_mruby_file_stat_proc_lv_9,
  NULL,					/* debug_info */
  32,0,1,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_10, 1, (MRB_SYM(size), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_10[14] = {
0x34,0x00,0x00,0x00,0x2d,0x02,0x00,0x00,0x06,0x03,0x42,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_lv_10, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_10 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_10,
  NULL,gem_mrblib_mruby_file_stat_proc_syms_10,NULL,
  gem_mrblib_mruby_file_stat_proc_lv_10,
  NULL,					/* debug_info */
  14,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_file_stat_proc_reps_6[4] = {
  &gem_mrblib_mruby_file_stat_proc_irep_7,
  &gem_mrblib_mruby_file_stat_proc_irep_8,
  &gem_mrblib_mruby_file_stat_proc_irep_9,
  &gem_mrblib_mruby_file_stat_proc_irep_10,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_6, 6, (MRB_SYM(Comparable), MRB_SYM(include), MRB_OPSYM(cmp), MRB_SYM(inspect), MRB_SYM_Q(size), MRB_SYM_Q(zero), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_6[41] = {
0x1d,0x02,0x00,0x2d,0x01,0x01,0x01,0x63,0x01,0x58,0x02,0x00,0x5f,0x01,0x02,0x63,0x01,0x58,0x02,0x01,
0x5f,0x01,0x03,0x63,0x01,0x58,0x02,0x02,0x5f,0x01,0x04,0x63,0x01,0x58,0x02,0x03,0x5f,0x01,0x05,0x38,
0x01,};
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_6 = {
  1,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_6,
  NULL,gem_mrblib_mruby_file_stat_proc_syms_6,gem_mrblib_mruby_file_stat_proc_reps_6,
  NULL,					/* lv */
  NULL,					/* debug_info */
  41,0,6,4,0
};
static const mrb_irep *gem_mrblib_mruby_file_stat_proc_reps_2[1] = {
  &gem_mrblib_mruby_file_stat_proc_irep_6,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_2, 1, (MRB_SYM(Stat), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_2[12] = {
0x11,0x01,0x11,0x02,0x5c,0x01,0x00,0x5e,0x01,0x00,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_2 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_2,
  NULL,gem_mrblib_mruby_file_stat_proc_syms_2,gem_mrblib_mruby_file_stat_proc_reps_2,
  NULL,					/* lv */
  NULL,					/* debug_info */
  12,0,1,1,0
};
static const mrb_irep *gem_mrblib_mruby_file_stat_proc_reps_0[2] = {
  &gem_mrblib_mruby_file_stat_proc_irep_1,
  &gem_mrblib_mruby_file_stat_proc_irep_2,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_file_stat_proc_syms_0, 1, (MRB_SYM(File), ), const);
static const mrb_code gem_mrblib_mruby_file_stat_proc_iseq_0[23] = {
0x11,0x01,0x11,0x02,0x5c,0x01,0x00,0x5e,0x01,0x00,0x11,0x01,0x11,0x02,0x5c,0x01,0x00,0x5e,0x01,0x01,
0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_file_stat_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_file_stat_proc_iseq_0,
  NULL,gem_mrblib_mruby_file_stat_proc_syms_0,gem_mrblib_mruby_file_stat_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  23,0,1,2,0
};
static
const struct RProc gem_mrblib_mruby_file_stat_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_file_stat_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_file_stat_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_file_stat_gem_init(mrb_state *mrb);
void mrb_mruby_file_stat_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_file_stat_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_file_stat_proc_init_syms(mrb);
  mrb_mruby_file_stat_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_file_stat_proc);
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

void GENERATED_TMP_mrb_mruby_file_stat_gem_final(mrb_state *mrb) {
  mrb_mruby_file_stat_gem_final(mrb);
}
