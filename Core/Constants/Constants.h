#include "../Library/Library.h"


//Змінна для зберігання посилання на API
const string api_url = "https://rickandmortyapi.com/api";

//Змінна для зберігання патерна ключа розробника
const string api_key_pattern ="?auth_key=";


//Функція повертає ключ для режиму розробника
string GetDevKey()
{
	return "my_dev_key";
}

//Функція повертає ключ для режиму продакшен
string GetProdKey()
{
	return "my_prod_key";
}