// taoism.c

inherit SKILL;

void create() { seteuid(getuid()); }

string type() { return "knowledge"; }

int valid_skill_usage(string usage) { return usage=="magic"; }

int valid_learn(object me) 
{
	if( (int)me->query("bellicosity") > 100 )
		return notify_fail("���ɱ��̫�أ��޷�������ʦ������\n");
	return 1;
}

int practice_skill(object me)
{	
	return notify_fail("�����༼�ܱ�����ѧ�Ļ��Ǵ�ʵս�л�ȡ���顣\n");
}
