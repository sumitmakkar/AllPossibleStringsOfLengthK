#include <iostream>

void PrintPossibleStrings(char* charactersSet, std::string currentString, const int charactersSetSize, int k)
{
	if (!k) 
	{
		std::cout << currentString << std::endl;
		return;
	}

	for (int i = 0; i < charactersSetSize; i++)
	{
		std::string newString = currentString + charactersSet[i];
		PrintPossibleStrings(charactersSet, newString, charactersSetSize, k - 1);
	}
}

int main()
{
	const int  characterSetSize				   = 2;
	char	   charactersSet[characterSetSize] = {'A', 'B'};
	int		   k							   = 3;
	PrintPossibleStrings(charactersSet, "", characterSetSize, k);
	return 0;
}