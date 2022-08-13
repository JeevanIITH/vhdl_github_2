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
static const char *ng0 = "D:/vhdl_github_2/vhdl_github_2/signed_adder_4_bit/four_bit_signed_adder.vhd";



static void work_a_0071030908_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3976);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 3880);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0071030908_3212880686_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = (3 - 3);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t0 + 1192U);
    t11 = *((char **)t10);
    t12 = (3 - 3);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t9 == t16);
    if (t17 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = (3 - 3);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t0 + 1192U);
    t11 = *((char **)t10);
    t12 = (3 - 3);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t9 == t16);
    if (t17 == 1)
        goto LAB16;

LAB17:    t2 = (unsigned char)0;

LAB18:    if (t2 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 4040);
    t4 = (t3 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);

LAB3:    t3 = (t0 + 3896);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t26 = (t0 + 4040);
    t30 = (t26 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t26);
    goto LAB3;

LAB5:    t26 = (t0 + 2152U);
    t27 = *((char **)t26);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)3);
    t1 = t29;
    goto LAB7;

LAB8:    t18 = (t0 + 1192U);
    t19 = *((char **)t18);
    t20 = (3 - 3);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t25 = (t24 == (unsigned char)2);
    t2 = t25;
    goto LAB10;

LAB11:    xsi_set_current_line(70, ng0);
    t26 = (t0 + 4040);
    t30 = (t26 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t26);
    goto LAB3;

LAB13:    t26 = (t0 + 2152U);
    t27 = *((char **)t26);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)2);
    t1 = t29;
    goto LAB15;

LAB16:    t18 = (t0 + 1192U);
    t19 = *((char **)t18);
    t20 = (3 - 3);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t25 = (t24 == (unsigned char)3);
    t2 = t25;
    goto LAB18;

}


extern void work_a_0071030908_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0071030908_3212880686_p_0,(void *)work_a_0071030908_3212880686_p_1};
	xsi_register_didat("work_a_0071030908_3212880686", "isim/test_fou_bit_adder_signed_isim_beh.exe.sim/work/a_0071030908_3212880686.didat");
	xsi_register_executes(pe);
}
