#include <iostream>
#include <cstring>
#include "User.h"
#include "Reminder.h"

using namespace std;

Reminder:: Reminder()
{
  strcpy(rType,"");
  rID=0;
  strcpy(rDate,"");
  strcpy(rTime,"");
  strcpy(title,"");
  repeatingFrequency=0;
  user1=NULL;

    for (int i = 0; i < SIZE1; i++) {
      CompR[i] = new CompletedReminders[0];
    }
    for (int i = 0; i < SIZE2; i++) {
      UpcoR[i] = new UpcomingReminders[0];
    }
}
Reminder::Reminder(char type[],int id, char time[], char date[], char title[], int fre,User *puser)
{
  strcpy(rType,type);
  rID=id;
  strcpy(rDate,date);
  strcpy(rTime,time);
  strcpy(title,title);
  repeatingFrequency=fre;
  user1=puser;

    for (int i = 0; i < SIZE1; i++) {
      CompR[i] = new CompletedReminders[id];
    }
    for (int i = 0; i < SIZE2; i++) {
      UpcoR[i] = new UpcomingReminders[id];
    }
}
void Reminder:: setID(){
  
}
void Reminder :: setType(char type){
  
}
void Reminder:: setDetails(char time, char date, char title, char fre){
  
}
int Reminder :: getID(){
  
}
void Reminder:: displayDetails(){
  
}
Reminder::~Reminder()
{
  cout << "reminder shutting down!" << endl;
  for (int i = 0; i < SIZE1; i++)
  {
     delete CompR[i];
  }
  for (int i = 0; i < SIZE2; i++)
  {
     delete UpcoR[i];
  }

}