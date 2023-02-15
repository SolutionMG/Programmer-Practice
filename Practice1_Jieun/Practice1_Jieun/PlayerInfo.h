

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
	int m_roomNumber;

public:
	explicit PlayerInfo();
	virtual ~PlayerInfo() noexcept;

	///Set
	void SetName(const char* name);
	void SetPlayerRoomNumber(const int& num);

	///Get
	const char* GetName() const;
	const std::string_view GetChattingLog();
	const int& GetPlayerRoomNumber();


	void PushChattingBuffer(char word);
	void ClearChattingBuffer();

};

#endif // !PLAYERINFO_H
