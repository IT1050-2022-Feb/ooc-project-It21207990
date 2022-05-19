#include <cstring>
#include <iostream>
#include "Reminder.h"
#include "BillReminder.h"
#include "User.h"
using namespace std;

BillReminder::BillReminder() {
  strcpy(dueDate, "");
  strcpy(companyName, "");
  amount = 0;
  charges = 0;
  strcpy(additionalNotes, "");
}

BillReminder::BillReminder(char dDate[], char compName[], double amnt,
                           double chrg, char type[], int id, char time[],
                           char date[], char title[], int fre)
    : Reminder(type, id, time, date, title, fre, NULL) {
  strcpy(dueDate, dDate);
  strcpy(companyName, compName);
  amount = amnt;
  charges = chrg;
}
void BillReminder::setBillDetails(char dt, char amnt, double chr, char nts) {}
double BillReminder::calcFines() {}
void BillReminder::editBillDetails() {}
void BillReminder::deleteBillDetails() {}
void BillReminder::recieveBillReminder() {}
BillReminder::~BillReminder() {
  cout << "desctuctor for the bill activated" << endl;
}