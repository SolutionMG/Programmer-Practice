#include "pch.h"
#include "PlayerInfo.h"

PlayerInfo::PlayerInfo() : m_name{" "}
{
	m_chattingBuffer.reserve(InitailizeServer::MAX_BUFFERSIZE);
}

PlayerInfo::~PlayerInfo() noexcept = default;

const char* PlayerInfo::GetName()
{
	return m_name;
}

void PlayerInfo::SetName(const char* name)
{
	strcpy_s(m_name, name);
}

void PlayerInfo::PushChattingBuffer(char word)
{
	m_chattingBuffer.emplace_back(word);
}

void PlayerInfo::ClearChattingBuffer()
{
	m_chattingBuffer.clear();
}

const std::string_view PlayerInfo::GetChattingLog()
{
	std::string_view str {m_chattingBuffer.begin(), m_chattingBuffer.begin() + m_chattingBuffer.size()};
	return str;
}