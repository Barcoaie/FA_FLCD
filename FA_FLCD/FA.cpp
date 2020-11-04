#include "FA.h"
#include<iostream>

FA::FA()
{
}

void FA::readFile(std::string filename)
{
	std::ifstream f(filename);
	
	std::string line;

	std::getline(f, line);
	this->finite_set_of_states = this->finite_set_of_states + line;
	//std::cout << this->finite_set_of_states << '\n';
	
	std::getline(f, line);
	this->finite_alphabet = this->finite_alphabet + line;
	//std::cout << this->finite_alphabet << '\n';

	std::getline(f, line);
	this->q0 = line.at(0);
	//std::cout << this->q0 << '\n';

	std::getline(f, line);
	this->set_of_final_states = this->set_of_final_states + line;
	//std::cout << this->set_of_final_states << '\n';

	while (std::getline(f, line)) {
		std::pair<char, int> pair;
		pair.first = line[0];
		pair.second = line[2] - '0';
		transitions->emplace(pair, line[6]);
	}
	//std::cout << this->transitions << '\n';
}

std::string FA::getFiniteSetOfStates()
{
	return finite_set_of_states;
}

std::string FA::getFiniteAlphabet()
{
	return finite_alphabet;
}

std::string FA::getSetOfFinalStates()
{
	return set_of_final_states;
}

std::map<std::pair<char, int>, char> FA::getTransitions()
{
	return *transitions;
}

void FA::check(std::string sequence)
{
	int pos_seq, pos_map;
	pos_map = 0;
	for (pos_seq = 0; pos_seq < sequence.size(); pos_seq++) {
		std::cout << sequence[pos_seq] << '\n';
		//still TODO
	}
}

FA::~FA()
{
}
