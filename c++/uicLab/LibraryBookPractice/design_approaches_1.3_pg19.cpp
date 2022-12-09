#include<iostream>
using namespace std;

class DataType{
public:
  void Initialize(int, int, int);
  // Initialize month, day, and year.
  int GetMonth() const;
  // Returns month.
  int GetDay() const;
  // Returns day.
  int GetYear() const;
  // Returns years.

private:
  int month;
  int day;
  int year;
};



int main(int argc, char const *argv[]) {
  /*
      A member functionis defined like any function with one exception: The name of the class
      within which whe member is declared preceds the member function name with a double colon in
      between (::). The double colon operator is called the scope resolution operator.
  */
  void DataType::Initialize(int newMonth, int newDay, int newYear)// post : month, day, year is set to newMonth, newDay, newYear RESP..
  {
    month = newMonth;
    day = newDay;
    year = newYear;
  }

  int DataType::GetMonth() const// Post: Class member month is Returns.
  {
    return month;
  }

  int DataType::GetDay() const// Post: Class member day is Returns.
  {
    return day;
  }

  int DataType::GetYear() const// Post: Class member year is Returns.
  {
    return year;
  }




  // If data is a var of type dataType, the following statement prints the data fields of data.
  cout << "Month is " << date.GetMonth() << endl;
  cout << "Day is " << date.GetDay() << endl;
  cout << "Year is " << date.GetYear() << endl;

  return 0;
}
