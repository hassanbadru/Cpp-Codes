/* Abraham Chukwuka AND HASSAN A BADRU

Final Project, Spring 09,

COSC 230.OO1,

This program provides the user with an option of cities, prompt the user to select a city, 
after which the program displays the weather forecast for that particular city. 
The user also is given an opportunity to continue to another city or quit.*/

#include <iostream>
using namespace::std;

#include <string.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection(int);


int main()
{
    
    //Declarations
    
    int Rel_Humidity();
    int Barometric_Pressure();
    int Wind_Speed();
    char Wind_direction();
    int Prob_rain();
    int a;
    time_t time_now;
    
    char wind[4]= {'N','S','E','W'};//Array
    
     srand ( time(NULL) );
     
     


   
    cout<<"****************************************************************************"<<endl;
    cout<<"*                Morgan State University Weather Station                   *"<<endl;
    cout<<"*                THE WEATHERMEN                                            *"<<endl;
    cout<<"*                ABRAHAM CHUKWUKA and   HASSAN A BADRU                     *"<<endl;
    cout<<"*                May 07, 2009                                              *"<<endl;
    cout<<"*                COSC 230-001                                              *"<<endl;
    cout<<"*                Weather Station                                           *"<<endl;
    cout<<"****************************************************************************"<<endl;
    
	
     int stop = 6;// Assingment statement
    while (stop ==6)//While the stop value is equal to 6, the while loop executes
    {
	
	
	//For loop statement for banner
	   for (int i=0; i< 900000000;i++) ;
	   {
	   for (int j=0; j< 9000000;j++) ;
	       {
	   for (int k=0; k< 9000000;k++) ;
           }
       }
	//system ("PAUSE");
	system("cls");// Clears the banner screen
	
	
    cout<<"List of cities for today's weather forcast"<<endl;
    cout<<"                1. Port Au Prince"<<endl;
    cout<<"                2. New Orleans"<<endl;
    cout<<"                3. Gulfport"<<endl;
    cout<<"                4. Shreveport\n\n\n\n"<<endl;
    
    cout<<"Enter (1) for Port Au Prince"<<endl;
    cout<<"Enter (2) for New Orleans"<<endl; // Prompts user to enter a location
    cout<<"Enter (3) for Gulfport"<<endl;
    cout<<"Enter (4) for Shreveport"<<endl;
    cout<<endl;
    
    
    cin>>a;
    cout<<endl;
    selection(a);//function call
      
    
     time_t time_now;
     time(&time_now);

   

	
	
    cout<<"Enter a '6' to re-run or any other number to quit"<<endl;
    cin>>stop;//Allows user to enter endoption key
    cout<<endl;
    
    if(stop<6||stop>6)//If statement for the endoption conditions
    {
  
    cout << "Thank you for using the weathermen's weather forecast simulator"<<endl;
    cout<<"                    By                           "<<endl;
    cout <<" ABRAHAM CHUKWUKA & HASSAN A BADRU"<<endl;
      cout << ctime(&time_now)<<endl;//date and time
    }
    
     
        
        
    
}
	system("Pause");// Holds screen shot
	
	return 0;
}




void selection(int a)//function definition
{
     char wind[4]= {'N','S','E','W'};//Array initiation
     if (a == 1)
    {
                  cout<<"Temperature deg: "<<rand() % 39 + 40<< " F"<<endl;//displays temperature with random generator
                  cout<<"Rel. Humidity: "<<rand() % 53 + 48<<endl;
                  cout<<"Bar. Press: "<<rand() % 3 + 28<< " MMhg"<<endl;
                  cout<<"Wind Speed: "<<rand() % 31 + 5<<" Mph"<<endl;
                  cout<<"Wind Dir  Compass: "<<wind[rand() % 4]<<endl;
                  cout<<"Prob Rain: "<<rand() % 31 + 5<<" Mph"<<endl;
                  
                  }
                  
                  
                  
                  
    else if (a == 2)
    {
                  cout<<"Temperature deg: "<<rand() % 39 + 40<< " F"<<endl;
                  cout<<"Rel. Humidity: "<<rand() % 53 + 48<<endl;
                  cout<<"Bar. Press: "<<rand() % 3 + 28<< " MMhg"<<endl;
                  cout<<"Wind Speed: "<<rand() % 31 + 5<<" Mph"<<endl;
                  cout<<"Wind Dir  Compass: "<<wind[rand() % 4]<<endl;
                  cout<<"Prob Rain: "<<rand() % 31 + 5<<" Mph"<<endl;
                  }
    
    else if (a == 3)
    {
                  cout<<"Temperature deg: "<<rand() % 39 + 40<< " F"<<endl;
                  cout<<"Rel. Humidity: "<<rand() % 53 + 48<<endl;
                  cout<<"Bar. Press: "<<rand() % 3 + 28<< " MMhg"<<endl;
                  cout<<"Wind Speed: "<<rand() % 31 + 5<<" Mph"<<endl;
                  cout<<"Wind Dir  Compass: "<<wind[rand() % 4]<<endl;
                  cout<<"Prob Rain: "<<rand() % 31 + 5<<" Mph"<<endl;
                  }
    
    else if (a == 4)
    {
                  cout<<"Temperature deg: "<<rand() % 39 + 40<< " F"<<endl;
                  cout<<"Rel. Humidity: "<<rand() % 53 + 48<<endl;
                  cout<<"Bar. Press: "<<rand() % 3 + 28<< " MMhg"<<endl;
                  cout<<"Wind Speed: "<<rand() % 31 + 5<<" Mph"<<endl;
                  cout<<"Wind Dir  Compass: "<<wind[rand() % 4]<<endl;
                  cout<<"Prob Rain: "<<rand() % 31 + 5<<" Mph"<<endl;
                  }
    
                  
    else 
    cout<<"Location Unavailable"<<endl;//tells user that the selection made is not available among the options given


return ;
}


/*#############################################################################################################################
          SCREEN SHOT OF COMPILED PROGRAM
          
                            1) Port Au Prince
                2) New Orleans
                3) Gulfport
                4) Shreveport




Enter (1) for Port Au Prince
Enter (2) for New Orleans
Enter (3) for Gulfport
Enter (4) for Shreveport

2

Temperature deg: 47 F
Rel. Humidity: 87
Bar. Press: 30 MMhg
Wind Speed: 34 Mph
Wind Dir  Compass: N
Prob Rain: 17 Mph
Enter a '6' to re-run or any other number to quit
4

Thank you for using the weathermen's weather forecast
 ABRAHAM CHUKWUKA & HASSAN A BADRU
Sat May 09 16:35:53 2009

Press any key to continue . . .
          */
                                                                                                                               































