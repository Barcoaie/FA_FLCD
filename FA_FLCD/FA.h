#pragma once
#include<string>
#include<map>
#include<fstream>
#include<utility>

class FA
{
private:
	std::string finite_set_of_states = "";
	std::string finite_alphabet = "";
	char q0 = ' ';
	std::string set_of_final_states = "";
	std::map<std::pair<char, int>, char> * transitions = new std::map<std::pair<char, int>, char>();

public:
	FA();
	void readFile(std::string filename);
	std::string getFiniteSetOfStates();
	std::string getFiniteAlphabet();
	std::string getSetOfFinalStates();
	std::map<std::pair<char, int>, char> getTransitions();
	void check(std::string sequence);
	~FA();
};

