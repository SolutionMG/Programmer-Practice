

#ifndef ROOM_H
#define ROOM_H


class Room
{
private:
	std::mutex m_roomLock;

	/// �� ��ȣ
	int m_index;
	/// �� �̸�
	char m_name[InitializeRoom::MAX_ROOMNAME];
	/// �ִ� �ο�
	int m_maxUser;
	/// ä�ù� ���ο� �� 
	int m_totalPlayers;

public:
	explicit Room();
	virtual ~Room() noexcept;

	void StartLock();
	void EndLock();

	///Set
	void SetName(const char* name);
	void SetIndex(const int& index);
	void SetMaxUser(const int& num);
	void SetTotalPlayers(const int& totalPlayer);

	///Get
	const char* GetName() const;
	const int& GetIndex();
	const int& GetMaxUser() const;
	const int& GetTotalPlayer() const;

};

#endif // !ROOM_H
