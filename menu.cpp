#include "menu.h"
Menu::Menu() //Constructor
{
    this->inGame = false;
    this->exitGame = false;
}

void Menu::main_menu()
{
    char c;
    int choice=2;
    system("CLS");
    exitGame=false;
    while (inGame==false && exitGame==false)
    {
    SetConsoleTextAttribute(hConsole,10);
    coordinates(16,3);
    cout<<"####### ####### #     # ####### #     # ####### #     # ####### #     #  ######  #######  ";
    coordinates(16,4);
    cout<<"   #    #        #   #     #    #     # #       ##    #    #    #     #  #     # #       ";
    coordinates(16,5);
    cout<<"   #    #         # #      #    #     # #       # #   #    #    #     #  #     # #      ";
    coordinates(16,6);
    cout<<"   #    #####      #       #    #     # #####   #  #  #    #    #     #  ######  #####  ";           //Creating the title for the game in ASCII
    coordinates(16,7);
    cout<<"   #    #         # #      #     #   #  #       #   # #    #    #     #  #   #   #     ";
    coordinates(16,8);
    cout<<"   #    #        #   #     #      # #   #       #    ##    #    #     #  #    #  #     ";
    coordinates(16,9);
    cout<<"   #    ####### #     #    #       #    ####### #     #    #     #####   #     # ####### ";
    coordinates(16,10);
    cout<<"----------------------------------------------------------------------------------------- ";

    coordinates(52,15);
    cout<<" START ";
    coordinates(52,17);
    cout<<"COMMANDS  ";
    coordinates(52,19);
    cout<<"CREDITS ";
    coordinates(52,21);
    cout<<" QUIT ";
    while (c!=char(13))
    {
        SetConsoleTextAttribute(hConsole,15);
        coordinates(50,15+choice);
         cout<<">";
        coordinates(61,15+choice);
         cout<<"<";
        coordinates(0,0); // Reset the coordinates to can moving the "<" and ">" to our desire option
        c=getch(); //Waits for a key from the user to be read, in our case "S" or "W"
        coordinates(49,15+choice);
        cout<<"  ";
        coordinates(60,15+choice);
        cout<<"  ";
        if (c=='s') //Press S to scroll down into main menu
        {
            if (choice<6)
            {
                choice=choice+2;
            }
        }
        if (c=='w') ////Press W to scroll up into main menu
        {
            if (choice>0)
            {
                choice=choice-2;
            }
        }
    }
    if (choice == 0)
    {
        inGame=true;
        //combat();
    }
    if (choice == 2)
    {
       commands();

    }
    if (choice == 4)
    {
      credits();
    }
    if (choice==6)
    {
        inGame=false;
        exitGame=true;
        coordinates(90,27);
        SetConsoleTextAttribute(hConsole,10);
        cout<<"Exiting the game... ";
        Sleep(1000);
    }
    choice=2;
    c=' ';
    system("CLS");
    }
}
