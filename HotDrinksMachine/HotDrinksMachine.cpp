#include "stdafx.h"
#include <iostream>
#include <string>
#include <memory>
using namespace std;

#include "Drinks.h"
#include "DrinksWithParameters.h"
#include"CoffeType.h"

int main()
{
	DrinksWithParameters dwp;
	dwp.make_drink("coffe");

	CoffeType coffe_type;
	coffe_type.make_coffe("espresso");
	coffe_type.make_coffe("latte");
	getchar();
    return 0;
}

