#pragma once
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include "Taxi.h"
using namespace std;

class taxiFirm {
    list<Taxi*> TaxiFirm;

public:
    void taxi_push_front(Taxi* obj) {
        TaxiFirm.push_front(obj);
    }

    void taxi_push_front_certain(string number, Taxi* taxi) {
        auto user = find_if(TaxiFirm.begin(), TaxiFirm.end(), [number](Taxi* a) {
            return a->getNumber() == number;
            });
        if (user == TaxiFirm.end()) {
            cout << "Not found!!!\n";
        }
        else {
            TaxiFirm.insert(next(user), taxi);
        }
    }

    void del_taxi(string number) {
        auto user = find_if(TaxiFirm.begin(), TaxiFirm.end(), [number](Taxi* a) {
            return a->getNumber() == number;
            });
        if (user == TaxiFirm.end()) {
            cout << "Not found!!!\n";
        }
        else {
            delete* user;
            TaxiFirm.erase(user);
        }
    }
    
    void departure(string number) {
        for (auto& num : TaxiFirm) {
            if (num->getNumber() == number) {
                if (num->getFree() == 1) {
                    num->setFree(0);
                }
                else {
                    num->setFree(1);
                }
            }
        }
    }

    void showCall(bool free) {
        for (auto& num : TaxiFirm) {
            if (num->getFree() == free) {
                num->showInfo();
                cout << endl;
            }
        }
    }

    void showAll() const {
        for (const auto& num : TaxiFirm) {
            num->showInfo();
            cout << endl;
        }
    }
};
