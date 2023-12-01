/*
 * SPDX-FileCopyrightText: Ondřej Surý (P23010)
 *
 * SPDX-License-Identifier: WTFPL
 */

#pragma once

#include <iostream>

#include "Computer.hpp"
#include "Disk.hpp"
#include "Memory.hpp"

class Computer
{
      public:
	Processor processor;
	Memory memory;
	Disk disk;

	Computer(const Processor &_processor, const Memory &_memory,
		 const Disk &_disk)
	    : processor(_processor), memory(_memory), disk(_disk)
	{
	}

	void printComputerInfo() const
	{
		std::cout << "Computer Specifications:\n";
		processor.printProcessorInfo();
		memory.printMemoryInfo();
		disk.printDiskInfo();
	}
};
