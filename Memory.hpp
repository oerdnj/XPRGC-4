/*
 * SPDX-FileCopyrightText: Ondřej Surý (P23010)
 *
 * SPDX-License-Identifier: WTFPL
 */

#pragma once

#include <iostream>

class Memory
{
      public:
	double capacity;
	Memory(double _capacity) : capacity(_capacity) {}

	void printMemoryInfo() const
	{
		std::cout << "Capacity: " << capacity << " GB\n";
	}
};
