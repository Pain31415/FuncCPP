#include "Core/Library/Library.h"
#include "Core/BuildMode/BuildMode.h"
#include "Data/Data_Sources/Remote/Remote_api.h"
#include "Presentation/Screen/Home.h"


//����� build_mode ������� ����� �����
const string build_mode = "Prod";


//������� Application ������ ������� ����� ��������
void Application()
{
	//����� request_url ������ ������ ������
	string request_url;

	//�������� �� ����� �����
	if (build_mode == "DEV")
	{
		request_url = BuildAsDev();
	}
	else
	{
		request_url = BuildAsProd();
	}
	//����� response ������ ������� ������� �������� ������ �����
	string response = FetchApiData(request_url);
	Home(response);
}