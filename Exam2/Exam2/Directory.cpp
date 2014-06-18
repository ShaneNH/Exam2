//#include "directory.h"
//#include <fstream>
//#include <string>
//using namespace std;
//
//Directory::Directory(string Name, string Filename) {
//	name = Name;
//	filename = Filename;
//
//	ifstream directory(Filename);
//	if (!directory.fail()) {
//		while (!directory.eof()) {
//			getline(directory, line);
//			//Need to find the two commas in each line (firstname, lastname, number)
//			size_t first_comma = line.find(',');
//			size_t second_comma = line.find(',', first_comma + 1);
//			//If the commas were both in the line
//			if (first_comma != string::npos && second_comma != string::npos) {
//				//Add the new user to the vector
//				string fname = line.substr(0, first_comma);
//				string lname = line.substr(first_comma + 2, second_comma - first_comma - 2);
//				int number = line.substr(second_comma + 2);
//				entries.push_back(Entry(fname, lname, number));
//			}
//		}
//		directory.close();
//	}
//}
//
//void Directory::enter_entry(string Firstname, string Lastname, string Number) {
//	entries.push_back(Entry(Firstname, Lastname, Number));
//}
//
//string Directory::find_number(string Lastname) {
//	int entry = -1;
//	//Find the first user in the vector with this last name
//	for (int i = 0; entry == -1 && i < entries.size(); i++) {
//		if (entries[i].get_lastname() == Lastname)
//			entry = i;
//	}
//
//	if (entry == -1)
//		return "Not found!";
//	else
//		return entries[entry].get_number();
//}
//
//string Directory::find_number(string Firstname, string Lastname) {
//	int entry = -1;
//	//Find the first user in the vector with this first and last name
//	for (int i = 0; entry == -1 && i < entries.size(); i++) {
//		if (entries[i].get_lastname() == Lastname && entries[i].get_firstname() == Firstname)
//			entry = i;
//	}
//
//	if (entry == -1)
//		return "Not found!";
//	else
//		return entries[entry].get_number();
//}
//
//string Directory::get_name() {
//	return name;
//}
//
//int Directory::get_total_entries() {
//	return entries.size();
//}
//
//void Directory::save() {
//	//write vector back to disk
//	ofstream out(filename);
//	if (!out.fail()) {
//		for (int i = 0; i < entries.size(); i++)
//			out << entries[i].get_firstname() << ", " << entries[i].get_lastname() << ", " << entries[i].get_number() << endl;
//		out.close();
//	}
//}