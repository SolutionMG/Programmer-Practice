

#ifndef BASESERVER_H
#define BASESERVER_H


class PlayerInfo;


class BaseServer final
{
private:
	SOCKET m_listenSocket;
	HANDLE m_iocpHandle;

	/// �÷��̾� ������ ����
	std::unordered_map<SOCKET, PlayerInfo*> m_players;

	///�α׿� ���μ���
	std::mutex m_logOnLock;
	std::queue<SOCKET> m_logOn; 

public:
	explicit BaseServer();
	virtual ~BaseServer();


public:
	bool Initialize();
	bool Listen();
	bool OpenServer();


private:
	/// ���� IOCP ���μ��� (Accept, Recv, Send)
	bool MainWorkProcess();

	/// �÷��̾� ���� ó�� �Լ�
	bool Accept(WSAOVERLAPPED_EXTEND* over);
	bool AddNewClient(const SOCKET& socket);

	///��Ŷ�� ���� ��� ����
	bool CommandWorkBranch(const SOCKET& socket, const std::string_view& command);

	/// �α׿� ���� ���μ���
	bool LogOnCommandProcess();

	///�ڳ� Ŭ���̾�Ʈ�κ��� ���� ��Ŷ ������
	bool ReassemblePacket(char* packet,const DWORD& bytes, const SOCKET& socket);
	bool Disconnect(SOCKET socket);


public:
	void DisplayError(const char* msg);
};


#endif // !BASESERV