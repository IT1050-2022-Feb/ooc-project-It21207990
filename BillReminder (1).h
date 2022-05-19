#include "Reminder.h"
#include "User.h"

// the child class of the reminder class
class BillReminder : public Reminder {
private:
  char dueDate[10];
  char companyName[20];
  double amount;
  double charges;
  char additionalNotes[100];

public:
  BillReminder();
  BillReminder(char dDate[], char compName[], double amnt, double chrg,
               char type[], int id, char time[], char date[], char title[],
               int fre);
  void setBillDetails(char dt, char amnt, double chr, char nts);
  double calcFines();
  void editBillDetails();
  void deleteBillDetails();
  void recieveBillReminder();
  ~BillReminder();
};