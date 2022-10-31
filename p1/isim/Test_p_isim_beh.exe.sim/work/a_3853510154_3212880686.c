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
static const char *ng0 = "D:/vhdl_github_2/vhdl_github_2/p1/Control_Unit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3853510154_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    int t9;
    char *t10;
    int t12;
    char *t13;
    int t15;
    char *t16;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    int t27;
    char *t28;
    int t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 6503);
    t6 = xsi_mem_cmp(t3, t4, 6U);
    if (t6 == 1)
        goto LAB6;

LAB16:    t7 = (t0 + 6509);
    t9 = xsi_mem_cmp(t7, t4, 6U);
    if (t9 == 1)
        goto LAB7;

LAB17:    t10 = (t0 + 6515);
    t12 = xsi_mem_cmp(t10, t4, 6U);
    if (t12 == 1)
        goto LAB8;

LAB18:    t13 = (t0 + 6521);
    t15 = xsi_mem_cmp(t13, t4, 6U);
    if (t15 == 1)
        goto LAB9;

LAB19:    t16 = (t0 + 6527);
    t18 = xsi_mem_cmp(t16, t4, 6U);
    if (t18 == 1)
        goto LAB10;

LAB20:    t19 = (t0 + 6533);
    t21 = xsi_mem_cmp(t19, t4, 6U);
    if (t21 == 1)
        goto LAB11;

LAB21:    t22 = (t0 + 6539);
    t24 = xsi_mem_cmp(t22, t4, 6U);
    if (t24 == 1)
        goto LAB12;

LAB22:    t25 = (t0 + 6545);
    t27 = xsi_mem_cmp(t25, t4, 6U);
    if (t27 == 1)
        goto LAB13;

LAB23:    t28 = (t0 + 6551);
    t30 = xsi_mem_cmp(t28, t4, 6U);
    if (t30 == 1)
        goto LAB14;

LAB24:
LAB15:
LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(61, ng0);
    t31 = (t0 + 6557);
    t33 = (t0 + 4032);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 2U);
    xsi_driver_first_trans_fast_port(t33);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4160);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4416);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

LAB9:    goto LAB5;

LAB10:    goto LAB5;

LAB11:    goto LAB5;

LAB12:    goto LAB5;

LAB13:    goto LAB5;

LAB14:    goto LAB5;

LAB25:;
}


extern void work_a_3853510154_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3853510154_3212880686_p_0};
	xsi_register_didat("work_a_3853510154_3212880686", "isim/Test_p_isim_beh.exe.sim/work/a_3853510154_3212880686.didat");
	xsi_register_executes(pe);
}
