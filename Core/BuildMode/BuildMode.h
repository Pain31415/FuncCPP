#include "../Constants/Constants.h"


/*
Ці функції будуть використовуватись для збирання URL-адреси запиту до API.
Вони будуть використовувати глобальну змінну build_mode, яка буде визначати,
який ключ API буде використовуватись. Це дозволить використовувати один і той же
код для розробки та продакшену.
*/

string BuildAsDev()
{
	SetConsoleTitle(L"Application Dev");
	string request_url = api_url + api_key_pattern + GetDevKey();
	return request_url;
}

string BuildAsProd()
{
	SetConsoleTitle(L"Application Prod");
	string request_url = api_url + api_key_pattern + GetProdKey();
	return request_url;
}