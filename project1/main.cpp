#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <cmath>
#include "HashFunction.h"
#include "SequentialSearch.h"

int main()
{
	std::ifstream dictToParse;				// dictionary file variable
	std::vector<std::string> dictOfWords;	// vector to store words from our dictionary file
	std::vector<std::string> hashTable;				// our hash table array ----> tried to make an actual array but wasn't able to set the proper size given the runtime nature of the string vector

	dictToParse.open("dictionary.txt");		// open the file to write from
	if (!dictToParse)
	{
		std::cout << "No file was opened";
		return 1;
	}

	std::string nextWord;					// Parse the file and add words to our vector variable
	while (dictToParse >> nextWord)
	{
		dictOfWords.push_back(nextWord);
	}

	dictToParse.close();					// close our file since we no longer need it

	// create a hash table
	hashTable.resize(dictOfWords.size() * 2, "0");	// Set our hash table size scaled from our word vector

	//HashingFunction(dictOfWords, hashTable, 1000003, 256);

	int result = SequentialSearch(dictOfWords.size(), dictOfWords, "aahed");
	std::cout << "Result of sequential search is index: " << result << std::endl;
}

int BinarySearch(int size, std::vector<std::string> wordsToSearch, std::string searchKey)
{
	int left = 0;
	int right = size - 1;
	int middle;

	while (left <= right)
	{
		middle = floor((left + right) / 2);

	}
}
	// make binary search (separate files?)

	// make hash search (separate files?)
