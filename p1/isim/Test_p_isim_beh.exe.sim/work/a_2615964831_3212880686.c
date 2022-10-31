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
static const char *ng0 = "D:/vhdl_github_2/vhdl_github_2/p1/register_file.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2615964831_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2112U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 8296);
    t5 = (32U != 32U);
    if (t5 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 2632U);
    t7 = *((char **)t6);
    t6 = (t0 + 7172U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t6);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0U + t11);
    t13 = (t0 + 4352);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 32U);
    xsi_driver_first_trans_delta(t13, t12, 32U, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 8328);
    t2 = (32U != 32U);
    if (t2 == 1)
        goto LAB7;

LAB8:    t4 = (t0 + 2792U);
    t6 = *((char **)t4);
    t4 = (t0 + 7188U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t4);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0U + t11);
    t7 = (t0 + 4352);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 32U);
    xsi_driver_first_trans_delta(t7, t12, 32U, 0LL);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 7092U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t8);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t6 = (t3 + t12);
    t7 = (t0 + 4416);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t1 = (t0 + 7108U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t8);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t6 = (t3 + t12);
    t7 = (t0 + 4480);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB3;

LAB5:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB8;

LAB9:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t18 = *((unsigned char *)t4);
    t19 = (t18 == (unsigned char)2);
    if (t19 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 8360);
    t2 = (32U != 32U);
    if (t2 == 1)
        goto LAB15;

LAB16:    t4 = (t0 + 1992U);
    t6 = *((char **)t4);
    t4 = (t0 + 7124U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t4);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0U + t11);
    t7 = (t0 + 4352);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 32U);
    xsi_driver_first_trans_delta(t7, t12, 32U, 0LL);

LAB13:    goto LAB10;

LAB12:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1352U);
    t6 = *((char **)t1);
    t1 = (t0 + 1992U);
    t7 = *((char **)t1);
    t1 = (t0 + 7124U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0U + t11);
    t13 = (t0 + 4352);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 32U);
    xsi_driver_first_trans_delta(t13, t12, 32U, 0LL);
    goto LAB13;

LAB15:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB16;

}


extern void work_a_2615964831_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2615964831_3212880686_p_0};
	xsi_register_didat("work_a_2615964831_3212880686", "isim/Test_p_isim_beh.exe.sim/work/a_2615964831_3212880686.didat");
	xsi_register_executes(pe);
}
