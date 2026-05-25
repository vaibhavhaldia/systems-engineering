#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	BOOL bDir = CreateDirectory(L"D:\\hello",NULL);

	if(bDir == FALSE)
	{
		cout<<"Create Directory Failed, Error No = "<<GetLastError()<<endl;
		system("PAUSE");
		return 1;
	}

	cout<<"Create Directory Success"<<endl;
	system("PAUSE");
		return 0;
}