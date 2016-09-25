 
//*******************************************************************************************************************************
    
    // PROGRAMMING EXERCISE 5, NUMBER 15
    
    // Hassan A Badru
// COSC230.002
// 03/17/2009
//write a game that promts the user to guess a number with 7 trials
//if the user guesses right, print YOU WIN
//if the user guesses wrong, print TRY AGAIN
//if the user exceeds the trials, print YOU LOSE
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; //uses std namespace
int main ()
{
    int num; //declaring num
    int guess; //declaring guess
    int counter; //declaring counter
    int diff; //declaring diff
    int endoption =1; //declaring edoption and assigning it to the value 1
    
    num = (rand() + time(0)) % 100; //a function to generate guessed number num
   counter = 0;
    
    cout <<"......................................." << endl; //BANNER
    cout <<".  Morgan State University Project 1  ." << endl;
    cout <<".           Hassan A Badru            ." << endl;
    cout <<".             03/17/2009              ." << endl;
    cout <<".            COSC 230.002             ." << endl;
    cout <<"......................................." << endl;
    cout << endl;
    
     
    while (counter < 7)//Using while structure
    {
           cout << "*************************************************************" << endl; //my method of seperation between the printouts
          cout << "Enter an integer greater than or equal to 0 and less than 100" << endl;
          cin >> guess;
          cout << endl;
          diff = abs (num - guess); //function
          
          if (diff == 0)
          {
                     cout << "*************************************************************" << endl; //my method of seperation between the printouts
                    cout << "Great, you guessed right" << endl;
                     cout <<"+++++++++++++"<<endl; 
                    cout << "+ YOU WIN ! +" <<endl; //output winning
                    cout << "+++++++++++++"<<endl;
                    cout << "Play again or Exit" << endl;
                    system ("pause");
                    return 0;
          }
          
          
          else
              if (diff >= 50) //using Else If structure 
              {
                 if (guess > num)//using If structure 
                 {
                     cout << "*************************************************************" << endl; //my method of seperation between the printouts
                    cout << "Your guess is VERY HIGH!!!."
                    << "Guess again!" << endl;
                    counter++; //increments counter
                 }
                 if (guess < num) //using If structure 
                 {
                    cout << "*************************************************************" << endl; //my method of seperation between the printouts
                    cout << "Your guess is VERY LOW!!!."
                    << "Guess again!" << endl;
                    counter++; //increments counter
                 }
              }
              
              
              
          else
              if ((diff >= 30)&&(diff < 50))
              {
              if (guess > num) //using If structure 
                 {
                     cout << "*************************************************************" << endl; //my method of seperation between the printouts
                    cout << "Your guess is HIGH!!!."
                    << "Guess again!" << endl;
                    counter++; //increments counter
                 }
                 if (guess < num) //using If structure 
                 {
                    cout << "Your guess is LOW!!!."
                    << "Guess again!" << endl;
                    counter++; //increments counter
                 }
              
              }
              
              else
              if ((diff >= 15)&&(diff < 30))
              {
              if (guess > num) //using If structure 
                 {
                     cout << "*************************************************************" << endl; //my method of seperation between the printouts
                    cout << "Your guess is MODERATELY HIGH!!!."
                    << "Guess again!" << endl;
                    counter++; //increments counter
                 }
                 if (guess < num) //using If structure 
                 {
                     cout << "*************************************************************" << endl; //my method of seperation between the printouts
                    cout << "Your guess is MODERATELY LOW!!!."
                    << "Guess again!" << endl;
                    counter++; //increments counter
                 }
              
              }
              
       else
              if ((diff > 0)&&(diff < 15))
              {
              if (guess > num) //using If structure 
                 {
                     cout << "*************************************************************" << endl;
                    cout << "Your guess is SOMEWHAT HIGH!!!."
                    << "Guess again!" << endl;
                    counter++; //increments counter
                 }
                 if (guess < num) //using If structure 
                 {
                     cout << "*************************************************************" << endl; //my method of seperation between the printouts
                    cout << "Your guess is SOMEWHAT LOW!!!."
                    << "Guess again!" << endl;
                    counter++; //increments counter
                 }
              
              }
   }

   if (counter >= 7)
       cout << "*************************************************************" << endl; //my method of seperation between the printouts
      cout <<"Sorry, number of trials has been exceeded" << endl;
      cout <<"The Number Is: " << num << endl;
      cout <<"++++++++++++++"<<endl; //banner
      cout <<"+ YOU LOSE ! +"<< endl; //output loss
      cout <<"++++++++++++++"<<endl;
      cout <<"Quit or Play again" << endl; //prompts user to play again
   system ("pause"); //freezes the screen to display output 
    
    return 0;
}
    

