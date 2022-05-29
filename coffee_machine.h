/*
 * coffe_machine.h
 *
 *  Created on: Aug 6, 2021
 *      Author: tanya
 */

#ifndef COFFEE_MACHINE_H_
#define COFFEE_MACHINE_H_

class coffe_machne_t
{
	// members
	unsigned int  number_of_cups;
	unsigned int  mls_of_water;
	unsigned int  grams_of_coffee;
	unsigned int  grams_of_sugar;

	// construct & destruct
	coffe_machne_t() :
		number_of_cups(0),
		mls_of_water(0),
		grams_of_coffee(0),
		grams_of_sugar(0)
	{

	}

	void fill(int number_of_cups, int mls_of_water);

	// interfaces
};


#endif /* COFFEE_MACHINE_H_ */
