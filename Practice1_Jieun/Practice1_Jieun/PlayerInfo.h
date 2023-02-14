#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include "ClientInfo.h"

class PlayerInfo final : public ClientInfo
{
private:
	///�÷��̾� ���� �̸�
	char m_name[InitailizePlayer::MAX_NAME];
	///�÷��̾ �۽� �� �Է����� ���ڿ�
	std::vector<char> m_chattingBuffer;

public:
	explicit PlayerInfo();

	///Set
	void SetName(const char* name);

	///Get
	const char* GetName();

	void PushChattingBuffer(char word);
	void ClearChattingBuffer();

	const std::string GetChattingLog();
};

#endif // !PLAYERINFO_H
