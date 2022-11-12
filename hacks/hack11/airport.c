/**
 * Ryan Brown
 * 10/12/22
 * 
 * Deffinitions for functions for the airport library
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "airport.h"

Airport* createAirport(const char* gpsId,
                       const char* type,
                       const char* name,
                       double latitude,
                       double longitude,
                       int elevationFeet,
                       const char* city,
                       const char* countryAbbrv){
    Airport *airport=(Airport *)malloc(sizeof(Airport)*1);

    airport->gpsId=(char*)malloc(sizeof(char)*strlen(gpsId)+1);
    strcpy(airport->gpsId,gpsId);

    airport->type=(char*)malloc(sizeof(char)*strlen(type)+1);
    strcpy(airport->type,type);

    airport->name=(char*)malloc(sizeof(char)*strlen(name)+1);
    strcpy(airport->name,name);

    airport->latitude=latitude;
    airport->longitude=longitude;
    airport->elivationFeet=elevationFeet;

    airport->city=(char*)malloc(sizeof(char)*strlen(city)+1);
    strcpy(airport->city,city);

    airport->name=(char*)malloc(sizeof(char)*strlen(countryAbbrv)+1);
    strcpy(airport->countryAbbrv,countryAbbrv);

    return airport;
}

void initAirport(Airport* airport,
                 const char* gpsId,
                 const char* type,
                 const char* name,
                 double latitude,
                 double longitude,
                 int elevationFeet,
                 const char* city,
                 const char* countryAbbrv){
    airport->gpsId=gpsId;
    airport->type=type;
    airport->name=name;
    airport->latitude=latitude;
    airport->longitude=longitude;
    airport->elivationFeet=elevationFeet;
    airport->city=city;
    airport->countryAbbrv=countryAbbrv;
}

char* airportToString(const Airport* a){
    char test[4]="test";
    return test;
}

double getAirDistance(const Airport* origin, const Airport* destination){
    double radOriginLatitude=(origin->latitude/180)*M_PI;
    double radOriginLongitude=(origin->longitude/180)*M_PI;
    double radDestinationLatitude=(destination->latitude/180)*M_PI;
    double radDestinationLongitude=(destination->longitude/180)*M_PI;
    return acos(sin(radOriginLatitude)*sin(radDestinationLatitude)+cos(radOriginLatitude)*cos(radDestinationLatitude)*cos(radDestinationLongitude-radOriginLongitude))*6371;
}

double getEstimatedTravelTime(const Airport* stops,
                              int size,
                              double aveKmsPerHour,
                              double aveLayoverTimeHrs){
    double test=10.5;
    return test;
}