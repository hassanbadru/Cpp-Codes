// Hassan A Badru
// COSC230.002
// 00039633
// 04/17/2009
//ASSIGNMENT 9
// This program prompts the user to enter an integer N so as to signal a range to be counted, then after counting from 1 to N,
// the program prompts the user to either continue or quit.
/*
Algorithm: Declare the function counter, then declare the function main, then declare all the variables. After that, I used the for
loop to obtain the number and then and if statement to prompt the user to either start all over or quit, then successfully end the function main.
Then I used the function call to correctly place the function message in the main function. Then I defined the function, message 
by randomly generating a number then assigning each range of numbers generated to each message
*/

# include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std; //using std namespace

int COUNTER (int); //COUNTER function prototype
int Message (int); //Message function prototype
int num; //declaring num

int main () //main function prototype
{
    int N; //declaring the function N
    int endoption; //declaring the function endoption
 for (endoption =1 ;endoption ==1;) //for loop to determine whether the function continues infinitely or stops
 {
 COUNTER (N); //COUNTER function call
 
 cout << "------------------------------------------"<<endl; //my method of separation
 Message (num); //function call
  
  cout << "------------------------------------------"<<endl; //my method of separation
  cout <<"Enter 1 to continue or any other number to quit: "; // output prompting the user to input endoption so as to continue or quit
  cin >> endoption; //input endoption to continue or quit
  cout <<endl;
}
if (endoption != 1)  //conditional statement that determines whether the program will quit or not
{return 0;  //end main function if the conditional statement is met
}

system ("pause"); //freezes the display screen
return 0; //end main function successfully
}


   
  int COUNTER (int N) //COUNTER function definition 
  {
      cout << "------------------------------------------"<<endl; //my method of separation
cout << "Enter any integer that you want to limit your count to: "; //prompts the user to enter an integer        
cin >> N; //inputs the integer N
cout << endl;
int counter; //declares counter
 for (counter= 1; counter<= N; counter++) //for loop
{
   cout << "-----"<<endl; //my method of separation
cout << counter << endl; //outputs the numbers counted
      }
}
  
  int Message (int num) //function definition
{


num = (rand() + time(0)) % 50; //random number generator

if (num>=0 && num <5 ) //condition for message 1
{cout << "You will make it, the sky is your limit!"<<endl;}//message 1

if (num>=5 && num <10) //condition for message 2
{cout << "You are very lucky!"<<endl;} //message 2

if (num>=10 && num <15) //condition for message 3
{cout << "You are a great achiever!"<<endl;} //message 3

if (num>=15 && num <20) //condition for message 4
{cout << "You are the best!"<<endl;} //message 4

if (num>=20 && num <25) //condition for message 5
{cout << "Excellent Trial!"<<endl;} //message 5

if (num>=25 && num <30 ) //condition for message 6
{cout << "Great Job!"<<endl;} //message 6

if (num>=30 && num <35) //condition for message 7
{cout << "Keep it Up, never give up!"<<endl;} //message 7

if (num>=35 && num <40) //condition for message 8
{cout << "WOW! you are amazing!"<<endl;} //message 8

if (num>=40 && num <45) //condition for message 9
{cout << "You rock!"<<endl;} //message 9

if (num>=45 && num <50) //condition for message 10
{cout << "Flawless Victory!!!"<<endl;} //message 10

return 0; //end the function message successfully
}

// © 2009 Hassan A Badru. All Rights Reserved
