#include "global.h"

using namespace std;

string playerNames[2];
int playerProfile[12];


/*
/***DEFINING THE NAMES FOR CELLS IN PLAYER'S PROFILE TABLE****/
/*
typedef gender playerProfile[0];

typedef numberPlayerName playerProfile[1];
typedef numberPlayerAlias playerProfile[2];

typedef speciality playerProfile[3];
typedef weapon playerProfile[4];
typedef playerBasicAttack playerProfile[5];
typedef playerSpecialAttack playerProfile[6];

typedef playerHealth playerProfile[7];
typedef playerMana playerProfile[8];
typedef playerStamina playerProfile[9];
typedef playerWill playerProfile[10];
typedef playerMight playerProfile[11];

/****DEFINIG THE NAMES FOR CELLS IN PLAYER'S NAMES TABLE****/
/*
typedef playerName playerNames[0];
typedef playerAlias playerNames[1]; */

/*

struct
{
    string name; //the names of the character
    string alias; //the nicknames of the character

    int numberName;
    int numberAlias;

    bool gender; //the gender of the character

    int speciality; //the class of the character
    int weapon; //the special skill of the character
    int basicAttack; //the points of basic attack of the character
    int specialAttack; //the points of special attack

    int health; //health points
    int mana; //mana points
    int stamina; //stamina points
    int will; //will pojnts
    int might; //might points
} profile;

profile avatar; */

 int lottery(int first, int last) //just random numbers generator
 {
     return rand()%(1 + last - first) + first;
 }



 void playerGenerator(int *t, string *p) //this is the place where the hero here is born
 {

 /****CHOOSING PLAYER'S GENDER****/

     cout << "Are you female or male?";
     cin >> t[0];

/****CHOOSING PLAYER'S CLASS****/

    cout << "Who are you?";
    cin >> t[3];

     if (t[3] == 1){
        cout << "Warrior";

        t[5] = 10;
        t[7] = 200;
        t[8] = 0;
        t[9] = 50;
        t[10] = 10;
        t[11] = 20;
     }

     else if (t[3] == 2){
        cout << "Archer";

        t[5] = 15;
        t[7] = 150;
        t[8] = 0;
        t[9] = 200;
        t[10] = 10;
        t[11] = 10;

    }

    else if (t[3] == 3){
        cout << "Mage";

        t[5] = 20;
        t[7] = 100;
        t[8] = 200;
        t[9] = 100;
        t[10] = 20;
        t[11] = 10;

    }

     else {
        cout << "You idiot!";
    }

/****CHOOSING PLAYER'S WEAPON****/

    cout << "Who are you?";
    cin >> t[4];

     if (t[4] == 1){
        cout << "SWORD";
     }

     else if (t[4] == 2){
        cout << "MAGIC";

    }

    else if (t[4] == 3){
        cout << "";

    }

     else {
        cout << "You idiot!";
    }

/****GENERATING PLAYER'S NAME****/

  if (t[0] == 0){
        cout << "Female";
        p[0] = "Kotek";
        p[1] = "De";
     }

     else if (t[0] == 1){
        cout << "Male";
        p[0] = "Piesek";
        p[1] = "The";
    }

     else {
        cout << "You idiot!";
    }

     string avatarFemaleNameCollection[99];
     string avatarMaleNameCollection[99];
     string avatarAliasCollection[99];
 }

  void menu()
 {

    int x;

    cout << "//// MENU ////" << endl;
    cout << "1. New Game\n2. About\n3. Quit" << endl << endl;
    cout << "To continue, type the number... \n";

    cin >> x;

    switch(x)
    {
    case 1:
        {
            system("cls");
            playerGenerator(playerProfile, playerNames);
            break;
        }
    case 2:
        {
            system("cls");
            cout << "//// ABOUT ////" << endl;
            cout << "Irrgarten is a classical, text-based console game in fantasy world with RPG elements. Coded by JabWik." << endl << endl;

            menu();

            break;
        }
    case 3:
        {
            exit(0);
            break;
        }
    }

 }

int main()

{
    srand(time(NULL));

    menu();

    return 0;
}
