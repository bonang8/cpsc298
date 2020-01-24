#include<iostream>
using namespace std;
/*
   Instructions:
   Write a program that determines whether a meeting room is in violation of
   fire law regula- tions regarding the maximum room capacity. The program will
   read in the maximum room capacity and the number of people to attend the
   meeting. If the number of people is less than or equal to the maximum
   room capacity, the program announces that it is legal to hold the meeting and
   tells how many additional people may legally attend. If the number of people
   exceeds the maximum room capacity, the program announces that the meeting
   cannot be held as planned due to fire regulations and tells how many people
   must be excluded in order to meet the fire regulations.
*/


int main()
{
  // numPeopleAttending
  //  - holds the number of people attending
  int numPeopleAttending = 0;
  // maxRoomCapacity
  //  - holds the maximum room capacity
  int maxRoomCapacity = 0;
  // peopleLeftToAttend
  //  - holds the number of people that may legally attend in addition
  // to the ammount of people already attending.
  int peopleLeftToAttend = 0;
  //numPeopleExcluded
  //  - holds the number of people that must be excluded
  // in order to meet the fire regulations.
  int numPeopleExcluded = 0;

  //The program will read in the maximum room capacity and the number of people
  //to attend the meeting.
  cout << "Maximum room capacity: "<< endl;
  cin >> maxRoomCapacity;
  cout << "Number of people attending: " << endl;
  cin >> numPeopleAttending;

  //If the number of people is less than or equal to the maximum room capacity,
  //the program announces that it is legal to hold the meeting and tells how many
  //additional people may legally attend.
  if(numPeopleAttending <= maxRoomCapacity)
  {
    cout << "It is legal to hold the meeting. "<< endl;
    peopleLeftToAttend = maxRoomCapacity - numPeopleAttending;
    cout << "Additional people who may legally attend: " << peopleLeftToAttend << endl;
  }
  /* If the number of people exceeds the maximum room capacity,
  the program announces that the meeting cannot be held
  as planned due to fire regulations and tells how many people must be excluded
  in order to meet the fire regulations.
  */
  else
  {
    cout << "The meeting can not be held as planned due to fire regulations "<< endl;
    numPeopleExcluded = numPeopleAttending - maxRoomCapacity;
    cout << "Number of people that must be excluded to meet fire regulations: " << numPeopleExcluded<< endl;

  }

}
