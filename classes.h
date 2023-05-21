#pragma once

class Student
{
public:
	char name[50];
	char surname[50];

	char city[50];
	char country[50];
	char educational_institution[50];
	char ed_inst_city[50];
	char ed_inst_country[50];
	int group;
	
int getbirthday();
void setbirthday(int value);
int getbirthmounth();
void setbirthmounth(int value);
int getbirthyear();
void setbirthyear(int value);
long long getphone_numb();
void setphone_numb(long long value);

void get_info();
void show_info();

private:
	int birthday; int birthmounth; int birthyear;
	long long phone_numb{994516219704};

	
};