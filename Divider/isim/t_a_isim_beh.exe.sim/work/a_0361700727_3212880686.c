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
static const char *ng0 = "J:/vhdl_github_2/vhdl_github_2/Divider/a.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0361700727_3212880686_p_0(char *t0)
{
    char t22[16];
    char t24[16];
    char t30[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 992U);
    t1 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB29;

LAB30:
LAB3:    t2 = (t0 + 4152);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t9 = (3 - 2);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t4 = (t8 + t11);
    t12 = (t0 + 1352U);
    t13 = *((char **)t12);
    t12 = (t0 + 2728U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 3);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t15);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t12 = (t13 + t19);
    t20 = *((unsigned char *)t12);
    t23 = ((IEEE_P_2592010699) + 4024);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 2;
    t26 = (t25 + 4U);
    *((int *)t26) = 0;
    t26 = (t25 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - 2);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t21 = xsi_base_array_concat(t21, t22, t23, (char)97, t4, t24, (char)99, t20, (char)101);
    t26 = (t0 + 2848U);
    t29 = *((char **)t26);
    t26 = (t29 + 0);
    t28 = (3U + 1U);
    memcpy(t26, t21, t28);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2848U);
    t4 = *((char **)t2);
    t2 = (t0 + 6600U);
    t5 = (t0 + 1192U);
    t8 = *((char **)t5);
    t5 = (t0 + 6488U);
    t1 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t4, t2, t8, t5);
    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2848U);
    t4 = *((char **)t2);
    t9 = (3 - 3);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t5 = (t24 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 3;
    t8 = (t5 + 4U);
    *((int *)t8) = 0;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t15 = (0 - 3);
    t17 = (t15 * -1);
    t17 = (t17 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t17;
    t8 = (t0 + 6664);
    t13 = (t30 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 3;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t17;
    t14 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t22, t2, t24, t8, t30);
    t21 = (t22 + 12U);
    t17 = *((unsigned int *)t21);
    t18 = (1U * t17);
    t1 = (4U != t18);
    if (t1 == 1)
        goto LAB20;

LAB21:    t23 = (t0 + 4232);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t29 = (t26 + 56U);
    t32 = *((char **)t29);
    memcpy(t32, t14, 4U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t9 = (3 - 2);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t8 = ((IEEE_P_2592010699) + 4024);
    t12 = (t24 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 2;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t15 = (0 - 2);
    t17 = (t15 * -1);
    t17 = (t17 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t17;
    t5 = xsi_base_array_concat(t5, t22, t8, (char)97, t2, t24, (char)99, (unsigned char)2, (char)101);
    t17 = (3U + 1U);
    t1 = (4U != t17);
    if (t1 == 1)
        goto LAB22;

LAB23:    t13 = (t0 + 4296);
    t14 = (t13 + 56U);
    t21 = *((char **)t14);
    t23 = (t21 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t5, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t16 = (t15 - 1);
    t2 = (t0 + 2728U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t16 = (t15 - 1);
    t2 = (t0 + 2608U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t1 = (t15 < 0);
    if (t1 != 0)
        goto LAB24;

LAB26:
LAB25:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(61, ng0);
    t12 = (t0 + 2848U);
    t13 = *((char **)t12);
    t9 = (3 - 3);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t12 = (t13 + t11);
    t14 = (t24 + 0U);
    t21 = (t14 + 0U);
    *((int *)t21) = 3;
    t21 = (t14 + 4U);
    *((int *)t21) = 0;
    t21 = (t14 + 8U);
    *((int *)t21) = -1;
    t15 = (0 - 3);
    t17 = (t15 * -1);
    t17 = (t17 + 1);
    t21 = (t14 + 12U);
    *((unsigned int *)t21) = t17;
    t21 = (t0 + 1192U);
    t23 = *((char **)t21);
    t17 = (3 - 3);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t21 = (t23 + t19);
    t25 = (t30 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 3;
    t26 = (t25 + 4U);
    *((int *)t26) = 0;
    t26 = (t25 + 8U);
    *((int *)t26) = -1;
    t16 = (0 - 3);
    t28 = (t16 * -1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t26 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t22, t12, t24, t21, t30);
    t29 = (t22 + 12U);
    t28 = *((unsigned int *)t29);
    t31 = (1U * t28);
    t3 = (4U != t31);
    if (t3 == 1)
        goto LAB11;

LAB12:    t32 = (t0 + 4232);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t26, 4U);
    xsi_driver_first_trans_fast(t32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t9 = (3 - 2);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t8 = ((IEEE_P_2592010699) + 4024);
    t12 = (t24 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 2;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t15 = (0 - 2);
    t17 = (t15 * -1);
    t17 = (t17 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t17;
    t5 = xsi_base_array_concat(t5, t22, t8, (char)97, t2, t24, (char)99, (unsigned char)3, (char)101);
    t17 = (3U + 1U);
    t1 = (4U != t17);
    if (t1 == 1)
        goto LAB13;

LAB14:    t13 = (t0 + 4296);
    t14 = (t13 + 56U);
    t21 = *((char **)t14);
    t23 = (t21 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t5, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t16 = (t15 - 1);
    t2 = (t0 + 2728U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t16 = (t15 - 1);
    t2 = (t0 + 2608U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t1 = (t15 < 0);
    if (t1 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB9;

LAB11:    xsi_size_not_matching(4U, t31, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(4U, t17, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t9 = (3 - 2);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t5 + t11);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t24 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 2;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t16 = (0 - 2);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t17;
    t8 = xsi_base_array_concat(t8, t22, t12, (char)97, t2, t24, (char)99, (unsigned char)3, (char)101);
    t17 = (3U + 1U);
    t3 = (4U != t17);
    if (t3 == 1)
        goto LAB18;

LAB19:    t14 = (t0 + 4360);
    t21 = (t14 + 56U);
    t23 = *((char **)t21);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t8, 4U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB16;

LAB18:    xsi_size_not_matching(4U, t17, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(4U, t18, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(4U, t17, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t9 = (3 - 2);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t5 + t11);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t24 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 2;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t16 = (0 - 2);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t17;
    t8 = xsi_base_array_concat(t8, t22, t12, (char)97, t2, t24, (char)99, (unsigned char)2, (char)101);
    t17 = (3U + 1U);
    t3 = (4U != t17);
    if (t3 == 1)
        goto LAB27;

LAB28:    t14 = (t0 + 4360);
    t21 = (t14 + 56U);
    t23 = *((char **)t21);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t8, 4U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB25;

LAB27:    xsi_size_not_matching(4U, t17, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 1992U);
    t5 = *((char **)t4);
    t4 = (t0 + 4424);
    t8 = (t4 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

}


extern void work_a_0361700727_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0361700727_3212880686_p_0};
	xsi_register_didat("work_a_0361700727_3212880686", "isim/t_a_isim_beh.exe.sim/work/a_0361700727_3212880686.didat");
	xsi_register_executes(pe);
}
