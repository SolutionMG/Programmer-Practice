#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include "ClientInfo.h"

class PlayerInfo : public ClientInfo
{
private:
	///�÷��̾� ���� �̸�
	char m_name[MAX_NAME];

public:
	explicit PlayerInfo();
	virtual ~PlayerInfo();

	///Get
	const char* GetName();

	///Set
	void SetName(const char* name);


};

#endif // !PLAYERINFO_H
