#ifndef PLAYERINFO_H
#define PLAYERINFO_H

constexpr int MAX_NAME = 16;

class PlayerInfo
{
public:
	explicit PlayerInfo();
	virtual ~PlayerInfo();

private:
	///�÷��̾� ���� ��ȣ
	unsigned int m_Index;	
	///�÷��̾� ���� �̸�
	char m_name[MAX_NAME];
};

#endif // !PLAYERINFO_H
