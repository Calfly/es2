// southdoor.c
#include <room.h>

inherit ROOM;

string look_notice(object me);

void create()
{
        set("short", "��ʦ����");
        set("long", @LONG
���Ǿ�ʦ�����š��ߴ�ĳ������ϡ���ʦ���š��������ָ���
���ۡ���ǽ�����ż��ŹټҲ���(notice)���������Ǿ�ʦ�ļ�����
��Ѻ��һЩҪ�����������Ĺٱ���Ҳ�䱸ɭ�ϡ��ϱ��ǳ��⣬��
ʱ�������������Ͽ��ľ��ӡ����߾��Ǿ�ʦ��һ���ƺ���̵ĵط���
LONG
        );

        set("item_desc", ([
                "notice": (: look_notice :),
                "door": (: look_door, "out" :),
        ]) );

        set("exits", ([
//                "out"          : __DIR__"ssoad1",
                "north"          : __DIR__"street17" ]) );

        set("objects", ([
                __DIR__"npc/guard" : 3 ,]) );  

        create_door("out", "����", "enter");
        setup();
}

string look_notice(object me)
{
       if( wizardp(me) )
                return "��ʾ��д��������׽���������̩��\n";
        else
                return "��ʾ��д�������������ѡ��\n";
}

int valid_leave(object me,string dir)
{
        if ( dir=="out" &&
                ( !(string) me->query("marks/��ʦ")
                || !(string) me->query("marks/����") ) ) {
                tell_object (me, "��ʦ�سǱ�˵����û�йٸ�ͨ��κ��˲��ܳ��뾩ʦ��\n");
                return notify_fail("���Ƿ����·����ʦ�سǱ���ס�ˡ�\n");
                }

        if (me->query("marks/����")) {
                ::valid_leave(me,dir);
                me->set("marks/����", 0);
                return 1;
                }

        return ::valid_leave(me,dir);
}

