/*****************************************
** File:    Store.cpp
** Project: CMSC 341 Project 2, Fall 2015
** Author:  Zafar Mamarakhimov
** Date:
** Section: 5
** E-mail:  mzafar2@umbc.edu
**
** 
**
***********************************************/

#include "Store.h"
#include<sstream>



//default constructor
Store::Store() :meatCount(0), fruitCount(0), vegCount(0), starchCount(0), sweetCount(0)
{

}

void Store::addFood(Food* food)
{

}

Food* Store::getFoodByType(Food::FOOD_TYPE ftype){



	return foodList;
}


void Store::stockStore(std::string filename)
{
	input.open(filename);
	if (input.fail())
	{
		std::cout << "File is not found!";
		exit(1);
	}	
	else
	{
		std::string foodType = "";
		double cost = 0.0;
		std::string line = "";
		std::string skip = "";
		while (std::getline(input, line, '\n')) //delimeter is new line
		{
			if (line != "")
			{
				std::stringstream stream(line);
				std::string foodName = "";
														
				while (std::getline(std::getline(stream, skip, '"'), foodName, '"') >> foodType >> cost) //
				{					
					std::cout << "current word " << foodName << " "<< foodType << " " <<cost <<  std::endl;
				}
			}
		}
	}


	input.close();


}

void Store::printStore(std::ofstream& stream){
	
	stream << "\n ---------- Store ----------" << std::endl;
}

Store::~Store()
{
}
