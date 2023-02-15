#include "pch.h"
#include "Room.h"

Room::Room() : m_index(-1), m_name(""), m_maxUser(0)
{
}

Room::~Room() noexcept = default;

void Room::StartLock()
{
	m_roomLock.lock();
}

void Room::EndLock()
{
	m_roomLock.unlock();
}

void Room::SetName(const char* name)
{
	strcpy_s(m_name, name);
}

void Room::SetIndex(const int& index)
{
	m_index = index;
}

void Room::SetMaxUser(const int& num)
{
	m_maxUser = num;
}

const char* Room::GetName() const
{
	// TODO: ���⿡ return ���� �����մϴ�.
	return m_name;
}

const int& Room::GetIndex()
{
	// TODO: ���⿡ return ���� �����մϴ�.
	return m_index;
}

const int& Room::GetMaxUser()
{
	// TODO: ���⿡ return ���� �����մϴ�.
	return m_maxUser;
}
