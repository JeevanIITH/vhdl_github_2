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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_1242562249;
char *IEEE_P_2592010699;
char *IEEE_P_3620187407;
char *STD_STANDARD;
char *IEEE_P_3499444699;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_1436514732_3708392848_init();
    work_a_0637058416_1316803736_init();
    work_a_4088829756_3212880686_init();
    work_a_4062542468_3212880686_init();
    work_a_0888681323_3212880686_init();
    work_a_1843507802_3212880686_init();
    work_a_2820838970_3212880686_init();
    work_a_0312434395_3212880686_init();
    work_a_4288990908_3212880686_init();
    work_a_2841792138_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_3853510154_3212880686_init();
    work_a_2615964831_3212880686_init();
    work_a_3044219816_3212880686_init();
    work_a_3392787015_3212880686_init();
    work_a_3657043965_3212880686_init();
    work_a_0955078297_3212880686_init();
    work_a_1640669797_3212880686_init();
    work_a_1349299118_2372691052_init();


    xsi_register_tops("work_a_1349299118_2372691052");

    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");

    return xsi_run_simulation(argc, argv);

}
