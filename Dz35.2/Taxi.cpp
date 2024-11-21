#include "Taxi.h"

Taxi::Taxi()
{
    number = "udefined";
    mark = "udefined";
    name = "udefined";
    free = 0;
}

Taxi::Taxi(string number, string mark, string name, bool free)
{
    this->number = number;
    this->mark = mark;
    this->name = name;
    this->free = free;
}

Taxi::~Taxi()
{
}

string Taxi::getNumber() const
{
    return number;
}

string Taxi::getMark() const
{
    return mark;
}

string Taxi::getName() const
{
    return name;
}

bool Taxi::getFree() const
{
    return free;
}

void Taxi::setNumber(string number)
{
    this->number = number;
}

void Taxi::setMark(string mark)
{
    this->mark = mark;
}

void Taxi::setName(string name)
{
    this->name = name;
}

void Taxi::setFree(bool free)
{
    this->free = free;
}

void Taxi::showInfo() const
{
    cout << "Number: " << number << endl;
    cout << "Mark: " << mark << endl;
    cout << "Name: " << name << endl;
    if (free==1){ cout << "Free: taxi is free"<< endl; }
    else{ cout << "Free: taxi on call"<< endl; }
}
