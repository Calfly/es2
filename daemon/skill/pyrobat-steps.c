// pyrobat-steps.c

inherit SKILL;

/* string *dodge_msg = ({
	"����$n����Ʈ��������һ�ݣ����ѱܿ���\n",
	"$n������ת��ٿ����һ��Ų�������ߣ��ܹ�����һ�С�\n",
	"����$n����һ�ã�$N��һ�����˸��ա�\n",
	"ȴ��$n�㲻��أ����Դܿ����ߣ����˿�ȥ��\n",
	"$n����΢�Σ��о����յرܿ���$N��һ�С�\n"
});
*/

string *dodge_msg = ({
	"����$p����һ�ã�ʹ���������ӽ�����$N��һ�����˸��ա�\n",
	"$p����΢�Σ�ʹ�����������š����о����յرܿ���$N��һ�С�\n",
	"$p������ת��һʽ��������ҡ���ٿ����һ��Ų�������ߣ��ܹ�����һ�С�\n",
	"ȴ��$p�㲻��أ�һ�С�ҹ�����������Դܿ����ߣ����˿�ȥ��\n",
	"ֻ��$pһ�С�����ҷ�ա����������ϰ������߸ߣ����˹�ȥ��\n"
});
int valid_enable(string usage)
{
	return (usage=="dodge") || (usage=="move");
}

int valid_learn(object me)
{
	return 1;
}

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 30 )
		return notify_fail("�������̫���ˣ���������������\n");
	me->receive_damage("kee", 30);
	return 1;
}
