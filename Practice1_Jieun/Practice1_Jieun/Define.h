#ifndef DEFINE_H
#define DEFINE_H

namespace InitailizeServer 
{
	constexpr int TOTALCORE = 8;
	constexpr int SERVERPORT = 9000;
	constexpr int MAX_BUFFERSIZE = 1024;
};

namespace InitailizePlayer
{
	constexpr int MAX_NAME = 16;
}

namespace RenderMessageMacro
{
	constexpr char AccessMessage[] = "** �ȳ��ϼ���. �ؽ�Ʈ ä�� ���� Ver 0.1�Դϴ�.\n\r** �α��� ��ɾ�(LOGIN)�� ������ּ���.\n\rLOGIN> ";
	constexpr char DivideLineMessage[] = "-------------------------------------------------------------------------\n\r";
	constexpr char SuccessLogOnMessage[] = "�ݰ����ϴ�. �ؽ�Ʈ ä�� ���� ver 0.1�Դϴ�.\n\r�̿��� �����Ͻ� ���� ������ �Ʒ� �̸��Ϸ� ���� �ٶ��ϴ�.\n\r�����մϴ�.\n\r\n\remail:jieun.kim23@nm-neo.com\n\r";
	constexpr char GuideMessage[] = "��ɾ� �ȳ�(H) ����(X)\n\r";
	constexpr char CommandWaitMessage[] = ">>";
}

#endif // !DEFINE_H
 