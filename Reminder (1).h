#include "User.h"
#include "UpcomingReminders.h"
#include "CompletedReminders.h"
#define SIZE1 5
#define SIZE2 5

class Reminder {
protected:
  char rType[10];
  int rID;
  char rDate[10];
  char rTime[10];
  char title[50];
  int repeatingFrequency;

  User *user1;
  CompletedReminders *CompR[SIZE1];
  UpcomingReminders *UpcoR[SIZE2];
  
public:
  Reminder();
  Reminder(char type[],int id, char time[], char date[], char title[], int fre,User *puser);
  void setID();
  void setType(char type);
  void setDetails(char time, char date, char title, char fre);
  int getID();
  void displayDetails();
  ~Reminder();
};