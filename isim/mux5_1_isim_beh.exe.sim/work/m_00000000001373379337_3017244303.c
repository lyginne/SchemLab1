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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/studing/schem/lab1_git/muxers.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {4294967295U, 4294967295U};



static void Always_49_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 1184U);
    t8 = *((char **)t7);
    t7 = (t0 + 2384);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1344U);
    t4 = *((char **)t3);
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1664U);
    t4 = *((char **)t3);
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

}


extern void work_m_00000000001373379337_3017244303_init()
{
	static char *pe[] = {(void *)Always_49_0};
	xsi_register_didat("work_m_00000000001373379337_3017244303", "isim/mux5_1_isim_beh.exe.sim/work/m_00000000001373379337_3017244303.didat");
	xsi_register_executes(pe);
}
