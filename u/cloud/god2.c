// tea_corridor.c

#include <room.h>

inherit ROOM;

void create()
{
	set("short", "��Ժǰ��");
	set("long", @LONG
    ������������Ժ��ǰ�����򵥵ĳ�����͸��һ����󲻷������ɡ�
һ�ź������İ������ڷ��ڴ������룬��ֻ��ڵ�̫ʦ������������
�ӵ����ԡ�
LONG
        );

        set("exits", ([
                "east"          : "/u/cloud/god1",
	]) );

	set("objects", ([
	"/u/cloud/npc/god" : 1,]) );

        setup();

}


