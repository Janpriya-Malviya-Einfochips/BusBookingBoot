#include<iostream>
#include<memory>
#include<map>
#include<string>
#include<tuple>
#include "StationUtils.h"
//using namespace std;
namespace StationUtils
{   
    // enum StationCode 
    // {
    //     AHMEDABAD=0,
    //     ABU =1, 
    //     PALI=2,
    //     KALOL=3,
    // };    
    static std::map<enum StationCode , std::tuple<std::string,std::string> > StationList = 
    {
       {AHM ,("AHMEDABAD","Ahm")},
       {ABU,("ABU" ,"Abu")},
       {PALI,("PALI","Pali")},
       {KALOL,("KALOL","kal")}
    };
};


 StationCode StationNametoStationCode(std::string s)
{
    //StationUtils::StationCode enumvar;
   std::cin>>s;
        switch ()
        {
        case AHM:
            return StationCode::AHMEDABAD;
            //std::cout<<"this is ahm";
            break;
        case ABU:
            return StationCode::AHMEDABAD;
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

void getstationToStationCode (StationCode s)
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