#ifndef CHATTINGROOM_H
#define CHATTINGROOM_H

class ChattingRoom
{
private:
	/// ä�ù� ���ο� �� 
	int totalPlayers;
	/// �ش� ä�ù� �����ڵ��� ���� �ε���
	std::vector<int> accessorIndex;

public:
	explicit ChattingRoom();
	virtual ~ChattingRoom();
};

#endif // !CHATTINGROOM_H
