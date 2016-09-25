// Hassan A Badru
// COSC230.002
// 00039633
// 04/16/2009
// Assignment 8 (Extra Credit)
/* This program Draws two triangle with one being vertically reflected of the other. Then the program prompts the user
to continue or quit using one or any other number
*/
/*
Algorithm: Declared the function Draw, the declared the main function, then using while loop, we create a loop where the functio Data
keeps occring provided the endoption is equal to 1, and places a condition using if-statement where the function ends if the end option
is not equal to 1
*/

# include <iostream>
using namespace std;

int Draw (int); //function prototype
    int i; //declaring i
    int k; //declaring k
int main () //main fucntion
{
    
    int endoption; //declaring endoption
    for (endoption =1 ;endoption ==1;) //for loop to determine whether the function continues infinitely or stops
{
    Draw (i); //function call
    cout<<"ENTER '1' TO CONTINUE OR ANY OTHER NUMBER TO QUIT: "; // output prompting the user to input endoption so as to continue or quit
cin>> endoption ; //input endoption to continue or quit

if (endoption != 1) //conditional statement that determines whether the program will quit or not
{
     return 0; //end main function if the conditional statement is met
     }
}


system ("pause"); //freezes the display screen
return 0; //end main function successfully
}

 
int Draw (int i) //function Definition
{
for (i=0 ; i<=9; i++) // for loop that determines the behavior of the inner for loop
{ 
    for (k=0 ; k <= i ; k++) //for loop that determines the behavior of the output (*)
 cout << "*"; //output
 cout << endl;
}
cout << "------------"; //my method of separation between the two triangles
cout << endl;
for (i=0 ; i<=9; i++) // for loop that determines the behavior of the inner for loop
{ 
    for (k=9 ; k >= i ; k--) //for loop that determines the behavior of the output (*)
 cout << "*"; //output
 cout << endl;
    
}
return 0; //end the function Draw successfully
}

// © 2009 Hassan A Badru. All Rights Reserved
