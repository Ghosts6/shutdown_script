# 💫 description:
<br>some useful script with c c++ python to restart or shutdown system in different os<br>
# shutdown_script_source code:
#python :

```python
import os 
shutdown = input("do you want shutdown system?(yes/no)")
if shutdown == "yes" or shutdown == "Yes" :
    os.system("shutdown /s /t 1") 
    os.system("poweroff")
    os.system("shutdown now -h")
restart = input("do you want restart system(yes/no)")
if restart == "yes"  or restart == "Yes" :
    os.system("reboot")
    os.system("shutdown /r")
    os.system("shutdown -r -t 0")
if shutdown == "no" and restart == "no" :
    exit()
else :
    print("wrong choice please try again .")
```
#c++:

```cpp
#include <iostream>
#include <string>
using namespace std;
int main(){
    char choice;
    string choice_2;
    cout<<"do you want restart or shutdown for restart type r for shutdown type s"<<endl;
    cin>>choice;
    jump:
if(choice == 'r' || choice == 'R'){
    system("shutdown -r -t 0");
    system("reboot");
    system("c:\windows\system32\shutdown /r ");
}
if(choice == 's' || choice == 'S'){
    system("poweroff");
    system("shutdown -P now");
    system("c:\windows\system32\shutdown /i ");
}
else{
    cout<<"wrong input"<<'\n'<<"do you want to try again?(yes/no)"<<endl;
    cin>>choice_2;
}
if(choice_2 == "yes" || choice_2 == "Yes"){
    goto jump;
}
else{
    cout<<"end of program"<<endl;
}
    return 0;
}
```
#c:

```c
#include <stio.h>
#include <stdlib.h>
int main(){
	system("c:\\Windows\\System32\\shutdown /s")
	return 0;
}
```

