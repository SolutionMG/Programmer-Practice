#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include "ClientInfo.h"

class PlayerInfo final : public ClientInfo
{
private:
	///�÷��̾� ���� �̸�
	char m_name[MAX_NAME];

	///�÷��̾ �۽� �� �Է����� ���ڿ�
	std::vector<unsigned char*> m_chattingBuffer;

public:
	explicit PlayerInfo();
	virtual ~PlayerInfo();

	///Set
	void SetName(const char* name);

	///Get
	const char* GetName();

	void PushChattingBuffer(unsigned char word[]);
	void ClearChattingBuffer();
	bool CheckChattingEnd();

	const std::string GetChattingLog();

};

#endif // !PLAYERINFO_H
