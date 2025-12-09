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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_4, 3, (MRB_SYM(new), MRB_SYM(update), MRB_SYM(digest), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_4[23] = {
0x34,0x04,0x00,0x00,0x12,0x03,0x2f,0x03,0x00,0x00,0x01,0x04,0x01,0x2f,0x03,0x01,0x01,0x2f,0x03,0x02,
0x00,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_lv_4, 2, (MRB_SYM(data), 0,), const);
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_4 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_4,
  NULL,gem_mrblib_mruby_digest_proc_syms_4,NULL,
  gem_mrblib_mruby_digest_proc_lv_4,
  NULL,					/* debug_info */
  23,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_5, 5, (MRB_SYM(new), MRB_SYM(File), MRB_SYM(open), MRB_SYM(read), MRB_SYM(update), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_5[30] = {
0x34,0x04,0x00,0x00,0x12,0x03,0x2f,0x03,0x00,0x00,0x1d,0x04,0x01,0x01,0x05,0x01,0x2f,0x04,0x02,0x01,
0x2f,0x04,0x03,0x00,0x2f,0x03,0x04,0x01,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_lv_5, 2, (MRB_SYM(path), 0,), const);
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_5 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_5,
  NULL,gem_mrblib_mruby_digest_proc_syms_5,NULL,
  gem_mrblib_mruby_digest_proc_lv_5,
  NULL,					/* debug_info */
  30,0,5,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_6, 3, (MRB_SYM(new), MRB_SYM(update), MRB_SYM(hexdigest), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_6[23] = {
0x34,0x04,0x00,0x00,0x12,0x03,0x2f,0x03,0x00,0x00,0x01,0x04,0x01,0x2f,0x03,0x01,0x01,0x2f,0x03,0x02,
0x00,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_lv_6, 2, (MRB_SYM(data), 0,), const);
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_6 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_6,
  NULL,gem_mrblib_mruby_digest_proc_syms_6,NULL,
  gem_mrblib_mruby_digest_proc_lv_6,
  NULL,					/* debug_info */
  23,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_7, 4, (MRB_SYM(String), MRB_SYM_Q(kind_of), MRB_SYM(hexdigest), MRB_SYM(digest), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_7[49] = {
0x34,0x04,0x00,0x00,0x01,0x03,0x01,0x1d,0x04,0x00,0x2f,0x03,0x01,0x01,0x27,0x03,0x00,0x0e,0x12,0x03,
0x2f,0x03,0x02,0x00,0x01,0x04,0x01,0x42,0x03,0x25,0x00,0x0f,0x12,0x03,0x2f,0x03,0x03,0x00,0x01,0x04,
0x01,0x2f,0x04,0x03,0x00,0x42,0x03,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_lv_7, 2, (MRB_SYM(other), 0,), const);
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_7 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_7,
  NULL,gem_mrblib_mruby_digest_proc_syms_7,NULL,
  gem_mrblib_mruby_digest_proc_lv_7,
  NULL,					/* debug_info */
  49,0,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_8, 4, (MRB_SYM(File), MRB_SYM(open), MRB_SYM(read), MRB_SYM(update), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_8[26] = {
0x34,0x04,0x00,0x00,0x12,0x03,0x1d,0x04,0x00,0x01,0x05,0x01,0x2f,0x04,0x01,0x01,0x2f,0x04,0x02,0x00,
0x2f,0x03,0x03,0x01,0x38,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_lv_8, 2, (MRB_SYM(path), 0,), const);
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_8 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_8,
  NULL,gem_mrblib_mruby_digest_proc_syms_8,NULL,
  gem_mrblib_mruby_digest_proc_lv_8,
  NULL,					/* debug_info */
  26,0,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_9, 2, (MRB_SYM(hexdigest), MRB_SYM(reset), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_9[21] = {
0x34,0x00,0x00,0x00,0x12,0x03,0x2f,0x03,0x00,0x00,0x01,0x02,0x03,0x12,0x03,0x2f,0x03,0x01,0x00,0x38,
0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_lv_9, 2, (0,MRB_SYM(x), ), const);
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_9 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_9,
  NULL,gem_mrblib_mruby_digest_proc_syms_9,NULL,
  gem_mrblib_mruby_digest_proc_lv_9,
  NULL,					/* debug_info */
  21,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_digest_proc_reps_2[6] = {
  &gem_mrblib_mruby_digest_proc_irep_4,
  &gem_mrblib_mruby_digest_proc_irep_5,
  &gem_mrblib_mruby_digest_proc_irep_6,
  &gem_mrblib_mruby_digest_proc_irep_7,
  &gem_mrblib_mruby_digest_proc_irep_8,
  &gem_mrblib_mruby_digest_proc_irep_9,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_2, 11, (MRB_SYM(digest), MRB_SYM(file), MRB_SYM(hexdigest), MRB_OPSYM(eq), MRB_SYM_B(hexdigest), MRB_SYM(length), MRB_SYM(digest_length), MRB_SYM(size), MRB_SYM(to_s), MRB_OPSYM(lshift), MRB_SYM(update), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_2[70] = {
0x12,0x01,0x62,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x12,0x01,0x62,0x01,0x58,0x02,0x01,0x5f,0x01,0x01,
0x12,0x01,0x62,0x01,0x58,0x02,0x02,0x5f,0x01,0x02,0x63,0x01,0x58,0x02,0x03,0x5f,0x01,0x03,0x63,0x01,
0x58,0x02,0x04,0x5f,0x01,0x01,0x63,0x01,0x58,0x02,0x05,0x5f,0x01,0x04,0x60,0x05,0x06,0x60,0x07,0x06,
0x60,0x08,0x02,0x60,0x09,0x0a,0x11,0x01,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_2 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_2,
  NULL,gem_mrblib_mruby_digest_proc_syms_2,gem_mrblib_mruby_digest_proc_reps_2,
  NULL,					/* lv */
  NULL,					/* debug_info */
  70,0,11,6,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_42, 3, (MRB_SYM(new), MRB_SYM(update), MRB_SYM(digest), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_42[29] = {
0x34,0x0c,0x00,0x00,0x12,0x05,0x01,0x06,0x02,0x01,0x07,0x03,0x2f,0x05,0x00,0x02,0x01,0x06,0x01,0x2f,
0x05,0x01,0x01,0x2f,0x05,0x02,0x00,0x38,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_lv_42, 4, (MRB_SYM(data), MRB_SYM(key), MRB_SYM(digest), 0,), const);
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_42 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_42,
  NULL,gem_mrblib_mruby_digest_proc_syms_42,NULL,
  gem_mrblib_mruby_digest_proc_lv_42,
  NULL,					/* debug_info */
  29,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_43, 3, (MRB_SYM(new), MRB_SYM(update), MRB_SYM(hexdigest), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_43[29] = {
0x34,0x0c,0x00,0x00,0x12,0x05,0x01,0x06,0x02,0x01,0x07,0x03,0x2f,0x05,0x00,0x02,0x01,0x06,0x01,0x2f,
0x05,0x01,0x01,0x2f,0x05,0x02,0x00,0x38,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_lv_43, 4, (MRB_SYM(data), MRB_SYM(key), MRB_SYM(digest), 0,), const);
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_43 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_43,
  NULL,gem_mrblib_mruby_digest_proc_syms_43,NULL,
  gem_mrblib_mruby_digest_proc_lv_43,
  NULL,					/* debug_info */
  29,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_digest_proc_reps_3[2] = {
  &gem_mrblib_mruby_digest_proc_irep_42,
  &gem_mrblib_mruby_digest_proc_irep_43,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_3, 4, (MRB_SYM(digest), MRB_SYM(hexdigest), MRB_OPSYM(lshift), MRB_SYM(update), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_3[27] = {
0x12,0x01,0x62,0x01,0x58,0x02,0x00,0x5f,0x01,0x00,0x12,0x01,0x62,0x01,0x58,0x02,0x01,0x5f,0x01,0x01,
0x60,0x02,0x03,0x11,0x01,0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_3 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_3,
  NULL,gem_mrblib_mruby_digest_proc_syms_3,gem_mrblib_mruby_digest_proc_reps_3,
  NULL,					/* lv */
  NULL,					/* debug_info */
  27,0,4,2,0
};
static const mrb_irep *gem_mrblib_mruby_digest_proc_reps_1[2] = {
  &gem_mrblib_mruby_digest_proc_irep_2,
  &gem_mrblib_mruby_digest_proc_irep_3,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_1, 2, (MRB_SYM(Base), MRB_SYM(HMAC), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_1[22] = {
0x11,0x01,0x11,0x02,0x5c,0x01,0x00,0x5e,0x01,0x00,0x11,0x01,0x11,0x02,0x5c,0x01,0x01,0x5e,0x01,0x01,
0x38,0x01,};
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_1,
  NULL,gem_mrblib_mruby_digest_proc_syms_1,gem_mrblib_mruby_digest_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  22,0,2,2,0
};
static const mrb_irep *gem_mrblib_mruby_digest_proc_reps_0[1] = {
  &gem_mrblib_mruby_digest_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_digest_proc_syms_0, 3, (MRB_SYM(Object), MRB_SYM(Digest), MRB_SYM_Q(const_defined), ), const);
static const mrb_code gem_mrblib_mruby_digest_proc_iseq_0[30] = {
0x1d,0x01,0x00,0x10,0x02,0x01,0x2f,0x01,0x02,0x01,0x27,0x01,0x00,0x0b,0x11,0x01,0x5d,0x01,0x01,0x5e,
0x01,0x00,0x25,0x00,0x02,0x11,0x01,0x38,0x01,0x69,};
static const mrb_irep gem_mrblib_mruby_digest_proc_irep_0 = {
  1,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_digest_proc_iseq_0,
  NULL,gem_mrblib_mruby_digest_proc_syms_0,gem_mrblib_mruby_digest_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  30,0,3,1,0
};
static
const struct RProc gem_mrblib_mruby_digest_proc[] = {{
NULL,NULL,MRB_TT_PROC,MRB_GC_RED,0,{&gem_mrblib_mruby_digest_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_digest_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_digest_gem_init(mrb_state *mrb);
void mrb_mruby_digest_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_digest_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_digest_proc_init_syms(mrb);
  mrb_mruby_digest_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_digest_proc);
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

void GENERATED_TMP_mrb_mruby_digest_gem_final(mrb_state *mrb) {
  mrb_mruby_digest_gem_final(mrb);
}
