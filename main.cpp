#include <iostream>
#include <string>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int RandNum, Guess, a, s, attempts = 0, k = 3,Randinput[1][100],l=0,m=0;
    string replay = "y";

    system("cls");

    SetConsoleTextAttribute(hConsole, 10);
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               #-------------------------------------------------------#" << endl;
    cout << "               #                                                       #" << endl;
    cout << "               #      WELCOME TO THE NUMBER GUESSING GAME BY BIJAN     #" << endl;
    cout << "               #                                                       #" << endl;
    cout << "               #------------------(version 0.0.11.1)-------------------#" << endl;

    SetConsoleTextAttribute(hConsole, 13);
    cout << "" << endl;
    cout << "               enter eny key to start >> ";
    getch();
    system("cls");

    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Upadating drivers..." << endl;
    sleep(1);
    SetConsoleTextAttribute(hConsole, 11);
    cout << "               analyzing memories...." << endl;
    sleep(1);
    SetConsoleTextAttribute(hConsole, 14);
    cout << "               initializing...." << endl;
    sleep(1);
    system("cls");
    SetConsoleTextAttribute(hConsole, 12);
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[///--0%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[///--1%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[///--2%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[///--10%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[///--12%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[///--15%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[////--18%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[//////--21%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[//////////--28%] ";
    sleep(1);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[///////////////--40%] ";
    sleep(2);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               Setting up enviroment[///////////////////////////////////////////////--80%] ";
    sleep(4);
    system("cls");
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "               $$ Setting up enviroment[-//////////////////////////////////////////////////////////////////--100%] ";
    sleep(1);
    system("cls");

    while (true)
    {
        SetConsoleTextAttribute(hConsole, 10);
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "               $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
        cout << "               |----------------------------------|" << endl;
        cout << "               |                                  |" << endl;
        cout << "               |         1. Manual Entry          |" << endl;
        cout << "               |                                  |" << endl;
        cout << "               |----------------------------------|" << endl;
        cout << "               |                                  |" << endl;
        cout << "               |         2. Auto Entry            |" << endl;
        cout << "               |                                  |" << endl;
        cout << "               |----------------------------------|" << endl;

        SetConsoleTextAttribute(hConsole, 13);
        cout << "" << endl;
        cout << "               Enter Number Guessing type (1 or 2) >>";
        cin >> a;

        if (a == 2)
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, 14);
            cout << "" << endl;
            cout << "" << endl;
            cout << "               Enter eny key to start the game >> ";
            getch();
            system("cls");
            break;
        }
        else if (a == 1)
        {
            cout << "" << endl;
            SetConsoleTextAttribute(hConsole, 14);
            cout << "               set a randum number between 1 - 100 : ";
            cin >> RandNum;
            Randinput[1][l=0]= RandNum;
            l++;
            break;
        }
        else
        {    
            system("cls");
            SetConsoleTextAttribute(hConsole, 12);
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "                INVALID INPUT" << endl;
            sleep(2);
            SetConsoleTextAttribute(hConsole, 14);
            continue;
        }
    }
    while (true)
    {
        system("cls");
        attempts = 0;
        if (a == 2 && k == 3)
        {
            RandNum = rand() % 100;
            Randinput[0][m] = RandNum;
            m++;
        }
        SetConsoleTextAttribute(hConsole, 10);
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "               #-------------------------------------------------------#" << endl;
        cout << "               #                                                       #" << endl;
        cout << "               #    WELCOME TO THE NUMBER GUESSING GAME BY SKILLPRO    #" << endl;
        cout << "               #                                                       #" << endl;
        cout << "               #------------------(version 0.0.11.1)-------------------#" << endl;
        if (a == 2 or a == 1)
        {

            while (true)
            {
                while (attempts < 3)
                {
                    cout << "" << endl;
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, 13);
                    cout << "               Guess The number between 1 - 100 : ";
                    cin >> Guess;
                    attempts++;

                    if (Guess < RandNum)
                    {
                        SetConsoleTextAttribute(hConsole, 12);
                        if (attempts < 3)
                        {
                            cout << "               OOps, your guess is lower then the number i had set.(Attempts left : " << 3 - attempts << ")" << endl;
                            cout << "               try again" << endl;
                        }
                    }
                    else if (Guess > RandNum)
                    {
                        SetConsoleTextAttribute(hConsole, 12);
                        if (attempts < 3)
                        {
                            cout << "               OOps, your guess is higher then the number i had set.(Attempts left : " << 3 - attempts << ")" << endl;
                            cout << "               try again" << endl;
                        }
                    }
                    else if (Guess == RandNum)
                    {
                        break;
                    }
                }

                if (attempts > 2 && Guess != RandNum)
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, 12);
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "               #----------------------(YOU Loss!)-----------------------#" << endl;
                    cout << "               #                                                        #" << endl;
                    cout << "               #                 GAME OVER , YOU LOss                   #" << endl;
                    cout << "               #                                                        #" << endl;
                    cout << "               #------------------(||||||||||||||||)--------------------#" << endl;
                    sleep(2);
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "" << endl;
                    cout << "Correct answer is :" << RandNum << endl;
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, 14);
                    cout << "" << endl;
                    cout << "               $Press enter to continue >>";
                    getch();
                    system("cls");
                    break;
                }
                else if (Guess == RandNum)
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "               #----------------------(YOU WON!)-----------------------#" << endl;
                    cout << "               #                                                       #" << endl;
                    cout << "               #           YOUR SELECTION IS '100%' CORRECT            #" << endl;
                    cout << "               #                                                       #" << endl;
                    cout << "               #------------------(||||||||||||||||)-------------------#" << endl;
                    sleep(2);
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "" << endl;
                    cout << "Correct answer is :" << RandNum << endl;
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, 14);
                    cout << "" << endl;
                    cout << "               $Press enter to continue >>";
                    getch();
                    system("cls");
                }
                if (Guess == RandNum)
                {
                    break;
                }
            }
            while (true)
            {
                if (replay == "y" or replay == "n")
                {
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                }
                cout << "                Wamma play again? (y/n)";
                cin >> replay;
                if (replay == "y")
                {
                    break;
                }
                else if (replay == "n")
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, 14);
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "                Okey, see you soon" << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "" << endl;

                    break;
                }
                else
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, 12);
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "                INVALID INPUT" << endl;
                    SetConsoleTextAttribute(hConsole, 14);
                }
            }
            if (replay == "y")
            {
                while (true)
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                    cout << "               $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
                    cout << "               |----------------------------------|" << endl;
                    cout << "               |                                  |" << endl;
                    cout << "               |   1. Continue with old number    |" << endl;
                    cout << "               |                                  |" << endl;
                    cout << "               |----------------------------------|" << endl;
                    cout << "               |                                  |" << endl;
                    cout << "               |        2. Set new number         |" << endl;
                    cout << "               |                                  |" << endl;
                    cout << "               |----------------------------------|" << endl;
                    cout << "               |                                  |" << endl;
                    cout << "               |     3. Auto Set new number       |" << endl;
                    cout << "               |                                  |" << endl;
                    cout << "               |----------------------------------|" << endl;
                    SetConsoleTextAttribute(hConsole, 13);
                    cout << "" << endl;
                    cout << "               Enter your selection (1 or 2) >> ";
                    cin >> k;
                    if (k == 2)
                    {
                        SetConsoleTextAttribute(hConsole, 14);
                        cout << "" << endl;
                        cout << "" << endl;
                        cout << "               set a  (new) randum number between 1 - 100 : ";
                        cin >> RandNum;
                        system("cls");
                        SetConsoleTextAttribute(hConsole, 14);
                        cout << "" << endl;
                        cout << "               $Enter any key to start the game >>";
                        getch();
                        system("cls");
                        attempts = 0;
                        break;
                    }
                    else if (k == 1)
                    {
                        SetConsoleTextAttribute(hConsole, 14);
                        cout << "" << endl;
                        cout << "               $Enter any key to start the game >>";
                        getch();
                        system("cls");
                        break;
                        ;
                    }
                    else if (k == 3)
                    {
                        // RandNum = rand() % 100;
                        // system("cls");
                        SetConsoleTextAttribute(hConsole, 14);
                        cout << "" << endl;
                        cout << "               $Enter any key to start the game >>";
                        getch();
                        system("cls");
                        attempts = 0;
                        break;
                    }
                    else
                    {
                        system("cls");
                        SetConsoleTextAttribute(hConsole, 12);
                        cout << "" << endl;
                        cout << "" << endl;
                        cout << "" << endl;
                        cout << "                INVALID INPUT" << endl;
                        sleep(2);
                        SetConsoleTextAttribute(hConsole, 14);
                    }
                }
            }
            else if (replay == "n")
            {
                break;
            }
        }
    }
    SetConsoleTextAttribute(hConsole, 15);
}