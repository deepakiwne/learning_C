#include<stdio.h>
#include"person.h"

int main(){
    int x=0;
    Person_T family[5];
    
    Person_T p1 = {"Shruti", 32, "friend"};
    Person_T p2 = {"Tiklu", 32, "friend"};
    Person_T p3 = {"Rotu", 26, "friend"};
    Person_T p4 = {"Amita", 32, "friend"};
    Person_T p5 = {"Dipi", 30, "friend"};

    family[0] = p1; 
    family[1] = p2; 
    family[2] = p3; 
    family[3] = p4; 
    family[4] = p5; 
    
    for(x=0;x<5;x++){        
        printPerson(family[x]);
    }

    return 0;
}

