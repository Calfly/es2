// celestial.c
#include <ansi.h>

inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
        if( (int)me->query("bellicosity") < (int)me->query_skill("celestial") 
* 50 )
                return 
notify_fail("���ɱ���������޷�������������а�񹦡�\n");

        return 1;
}

int practice_skill(object me)
{
        return 
notify_fail("��а��ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

string exert_function_file(string func)
{
        return CLASS_D("fighter") + "/celestial/" + func;
}

void skill_improved(object me)
{
        int s;

        s = me->query_skill("celestial", 1);
        if( s%10==9 && (int)me->query("cps") < s/4) {
                tell_object(me, HIW "����������а�񹦣���Ķ��������\n" NOR);
                me->add("cps", 2);
        }
}
