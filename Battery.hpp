/*
 * SPDX-FileCopyrightText: Ondřej Surý (P23010)
 *
 * SPDX-License-Identifier: WTFPL
 */

#pragma once

#include <iostream>

class Battery
{
      public:
	double capacity;

	Battery(double _capacity) : capacity(_capacity) {}

	void printBatteryInfo() const
	{
		std::cout << "Battery Capacity: " << capacity << " mAh\n";
	}
};
