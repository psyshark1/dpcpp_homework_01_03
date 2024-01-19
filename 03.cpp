#include"SqlSelectQueryBuilder.h"

int main()
{
	DerivateSqlSelectQueryBuilder query_builder;
	query_builder.AddColumns({ "name","phone" });
	query_builder.AddFrom("students");
	query_builder.AddWhere({ {"id", "42"} });
	query_builder.set_less('<');
	try
	{
		query_builder.BuildQuery();
		//static_assert(query_builder.BuildQuery(),
			//"SELECT name,phone FROM students WHERE id=42 AND name=John;");

		std::cout << query_builder.get_select() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
