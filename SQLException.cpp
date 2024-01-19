#include"SQLException.h"

const char* SQLException::what() const noexcept
{
	return message;
}

SQLException::SQLException(const char* msg) noexcept : std::invalid_argument(msg)
{
	this->message = msg;
}

SQLException::~SQLException()
{
}