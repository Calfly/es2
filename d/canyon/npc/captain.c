// captain.c

#include <ansi.h>

inherit NPC;

string tell_story(object who);

string *make_msg = ({
    HIG"��ʮ����ǰ���ȵ۽��󽫾��ǵ������פ�ذ��ڡ�\n\n"NOR,
    HIG"���ǵ�Ҳ���򰯿ڵĹ��̶���ð�ȫ��\n\n"NOR,
    HIG"�¸����꣬�ȵ�Ҳ���ˣ����ϵ���λ���ǲ�����ʶ��С�ʵۡ�\n\n"NOR,
    HIG"������ֻæ���ҽ���Ҳûʲô����Ϊ�����Ҳ��̫������\n\n"NOR,
    HIG"�ʵۿ����󽫾���Ҫ��η���̨֨ߡ�\n\n"NOR,
    HIG"�������������;�ʦ�ǳ�ǿ�ģ����Ҫ�úõ��������ǲ��С�\n\n"NOR,
    HIG"֪���ˣ��Ϳ��Ǯ��\n"NOR,
});

void create()
{
	set_name("��ӳ�", ({ "captain" }));
	set("gender", "����");
	set("age", 30);
	set("long",
        	"��������Ц�����ӣ�������С��פ�ذ��ڵĶӳ���\n");

	set("attitude", "peaceful");

	set("str", 27);
	set("int", 25);

	set("combat_exp", 120000);

	set("inquiry", ([
		"����" : "�ȸ�Ǯ��˵�ɡ�\n",
		"������" : "ร��������������ľ�ʦ������󷨡�\n",
		"��ʯ����" : (: tell_story :),
	]) );
	
	set("chat_chance", 8);
	set("chat_msg", ({
		"��ӳ�˵������û������Ҫ���Ұ���\n",
		"��ӳ�˵�����Ҷ���������ม�\n",
	}) );
	
	set("force", 700);
	set("max_force", 700);
	set("force_factor", 5);

	set_skill("dodge", 70);
	set_skill("sword", 70);
	set_skill("parry", 70);
	set_skill("force", 70);
	set_skill("unarmed", 65);
	
	setup();

	carry_object( __DIR__"obj/sword")->wield();
	carry_object( __DIR__"obj/armor")->wear();
}

int accept_object(object who, object ob)
{
        if ( !ob->value() ) {
        	command("say ��....��hank ��ou!!!");
                command("grin");
        //        call_out( (: destruct :), 1, ob);
                return 1;
        }
                                                                                
	if ( !who->query("marks/��Ӫ") ) {
		if( ob->value() >=3000 ) {
			say("��ӳ�˵��:���Ѱ������������ˣ��ӽ����������"
				"�س���Ӫ���ˡ�\n");
			who->set("marks/��Ӫ",1);
			return 1;
		} else {
			say("��ӳ�˵��:��ĳ��ⲻ��ร��ٶ�ɵ�ɡ�\n");
			return 1;
		}
	} else
		say("��ӳ�˵��:Ŷร��������İ�������лл���ˡ�\n");
	
	return 1;
}

string tell_story(object who)
{
	who=this_player();
	call_out( "make_stage", 2, who, 0 );
	return 0;
}

void make_stage(object who,int stage)
{
	tell_object(who,make_msg[stage]);
	if (++stage < sizeof(make_msg) ) {
		call_out( "make_stage", 2, who, stage);
		return;
	}
	return;
}
         
		