

#ifndef DEFINE_H
#define DEFINE_H

namespace InitailizeServer
{
	constexpr unsigned short TOTALCORE = 8;
	constexpr unsigned short SERVERPORT = 9000;
	constexpr unsigned short MAX_BUFFERSIZE = 1024;
};


namespace InitailizePlayer
{
	constexpr unsigned short MAX_NAME = 32;
}


namespace InitializeRoom
{
	constexpr unsigned short MAX_ROOMPLAYER = 20;
	constexpr unsigned short MIN_ROOMPLAYER = 2;
	constexpr unsigned short MAX_ROOMNAME = 32;
}


namespace RenderMessageMacro
{
	///LOGIN
	constexpr char ACCESSMESSAGE[] = "** �ȳ��ϼ���. �ؽ�Ʈ ä�� ���� Ver 0.1�Դϴ�.\n\r";
	constexpr char LOGONREQUEST[] = "** �α��� ��ɾ�(LOGIN)�� ������ּ���.\n\r";
	constexpr char LOGONFAILED[] = "** ���̵� �̹� ������Դϴ�. �ٸ� ���̵� ������ּ���.\n\r";
	constexpr char SUCCESSLOGONMESSAGE[] = "�ݰ����ϴ�. �ؽ�Ʈ ä�� ���� ver 0.1�Դϴ�.\n\r�̿��� �����Ͻ� ���� ������ �Ʒ� �̸��Ϸ� ���� �ٶ��ϴ�.\n\r�����մϴ�.\n\r\n\remail:jieun.kim23@nm-neo.com\n\r";

	///LINE, COMMANDLINE
	constexpr char ROOMINFOLINEMESSAGE[] = "-------------------------------��ȭ�� ����-------------------------------\n\r";
	constexpr char DIVIDELINEMESSAGE[] = "-------------------------------------------------------------------------\n\r";
	constexpr char COMMANDWAITMESSAGE[] = ">>";
	constexpr char SELECTCOMMANDMESSAGE[] = "��ɾ� �ȳ�(H) ����(X)\n\r";

	///COMMAND
	constexpr char GUIDEMESSAGE[] = 
		"[H]				- ��ɾ� ��� �ȳ�\n\r[US]				- ���� ���� ���\n\r[LT]				- ��ȭ�� ���\n\r[O] [�ִ��ο�] [������]		- ��ȭ�� ����\n\r[J] [���ȣ]			- ��ȭ�� ����\n\r[PF] [�����̸�]			- �̿��� ���� ����\n\r[ST] [���ȣ]			- ��ȭ�� ���� ����\n\r[TO] [����ID] [�޽���]	- ���� ������\n\r[X]				- ��������\n\r";
	constexpr char FAILEDCOMMANDMESSAGE[] = "** ��Ŀ� �´� �޽����� ����� �ּ���.\n\r";
	constexpr char CREATEROOMFAILEDMESSAGE[] = "** �̹� ������ �̸��� ���� �����մϴ�. �ٸ� �̸��� ������ּ���.\n\r";
	constexpr char CREATEROOMFAILEDOVERUSERS[] = "** [�ּ� �ο�: 2��, �ִ� �ο�: 20��]\n\r";
	constexpr char CREATEROOMSUCCESSMESSAGE[] = "** ��ȭ���� �����Ǿ����ϴ�.\n\r";
	constexpr char ROOMENTERFAILEDMESSAGE[] = "** �������� �ʴ� ���Դϴ�. �ùٸ� �� ��ȣ�� �Է����ּ���.\n\r";
	constexpr char ROOMENTERFULLMESSAGE[] = "** �ش� ���� �̹� �ִ� �ο��Դϴ�. �ٸ� ���� �̿����ּ���.\n\r";
	constexpr char ROOMENTERNONAMEMESSAGE[] = "** ���� �̸��� �������� �ʽ��ϴ�. �ùٸ� �� �̸��� �Է����ּ���.\n\r";
	constexpr char USERINFOMESSAGEFAILED[] = "�������� �ʴ� �����Դϴ�.\n\r";
}


namespace CommandMessage
{
	constexpr char LOGON[] = "LOGIN";			//�α��� ��ɾ� �빮��
	constexpr char LOGON_S[] = "login";			//�α��� ��ɾ� �ҹ���

	constexpr char COMMANDLIST[] = "H";			//��ɾ� �ȳ� �빮��
	constexpr char COMMANDLIST_S[] = "h";		//��ɾ� �ȳ� �ҹ���

	constexpr char USERLIST[] = "US";			//�̿��� ��� ���� �빮��
	constexpr char USERLIST_S[] = "us";			//�̿��� ��� ���� �ҹ���

	constexpr char ROOMLIST[] = "LT";			//��ȭ�� ��� ���� �빮��
	constexpr char ROOMLIST_S[] = "lt";			//��ȭ�� ��� ���� �ҹ���

	constexpr char ROOMINFO[] = "ST";			//�� ���� ���� �빮��
	constexpr char ROOMINFO_S[] = "st";			//�� ���� ���� �ҹ���

	constexpr char PLAYERINFO[] = "PF";			//�̿��� ���� ���� �빮��
	constexpr char PLAYERINFO_S[] = "pf";		//�̿��� ���� ���� �ҹ���

	constexpr char SECRETMESSAGE[] = "TO";		//�ӼӸ� �빮��
	constexpr char SECRETMESSAGE_S[] = "to";	//�ӼӸ� �ҹ���

	constexpr char ROOMCREATE[] = "O";			//����� �빮��
	constexpr char ROOMCREATE_S[] = "o";		//����� �ҹ���

	constexpr char ROOMENTER[] = "J";			//������ �빮��
	constexpr char ROOMENTER_S[] = "j";			//������ �ҹ���

	constexpr char EXIT[] = "X";				//���� �빮��
	constexpr char EXIT_S[] = "x";				//���� �ҹ���
}
#endif // !DEFINE_H
