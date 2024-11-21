#include <iostream>
#include <vector>
#include <algorithm>
#include "Taxi.h"
#include "taxiFirm.h"
using namespace std;

int main()
{
    taxiFirm taxiLubotin;
    taxiLubotin.taxi_push_front(new Taxi("AX0001AA","Opel","Andriy Kariy",1));
    taxiLubotin.taxi_push_front_certain("AX0001AA",new Taxi("AX0002AA","Nissan","Vasily Khlibkov",0));
    taxiLubotin.taxi_push_front(new Taxi("AX0003AA","Audi","Oleksandr Lisnyi",0));
    taxiLubotin.showAll();
    taxiLubotin.departure("AX0002AA");
    cout << "-------------------------------------------------------\n";
    taxiLubotin.showAll();
    cout << "-------------------------------------------------------\n";
    taxiLubotin.showCall(1);
    cout << "-------------------------------------------------------\n";
    taxiLubotin.del_taxi("AX0001AA");
    taxiLubotin.showAll();    
    cout << "-------------------------------------------------------\n";
}