/*
 * SPDX-FileCopyrightText: Ondřej Surý (P23010)
 *
 * SPDX-License-Identifier: WTFPL
 */

#pragma once

#include <iostream>

class Disk
{
      public:
	double capacity;
	int averageAccessTime;

	Disk(double _capacity, int _averageAccessTime)
	    : capacity(_capacity), averageAccessTime(_averageAccessTime)
	{
	}

	void printDiskInfo() const
	{
		std::cout << "Capacity: " << capacity << " GB\n";
		std::cout << "Average Access Time: " << averageAccessTime
			  << " ms\n";
	}
};
