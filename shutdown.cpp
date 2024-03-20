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
    system("sudo reboot");
    system("c:\windows\system32\shutdown /r ");
}
if(choice == 's' || choice == 'S'){
    system("sudo poweroff");
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
