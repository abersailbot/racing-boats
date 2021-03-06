/*
	compass.h 

	Provides functions for interacting with Bobalong's HMC6343 electronic compass

	This code is released under the terms of the LGPLv3 licence.
 */

#ifndef COMPASS_H
#define COMPASS_H

class HMC6343 {
public:
	/**********************************************************************************
	 * Initialises the wire library.
	 * 
	 *********************************************************************************/
	void initialise();

	/**********************************************************************************
	 * Returns the compass's bearing.
	 * 
	 *********************************************************************************/
	int get_bearing();

	/**********************************************************************************
	 * Returns the compass's pitch.
	 * 
	 *********************************************************************************/
	int get_pitch();

	/**********************************************************************************
	 * Returns the compass's roll.
	 * 
	 *********************************************************************************/
	int get_roll();

	/**********************************************************************************
	 * Pools the compass to update its data.
	 * 
	 * @return 			Returns true if the compass was successfully polled.
	 *********************************************************************************/
	bool poll_data();
private:
	int bearing;
	int pitch;
	int roll;
};

// Arduino style
extern HMC6343 Compass;

#endif
