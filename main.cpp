#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::ifstream words;
	//Opening file with argument for binary mode
	words.open("F:\\__C++\\Skillbox\\19\\19.5.1 Searching words in file\\Files\\words.txt");

	std::string buffer;
	std::cout << "Please, input word for searching in a file:" << std::endl;
	std::string searching_word;
	std::cin >> searching_word;

	int count = 0;
	while (!words.eof()) {
		words >> buffer;
		if (buffer == searching_word)
			count += 1;
	}

	if (count > 0)
		std::cout << "Searching complete with " << count << " matches!" << std::endl;
	else
		std::cout << "Searching didn't find any matches!" << std::endl;

	words.close();
}
