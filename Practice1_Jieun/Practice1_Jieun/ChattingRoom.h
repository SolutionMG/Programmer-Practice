

#ifndef CHATTINGROOM_H
#define CHATTINGROOM_H
#include "Room.h"


class ChattingRoom: public Room
{
private:
	/// ä�ù� ���ο� �� 
	int totalPlayers;
	/// �ش� ä�ù� �����ڵ��� ���� �ε���
	std::vector<int> accessorIndex;

public:
	explicit ChattingRoom();
};

#endif // !CHATTINGROOM_H
