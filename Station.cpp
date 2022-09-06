#include<station.h>
#include<iostream>
#include<string>
class Station:public StationIF
{
    public:
    int stCode;
    char stName[40];
    bool IsFunctional;
    


};