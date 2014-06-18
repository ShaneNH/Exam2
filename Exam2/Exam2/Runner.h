#ifndef RUNNER_H
#define RUNNER_H
#include <string>
using namespace std;

class Runner
{
public:
	Runner();
	Runner(string Firstname, string Lastname, int Pace);
	string firstname;
	string lastname;
	int pace;
	string get_firstname();
	string get_lastname();
	int get_pace();
};

#endif