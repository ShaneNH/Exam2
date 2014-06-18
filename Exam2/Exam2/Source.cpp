#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Runner.h"

using namespace std;

int main(){

	vector<Runner> runner(2000);
	ifstream reg;
	int i = 0;
	int count = 0;
	reg.open("C:\\Users\\Shane\\Desktop\\registrants.txt");
	while (!reg.eof()){
		reg >> runner[i].firstname >> runner[i].lastname >> runner[i].pace;
		i++;
		count++;
	}
	for (int i = 0; i < count - 1; i++){
		cout << runner[i].firstname << " " << runner[i].lastname << " " << runner[i].pace << endl;
	}
	reg.close();


	int temp = 1000;
	int i = 0;
	int a = 0;
	const int c = 2000;
	int tarray[c];
	if (runner[i].pace < temp){
		runner[i].pace = temp;
		runner[i].pace = tarray[a];
		i++;
		a++;
	}
}