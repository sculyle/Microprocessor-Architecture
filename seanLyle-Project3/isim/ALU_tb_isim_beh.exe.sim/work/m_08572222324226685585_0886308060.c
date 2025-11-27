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
static const char *ng0 = "/home/ise/Shared/seanLyle-Project3/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};



static void Always_24_0(char *t0)
{
    char t8[16];
    char t10[8];
    char t17[8];
    char t25[8];
    char t41[8];
    char t56[8];
    char t67[8];
    char t75[8];
    char t91[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    int t131;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(97, ng0);

LAB140:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB28:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB27;

LAB9:    xsi_set_current_line(39, ng0);

LAB29:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    xsi_vlog_unsigned_add(t8, 33, t5, 32, t7, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t17, 0, 8);
    t7 = (t17 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t7) = t24;
    memset(t25, 0, 8);
    t26 = (t10 + 4);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t17);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB33;

LAB30:    if (t37 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t25) = 1;

LAB33:    memset(t41, 0, 8);
    t42 = (t25 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t25);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t42) != 0)
        goto LAB36;

LAB37:    t49 = (t41 + 4);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB38;

LAB39:    memcpy(t99, t41, 8);

LAB40:    t130 = (t0 + 2728);
    xsi_vlogvar_assign_value(t130, t99, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t9 = (t5 + 4);
    t18 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB55;

LAB52:    if (t22 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t10) = 1;

LAB55:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t18 = (t0 + 2408);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 1);
    goto LAB27;

LAB11:    xsi_set_current_line(47, ng0);

LAB56:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    xsi_vlog_unsigned_minus(t8, 33, t5, 32, t7, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t7) == 0)
        goto LAB57;

LAB59:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;

LAB60:    t18 = (t10 + 4);
    t26 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t19 = (~(t16));
    *((unsigned int *)t10) = t19;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB62;

LAB61:    t24 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t24 & 1U);
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 1U);
    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t9 = (t5 + 4);
    t18 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB66;

LAB63:    if (t22 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t10) = 1;

LAB66:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t17, 0, 8);
    t7 = (t17 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t7) = t24;
    memset(t25, 0, 8);
    t26 = (t10 + 4);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t17);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB68;

LAB67:    if (t37 != 0)
        goto LAB69;

LAB70:    memset(t41, 0, 8);
    t42 = (t25 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t25);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t42) != 0)
        goto LAB73;

LAB74:    t49 = (t41 + 4);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB75;

LAB76:    memcpy(t99, t41, 8);

LAB77:    t130 = (t0 + 2728);
    xsi_vlogvar_assign_value(t130, t99, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t18 = (t0 + 2408);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 1);
    goto LAB27;

LAB13:    xsi_set_current_line(55, ng0);

LAB89:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t18 = (t10 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t19 = *((unsigned int *)t18);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB90;

LAB91:
LAB92:    t40 = (t0 + 2088);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t9 = (t5 + 4);
    t18 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB96;

LAB93:    if (t22 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t10) = 1;

LAB96:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    goto LAB27;

LAB15:    xsi_set_current_line(61, ng0);

LAB97:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t18 = (t10 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t19 = *((unsigned int *)t18);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB98;

LAB99:
LAB100:    t40 = (t0 + 2088);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t9 = (t5 + 4);
    t18 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB104;

LAB101:    if (t22 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t10) = 1;

LAB104:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    goto LAB27;

LAB17:    xsi_set_current_line(67, ng0);

LAB105:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t18 = (t10 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t19 = *((unsigned int *)t18);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB106;

LAB107:
LAB108:    t26 = (t0 + 2088);
    xsi_vlogvar_assign_value(t26, t10, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t9 = (t5 + 4);
    t18 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB112;

LAB109:    if (t22 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t10) = 1;

LAB112:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    goto LAB27;

LAB19:    xsi_set_current_line(73, ng0);

LAB113:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB115;

LAB114:    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 4294967295U);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t9 = (t5 + 4);
    t18 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB119;

LAB116:    if (t22 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t10) = 1;

LAB119:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    goto LAB27;

LAB21:    xsi_set_current_line(79, ng0);

LAB120:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 31U);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_lshift(t17, 32, t5, 32, t10, 5);
    t18 = (t0 + 2088);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 31U);
    t7 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB122;

LAB121:    t18 = (t7 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB122;

LAB125:    if (*((unsigned int *)t10) > *((unsigned int *)t7))
        goto LAB123;

LAB124:    t27 = (t17 + 4);
    t19 = *((unsigned int *)t27);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(84, ng0);

LAB130:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB128:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t9 = (t5 + 4);
    t18 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB134;

LAB131:    if (t22 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t10) = 1;

LAB134:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    goto LAB27;

LAB23:    xsi_set_current_line(91, ng0);

LAB135:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 31U);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_rshift(t17, 32, t5, 32, t10, 5);
    t18 = (t0 + 2088);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t9 = (t5 + 4);
    t18 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB139;

LAB136:    if (t22 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t10) = 1;

LAB139:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 1);
    goto LAB27;

