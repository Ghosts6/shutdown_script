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
