#include "Core/Library/Library.h"
#include "Core/BuildMode/BuildMode.h"
#include "Data/Data_Sources/Remote/Remote_api.h"
#include "Presentation/Screen/Home.h"


//«м≥нна build_mode визначаЇ режим зб≥рки
const string build_mode = "Prod";


//‘ункц≥€ Application виконуЇ основну лог≥ку програми
void Application()
{
	//«м≥нна request_url м≥стить адресу запиту
	string request_url;

	//ѕерев≥рка на режим зб≥рки
	if (build_mode == "DEV")
	{
		request_url = BuildAsDev();
	}
	else
	{
		request_url = BuildAsProd();
	}
	//«м≥нна response м≥стить в≥дпов≥дь сервера в≥дпов≥дно режиму зб≥рки
	string response = FetchApiData(request_url);
	Home(response);
}