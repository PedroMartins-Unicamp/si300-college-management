/*
 * Utils.cpp
 *
 *  Created on: 8 de abr. de 2024
 *      Author: juan
 */

#include "../../include/utils/Utils.hpp"
#include "../../include/system/SysInfo.hpp"

#include <iostream>

void Utils::printMessage(string text)
{
	cout << "* " << SysInfo::getSystemName() << " message: " << text << endl;
}
