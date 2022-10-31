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
static const char *ng0 = "D:/vhdl_github_2/vhdl_github_2/registers/register_file.vhd";
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
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2112U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t3 = (t0 + 1672U);
    t5 = *((char **)t3);
    t3 = (t0 + 6744U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t3);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t6);
    t9 = (64U * t8);
    t10 = (0 + t9);
    t11 = (t4 + t10);
    t12 = (t0 + 4032);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 16U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t1 = (t0 + 6760U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t6);
    t9 = (64U * t8);
    t10 = (0 + t9);
    t5 = (t3 + t10);
    t11 = (t0 + 4096);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 16U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t17 = (t2 == (unsigned char)3);
    if (t17 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t18 = *((unsigned char *)t4);
    t19 = (t18 == (unsigned char)2);
    if (t19 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7887);
    t2 = (64U != 16U);
    if (t2 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 1992U);
    t5 = *((char **)t4);
    t4 = (t0 + 6776U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t4);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (64U * t8);
    t10 = (0U + t9);
    t11 = (t0 + 4160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 64U);
    xsi_driver_first_trans_delta(t11, t10, 64U, 0LL);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 1992U);
    t11 = *((char **)t1);
    t1 = (t0 + 6776U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t11, t1);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (64U * t8);
    t10 = (0U + t9);
    t12 = (t0 + 4160);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 64U);
    xsi_driver_first_trans_delta(t12, t10, 64U, 0LL);
    goto LAB9;

LAB11:    xsi_size_not_matching(64U, 16U, 0);
    goto LAB12;

}


extern void work_a_2615964831_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2615964831_3212880686_p_0};
	xsi_register_didat("work_a_2615964831_3212880686", "isim/test_register_file_isim_beh.exe.sim/work/a_2615964831_3212880686.didat");
	xsi_register_executes(pe);
}
