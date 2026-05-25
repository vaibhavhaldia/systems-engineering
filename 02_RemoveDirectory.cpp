#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
  BOOL bDir;

  bDir = RemoveDirectory(L"D:\\hello");

  if (bDir == FALSE)
  {
    cerr << "Error Deleting Directory, Error No = " << GetLastError() << endl;
    system("PAUSE");
    return 0;
  }

  cout << "Directory Deleted Successfully" << endl;
  system("PAUSE");

  return 0;
}