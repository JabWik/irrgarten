#ifndef STATS_H_INCLUDED
#define STATS_H_INCLUDED

typedef struct
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
}


#endif // STATS_H_INCLUDED
