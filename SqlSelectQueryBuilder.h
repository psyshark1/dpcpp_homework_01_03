#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"SQLException.h"

class SqlSelectQueryBuilder
{
public:
	SqlSelectQueryBuilder();
	SqlSelectQueryBuilder& AddColumn(const std::string& column) noexcept;
	SqlSelectQueryBuilder& AddColumns(const std::vector<std::string>& columns) noexcept;
	SqlSelectQueryBuilder& AddWhere(const std::string& column, const std::string& value) noexcept;
	SqlSelectQueryBuilder& AddWhere(const std::map<std::string, std::string>& kv) noexcept;
	SqlSelectQueryBuilder& AddFrom(const std::string& table) noexcept;
	virtual bool BuildQuery();
	std::string get_select() noexcept;
	~SqlSelectQueryBuilder();

protected:
	std::string sql_select;
	std::string table;
	std::vector<std::string> columns;
	std::map<std::string, std::string> wheres;
};

class DerivateSqlSelectQueryBuilder : public SqlSelectQueryBuilder
{
public:
	DerivateSqlSelectQueryBuilder();
	~DerivateSqlSelectQueryBuilder();
	bool BuildQuery() override;
	void set_less(const char& set) noexcept;
private:
	char less{'='};
};