LAB32:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t41) = 1;
    goto LAB37;

LAB36:    t48 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB37;

LAB38:    t53 = (t0 + 2088);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    t57 = (t56 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 31);
    t61 = (t60 & 1);
    *((unsigned int *)t56) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 >> 31);
    t64 = (t63 & 1);
    *((unsigned int *)t57) = t64;
    t65 = (t0 + 1048U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t65 = (t67 + 4);
    t68 = (t66 + 4);
    t69 = *((unsigned int *)t66);
    t70 = (t69 >> 31);
    t71 = (t70 & 1);
    *((unsigned int *)t67) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 31);
    t74 = (t73 & 1);
    *((unsigned int *)t65) = t74;
    memset(t75, 0, 8);
    t76 = (t56 + 4);
    t77 = (t67 + 4);
    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t67);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = (t80 | t83);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t77);
    t87 = (t85 | t86);
    t88 = (~(t87));
    t89 = (t84 & t88);
    if (t89 != 0)
        goto LAB42;

LAB41:    if (t87 != 0)
        goto LAB43;

LAB44:    memset(t91, 0, 8);
    t92 = (t75 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t75);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t92) != 0)
        goto LAB47;

LAB48:    t100 = *((unsigned int *)t41);
    t101 = *((unsigned int *)t91);
    t102 = (t100 & t101);
    *((unsigned int *)t99) = t102;
    t103 = (t41 + 4);
    t104 = (t91 + 4);
    t105 = (t99 + 4);
    t106 = *((unsigned int *)t103);
    t107 = *((unsigned int *)t104);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 != 0);
    if (t110 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB42:    *((unsigned int *)t75) = 1;
    goto LAB44;

LAB43:    t90 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t91) = 1;
    goto LAB48;

LAB47:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB48;

LAB49:    t111 = *((unsigned int *)t99);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t99) = (t111 | t112);
    t113 = (t41 + 4);
    t114 = (t91 + 4);
    t115 = *((unsigned int *)t41);
    t116 = (~(t115));
    t117 = *((unsigned int *)t113);
    t118 = (~(t117));
    t119 = *((unsigned int *)t91);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (~(t121));
    t6 = (t116 & t118);
    t123 = (t120 & t122);
    t124 = (~(t6));
    t125 = (~(t123));
    t126 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t126 & t124);
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t125);
    t128 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t128 & t124);
    t129 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t129 & t125);
    goto LAB51;

LAB54:    t26 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB55;

LAB57:    *((unsigned int *)t10) = 1;
    goto LAB60;

LAB62:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t20 | t21);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t26);
    *((unsigned int *)t18) = (t22 | t23);
    goto LAB61;

LAB65:    t26 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB66;

LAB68:    *((unsigned int *)t25) = 1;
    goto LAB70;

LAB69:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t41) = 1;
    goto LAB74;

LAB73:    t48 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB74;

