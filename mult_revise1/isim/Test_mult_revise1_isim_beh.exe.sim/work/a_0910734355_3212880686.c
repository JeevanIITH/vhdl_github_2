/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/vhdl_github_2/vhdl_github_2/mult_revise1/left_shift_8_bit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0910734355_3212880686_p_0(char *t0)
{
    char t27[16];
    char t29[16];
    char t34[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1312U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1312U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t6 == 1)
        goto LAB14;

LAB15:    t3 = (unsigned char)0;

LAB16:    if (t3 == 1)
        goto LAB11;

LAB12:    t1 = (unsigned char)0;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1312U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t6 == 1)
        goto LAB27;

LAB28:    t3 = (unsigned char)0;

LAB29:    if (t3 == 1)
        goto LAB24;

LAB25:    t1 = (unsigned char)0;

LAB26:    if (t1 != 0)
        goto LAB22;

LAB23:
LAB9:    t2 = (t0 + 3472);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 5811);
    t9 = (t0 + 3552);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5819);
    t5 = (t0 + 3616);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(62, ng0);
    t4 = xsi_get_transient_memory(4U);
    memset(t4, 0, 4U);
    t9 = t4;
    if (-1 == 1)
        goto LAB17;

LAB18:    t17 = 4U;

LAB19:    t18 = (t17 - 4);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t10 = (t9 + t20);
    t21 = (4U - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t23 = (1U * t22);
    memset(t10, (unsigned char)2, t23);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t24 = (3 - 3);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t11 = (t12 + t26);
    t28 = ((IEEE_P_2592010699) + 4024);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 4;
    t31 = (t30 + 4U);
    *((int *)t31) = 7;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (7 - 4);
    t33 = (t32 * 1);
    t33 = (t33 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t34 + 0U);
    t35 = (t31 + 0U);
    *((int *)t35) = 3;
    t35 = (t31 + 4U);
    *((int *)t35) = 0;
    t35 = (t31 + 8U);
    *((int *)t35) = -1;
    t36 = (0 - 3);
    t33 = (t36 * -1);
    t33 = (t33 + 1);
    t35 = (t31 + 12U);
    *((unsigned int *)t35) = t33;
    t13 = xsi_base_array_concat(t13, t27, t28, (char)97, t4, t29, (char)97, t11, t34, (char)101);
    t33 = (4U + 4U);
    t37 = (8U != t33);
    if (t37 == 1)
        goto LAB20;

LAB21:    t35 = (t0 + 3616);
    t38 = (t35 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t13, 8U);
    xsi_driver_first_trans_fast_port(t35);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 2U, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t18 = (3 - 3);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 3U, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t18 = (2 - 3);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 4U, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t18 = (1 - 3);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 5U, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t18 = (0 - 3);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 6U, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 7U, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t15 = *((unsigned char *)t8);
    t16 = (t15 == (unsigned char)3);
    t1 = t16;
    goto LAB13;

LAB14:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t7 = *((unsigned char *)t5);
    t14 = (t7 == (unsigned char)2);
    t3 = t14;
    goto LAB16;

LAB17:    t17 = 7;
    goto LAB19;

LAB20:    xsi_size_not_matching(8U, t33, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1672U);
    t9 = *((char **)t4);
    t4 = (t0 + 3616);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t18 = (6 - 7);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t18 = (5 - 7);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t18 = (4 - 7);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 2U, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t18 = (3 - 7);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 3U, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t18 = (2 - 7);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 4U, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t18 = (1 - 7);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 5U, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t18 = (0 - 7);
    t17 = (t18 * -1);
    t19 = (1U * t17);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3552);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t5, 6U, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 7U, 1, 0LL);
    goto LAB9;

LAB24:    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t15 = *((unsigned char *)t8);
    t16 = (t15 == (unsigned char)2);
    t1 = t16;
    goto LAB26;

LAB27:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t7 = *((unsigned char *)t5);
    t14 = (t7 == (unsigned char)2);
    t3 = t14;
    goto LAB29;

}


extern void work_a_0910734355_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0910734355_3212880686_p_0};
	xsi_register_didat("work_a_0910734355_3212880686", "isim/Test_mult_revise1_isim_beh.exe.sim/work/a_0910734355_3212880686.didat");
	xsi_register_executes(pe);
}
