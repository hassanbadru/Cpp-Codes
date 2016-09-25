// Hassan A Badru
// COSC230.002
// 00039633
// 05/04/2009
//ASSIGNMENT 10 (ARRAYS)
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void bar_chart(int a);//function prototype

int main() //main funtion
{
int a;//declaring a
int e;//declaring e
for (e=1;e==1;)//for loop
{
printf("Enter the scale for your bar chart\n");
scanf("%i", &a);
printf("\n");

cout<<"Horizontal Bar Chart: "<<endl;
bar_chart(a);//function call

cout<<"-------------------"<<endl;

cout<<"Vertical Bar Chart: "<<endl;
cout<<"  *       *     *"<<endl;
cout<<"  *   *   * *   *"<<endl;
cout<<"* *   *   * * * *"<<endl;
cout<<"* *   * * * * * *"<<endl;

cout <<"-----------------------------------------------  "<<endl;

cout <<"Enter 1 to continue or any other number to quit: ";//to continue or end
cin >> e;//input end option
cout <<endl;
if (e!=1)//conditional statement
{return 0;}
}
system("pause");//freeze skin

return 0;//end main function
}

void bar_chart(int a)//function definition
{
int array[10], n, m;//declaring array

for(n=0;n<10;n++) //Populate array
{
array[n] =(rand()+time(0))%(a+1);//populating array
}

for(n=0;n<10;n++) //populating array
{
for(m=array[n];m>0;m--)
{
printf("*");//print bar chart
}
printf("\n");//rint each on a new line
}

}
/*
Enter the scale for your bar chart
7

Horizontal Bar Chart:
**
****
*******
*****
**
*****
*******
*******
***
*
-------------------
Vertical Bar Chart:
  *       *     *
  *   *   * *   *
* *   *   * * * *
* *   * * * * * *
-----------------------------------------------
Enter 1 to continue or any other number to quit:
*/
