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
}

namespace RenderMessageMacro
{
	constexpr char ACCESSMESSAGE[] = "** �ȳ��ϼ���. �ؽ�Ʈ ä�� ���� Ver 0.1�Դϴ�.\n\r";
	constexpr char LOGONREQUEST[] = "** �α��� ��ɾ�(LOGIN)�� ������ּ���.\n\r";
	constexpr char LOGONFAILED[] = "** ���̵� �̹� ������Դϴ�. �ٸ� ���̵� ������ּ���.\n\r";
	constexpr char DIVIDELINEMESSAGE[] = "-------------------------------------------------------------------------\n\r";
	constexpr char SUCCESSLOGONMESSAGE[] = "�ݰ����ϴ�. �ؽ�Ʈ ä�� ���� ver 0.1�Դϴ�.\n\r�̿��� �����Ͻ� ���� ������ �Ʒ� �̸��Ϸ� ���� �ٶ��ϴ�.\n\r�����մϴ�.\n\r\n\remail:jieun.kim23@nm-neo.com\n\r";
	constexpr char SELECTCOMMANDMESSAGE[] = "��ɾ� �ȳ�(H) ����(X)\n\r";
	constexpr char COMMANDWAITMESSAGE[] = ">>";

	constexpr char GUIDEMESSAGE[] = "[H] - ��ɾ� ��� �ȳ�\n\r[X] - ��������\n\r[US] - ���� ���� ���\n\r";
}

namespace CommandMessage
{
	constexpr char LOGON[] = "LOGIN";
	constexpr char COMMANDLIST[] = "H";
	constexpr char USERLIST[] = "US";
	constexpr char ROOMLIST[] = "LT";
	constexpr char ROOMINFO[] = "ST";
	constexpr char PLAYERINFO[] = "PF";
	constexpr char SECRETMESSAGE[] = "TO";
	constexpr char ROOMCREATE[] = "O";
	constexpr char ROOMENTER[] = "J";
	constexpr char EXIT[] = "X";
	constexpr char ROOMOUT[] = "ROOMOUT";

}

#endif // !DEFINE_H
