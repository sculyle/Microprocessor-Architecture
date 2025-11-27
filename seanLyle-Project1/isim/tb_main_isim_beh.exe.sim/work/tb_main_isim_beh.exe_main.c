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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_09546585002413695719_1823072108_init();
    work_m_17131601198345871914_3823346769_init();
    work_m_13009389851590983868_2852239091_init();
    work_m_09262876724494253882_0286164271_init();
    work_m_12864176709358578124_3163762309_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_12864176709358578124_3163762309");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
