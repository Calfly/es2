// Room: /d/snow/inneryard.c

inherit ROOM;

void create()
{
	set("short", "�쾮");
	set("long", @LONG
�����Ǵ�������е��쾮�������߿��Իص����������������鷿��
�ϱ����д����˵��᷿������һ������ͨ�������Ժ���쾮����������
���滨��ݣ���������һ��ʯ��(pillar)�������ƺ������֡�
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "south" : "/d/snow/guestroom",
  "north" : "/d/snow/nyard",
  "west" : "/d/snow/schoolhall",
  "east" : "/d/snow/innerhall",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "pillar" : "ʯ���Ͽ���������ָ�졢������������â���ԡ�������硣
",
]));
	set("no_clean_up", 0);
	set("outdoors", "snow");

	setup();
	replace_program(ROOM);
}
