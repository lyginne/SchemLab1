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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/nik/SchemLab1/control_unit.v";
static unsigned int ng1[] = {4294967295U, 4294967295U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {35U, 0U};
static unsigned int ng4[] = {43U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {13U, 0U};
static unsigned int ng10[] = {14U, 0U};
static unsigned int ng11[] = {10U, 0U};
static int ng12[] = {1, 0};
static unsigned int ng13[] = {1U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {2U, 0U};



static void Always_59_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t38[8];
    char t68[8];
    char t84[8];
    char t114[8];
    char t130[8];
    char t160[8];
    char t176[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;

LAB0:    t1 = (t0 + 7896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 8464);
    *((int *)t2) = 1;
    t3 = (t0 + 7928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4584);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t0 + 3544U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t20);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB13;

LAB10:    if (t34 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t22) = 1;

LAB13:    t39 = *((unsigned int *)t6);
    t40 = *((unsigned int *)t22);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = (t6 + 4);
    t43 = (t22 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB14;

LAB15:
LAB16:    t66 = (t0 + 6504);
    xsi_vlogvar_assign_value(t66, t38, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB20;

LAB17:    if (t16 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t6) = 1;

LAB20:    t20 = (t0 + 6664);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB24;

LAB21:    if (t16 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB24:    t20 = (t0 + 6824);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB28;

LAB25:    if (t16 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t6) = 1;

LAB28:    t20 = (t0 + 3544U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng8)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t20);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB32;

LAB29:    if (t34 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t22) = 1;

LAB32:    t39 = *((unsigned int *)t6);
    t40 = *((unsigned int *)t22);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = (t6 + 4);
    t43 = (t22 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB33;

LAB34:
LAB35:    t66 = (t0 + 3544U);
    t67 = *((char **)t66);
    t66 = ((char*)((ng9)));
    memset(t68, 0, 8);
    t69 = (t67 + 4);
    t70 = (t66 + 4);
    t71 = *((unsigned int *)t67);
    t72 = *((unsigned int *)t66);
    t73 = (t71 ^ t72);
    t74 = *((unsigned int *)t69);
    t75 = *((unsigned int *)t70);
    t76 = (t74 ^ t75);
    t77 = (t73 | t76);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t70);
    t80 = (t78 | t79);
    t81 = (~(t80));
    t82 = (t77 & t81);
    if (t82 != 0)
        goto LAB39;

LAB36:    if (t80 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t68) = 1;

LAB39:    t85 = *((unsigned int *)t38);
    t86 = *((unsigned int *)t68);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = (t38 + 4);
    t89 = (t68 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB40;

LAB41:
LAB42:    t112 = (t0 + 3544U);
    t113 = *((char **)t112);
    t112 = ((char*)((ng10)));
    memset(t114, 0, 8);
    t115 = (t113 + 4);
    t116 = (t112 + 4);
    t117 = *((unsigned int *)t113);
    t118 = *((unsigned int *)t112);
    t119 = (t117 ^ t118);
    t120 = *((unsigned int *)t115);
    t121 = *((unsigned int *)t116);
    t122 = (t120 ^ t121);
    t123 = (t119 | t122);
    t124 = *((unsigned int *)t115);
    t125 = *((unsigned int *)t116);
    t126 = (t124 | t125);
    t127 = (~(t126));
    t128 = (t123 & t127);
    if (t128 != 0)
        goto LAB46;

LAB43:    if (t126 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t114) = 1;

LAB46:    t131 = *((unsigned int *)t84);
    t132 = *((unsigned int *)t114);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = (t84 + 4);
    t135 = (t114 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB47;

LAB48:
LAB49:    t158 = (t0 + 3544U);
    t159 = *((char **)t158);
    t158 = ((char*)((ng11)));
    memset(t160, 0, 8);
    t161 = (t159 + 4);
    t162 = (t158 + 4);
    t163 = *((unsigned int *)t159);
    t164 = *((unsigned int *)t158);
    t165 = (t163 ^ t164);
    t166 = *((unsigned int *)t161);
    t167 = *((unsigned int *)t162);
    t168 = (t166 ^ t167);
    t169 = (t165 | t168);
    t170 = *((unsigned int *)t161);
    t171 = *((unsigned int *)t162);
    t172 = (t170 | t171);
    t173 = (~(t172));
    t174 = (t169 & t173);
    if (t174 != 0)
        goto LAB53;

LAB50:    if (t172 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t160) = 1;

LAB53:    t177 = *((unsigned int *)t130);
    t178 = *((unsigned int *)t160);
    t179 = (t177 | t178);
    *((unsigned int *)t176) = t179;
    t180 = (t130 + 4);
    t181 = (t160 + 4);
    t182 = (t176 + 4);
    t183 = *((unsigned int *)t180);
    t184 = *((unsigned int *)t181);
    t185 = (t183 | t184);
    *((unsigned int *)t182) = t185;
    t186 = *((unsigned int *)t182);
    t187 = (t186 != 0);
    if (t187 == 1)
        goto LAB54;

LAB55:
LAB56:    t204 = (t0 + 6984);
    xsi_vlogvar_assign_value(t204, t176, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB57:    t5 = (t0 + 1968);
    t19 = *((char **)t5);
    t57 = xsi_vlog_unsigned_case_compare(t4, 3, t19, 32);
    if (t57 == 1)
        goto LAB58;

LAB59:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t57 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t57 == 1)
        goto LAB60;

LAB61:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t57 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t57 == 1)
        goto LAB62;

LAB63:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t57 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t57 == 1)
        goto LAB64;

LAB65:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t57 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t57 == 1)
        goto LAB66;

LAB67:
LAB69:
LAB68:    xsi_set_current_line(225, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 6344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB70:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB12:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB13;

LAB14:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t6 + 4);
    t53 = (t22 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t6);
    t57 = (t56 & t55);
    t58 = *((unsigned int *)t53);
    t59 = (~(t58));
    t60 = *((unsigned int *)t22);
    t61 = (t60 & t59);
    t62 = (~(t57));
    t63 = (~(t61));
    t64 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t64 & t62);
    t65 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t65 & t63);
    goto LAB16;

LAB19:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB23:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB24;

LAB27:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB28;

LAB31:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB32;

LAB33:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t6 + 4);
    t53 = (t22 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t6);
    t57 = (t56 & t55);
    t58 = *((unsigned int *)t53);
    t59 = (~(t58));
    t60 = *((unsigned int *)t22);
    t61 = (t60 & t59);
    t62 = (~(t57));
    t63 = (~(t61));
    t64 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t64 & t62);
    t65 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t65 & t63);
    goto LAB35;

