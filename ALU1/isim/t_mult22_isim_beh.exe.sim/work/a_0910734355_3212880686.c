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
static const char *ng0 = "J:/vhdl_github_2/vhdl_github_2/ALU1/left_shift_8_bit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0910734355_3212880686_p_0(char *t0)
{
    char t24[16];
    char t26[16];
    char t31[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1312U);
    t1 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB13;

LAB15:
LAB14:    t2 = (t0 + 3472);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t9 = t2;
    if (-1 == 1)
        goto LAB8;

LAB9:    t10 = 4U;

LAB10:    t11 = (t10 - 4);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (t9 + t13);
    t15 = (4U - 7);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t17 = (1U * t16);
    memset(t14, (unsigned char)2, t17);
    t18 = (t0 + 1032U);
    t19 = *((char **)t18);
    t20 = (3 - 3);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t25 = ((IEEE_P_2592010699) + 4024);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 4;
    t28 = (t27 + 4U);
    *((int *)t28) = 7;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t29 = (7 - 4);
    t30 = (t29 * 1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t31 + 0U);
    t32 = (t28 + 0U);
    *((int *)t32) = 3;
    t32 = (t28 + 4U);
    *((int *)t32) = 0;
    t32 = (t28 + 8U);
    *((int *)t32) = -1;
    t33 = (0 - 3);
    t30 = (t33 * -1);
    t30 = (t30 + 1);
    t32 = (t28 + 12U);
    *((unsigned int *)t32) = t30;
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t2, t26, (char)97, t18, t31, (char)101);
    t30 = (4U + 4U);
    t34 = (8U != t30);
    if (t34 == 1)
        goto LAB11;

LAB12:    t32 = (t0 + 3552);
    t35 = (t32 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t23, 8U);
    xsi_driver_first_trans_fast(t32);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB8:    t10 = 7;
    goto LAB10;

LAB11:    xsi_size_not_matching(8U, t30, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1672U);
    t6 = *((char **)t3);
    t3 = (t0 + 3680);
    t9 = (t3 + 56U);
    t14 = *((char **)t9);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t11 = (6 - 7);
    t10 = (t11 * -1);
    t12 = (1U * t10);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3552);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t1;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t11 = (5 - 7);
    t10 = (t11 * -1);
    t12 = (1U * t10);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3552);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t1;
    xsi_driver_first_trans_delta(t6, 1U, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t11 = (4 - 7);
    t10 = (t11 * -1);
    t12 = (1U * t10);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3552);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t1;
    xsi_driver_first_trans_delta(t6, 2U, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t11 = (3 - 7);
    t10 = (t11 * -1);
    t12 = (1U * t10);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3552);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t1;
    xsi_driver_first_trans_delta(t6, 3U, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t11 = (2 - 7);
    t10 = (t11 * -1);
    t12 = (1U * t10);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3552);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t1;
    xsi_driver_first_trans_delta(t6, 4U, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t11 = (1 - 7);
    t10 = (t11 * -1);
    t12 = (1U * t10);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3552);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t1;
    xsi_driver_first_trans_delta(t6, 5U, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t11 = (0 - 7);
    t10 = (t11 * -1);
    t12 = (1U * t10);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3552);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t1;
    xsi_driver_first_trans_delta(t6, 6U, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3552);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t14 = *((char **)t9);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 7U, 1, 0LL);
    goto LAB14;

}


extern void work_a_0910734355_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0910734355_3212880686_p_0};
	xsi_register_didat("work_a_0910734355_3212880686", "isim/t_mult22_isim_beh.exe.sim/work/a_0910734355_3212880686.didat");
	xsi_register_executes(pe);
}
