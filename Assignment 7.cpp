// Hassan A Badru
// COSC230.002
// 00039633
// 04/04/2009
//ASSIGNMENT 7 [PASS-FAIL ASSIGNMENT]
// This program prompts the user to enter an integer N so as to signal a range to be counted, then after counting from 1 to N,
// the program prompts the user to either continue or quit.
/*
Algorithm: Declare the function counter, then declare the function main, then declare all the variables. After that, I used the while
loop to obtain the number and then and if statement to prompt the user to either start all over or quit, then successfully end the function main.
Then i define the function COUNTER and successfully end the function COUNTER
*/

#include <iostream> 

using namespace std; //uses std namespace

int COUNTER (int);//function prototype

int main() //defines the function - main
{

int N=0; //declares the variable N
int endoption =1; //declares the variable endoption

while (endoption == 1) //while loop 
{
cout << "------------------------------------------"<<endl; //my method of separation
cout << "Enter any integer that you want to limit your count to: ";           
cin >> N; //inputs the integer N
cout << endl;
cout << "------------------------------------------"<<endl; //my method of separation

COUNTER (N); // function Call


cout<<"---------------------------------------------------------------"<<endl; //my method of separation
cout<<"ENTER '1' TO START ALL OVER AGAIN OR ANY OTHER NUMBER TO QUIT: "; //prompts the user to START ALL OVER AGAIN or quit
cin>> endoption ; //inputs an integer

if (endoption != 1) //if statement to quit
{
              return 0; //end function successfully for the 'if' condition above
              }

}

system ("pause"); //freezes the display screen
return 0; //end main function successfully
}
 
 
int COUNTER (int N)//function Definition
{
    int counter; //declares counter
 for (counter= 1; counter<= N; counter++) //for loop
{
cout << counter << endl; //outputs the numbers counted
}


return 0; //end counter function successfully
}
