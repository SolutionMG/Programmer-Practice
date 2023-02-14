#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include "ClientInfo.h"

class PlayerInfo final : public ClientInfo
{
private:
	///플레이어 고유 이름
	char m_name[MAX_NAME];

	///플레이어가 송신 전 입력중인 문자열
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
