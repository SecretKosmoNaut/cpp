#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int main()
{
    std::vector<std::string> bad_words {"cocksucker", "cunt", "fuck", "motherfucker", "piss", "shit", "tits"};

    std::vector<std::string> dialoge;
    std::string temp;

    bool clean = true;

    while(std::cin >> temp)
    {
    	for(int i = 0; i < bad_words.size(); ++i)
    	{
    		if(temp == bad_words[i]) {
    			temp = "BLEEP";
    		}
    	}

        dialoge.push_back(temp);
    }

    std::cout << std::endl;

    for(int i = 0; i < dialoge.size(); ++i)
    {
    	std::cout << dialoge[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}