LAB38:    t83 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB39;

LAB40:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t38 + 4);
    t99 = (t68 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (~(t100));
    t102 = *((unsigned int *)t38);
    t103 = (t102 & t101);
    t104 = *((unsigned int *)t99);
    t105 = (~(t104));
    t106 = *((unsigned int *)t68);
    t107 = (t106 & t105);
    t108 = (~(t103));
    t109 = (~(t107));
    t110 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t110 & t108);
    t111 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t111 & t109);
    goto LAB42;

LAB45:    t129 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB46;

LAB47:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t84 + 4);
    t145 = (t114 + 4);
    t146 = *((unsigned int *)t144);
    t147 = (~(t146));
    t148 = *((unsigned int *)t84);
    t149 = (t148 & t147);
    t150 = *((unsigned int *)t145);
    t151 = (~(t150));
    t152 = *((unsigned int *)t114);
    t153 = (t152 & t151);
    t154 = (~(t149));
    t155 = (~(t153));
    t156 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t156 & t154);
    t157 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t157 & t155);
    goto LAB49;

LAB52:    t175 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB53;

LAB54:    t188 = *((unsigned int *)t176);
    t189 = *((unsigned int *)t182);
    *((unsigned int *)t176) = (t188 | t189);
    t190 = (t130 + 4);
    t191 = (t160 + 4);
    t192 = *((unsigned int *)t190);
    t193 = (~(t192));
    t194 = *((unsigned int *)t130);
    t195 = (t194 & t193);
    t196 = *((unsigned int *)t191);
    t197 = (~(t196));
    t198 = *((unsigned int *)t160);
    t199 = (t198 & t197);
    t200 = (~(t195));
    t201 = (~(t199));
    t202 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t202 & t200);
    t203 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t203 & t201);
    goto LAB56;

LAB58:    xsi_set_current_line(92, ng0);

LAB71:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 2104);
    t20 = *((char **)t5);
    t5 = (t0 + 6344);
    xsi_vlogvar_assign_value(t5, t20, 0, 0, 3);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB70;

LAB60:    xsi_set_current_line(108, ng0);

