#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
  HANDLE hFile = CreateFile(L"D:\\hello\\demo.txt", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);

  if (hFile == INVALID_HANDLE_VALUE)
  {
    cerr << "Create File Failed, Error No = " << GetLastError() << endl;
    system("PAUSE");
    return 1;
  }
  cout << "Create File Success" << endl;
  system("PAUSE");

  char chBuffer[] = "this is a demo file";
  DWORD dwNoByteToWirte = strlen(chBuffer);
  DWORD dwNoByteWritten = 0;

  BOOL bFile = WriteFile(hFile, chBuffer, dwNoByteToWirte, &dwNoByteWritten, NULL);

  if (bFile == FALSE)
  {
    cerr << "Error Writing data into file, Error No = " << GetLastError() << endl;
    system("PAUSE");
    return 1;
  }

  cerr << "Success Writing data into file" << endl;
  system("PAUSE");

  return 0;
}