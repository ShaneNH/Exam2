#include "Runner.h"
#include <string>
#include <iostream>
#include <vector>

Runner::Runner(){
	firstname = "";
	lastname = "";
	pace = 0;
}
Runner::Runner(string Firstname, string Lastname, int Pace){
	firstname = Firstname;
	lastname = Lastname;
	pace = Pace;
}

string Runner::get_firstname(){
	return firstname;
}

string Runner::get_lastname(){
	return lastname;
}

int Runner::get_pace(){
	return pace;
}
