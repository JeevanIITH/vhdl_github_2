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
static const char *ng0 = "D:/vhdl_github_2/vhdl_github_2/mult_revise1/sum.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0194618706_3212880686_p_0(char *t0)
{
    char t15[16];
    char t19[16];
    char t22[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t20;
    unsigned int t21;
    int t23;
    char *t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (unsigned char)0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (unsigned char)0;

LAB23:    if (t2 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 5375);
    t8 = (t0 + 3392);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 5383);
    t4 = (t0 + 3456);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t16 = (7 - 7);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t7 + t18);
    t8 = (t19 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t20 = (0 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t21;
    t9 = (t0 + 5391);
    t11 = (t22 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t23 = (7 - 0);
    t21 = (t23 * 1);
    t21 = (t21 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t21;
    t12 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t1, t19, t9, t22);
    t24 = (t15 + 12U);
    t21 = *((unsigned int *)t24);
    t25 = (1U * t21);
    t26 = (8U != t25);
    if (t26 == 1)
        goto LAB14;

LAB15:    t27 = (t0 + 3456);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t12, 8U);
    xsi_driver_first_trans_fast_port(t27);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t16 = (7 - 7);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    t4 = (t19 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 7;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t20 = (0 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t21;
    t7 = (t0 + 5399);
    t9 = (t22 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 7;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t23 = (7 - 0);
    t21 = (t23 * 1);
    t21 = (t21 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t21;
    t10 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t1, t19, t7, t22);
    t11 = (t15 + 12U);
    t21 = *((unsigned int *)t11);
    t25 = (1U * t21);
    t2 = (8U != t25);
    if (t2 == 1)
        goto LAB16;

LAB17:    t12 = (t0 + 3392);
    t24 = (t12 + 56U);
    t27 = *((char **)t24);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t10, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t2 = t14;
    goto LAB13;

LAB14:    xsi_size_not_matching(8U, t25, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(8U, t25, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t16 = (7 - 7);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t7 + t18);
    t8 = (t19 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t20 = (0 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t21;
    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t21 = (7 - 7);
    t25 = (t21 * 1U);
    t32 = (0 + t25);
    t9 = (t10 + t32);
    t11 = (t22 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t23 = (0 - 7);
    t33 = (t23 * -1);
    t33 = (t33 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t33;
    t12 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t1, t19, t9, t22);
    t24 = (t15 + 12U);
    t33 = *((unsigned int *)t24);
    t34 = (1U * t33);
    t26 = (8U != t34);
    if (t26 == 1)
        goto LAB24;

LAB25:    t27 = (t0 + 3456);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t12, 8U);
    xsi_driver_first_trans_fast_port(t27);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t16 = (7 - 7);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    t4 = (t19 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 7;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t20 = (0 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t21;
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t21 = (7 - 7);
    t25 = (t21 * 1U);
    t32 = (0 + t25);
    t7 = (t8 + t32);
    t9 = (t22 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 7;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t23 = (0 - 7);
    t33 = (t23 * -1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t1, t19, t7, t22);
    t11 = (t15 + 12U);
    t33 = *((unsigned int *)t11);
    t34 = (1U * t33);
    t2 = (8U != t34);
    if (t2 == 1)
        goto LAB26;

LAB27:    t12 = (t0 + 3392);
    t24 = (t12 + 56U);
    t27 = *((char **)t24);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t10, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB19;

LAB21:    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t2 = t14;
    goto LAB23;

LAB24:    xsi_size_not_matching(8U, t34, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(8U, t34, 0);
    goto LAB27;

}


extern void work_a_0194618706_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0194618706_3212880686_p_0};
	xsi_register_didat("work_a_0194618706_3212880686", "isim/Test_mult_revise1_isim_beh.exe.sim/work/a_0194618706_3212880686.didat");
	xsi_register_executes(pe);
}
