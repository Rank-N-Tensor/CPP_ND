#include <iostream>
using namespace std;

#include <cassert>

class Date {
public:
  Date(int day, int month, int year);
  int Day() const { return day_; }
  void Day(int day,int month,int year);
  int Month() const { return month_; }
  void Month(int month);
  int Year() const { return year_; }
  void Year(int year);

private:
  int day_{1};
  int month_{1};
  int year_{0};

  bool isLeap(int y) {
    bool leap;
    if (y % 4 == 0) {
      if (y % 100 == 0) {
        if (y % 400 == 0) {
          leap = true;
        } else {
          leap = false;
        }
      } else {
        leap = true;
      }
    } else {
      leap = false;
    }
    return leap;
  }

  int DayInMonth(int month, int year) {
    int day;
    switch (month) {
    case 1:
      day = 30;
      break;

    case 2:
      if (isLeap(year)){
          day =29;
      }
      else{
          day =28;
      }
      break;

    case 3:
      day = 31;
      break;

    case 4:
      day = 30;
      break;

    case 5:
      day = 31;
      break;

    case 6:
      day = 30;
      break;

    case 7:
      day = 31;
      break;

    case 8:
      day = 31;
      break;

    case 9:
      day = 30;
      break;

    case 10:
      day = 31;
      break;

    case 11:
      day = 30;
      break;

    case 12:
      day = 31;
      break;

    default:
      break;
    }
    return day;
  }
};

Date::Date(int day, int month, int year) {
  Year(year);
  Month(month);
  Day(day,month,year);
}

void Date::Day(int day , int month,int year) {
  if (day >= 1 && day <= DayInMonth(month,year)){
    day_ = day;
  }
    else{
        cout<<"this feb isnt a leap year"<<endl;
    }
}

void Date::Month(int month) {
  if (month >= 1 && month <= 12)
    month_ = month;
}

void Date::Year(int year) { year_ = year; }

// Test
int main() {
  Date date(29, 2, 1981);
  return 0;
}
