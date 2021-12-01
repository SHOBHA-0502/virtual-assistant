#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> // must include this header file to use time function
using namespace std;

void wishme()
{

    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning Boss" << endl;
        string phrase = "Good Morning Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Good Afternoon Boss" << endl;
        string phrase = "Good Afternoon Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "Good Evening Boss" << endl;
        string phrase = "Good Evening Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}
void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "the date and time is " << endl
         << dt << endl;
}
int main()
{
    system("cls");
    cout << "\t\t\t\t<----------------------------- W E L C O M--------------->" << endl;
    cout << "\t\t\t\t<-----------------------------  I AM A VIRTUAL ASSISTANT--------------->" << endl;
    cout << "\t\t\t\t<----------------------------- MY NAME IS INERTIA--------------->" << endl;
    cout << "\t\t\t\t<----------------------------- I'AM HERE TO HELP YOU --------------->" << endl;

    char password[20]; // to take password
    char ch[100];      // to take command from the user
    do
    {
        cout << "************************" << endl;
        cout << "| ENTER YOUR PASSWORD |" << endl;
        cout << "*************************" << endl
             << endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        if (strcmp(password, "inertia") == 0)
        {

            cout << "\n<=========================================================================>\n\n";
            wishme();
            do
            {
                cout << "\n<=========================================================================>\n\n";
                cout << endl
                     << "How can i help you boss.... " << endl
                     << endl;
                string phrase = "how can i help you boss";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                cout << "Your query =====>";
                gets(ch);
                cout << endl;
                cout << "Here is the result for your query ===>";
                if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0)
                {
                    cout << "Hello Boss ....." << endl;
                    string phrase = "hello boss";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0)
                {
                    cout << "Good bye Boss, have a nice day !!!!" << endl;
                    string phrase = "good bye boss have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if (strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0)
                {
                    cout << " I am a virtual assistant created by my master shobha kumari" << endl;
                    string phrase = "I am a virtual assistant created by my master shobha kumari  ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0)
                {
                    cout << "i am good boss, tell me how can i help you..." << endl;
                    string phrase = " i am good boss, tell me how can i help you...";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "time") == 0 || strcmp(ch, "day") == 0 || strcmp(ch, "date") == 0)
                {

                    datetime();
                }
                else if (strcmp(ch, "open notepad") == 0)
                {
                    cout << "openining notepad....." << endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (strcmp(ch, "openinstagram") == 0)
                {
                    cout << "openining instagram....." << endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }
                else if (strcmp(ch, "opengoogle") == 0)
                {
                    cout << "opening google...." << endl;
                    string phrase = "opening google....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                else if (strcmp(ch, "openyoutube") == 0)
                {
                    cout << "opening youtube...." << endl;
                    string phrase = "opening youtube....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if (strcmp(ch, "playsong") == 0)
                {
                    cout << "playing song " << endl;
                    string phrase = "playing song ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com/watch?v=CsOsmgUmT9U");
                }

                else
                {
                    cout << "sorry could not understand your query please tell again" << endl;

                    string phrase = "sorry could not understand your query please tell again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            } while (1);
        }

        else
        {
            cout << "incorrect password" << endl;
        }
    } while (1);

    return 0;
}