LAB72:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2240);
    t5 = *((char **)t2);
    t2 = (t0 + 6344);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 3);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB70;

LAB62:    xsi_set_current_line(119, ng0);

LAB73:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 6504);
    t5 = (t2 + 56U);
    t19 = *((char **)t5);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t19);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB81;

LAB78:    if (t16 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t6) = 1;

LAB81:    t21 = (t6 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB89;

LAB86:    if (t16 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t6) = 1;

LAB89:    t21 = (t6 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 6824);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 6984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 6344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB104:
LAB100:
LAB96:
LAB92:
LAB84:
LAB76:    goto LAB70;

LAB64:    xsi_set_current_line(178, ng0);

LAB106:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 6824);
    t5 = (t2 + 56U);
    t19 = *((char **)t5);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t19);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 6984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(195, ng0);

LAB115:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB119;

LAB116:    if (t16 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t6) = 1;

LAB119:    t21 = (t6 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(203, ng0);

LAB124:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 6344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB122:
LAB113:
LAB109:    goto LAB70;

LAB66:    xsi_set_current_line(214, ng0);

LAB125:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 1968);
    t5 = *((char **)t2);
    t2 = (t0 + 6344);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 3);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB70;

LAB74:    xsi_set_current_line(121, ng0);

LAB77:    xsi_set_current_line(122, ng0);
    t21 = (t0 + 2376);
    t23 = *((char **)t21);
    t21 = (t0 + 6344);
    xsi_vlogvar_assign_value(t21, t23, 0, 0, 3);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB76;

LAB80:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(129, ng0);

LAB85:    xsi_set_current_line(130, ng0);
    t23 = (t0 + 1968);
    t24 = *((char **)t23);
    t23 = (t0 + 6344);
    xsi_vlogvar_assign_value(t23, t24, 0, 0, 3);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB84;

LAB88:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(136, ng0);

LAB93:    xsi_set_current_line(137, ng0);
    t23 = (t0 + 1968);
    t24 = *((char **)t23);
    t23 = (t0 + 6344);
    xsi_vlogvar_assign_value(t23, t24, 0, 0, 3);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB92;

LAB94:    xsi_set_current_line(147, ng0);

LAB97:    xsi_set_current_line(148, ng0);
    t20 = (t0 + 1968);
    t21 = *((char **)t20);
    t20 = (t0 + 6344);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 3);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB96;

LAB98:    xsi_set_current_line(158, ng0);

LAB101:    xsi_set_current_line(159, ng0);
    t20 = (t0 + 2376);
    t21 = *((char **)t20);
    t20 = (t0 + 6344);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 3);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB100;

LAB102:    xsi_set_current_line(166, ng0);

LAB105:    xsi_set_current_line(167, ng0);
    t20 = (t0 + 2376);
    t21 = *((char **)t20);
    t20 = (t0 + 6344);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 3);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB104;

LAB107:    xsi_set_current_line(180, ng0);

LAB110:    xsi_set_current_line(181, ng0);
    t21 = (t0 + 1968);
    t23 = *((char **)t21);
    t21 = (t0 + 6344);
    xsi_vlogvar_assign_value(t21, t23, 0, 0, 3);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB109;

LAB111:    xsi_set_current_line(188, ng0);

LAB114:    xsi_set_current_line(189, ng0);
    t20 = (t0 + 1968);
    t21 = *((char **)t20);
    t20 = (t0 + 6344);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 3);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB113;

LAB118:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(197, ng0);

LAB123:    xsi_set_current_line(198, ng0);
    t23 = (t0 + 2512);
    t24 = *((char **)t23);
    t23 = (t0 + 6344);
    xsi_vlogvar_assign_value(t23, t24, 0, 0, 3);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB122;

}

static void Always_232_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 8144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 8176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(233, ng0);

LAB5:    xsi_set_current_line(234, ng0);
    t4 = (t0 + 3384U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 6344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6184);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(235, ng0);
    t11 = (t0 + 1968);
    t12 = *((char **)t11);
    t11 = (t0 + 6184);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    goto LAB8;

}


extern void work_m_10094513328295169115_1351276808_init()
{
	static char *pe[] = {(void *)Always_59_0,(void *)Always_232_1};
	xsi_register_didat("work_m_10094513328295169115_1351276808", "isim/mips_testbench_isim_beh.exe.sim/work/m_10094513328295169115_1351276808.didat");
	xsi_register_executes(pe);
}
