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
	bool DFA = true;

public:
	FA();

	/*
	Pre: string name must be valid and file must exist
	Post:
	Input: string
	Output: 
	What it does: reads the input file given for the Finite Automata in the following form
						- the finite set of states
						- the finite alphabet
						- the initial state q0
						- the set of final states
						- the transitions between one state to another with the given value
	*/
	void readFile(std::string filename);
	
	/*
	Pre: FA must be initialised
	Post:
	Input:
	Output: string
	What it does: returns the finite set of states of the FA
	*/
	std::string getFiniteSetOfStates();
	
	/*
	Pre: FA must be initialised
	Post:
	Input:
	Output: string
	What it does: returns the finite alphabet of the FA
	*/
	std::string getFiniteAlphabet();
	
	/*
	Pre: FA must be initialised
	Post:
	Input:
	Output: string
	What it does: return the set of final states of the FA
	*/
	std::string getSetOfFinalStates();
	
	/*
	Pre: FA must be initialised
	Post:
	Input:
	Output: map<pair<char, int>, char>
	What it does: return a map object composed of a pair made from a "source" state and the transtition value, and the "destination" state
	*/
	std::map<std::pair<char, int>, char> getTransitions();
	
	/*
	Pre: string must be valid
	Post:
	Input: string
	Output:
	What it does: checks if a sequence is accepted by the Deterministic Finite Automata and prints the result
	*/
	void check(std::string sequence);
	~FA();
};

