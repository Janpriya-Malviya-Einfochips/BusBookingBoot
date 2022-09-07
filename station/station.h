#include<iostream>
#include<string>
#include "StationIF.h"
using namespace std;
class Station:public StationIF
{
    public:
    enum Station_Code{ Ahm ,Abu ,pali,kalol};
    string stName;
    bool IsFunctional;
    


};