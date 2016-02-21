// biaoju.c

#include <room.h>

inherit ROOM;

string look_sign(object me);

void create()
{
        set("short", "�ھ�");
        set("long", @LONG
��������վ���ھ���
    �����ſڵĵط���һ����ľ��ɵ�����(sign)��
LONG
        );
        set("exits", ([
                "north"          : "/u/cloud/eroad2" ]) );

        set("objects", ([
                "/u/cloud/npc/b_header" : 1,
                "/u/cloud/npc/bfighter" : 1,
        ]) );

        set("item_desc", ([
                "sign": (: look_sign :),
        ]) );
	set("valid_startroom", 1);
        setup();

}

string look_sign(object me)
{
        return "����д�����ڡ�\n";
}

