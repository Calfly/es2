// animate.c

int cast_spell(object me, object target)
{
	if( me->is_fighting() )	return notify_fail("������ս���У�\n");
	
	if( !target || !target->is_corpse() ) return notify_fail("��Ҫ������һ��ʬ�壿\n");
	
	if( (int)me->query("mana") < 50 ) return notify_fail("��ķ��������ˣ�\n");

	message_vision(
		"$N�������ϵ�$n�૵����˼������$n�鴤�˼��¾�վ��������\n", me, target);

	target->animate(me, (int)me->query_skill("spells") * 3 + 30);

	me->add("mana", -50);
	me->receive_damage("sen", 30);

	return 1;
}