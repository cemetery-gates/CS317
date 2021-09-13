#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

void HashingFunction(std::vector<std::string> vectorToHash,
	std::vector<std::string>& hashTableToUse,
	int hashingConstant,
	int modConstant);
