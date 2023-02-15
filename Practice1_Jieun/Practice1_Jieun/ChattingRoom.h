

#ifndef CHATTINGROOM_H
#define CHATTINGROOM_H
#include "Room.h"


class ChattingRoom: public Room
{
private:
	/// ä�ù� ���ο� �� 
	int m_totalPlayers;
	/// �ش� ä�ù� �����ڵ��� ���� �ε���
	std::vector<int> m_accessorIndex;

public:
	explicit ChattingRoom();
	virtual ~ChattingRoom() noexcept;

public:
	
	void PushAccessor(const int& index);
	void PopAccessor(const int index);

	///Set
	void SetTotalPlayers(const int& totalPlayer);

	///Get
	const int& GetTotalPlayer();
	const std::vector<int>& GetAccessorIndex();
};

#endif // !CHATTINGROOM_H
