/*
 * SPDX-FileCopyrightText: Ondřej Surý (P23010)
 *
 * SPDX-License-Identifier: WTFPL
 */

#pragma once

#include "Battery.hpp"
#include "Computer.hpp"
#include "Disk.hpp"
#include "Memory.hpp"
#include "Processor.hpp"

class Smartphone : public Computer
{
      public:
	Battery battery;

	Smartphone(const Processor &_processor, const Memory &_memory,
		   const Disk &_disk, const Battery &_battery)
	    : Computer(_processor, _memory, _disk), battery(_battery)
	{
	}

	void printSmartphoneInfo() const
	{
		printComputerInfo();
		battery.printBatteryInfo();
	}
};
