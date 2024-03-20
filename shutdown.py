import os

def main():
    choice = input("select operation type?(shutdown/restart)")
    if choice == "shutdown" or choice == "shutdown":
        shutdown()
    elif choice == "restart" or choice == "Restart":
        restart()
    else:
        print("wrong choice please try again .")
        main()

def shutdown():
    shutdown = input("do you want to shutdown system(yes/no)?")
    if shutdown == "yes" or shutdown == "Yes" :
        os.system("shutdown /s /t 1") 
        os.system("poweroff")
        os.system("shutdown now -h")
    elif shutdown == "no":
        exit()


def restart():
    restart = input("do you want restart system(yes/no)")
    if restart == "yes"  or restart == "Yes" :
        os.system("reboot")
        os.system("shutdown /r")
        os.system("shutdown -r -t 0")
    elif restart == "no" :
        exit()

main()
