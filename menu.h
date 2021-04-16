#pragma once

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

using namespace std;

class Menu
{
    bool inGame;
    bool exitGame;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    void coordinates(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition( hConsole, coord);
    }
    void credits()
    {
        char c='0';
        while(c!=' ')
        {
            system("CLS");
            SetConsoleTextAttribute(hConsole,12);
            coordinates(37,10);
            cout<<" -----------> Jack Bradshaw <----------   "<<endl;
            coordinates(37,12);
            cout<<" -----------> Jamie Parsons <----------   "<<endl;
            coordinates(37,14);
            cout<<" -----------> Victoria Angeli <---------- "<<endl;
            coordinates(37,16);
            cout<<" -----------> Aaron Faulkner <----------  "<<endl;
            coordinates(37,18);
            cout<<" -----------> Halosta Valentin <----------"<<endl;
            coordinates(49,23);
        cout<<"       BACK    ";
        while (c!=char(13))
        {
            SetConsoleTextAttribute(hConsole,15);
            coordinates(46,23);
            cout<<">";
            coordinates(68,23);
            cout<<"<";
            coordinates(0,0);
            c=getch();
            coordinates(46,23);
            cout<<"  ";
            coordinates(68,23);
            cout<<"  ";
        }
        c=' ';
        system("CLS");
        }
    }
    void commands()
    {
        char c='0';
        while (c!=' ')
        {
        system("CLS");
        SetConsoleTextAttribute(hConsole,11);
        coordinates(49,15);
        cout<<" Press 1 to ATTACK ";
        coordinates(49,18);
        cout<<" Press 2 to BLOCK  ";
        coordinates(49,23);
        cout<<"       BACK    ";
        while (c!=char(13))
        {
            SetConsoleTextAttribute(hConsole,15);
            coordinates(46,23);
            cout<<">";
            coordinates(68,23);
            cout<<"<";
            coordinates(0,0);
            c=getch();
            coordinates(46,23);
            cout<<"  ";
            coordinates(68,23);
            cout<<"  ";
        }
        c=' ';
        system("CLS");
        }
    }
public:
    void main_menu();
    Menu();
};