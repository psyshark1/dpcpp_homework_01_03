#pragma once
#include<stdexcept>

class SQLException : public std::invalid_argument
{
public:
	SQLException(const char* msg) noexcept;
	~SQLException();
	const char* what() const noexcept override;
private:
	const char* message;
};