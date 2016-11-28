#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<std::string> words;
	std::string temp;
	
	while(std::cin >> temp)
	{
		words.push_back(temp); // append words to vector
	}
	
	std::cout << "\nNumber of words: " << words.size() << std::endl;

	sort(words.begin(), words.end()); // sort words from beginning to end

	for(int i = 0; i < words.size(); i++)
	{
		if(i == 0 || words[i-1] != words[i])
		{
			std::cout << words[i] << std::endl;
		}
	}
	return 0;
}