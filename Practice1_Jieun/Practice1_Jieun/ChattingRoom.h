#ifndef CHATTINGROOM_H
#define CHATTINGROOM_H

class ChattingRoom
{
public:
	explicit ChattingRoom();
	virtual ~ChattingRoom();

private:
	/// ä�ù� ���ο� �� 
	int totalPlayers;
	/// �ش� ä�ù� �����ڵ��� ���� �ε���
	std::vector<int> accessorIndex; 
};

#endif // !CHATTINGROOM_H
