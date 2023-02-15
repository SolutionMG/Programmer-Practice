

#ifndef CHATTINGROOM_H
#define CHATTINGROOM_H
#include "Room.h"


class ChattingRoom: public Room
{
private:
	/// �ش� ä�ù� �����ڵ��� ���ϵ�
	std::vector<SOCKET> m_accessorIndex;

public:
	explicit ChattingRoom();
	virtual ~ChattingRoom() noexcept;

public:
	
	void PushAccessor(const SOCKET& socket);
	void PopAccessor(const SOCKET& socket);

	///Set

	///Get
	const std::vector<SOCKET>& GetAccessorIndex() const;
};

#endif // !CHATTINGROOM_H
