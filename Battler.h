#pragma once

/* included libs */
#include <string>

/* included headers */
#include "abilities.h"

//Player Class
/*
	The Class of the Battler Variables
*/
class Battler
{
private:
	float Health, Magick;
	int Level, Xp;
	int Attack, Defense;
	abilities ab[];
public:

	//Constructor
	//		Health, Magick, Level, Xp, Attack, Defense  
	Battler( float, float, int, int, int, int );

	//Actions
	void Attack_Battler( Battler* );
	void Take_Damage( int );

	//Get Vars
	float get_Health() { return Health; }
	int get_Level() { return Level; }
 

};