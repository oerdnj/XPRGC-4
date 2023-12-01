/*
 * SPDX-FileCopyrightText: Ondřej Surý (P23010)
 *
 * SPDX-License-Identifier: WTFPL
 */

#include "Battery.hpp"
#include "Disk.hpp"
#include "Memory.hpp"
#include "Processor.hpp"
#include "Smartphone.hpp"

int main()
{
	Processor cpu(4, 3.2);
	Memory ram(8.0);
	Disk storage(256.0, 10);
	Battery battery(3000.0);

	Smartphone myPhone(cpu, ram, storage, battery);

	myPhone.printSmartphoneInfo();

	return 0;
}
