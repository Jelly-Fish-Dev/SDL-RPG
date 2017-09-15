
#include "Battler.h"

#include <iostream>
int main()
{
	Battler* John = new Battler( 100, 10, 10, 0, 50, 20 );
	Battler* Jae = new Battler( 100, 10, 10, 0, 50, 20 );

	std::cout << Jae->get_Health();
	John->Attack_Battler( Jae );
	std::cout << Jae->get_Health();
}