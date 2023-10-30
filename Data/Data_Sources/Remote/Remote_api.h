#include "../../../Core/Library/Library.h"
/*
Ця функція використовується для побудови URL для запиту до API.
Приймає на вхід параметри, які визначаються в залежності від режиму збірки.
*/
string FetchApiData(string url)
{
	size_t pos = url.find("my_dev_key");
	if (pos != string::npos)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		return "Student";
	}
	else
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);
		return "IT Developer";
	}

}