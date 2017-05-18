#include<stdio.h>
#include"person.h"


void printPerson(Person_T p){
    printf("Name is =%s\n",p.name);
    printf("Age is =%d\n",p.age);
    printf("Relationship to you is =%s\n",p.relationship_to_you);
}
