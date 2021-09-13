#include "SequentialSearch.h"

int SequentialSearch(int size, std::vector<std::string> wordsToSearch, std::string searchKey)
{
	int i = 0;
	while (i < size && wordsToSearch.at(i) != searchKey)
		i++;
	if (i < size)
		return i;
	else
		return -1;
}
