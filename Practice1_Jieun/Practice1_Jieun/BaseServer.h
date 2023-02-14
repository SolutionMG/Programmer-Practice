

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

public:
	explicit BaseServer();
	virtual ~BaseServer();


public:
	bool Initialize();
	bool Listen();
	bool OpenServer();


private:
	bool WorkProcess();


	bool Accept(WSAOVERLAPPED_EXTEND* over);
	bool AddNewClient(const SOCKET& socket);


	///�ڳ� Ŭ���̾�Ʈ�κ��� ���� ��Ŷ ������
	bool ReassemblePacket(char* packet,const DWORD& bytes, const SOCKET& socket);
	bool ProcessPacket(const SOCKET& socket, char* word);
	bool Disconnect(SOCKET socket);


public:
	void DisplayError(const char* msg);
};


#endif // !BASESERV