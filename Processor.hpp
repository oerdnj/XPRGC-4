/*
 * SPDX-FileCopyrightText: Ondřej Surý (P23010)
 *
 * SPDX-License-Identifier: WTFPL
 */

#pragma once

#include <iostream>

class Processor
{
      public:
	int cores;
	double frequency;

	Processor(int _cores, double _frequency)
	    : cores(_cores), frequency(_frequency)
	{
	}

	void printProcessorInfo() const
	{
		std::cout << "Cores: " << cores << "\n";
		std::cout << "Frequency: " << frequency << " GHz\n";
	}
};
