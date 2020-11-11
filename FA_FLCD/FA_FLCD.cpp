// FA_FLCD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FA.h"

int main()
{
	FA * fa = new FA();
	fa->readFile("FA.in");
	int input;
	bool ok = true;
	std::string menu_options = "1. Finite Set of States\n2. Finite Alphabet\n3. Transitions\n4. Set Of Final States\n5. Check if a sequence is valid\n0. Exit\n";
	std::cout << menu_options;
	std::string sequence;
	while (ok) {
		std::cout << ">> ";
		std::cin >> input;
		switch (input)
		{
		case 1:
			std::cout << fa->getFiniteSetOfStates() << '\n';
			break;
		case 2:
			std::cout << fa->getFiniteAlphabet() << '\n';
			break;
		case 3:
			for (auto &n : fa->getTransitions()) {
				std::cout << n.first.first << ',' << n.first.second << " = " << n.second << '\n';
			}
			break;
		case 4:
			std::cout << fa->getSetOfFinalStates() << '\n';
			break;
		case 5:
			std::cout << "Input sequence for DFA to check: ";
			std::cin >> sequence;
			fa->check(sequence);
			break;
		case 0:
			ok = false;
		default:
			break;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
