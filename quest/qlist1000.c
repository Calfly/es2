inherit SKILL;

mapping *quest = ({
        ([      "quest":                "��ؤ",
                "quest_type":           "ɱ",
                "time":                 200,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               6
        ]),
        ([      "quest":                "��ʦʦ",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               5
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               4
        ]),
        ([      "quest":                "֪��ɮ",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               5
        ]),
        ([      "quest":                "�÷�",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            40,
                "score" :               8
        ]),
        ([      "quest":                "�蹤",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            28,
                "pot_bonus":            18,
                "score" :               12
        ]),
        ([      "quest":                "�蹷",
                "quest_type":           "ɱ",
                "time":                 40,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               5
        ]),
        ([      "quest":                "Ұ��",
                "quest_type":           "ɱ",
                "time":                 40,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               5
        ]),
        ([      "quest":                "�ſ�",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               8
        ]),
        ([      "quest":                "�����õ�",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               12
        ]),
       ([      "quest":                "������",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               8
        ]),
        ([      "quest":                "ɨ��ɮ",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            35,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "�����",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               10
        ]),
       ([      "quest":                "κ�޼�",
                "quest_type":           "ɱ",
                "time":                 40,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
       ([      "quest":                "��ݵ���",
                "quest_type":           "ɱ",
                "time":                 100,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               20
        ]),
        ([      "quest":                "��������",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               8
        ]),
        ([      "quest":                "���Ǻ�«��",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "�����ӵ�",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               8
        ]),
        ([      "quest":                "�Ҷ�",
                "quest_type":           "ɱ",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            50,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "֩��",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "��˿ȸ",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "ҩɮ",
                "quest_type":           "ɱ",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

