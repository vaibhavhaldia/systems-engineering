#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
  BOOL bDir = MoveFile(L"D:\Soham's Notebook.url.csv", L"D:\\hello\\Soham's Notebook.url.csv");

  if (bDir == FALSE)
  {
    cerr << "Move File Failed, Error No = " << GetLastError() << endl;
    system("PAUSE");
    return 1;
  }

  cout << "Move File Success" << endl;
  system("PAUSE");
  return 0;
}