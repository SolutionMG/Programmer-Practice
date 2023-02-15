

#ifndef CHATTINGROOM_H
#define CHATTINGROOM_H
#include "Room.h"


class ChattingRoom: public Room
{
private:
	/// ä�ù� ���ο� �� 
	int m_totalPlayers;
	/// �ش� ä�ù� �����ڵ��� ���ϵ�
	std::vector<SOCKET> m_accessorIndex;

public:
	explicit ChattingRoom();
	virtual ~ChattingRoom() noexcept;

public:
	
	void PushAccessor(const SOCKET& socket);
	void PopAccessor(const SOCKET& socket);

	///Set
	void SetTotalPlayers(const int& totalPlayer);

	///Get
	const int& GetTotalPlayer() const;
	const std::vector<SOCKET>& GetAccessorIndex();
};

#endif // !CHATTINGROOM_H
