// wu-shun.c
// С���๦
inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
	if( (int)me->query_skill("literate") < (int)me->query_skill("wu-shun") )
		return notify_fail("�����ѧ�����������޷�����С���๦�����衣\n");

	return 1;
}

int practice_skill(object me)
{
	return notify_fail("С���๦ֻ����ѧ�Ī����Ǵ�����(exert)�����������ȡ�\n");
}

//string exert_function_file(string func)
//{
//	return CLASS_D("xiaoyao") + "/wu-shun/" + func;
//}

