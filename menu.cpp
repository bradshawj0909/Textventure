#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main()
{
    int choice;
    cout<<" ---------------------- MENU ----------------------- "<<endl;
    cout<<"                 1. Play the game"<<endl;
    cout<<"                 2. Credits"<<endl;
    cout<<"                 3. Help"<<endl;


    // This is just a basic menu for the prototype.It would be many changes, perhaps a more complex choice option and a coloured one.
    cout<<"                 0. Quit"<<endl;

    cin>>choice;

    switch (choice){

    case 1:
        cout<<"START THE GAME";
        break;

    case 2:
        cout<<" -----------> Jack Bradshaw <----------   "<<endl;
        cout<<" -----------> Jamie Parsons <----------   "<<endl;
        cout<<" -----------> Victoria Angeli <---------- "<<endl;
        cout<<" -----------> Aaron Faulkner <----------  "<<endl;
        cout<<" -----------> Halosta Valentin <----------"<<endl;
        break;

    case 3: cout<<"1.Commands"<<endl;  // We do not have any idea about how this will gonna be written yet. We need to think how the commands and the bestiary will be.
            cout<<"2.Bestiary"<<endl;
            break;


    case 0:
        cout<<"Exiting the game...."<<endl;
        exit(0);

    default:
        cout<<"INVALID INPUT"<<endl;

}

}
