// write your code here
//Brian Koringo #j00962107
//Sentinental controlled loop pg. 278
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const string SENTINEL ="-1";
int main()
{
  string name;
  int numOfVolunteers;
  int numOfBoxesSold;
  int totalNumOfBoxesSold;
  double costOfOneBox;

  cout << fixed << showpoint << setprecision(2);
  totalNumOfBoxesSold = 0;
  numOfVolunteers = 0;
  cin >> name;
  while (name !=SENTINEL)
    {
      cin >> numOfBoxesSold;
      totalNumOfBoxesSold=totalNumOfBoxesSold+numOfBoxesSold;
      numOfVolunteers++;
      cin >> name;
    }
  cin >> costOfOneBox;
  if(numOfVolunteers !=0)
  {cout << "Total number of boxes sold: " << totalNumOfBoxesSold << endl;
  cout << "Total money made: " << "$" << totalNumOfBoxesSold*costOfOneBox << endl;
    cout << "Average number of boxes sold by each person: " << totalNumOfBoxesSold/numOfVolunteers << endl;}
else
  {cout << "Total number of boxes sold: " << totalNumOfBoxesSold << endl;
  cout << "Total money made: " << "$" << totalNumOfBoxesSold*costOfOneBox << endl;
    cout << "No input." << endl;}
  return 0;  
}
