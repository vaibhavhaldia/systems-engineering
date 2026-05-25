#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
  BOOL bDir = CopyFile(L"D:\\person3.csv", L"D:\\hello\\person3.csv", TRUE);

  if (bDir == FALSE)
  {
    cerr << "Copy File Failed, Error No = " << GetLastError() << endl;
    system("PAUSE");
    return 1;
  }

  cerr << "Copy File Success" << endl;
  system("PAUSE");
  return 0;
}