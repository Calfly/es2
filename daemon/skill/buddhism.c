// buddhism.c

inherit SKILL;

void create() { seteuid(getuid()); }

string type() { return "knowledge"; }

int valid_learn(object me) 
{
	if( (int)me->query("bellicosity") > 100 )
		return notify_fail("���ɱ��̫�أ��޷�������˷𷨡�\n");
	return 1;
}