LAB75:    t53 = (t0 + 2088);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    t57 = (t56 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 31);
    t61 = (t60 & 1);
    *((unsigned int *)t56) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 >> 31);
    t64 = (t63 & 1);
    *((unsigned int *)t57) = t64;
    t65 = (t0 + 1048U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t65 = (t67 + 4);
    t68 = (t66 + 4);
    t69 = *((unsigned int *)t66);
    t70 = (t69 >> 31);
    t71 = (t70 & 1);
    *((unsigned int *)t67) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 31);
    t74 = (t73 & 1);
    *((unsigned int *)t65) = t74;
    memset(t75, 0, 8);
    t76 = (t56 + 4);
    t77 = (t67 + 4);
    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t67);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = (t80 | t83);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t77);
    t87 = (t85 | t86);
    t88 = (~(t87));
    t89 = (t84 & t88);
    if (t89 != 0)
        goto LAB79;

LAB78:    if (t87 != 0)
        goto LAB80;

LAB81:    memset(t91, 0, 8);
    t92 = (t75 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t75);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t92) != 0)
        goto LAB84;

LAB85:    t100 = *((unsigned int *)t41);
    t101 = *((unsigned int *)t91);
    t102 = (t100 & t101);
    *((unsigned int *)t99) = t102;
    t103 = (t41 + 4);
    t104 = (t91 + 4);
    t105 = (t99 + 4);
    t106 = *((unsigned int *)t103);
    t107 = *((unsigned int *)t104);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 != 0);
    if (t110 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB77;

LAB79:    *((unsigned int *)t75) = 1;
    goto LAB81;

LAB80:    t90 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t91) = 1;
    goto LAB85;

LAB84:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB85;

LAB86:    t111 = *((unsigned int *)t99);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t99) = (t111 | t112);
    t113 = (t41 + 4);
    t114 = (t91 + 4);
    t115 = *((unsigned int *)t41);
    t116 = (~(t115));
    t117 = *((unsigned int *)t113);
    t118 = (~(t117));
    t119 = *((unsigned int *)t91);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (~(t121));
    t6 = (t116 & t118);
    t123 = (t120 & t122);
    t124 = (~(t6));
    t125 = (~(t123));
    t126 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t126 & t124);
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t125);
    t128 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t128 & t124);
    t129 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t129 & t125);
    goto LAB88;

LAB90:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t10) = (t21 | t22);
    t26 = (t5 + 4);
    t27 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (~(t32));
    t123 = (t24 & t29);
    t131 = (t31 & t33);
    t34 = (~(t123));
    t35 = (~(t131));
    t36 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t36 & t34);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & t35);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    goto LAB92;

LAB95:    t26 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB96;

LAB98:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t10) = (t21 | t22);
    t26 = (t5 + 4);
    t27 = (t7 + 4);
    t23 = *((unsigned int *)t26);
    t24 = (~(t23));
    t28 = *((unsigned int *)t5);
    t123 = (t28 & t24);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t131 = (t31 & t30);
    t32 = (~(t123));
    t33 = (~(t131));
    t34 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t34 & t32);
    t35 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t35 & t33);
    goto LAB100;

LAB103:    t26 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB104;

LAB106:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB108;

LAB111:    t26 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB112;

LAB115:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB114;

LAB118:    t26 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB119;

LAB122:    t26 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB124;

LAB123:    *((unsigned int *)t17) = 1;
    goto LAB124;

LAB126:    xsi_set_current_line(82, ng0);

LAB129:    xsi_set_current_line(83, ng0);
    t40 = (t0 + 1048U);
    t42 = *((char **)t40);
    memset(t25, 0, 8);
    t40 = (t25 + 4);
    t48 = (t42 + 4);
    t24 = *((unsigned int *)t42);
    t28 = (t24 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t48);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t40) = t32;
    t49 = (t0 + 2568);
    xsi_vlogvar_assign_value(t49, t25, 0, 0, 1);
    goto LAB128;

LAB133:    t26 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB134;

LAB138:    t26 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB139;

}


extern void work_m_08572222324226685585_0886308060_init()
{
	static char *pe[] = {(void *)Always_24_0};
	xsi_register_didat("work_m_08572222324226685585_0886308060", "isim/ALU_tb_isim_beh.exe.sim/work/m_08572222324226685585_0886308060.didat");
	xsi_register_executes(pe);
}
