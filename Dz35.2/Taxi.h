#pragma once
#include <iostream>
#include <string>
using namespace std;

class Taxi
{
	string number;
	string mark;
	string name;
	bool free;
public:
	Taxi();
	Taxi(string number, string mark, string name, bool free);
	~Taxi();
	string getNumber()const;
	string getMark()const;
	string getName()const;
	bool getFree()const;

	void setNumber(string number);
	void setMark(string mark);
	void setName(string name);
	void setFree(bool free);

	void showInfo()const;
};

