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
static const char *ng0 = "J:/vhdl_github_2/vhdl_github_2/ALU1/sum.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0194618706_3212880686_p_0(char *t0)
{
    char t5[16];
    char t10[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2088U);
    t6 = *((char **)t1);
    t7 = (7 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t6 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 5824);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 7;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t14 = (t19 * 1);
    t14 = (t14 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t14;
    t18 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t5, t1, t10, t12, t16);
    t20 = (t0 + 2088U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t5 + 12U);
    t14 = *((unsigned int *)t22);
    t23 = (1U * t14);
    memcpy(t20, t18, t23);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t19 = (t13 - 1);
    t1 = (t0 + 1968U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 0);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2088U);
    t6 = *((char **)t1);
    t7 = (7 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t6 + t9);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t1, 4U);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t7 = (7 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t6 = (t0 + 2208U);
    t11 = *((char **)t6);
    t6 = (t11 + 0);
    memcpy(t6, t1, 4U);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2328U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t6 = (t1 + 56U);
    t11 = *((char **)t6);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    t1 = (t0 + 3776);
    t6 = (t1 + 56U);
    t11 = *((char **)t6);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2088U);
    t6 = *((char **)t1);
    t7 = (7 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t6 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 1192U);
    t15 = *((char **)t12);
    t14 = (7 - 7);
    t23 = (t14 * 1U);
    t24 = (0 + t23);
    t12 = (t15 + t24);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 7;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 7);
    t25 = (t19 * -1);
    t25 = (t25 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t25;
    t18 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t5, t1, t10, t12, t16);
    t20 = (t0 + 2088U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t5 + 12U);
    t25 = *((unsigned int *)t22);
    t26 = (1U * t25);
    memcpy(t20, t18, t26);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t19 = (t13 - 1);
    t1 = (t0 + 1968U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 0);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2088U);
    t6 = *((char **)t1);
    t7 = (7 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t6 + t9);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t1, 4U);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t7 = (7 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t6 = (t0 + 2208U);
    t11 = *((char **)t6);
    t6 = (t11 + 0);
    memcpy(t6, t1, 4U);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2328U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t6 = (t1 + 56U);
    t11 = *((char **)t6);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    t1 = (t0 + 3776);
    t6 = (t1 + 56U);
    t11 = *((char **)t6);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

}


extern void work_a_0194618706_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0194618706_3212880686_p_0};
	xsi_register_didat("work_a_0194618706_3212880686", "isim/Test_alu2_isim_beh.exe.sim/work/a_0194618706_3212880686.didat");
	xsi_register_executes(pe);
}
