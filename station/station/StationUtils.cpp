#include<iostream>
#include<memory>
#include<map>
#include<string>
#include<tuple>
#include "StationUtils.h"
//using namespace std;
namespace StationUtils
{   
    enum StationCode 
    {
        AHMEDABAD=0,
        ABU =1, 
        PALI=2,
        KALOL=3,
    };    
    static std::map<enum StationCode , std::tuple<std::string,std::string> > StationList = 
    {
       {"AHMEDABAD" ,("AHMEDABAD","Ahm")},
       {"ABU",("ABU" ,"Abu")},
       {"PALI",("PALI","Pali")},
       {"KALOL",("KALOL","kal")}
    };

StationCode Enum_to_station(int code)
{
    //StationUtils::StationCode enumvar;
   // std::cin>>enumvar;
        switch (code)
        {
        case 0:
            //return StationCode::AHMEDABAD;
            std::cout<<"this is ahm";
            break;
        case 1:
            std::cout<<"this is abu";
            break;
        case 2:
            std::cout<<"this is pali";
            break;
        case 3:
            std::cout<<"this is kalol";
            break;
        default:
            std::cout<<"invalid station";
            break;
        }
    }

StationCode getstationToenum (StationCode s)
{
        switch (s)
        {
        case AHMEDABAD:
            std::cout<<"Ahmedabad";
            break;
        case ABU:
            std::cout<<"Abu";
            break;
        case PALI:
           std:: cout<<"Pali";
            break;
        
        case KALOL:
            std::cout<<"Kalol";
            break;
        default:
            std::cout<<"invalid station";
            break;
        }
    }


     
            
    //     {Ahm,("Ahmedabad","Ahm")},
    //    { Abu ,("Abu","Abu")},
    //    {Pali, {"Pali",Pali}},
    //    {Kal ,{"Kalol",Kal}}
    
}