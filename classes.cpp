#include<iostream>
#include<string>
#include"classes.h"
using namespace std;

int Student::getbirthday() {
	return birthday;
}
void Student::setbirthday(int value) {
	if (value > 0 && value < 32) {
		birthday = value;
	}
}
int Student::getbirthmounth() {
	return birthmounth;
}
void Student::setbirthmounth(int value) {
	if (value > 0 && value < 13) {
		birthmounth = value;
	}
}
int Student::getbirthyear() {
	return birthyear;
}
void Student::setbirthyear(int value) {
	if (value > 1920 && value < 2017) {
		birthyear = value;
	}
}

long long Student::getphone_numb() {
	return phone_numb;
}

void Student::setphone_numb(long long value) {
	phone_numb = value;
}


void Student::get_info() {
	int temp1, temp2, temp3;
	cout << "Name: ";
	cin.getline( name,50);
	cout<<"Surname: ";
	cin.getline(surname,50);
	cout<<"City: ";
	cin.getline(city, 50);
	cout<<"Country: ";
	cin.getline(country, 50);
	cout << "Educational institution: ";
	cin.getline(educational_institution, 50);
	cout<<"Educational institution city: ";
	cin.getline(ed_inst_city, 50);
	cout<<"Educational institution country: ";
	cin.getline(ed_inst_country, 50);
	cout<<"Group: ";
	cin >> group;
	cout<<"Phone number: ";
	cin >> phone_numb;
	cout << "Birthdate(enter day/mounth/year): ";
	cin >> temp1 >> temp2 >> temp3;
	setbirthday(temp1); setbirthmounth(temp2); setbirthyear(temp3);
}


void Student::show_info() {
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "City: "<<city<<endl;
	cout << "Country: "<<country<<endl;
	cout << "Educational institution: " << educational_institution << endl;
	cout << "Educational institution city: "<<ed_inst_city<<endl;
	cout << "Educational institution country: "<<ed_inst_country<<endl;
	cout << "Group: "<<group<<endl;
	cout << "Phone number: "<<phone_numb<<endl;
	cout << "Birthdate: " << getbirthday() << "/" << getbirthmounth() << "/" << getbirthyear() << endl;
}









