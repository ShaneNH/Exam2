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

	//Write Runners to appropriate color text file
	ofstream wh, ye, gr, or, bl, li, re;
	wh.open("white.txt");
	ye.open("yellow.txt");
	gr.open("green.txt");
	or.open("orange.txt");
	bl.open("blue.txt");
	li.open("lilac.txt");
	re.open("red.txt");
	for (int a = 0; a < 1001; a++){
			if (runner[a].pace <= 360)
				wh << runner[a].firstname << " " << runner[a].lastname << " " << runner[a].pace << endl;

			 if (runner[a].pace >= 361 && runner[a].pace <= 420)
				ye << runner[a].firstname << " " << runner[a].lastname << " " << runner[a].pace << endl;

			 if (runner[a].pace >= 421 && runner[a].pace <= 480)
				gr << runner[a].firstname << " " << runner[a].lastname << " " << runner[a].pace << endl;

			 if (runner[a].pace >= 481 && runner[a].pace <= 540)
				or << runner[a].firstname << " " << runner[a].lastname << " " << runner[a].pace << endl;

			 if (runner[a].pace >= 541 && runner[a].pace <= 600)
				bl << runner[a].firstname << " " << runner[a].lastname << " " << runner[a].pace << endl;

			 if (runner[a].pace >= 601 && runner[a].pace <= 720)
				li << runner[a].firstname << " " << runner[a].lastname << " " << runner[a].pace << endl;

			 if (runner[a].pace >= 721 && runner[a].pace <= 1200)
				re << runner[a].firstname << " " << runner[a].lastname << " " << runner[a].pace << endl;
			
				
		}

	wh.close();
	ye.close();
	gr.close();
	or.close();
	bl.close();
	li.close();
	re.close();
}


