/**
 * Ryan Brown
 * 11/12/22
 * 
 * A number of test cases for the airport library
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "airport.h"

int main(int argc, char **argv){
    char id1[4]="1231";
    char type1[5]="small";
    char name1[3]="Bob";
    double latitude1=34.53;
    double longitude1=-25.24;
    int elivation1=1000;
    char city1[8]="Pitsberg";
    char country1[2]="NA";

    char id2[4]="1232";
    char type2[3]="Big";
    char name2[4]="Rick";
    double latitude2=-34.53;
    double longitude2=-25.24;
    int elivation2=2000;
    char city2[7]="Chicago";
    char country2[2]="NA";

    
    Airport *port1 = createAirport(&id1,&type1,&name1,latitude1,longitude1,elivation1,&city1,&country1);
    initAirport(port1,&id1,&type1,&name1,latitude1,longitude1,elivation1,&city1,&country1);                          
    char *strPort1=(char *)malloc(sizeof(char)*strlen(airportToString(port1)));
    strPort1=airportToString(port1);

    Airport *port2 = createAirport(&id2,&type2,&name2,latitude2,longitude2,&elivation2,&city2,&country2);
    initAirport(port1,&id2,&type2,&name2,latitude2,longitude2,elivation2,&city2,&country2);                     
    char *strPort2=(char *)malloc(sizeof(char)*strlen(airportToString(port2)));
    strPort2=airportToString(port2);
    double dist1=getAirDistance(port1, port2);

    printf("%s\n", strPort1);
    printf("%s\n", strPort2);
    printf("%f\n",dist1);
    


    return 1;
}