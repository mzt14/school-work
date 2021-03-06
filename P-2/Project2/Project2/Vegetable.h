/*****************************************
** File:    Vegetable.h
** Project: CMSC 341 Project 2, Fall 2015
** Author:  Zafar Mamarakhimov
** Date:	10/16/2015
** Section: 5
** E-mail:  mzafar2@umbc.edu
**
**
**
***********************************************/

#ifndef VEGETABLE_H
#define VEGETABLE_H


#include "Food.h"
class Vegetable :
	public Food
{
public:
	Vegetable();
	Vegetable(std::string name, FOOD_TYPE type, double cost);
	Vegetable(std::string name, double cost);


};

#endif
