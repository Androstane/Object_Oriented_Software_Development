// Lab_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "lab1_header.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

//parse a input file
//return file_open error if the file cannot be opened. 
int parse(vector<string>* file_content, char* file_name) {
	ifstream ifs(file_name);
	if (ifs.fail()) {
		cout << "Error opening file." << endl;
		return fileopen_error;
	}
	if (ifs.is_open())
	{
		while (!ifs.eof()) {
			string line_1;
			ifs >> line_1;
			file_content->push_back(line_1);
		}
	}
	ifs.close();
	return success;
}


//print out usage_message if size of input from command line is not correct. 
int usage_message(char* name[]) {
	cout << "Wrong number of argument" << endl;
	cout << "usage:" << name[0] << " Name of your input file" << endl;
	return inputlength_error;
}

//check if a string contains only digit
bool is_digits(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}


int main(int argc, char* argv[])
{   //check if there are exactly 2 input from command line
	//if there is not then print the usage message indicate the number of command line argument is wrong
	//return the input length error and exit  
	if (argc != 2){
		return usage_message(argv);
	}
	vector<string> str;
	//Parse the input file and check if it is successful
	//If not return the fileopen error and exit
	if (parse(&str, argv[inputfile_name]) != success) {
		return fileopen_error;
	}
	vector<int> INT;

	//store all strings contain only digit into INT
	//print out the strings contain not only digit to output stream
	for (unsigned int i = 0; i < str.size()-1; i++) {
		if (is_digits(str[i])) {
			int digit;
			istringstream is(str[i]);
			is >> digit;
			INT.push_back(digit);
		}
		else {
			cout << str[i] << endl;
		}
	}
	//print out all integers in INT. 
	for (unsigned int i = 0; i < INT.size(); i++) {
			cout << INT[i] << endl;
	}


	    

}

