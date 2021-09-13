#include "HashFunction.h"

void HashingFunction(std::vector<std::string> vectorToHash,
	std::vector<std::string>& hashTableToUse,
	int hashingConstant,
	int modConstant)
{
	std::string hashString;

	for (int i = 0; i < vectorToHash.size(); i++)
	{
		hashString = vectorToHash.at(i);
		int hashIndex = 0;
		for (int j = 0; j < hashString.size(); j++)
		{
			hashIndex = (hashIndex * hashingConstant + (int)hashString[j] - 96) % modConstant;
		}
		auto iterator = hashTableToUse.begin() + hashIndex;
		if (hashTableToUse.at(hashIndex) == "0")
		{
			hashTableToUse.insert(iterator, vectorToHash.at(i));
			//std::cout << "Value: " << hashTableToUse.at(hashIndex) << " At index: " << hashIndex << std::endl;
		}
		else if (hashTableToUse.at(hashIndex) != "0")
		{
			int nextIndex = hashIndex;
			while (true)
			{
				if (hashTableToUse.at(nextIndex) != "0" && nextIndex < hashTableToUse.size())
					nextIndex++;
				else if (hashTableToUse.at(nextIndex) == "0")
				{
					hashTableToUse.insert(iterator + 1, vectorToHash.at(i));
					//std::cout << "Value: " << hashTableToUse.at(nextIndex) << " At index: " << nextIndex << std::endl;
					break;
				}
				else
				{
					std::cout << "Error with hashtable indexing occurred" << std::endl;
					exit(EXIT_FAILURE);
				}

			}
		}
	}
}
