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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_2, 4, (MRB_SYM(Math), MRB_SYM(cos), MRB_SYM(sin), MRB_SYM(Complex), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_2[48] = {
0x34,0x04,0x20,0x00,0x25,0x00,0x03,0x25,0x00,0x02,0x06,0x02,0x01,0x05,0x01,0x1d,0x06,0x00,0x01,0x07,
0x02,0x2f,0x06,0x01,0x01,0x40,0x05,0x01,0x06,0x01,0x1d,0x07,0x00,0x01,0x08,0x02,0x2f,0x07,0x02,0x01,
0x40,0x06,0x2d,0x04,0x03,0x02,0x38,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_2, 3, (MRB_SYM(abs), MRB_SYM(arg), 0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_2 = {
  4,10,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_2,
  NULL,gem_mrblib_mruby_complex_proc_syms_2,NULL,
  gem_mrblib_mruby_complex_proc_lv_2,
  NULL,					/* debug_info */
  48,0,4,0,0
};
static const mrb_pool_value gem_mrblib_mruby_complex_proc_pool_3[2] = {
{IREP_TT_STR|(1<<2), {"\x28"}},
{IREP_TT_STR|(1<<2), {"\x29"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_3, 1, (MRB_SYM(to_s), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_3[20] = {
0x34,0x00,0x00,0x00,0x51,0x02,0x00,0x2d,0x03,0x00,0x00,0x52,0x02,0x51,0x03,0x01,0x52,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_3, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_3 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_3,
  gem_mrblib_mruby_complex_proc_pool_3,gem_mrblib_mruby_complex_proc_syms_3,NULL,
  gem_mrblib_mruby_complex_proc_lv_3,
  NULL,					/* debug_info */
  20,2,1,0,0
};
static const mrb_pool_value gem_mrblib_mruby_complex_proc_pool_4[4] = {
{IREP_TT_STR|(0<<2), {""}},
{IREP_TT_STR|(1<<2), {"\x2b"}},
{IREP_TT_STR|(1<<2), {"\x2a"}},
{IREP_TT_STR|(1<<2), {"\x69"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_4, 3, (MRB_SYM(real), MRB_SYM(imaginary), MRB_SYM_Q(finite), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_4[85] = {
0x34,0x00,0x00,0x00,0x51,0x02,0x00,0x2d,0x03,0x00,0x00,0x52,0x02,0x51,0x03,0x00,0x52,0x02,0x2d,0x03,
0x01,0x00,0x06,0x04,0x43,0x03,0x27,0x03,0x00,0x05,0x11,0x03,0x25,0x00,0x03,0x51,0x03,0x01,0x52,0x02,
0x51,0x03,0x00,0x52,0x02,0x2d,0x03,0x01,0x00,0x52,0x02,0x51,0x03,0x00,0x52,0x02,0x2d,0x03,0x01,0x00,
0x2f,0x03,0x02,0x00,0x27,0x03,0x00,0x05,0x11,0x03,0x25,0x00,0x03,0x51,0x03,0x02,0x52,0x02,0x51,0x03,
0x03,0x52,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_4, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_4 = {
  2,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_4,
  gem_mrblib_mruby_complex_proc_pool_4,gem_mrblib_mruby_complex_proc_syms_4,NULL,
  gem_mrblib_mruby_complex_proc_lv_4,
  NULL,					/* debug_info */
  85,4,3,0,0
};
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_5[8] = {
0x34,0x00,0x00,0x00,0x12,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_5, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_5 = {
  2,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_5,
  NULL,NULL,NULL,
  gem_mrblib_mruby_complex_proc_lv_5,
  NULL,					/* debug_info */
  8,0,0,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_6, 4, (MRB_SYM(real), MRB_OPSYM(minus), MRB_SYM(imaginary), MRB_SYM(Complex), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_6[26] = {
0x34,0x00,0x00,0x00,0x2d,0x03,0x00,0x00,0x2f,0x03,0x01,0x00,0x2d,0x04,0x02,0x00,0x2f,0x04,0x01,0x00,
0x2d,0x02,0x03,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_6, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_6 = {
  2,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_6,
  NULL,gem_mrblib_mruby_complex_proc_syms_6,NULL,
  gem_mrblib_mruby_complex_proc_lv_6,
  NULL,					/* debug_info */
  26,0,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_7, 4, (MRB_SYM(Math), MRB_SYM(imaginary), MRB_SYM(real), MRB_SYM(hypot), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_7[21] = {
0x34,0x00,0x00,0x00,0x1d,0x02,0x00,0x2d,0x03,0x01,0x00,0x2d,0x04,0x02,0x00,0x2f,0x02,0x03,0x02,0x38,
0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_7, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_7 = {
  2,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_7,
  NULL,gem_mrblib_mruby_complex_proc_syms_7,NULL,
  gem_mrblib_mruby_complex_proc_lv_7,
  NULL,					/* debug_info */
  21,0,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_8, 2, (MRB_SYM(real), MRB_SYM(imaginary), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_8[28] = {
0x34,0x00,0x00,0x00,0x2d,0x02,0x00,0x00,0x2d,0x03,0x00,0x00,0x40,0x02,0x2d,0x03,0x01,0x00,0x2d,0x04,
0x01,0x00,0x40,0x03,0x3c,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_8, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_8 = {
  2,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_8,
  NULL,gem_mrblib_mruby_complex_proc_syms_8,NULL,
  gem_mrblib_mruby_complex_proc_lv_8,
  NULL,					/* debug_info */
  28,0,2,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_9, 4, (MRB_SYM(Math), MRB_SYM(imaginary), MRB_SYM(real), MRB_SYM(atan2), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_9[21] = {
0x34,0x00,0x00,0x00,0x1d,0x02,0x00,0x2d,0x03,0x01,0x00,0x2d,0x04,0x02,0x00,0x2f,0x02,0x03,0x02,0x38,
0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_9, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_9 = {
  2,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_9,
  NULL,gem_mrblib_mruby_complex_proc_syms_9,NULL,
  gem_mrblib_mruby_complex_proc_lv_9,
  NULL,					/* debug_info */
  21,0,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_10, 4, (MRB_SYM(real), MRB_SYM(imaginary), MRB_OPSYM(minus), MRB_SYM(Complex), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_10[22] = {
0x34,0x00,0x00,0x00,0x2d,0x03,0x00,0x00,0x2d,0x04,0x01,0x00,0x2f,0x04,0x02,0x00,0x2d,0x02,0x03,0x02,
0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_10, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_10 = {
  2,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_10,
  NULL,gem_mrblib_mruby_complex_proc_syms_10,NULL,
  gem_mrblib_mruby_complex_proc_lv_10,
  NULL,					/* debug_info */
  22,0,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_11, 3, (MRB_SYM(real), MRB_SYM(imaginary), MRB_SYM(Complex), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_11[28] = {
0x34,0x04,0x00,0x00,0x2d,0x04,0x00,0x00,0x01,0x05,0x01,0x41,0x04,0x2d,0x05,0x01,0x00,0x01,0x06,0x01,
0x41,0x05,0x2d,0x03,0x02,0x02,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_11, 2, (MRB_SYM(numeric), 0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_11 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_11,
  NULL,gem_mrblib_mruby_complex_proc_syms_11,NULL,
  gem_mrblib_mruby_complex_proc_lv_11,
  NULL,					/* debug_info */
  28,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_12, 2, (MRB_SYM(abs), MRB_SYM(arg), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_12[17] = {
0x34,0x00,0x00,0x00,0x2d,0x02,0x00,0x00,0x2d,0x03,0x01,0x00,0x47,0x02,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_12, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_12 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_12,
  NULL,gem_mrblib_mruby_complex_proc_syms_12,NULL,
  gem_mrblib_mruby_complex_proc_lv_12,
  NULL,					/* debug_info */
  17,0,2,0,0
};
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_13[8] = {
0x34,0x00,0x00,0x00,0x14,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_13, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_13 = {
  2,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_13,
  NULL,NULL,NULL,
  gem_mrblib_mruby_complex_proc_lv_13,
  NULL,					/* debug_info */
  8,0,0,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_14, 2, (MRB_SYM(real), MRB_SYM(imaginary), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_14[17] = {
0x34,0x00,0x00,0x00,0x2d,0x02,0x00,0x00,0x2d,0x03,0x01,0x00,0x47,0x02,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_14, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_14 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_14,
  NULL,gem_mrblib_mruby_complex_proc_syms_14,NULL,
  gem_mrblib_mruby_complex_proc_lv_14,
  NULL,					/* debug_info */
  17,0,2,0,0
};
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_15[8] = {
0x34,0x00,0x00,0x00,0x12,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_15, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_15 = {
  2,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_15,
  NULL,NULL,NULL,
  gem_mrblib_mruby_complex_proc_lv_15,
  NULL,					/* debug_info */
  8,0,0,0,0
};
static const mrb_pool_value gem_mrblib_mruby_complex_proc_pool_16[2] = {
{IREP_TT_STR|(14<<2), {"\x63\x61\x6e\x27\x74\x20\x63\x6f\x6e\x76\x65\x72\x74\x20"}},
{IREP_TT_STR|(14<<2), {"\x20\x69\x6e\x74\x6f\x20\x52\x61\x74\x69\x6f\x6e\x61\x6c"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_16, 8, (MRB_SYM(imaginary), MRB_SYM_Q(zero), MRB_SYM(RangeError), MRB_SYM(to_s), MRB_SYM(new), MRB_SYM(raise), MRB_SYM(real), MRB_SYM(Rational), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_16[53] = {
0x34,0x00,0x00,0x00,0x2d,0x02,0x00,0x00,0x2f,0x02,0x01,0x00,0x26,0x02,0x00,0x19,0x1d,0x03,0x02,0x51,
0x04,0x00,0x2d,0x05,0x03,0x00,0x52,0x04,0x51,0x05,0x01,0x52,0x04,0x2f,0x03,0x04,0x01,0x2d,0x02,0x05,
0x01,0x2d,0x03,0x06,0x00,0x07,0x04,0x2d,0x02,0x07,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_16, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_16 = {
  2,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_16,
  gem_mrblib_mruby_complex_proc_pool_16,gem_mrblib_mruby_complex_proc_syms_16,NULL,
  gem_mrblib_mruby_complex_proc_lv_16,
  NULL,					/* debug_info */
  53,2,8,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_258, 1, (MRB_SYM(Complex), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_258[14] = {
0x34,0x00,0x00,0x00,0x06,0x03,0x12,0x04,0x2d,0x02,0x00,0x02,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_258, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_258 = {
  2,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_258,
  NULL,gem_mrblib_mruby_complex_proc_syms_258,NULL,
  gem_mrblib_mruby_complex_proc_lv_258,
  NULL,					/* debug_info */
  14,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_complex_proc_reps_17[1] = {
  &gem_mrblib_mruby_complex_proc_irep_258,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_17, 1, (MRB_SYM(i), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_17[14] = {
0x34,0x00,0x00,0x00,0x63,0x02,0x58,0x03,0x00,0x5f,0x02,0x00,0x38,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_lv_17, 1, (0,), const);
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_17 = {
  2,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_17,
  NULL,gem_mrblib_mruby_complex_proc_syms_17,gem_mrblib_mruby_complex_proc_reps_17,
  gem_mrblib_mruby_complex_proc_lv_17,
  NULL,					/* debug_info */
  14,0,1,1,0
};
static const mrb_irep *gem_mrblib_mruby_complex_proc_reps_1[16] = {
  &gem_mrblib_mruby_complex_proc_irep_2,
  &gem_mrblib_mruby_complex_proc_irep_3,
  &gem_mrblib_mruby_complex_proc_irep_4,
  &gem_mrblib_mruby_complex_proc_irep_5,
  &gem_mrblib_mruby_complex_proc_irep_6,
  &gem_mrblib_mruby_complex_proc_irep_7,
  &gem_mrblib_mruby_complex_proc_irep_8,
  &gem_mrblib_mruby_complex_proc_irep_9,
  &gem_mrblib_mruby_complex_proc_irep_10,
  &gem_mrblib_mruby_complex_proc_irep_11,
  &gem_mrblib_mruby_complex_proc_irep_12,
  &gem_mrblib_mruby_complex_proc_irep_13,
  &gem_mrblib_mruby_complex_proc_irep_14,
  &gem_mrblib_mruby_complex_proc_irep_15,
  &gem_mrblib_mruby_complex_proc_irep_16,
  &gem_mrblib_mruby_complex_proc_irep_17,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_1, 25, (MRB_SYM(polar), MRB_SYM(inspect), MRB_SYM(to_s), MRB_OPSYM(plus), MRB_OPSYM(minus), MRB_SYM(abs), MRB_SYM(magnitude), MRB_SYM(alias_method), MRB_SYM(abs2), MRB_SYM(arg), MRB_SYM(angle), MRB_SYM(phase), MRB_SYM(conjugate), MRB_SYM(conj), MRB_SYM(fdiv), MRB_SYM_Q(real), MRB_SYM(rectangular), MRB_SYM(rect), MRB_SYM(to_c), MRB_SYM(to_r), MRB_SYM(imag), MRB_SYM(imaginary), MRB_SYM(Numeric), MRB_SYM(class_eval), MRB_SYM(i), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_1[198] = {
0x12,0x01,0x62,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x63,0x01,0x58,0x02,0x01,0x5f,0x01,0x01,0x63,0x01,
0x58,0x02,0x02,0x5f,0x01,0x02,0x63,0x01,0x58,0x02,0x03,0x5f,0x01,0x03,0x63,0x01,0x58,0x02,0x04,0x5f,
0x01,0x04,0x63,0x01,0x58,0x02,0x05,0x5f,0x01,0x05,0x10,0x02,0x06,0x10,0x03,0x05,0x2d,0x01,0x07,0x02,
0x63,0x01,0x58,0x02,0x06,0x5f,0x01,0x08,0x63,0x01,0x58,0x02,0x07,0x5f,0x01,0x09,0x10,0x02,0x0a,0x10,
0x03,0x09,0x2d,0x01,0x07,0x02,0x10,0x02,0x0b,0x10,0x03,0x09,0x2d,0x01,0x07,0x02,0x63,0x01,0x58,0x02,
0x08,0x5f,0x01,0x0c,0x10,0x02,0x0d,0x10,0x03,0x0c,0x2d,0x01,0x07,0x02,0x63,0x01,0x58,0x02,0x09,0x5f,
0x01,0x0e,0x63,0x01,0x58,0x02,0x0a,0x5f,0x01,0x00,0x63,0x01,0x58,0x02,0x0b,0x5f,0x01,0x0f,0x63,0x01,
0x58,0x02,0x0c,0x5f,0x01,0x10,0x10,0x02,0x11,0x10,0x03,0x10,0x2d,0x01,0x07,0x02,0x63,0x01,0x58,0x02,
0x0d,0x5f,0x01,0x12,0x63,0x01,0x58,0x02,0x0e,0x5f,0x01,0x13,0x10,0x02,0x14,0x10,0x03,0x15,0x2d,0x01,
0x07,0x02,0x1d,0x01,0x16,0x57,0x02,0x0f,0x30,0x01,0x17,0x00,0x61,0x18,0x11,0x01,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_1 = {
  1,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_1,
  NULL,gem_mrblib_mruby_complex_proc_syms_1,gem_mrblib_mruby_complex_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  198,0,25,16,0
};
static const mrb_irep *gem_mrblib_mruby_complex_proc_reps_0[1] = {
  &gem_mrblib_mruby_complex_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_complex_proc_syms_0, 2, (MRB_SYM(Numeric), MRB_SYM(Complex), ), const);
static const mrb_code gem_mrblib_mruby_complex_proc_iseq_0[14] = {
0x11,0x01,0x1d,0x02,0x00,0x5c,0x01,0x01,0x5e,0x01,0x00,0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_complex_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_complex_proc_iseq_0,
  NULL,gem_mrblib_mruby_complex_proc_syms_0,gem_mrblib_mruby_complex_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  14,0,2,1,0
};
static
const struct RProc gem_mrblib_mruby_complex_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_complex_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_complex_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_complex_gem_init(mrb_state *mrb);
void mrb_mruby_complex_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_complex_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_complex_proc_init_syms(mrb);
  mrb_mruby_complex_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_complex_proc);
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

void GENERATED_TMP_mrb_mruby_complex_gem_final(mrb_state *mrb) {
  mrb_mruby_complex_gem_final(mrb);
}
