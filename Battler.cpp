#include "Battler.h"
#include <iostream>
Battler::Battler (float Health, float Magick, int level, int XP, int Attack, int Defense )
{
	this->Health = Health;
	this->Magick = Magick;
	this->Level = level;
	this->Xp = XP;
	this->Attack = Attack;
	this->Defense = Defense;
}

void Battler::Attack_Battler ( Battler* Target )
{
	Target->Take_Damage( this->Attack );
	std::cout << "Attacked for " << this->Attack << std::endl;
}

void Battler::Take_Damage( int Damage )
{
	this->Health = (Health - Damage);
}