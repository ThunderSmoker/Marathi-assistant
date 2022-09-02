#include <bits/stdc++.h>
#include <windows.h>
#define thunder main
#define ll long long int
#define forep(p, q, r) for (ll(p) = (q); (p) < (r); (p)++)
#define foreq(p, q, r) for (ll(p) = (q); (p) <= (r); (p)++)
#define Aradhya ios_base::sync_with_stdio(false);
#define Pitlawar   \
    cin.tie(NULL); \
    cout.tie(NULL);
using namespace std;

void greet()
{
    // current date  and time based on your system timezone
    time_t ata = time(0);
    tm *time = localtime(&ata);

    if (time->tm_hour < 12)
    {
        cout << "Shubh Sakal Mitra" << endl;
        string vakya = "Shubh Sakal Mitra";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    }

    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Dupar Zali ahe" << endl;
        string vakya = "Dupar Zali ahe";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    }

    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "Sandhyakadi Kay Kaam" << endl;
        string vakya = "Sandhyakadi Kay Kaam";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    }
}

void taarik()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "Aj chi Taarik ahe " << endl
         << dt << endl;
}
void timer(ll hor=0, ll mon=0, ll soc=0){
    ll hr=0,min=0,sec=0;
    while(true){
        Sleep(1000);
        system("cls");
        cout<<"\n\n\n\n";
        cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&& T I M E R &&&&&&&&&&&&&&&&&&&&&&&&&&&&&";
        cout<<"\n";
        cout<<hr<<" hours : "<<min<<" minutes : "<<sec<<" seconds : \n";
        if(hr==hor && min==mon && sec==soc){
            Beep(750,800);
            break;
        }
        sec++;
        if(sec==60){
            sec=0;
            min++;
            if(min==60){
                min=0;
                hr++;
            }
        }
        
    }
}

int thunder()
{
    system("cls");
    system("color ");
    cout << "\t\t\t****************************KAY MHANTOS BHAU****************************>" << endl;

    string password; // to take password
    string ch;       // to take cmd from the user

    do
    {
        cout << "&&&&&&&&&&&&&&&&&&&&&&&" << endl;
        cout << "| ENTER YOUR PASSWORD |" << endl;
        cout << "&&&&&&&&&&&&&&&&&&&&&&&" << endl
             << endl;
        string vakya = "Password Taak";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);

        cin >> password;

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if (password == "thunder")
        {
            cout << "\n<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>\n\n";
            greet();
           
            do
            {
                cout << "\n<==================================================================================================>\n\n";
                cout << endl
                     << "Kay madat kru...." << endl
                     << endl;

                string vakya = "Kay madat kru";
                string cmd = "espeak \"" + vakya + "\"";
                const char *charcmd = cmd.c_str();
                system(charcmd);


                cout << "Kaam Sang ===>";
                getline(cin,ch);
                cout << endl;
                cout << "Ghe tuza uttar ===> ";

                if (ch == "hi" || ch == "hey" || ch == "hello" || ch == "Namaskar")
                {
                    cout << "Namaskar Mitra....." << endl;
                    string vakya = "Namaskar Mitra";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                }

                else if (ch == "bye" || ch == "stop" || ch == "exit")
                {
                    cout << "Good Bye dost, have a nice day!!!!" << endl;
                    string vakya = "Good Bye dost, have a nice day";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                    exit(0);
                }

                else if (ch == "who are you" || ch == "Tu kon hai?" || ch == "about")
                {
                    cout << "Tuza javadcha Mitra !!!" << endl;
                    string vakya = "Tuza javadcha Mitra";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                }
                else if(ch=="shut down"){
                    system("C:\\windows\\system32\\shutdown /s /t 0");
                }
                else if(ch=="set a timer"){
                ll hr,min,sec;
                cout<<"Enter timer for hr:min:sec==>";
                cin>>hr>>min>>sec;
                   string vakya = "Timer lagat ahe";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                timer(hr,min,sec);
                }
                else if (ch == "how are you" || ch == "Kasa ahes" || ch == "how is your day")
                {
                    cout << "Mi ekdum changla , tuza sang.." << endl;
                    string vakya = "Mi ekdum changla , tuza sang";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                }

                else if (ch == "time" || ch == "date")
                {
                    // make function to show date and time
                    taarik();
                }

                else if (ch == "Notepad ughad")
                {
                    cout << "Ughadat aho....." << endl;
                    string vakya = "Ughadat aho";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (ch == "word ughad")
                {
                    cout << "Ughadat aho....." << endl;
                    string vakya = "Ughadat aho";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                    CreateProcess(TEXT("C:\\Windows\\word.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (ch == "excel ughad")
                {
                    cout << "Ughadat aho....." << endl;
                    string vakya = "Ughadat aho";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                    CreateProcess(TEXT("C:\\Windows\\excel.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (ch == "google ughad")
                {
                    cout << "google ughadat ahe....." << endl;
                    string vakya = "google ughadat ahe";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                    system("start https://www.google.com");
                }

                else if (ch == "youtube ughad")
                {
                    cout << "Youtube ughadat ahe....." << endl;
                    string vakya = "Youtube ughadat ahe";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                    system("start https://www.youtube.com");
                }

                else if (ch == "instagram ughad")
                {
                    cout << "instagram ughadat ahe....." << endl;
                    string vakya = "instagram ughadat ahe";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                    system("start https://www.instagram.com");
                }

                else
                {
                    cout << "neat bol , kalal nhi !!!" << endl;
                    string vakya = "neat bol , kalal nhi ";
                    string cmd = "espeak \"" + vakya + "\"";
                    const char *charcmd = cmd.c_str();
                    system(charcmd);
                }

            } while (1);
        }
        else
        {
            system("cls");

            cout << "\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&  YAA BHAU  &&&&&&&&&&&&&&&&&&&&" << endl;

            cout << "======================" << endl;
            cout << "X Chukla Password X" << endl;
            cout << "======================" << endl
                 << endl;
            string vakya = "Chukla Password, Barobar wala taak";
            string cmd = "espeak \"" + vakya + "\"";
            const char *charcmd = cmd.c_str();
            system(charcmd);
        }
    } while (1);

    return 0;
}