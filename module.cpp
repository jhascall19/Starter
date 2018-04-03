#include "module.hpp"
#include <iostream>
int count_nickels(int nickels)
{
    int v2 = nickels; 
    v2 = v2/5;   
    return v2;

}


int count_all_coins(int pennies, int nickels, int dimes)
{
      
    return pennies+(nickels*5)+(dimes*10);

}

void guess_coins(int amount)
{
	if (amount/25 > 1)
	{
		int quarters = amount/25;
		amount = (amount % 25);
		std::cout<< "quarters"; 
		std::cout<< quarters; 
	}

	if (amount / 10 > 1)
	{
		int dimes = amount/10;
		amount = (amount % 10);
		std::cout<< "dimes"; 
		std::cout<< dimes; 
	}
	if (amount/5 >1)
	{
		int nickels = amount/5;
		amount = (amount % 5);
		std::cout<< "nickels"; 
		std::cout<< nickels; 
	}
	if (amount/1 >1)
	{
		int pennies = amount;
		amount = 0;
		std::cout<< "pennies"; 
		std::cout<< pennies; 
	}
    

}

Quarter::Quarter(int amount)
{
amount = (amount*25);
}

int Quarter::getQuarters() 
{
	return amount/25 ;
}