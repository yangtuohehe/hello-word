#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
int i,a,b,c;
char name[100];
printf("你要轰炸的人：");
scanf("%s",&name,40);
//printf("轰炸次数");
//scanf("%d",&i);
HWND H = FindWindow(0,name);
for(a=0;a<100;a++)
{
    for(b=0;b<100;b++)
    {
        for(c=0;c<500;c++)
        {
        // while(i-->0)
//{

   // SendMessage(H,WM_PASTE,0,0);



 keybd_event(17,0,0,0);
keybd_event(86,0,0,0);
Sleep(100);
 keybd_event(86,0,KEYEVENTF_KEYUP,0);
keybd_event(17,0,KEYEVENTF_KEYUP,0);
Sleep(100);
    SendMessage(H,WM_KEYDOWN,VK_RETURN,0);
//}
        }
    }
}

}
