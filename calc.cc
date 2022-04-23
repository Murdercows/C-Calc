#include <iostream>

using namespace std;

void Menu() //Displays Menu
{
cout << "=============================" << endl;
cout << "| Press 1 for addition      |" << endl;
cout << "| Press 2 for subtraction   |" << endl;
cout << "| Press 3 for multipliction |" << endl;
cout << "| Press 4 for division      |" << endl;
cout << "| Press 5 to exit           |" << endl;
cout << "=============================" << endl;
}



void option1() //This will do addition :D
{     
double firstNum1;
double firstNum2; 
cout << "What is your first number" << endl;
cin >> firstNum1;
cout << "what is your second number" << endl;
cin >> firstNum2;
cout << "Your solution is: " << firstNum1 + firstNum2 << endl;
cout << "Press any number to Return to Menu" << endl;
}

void option2() //This will do subtraction :D
{  
double secondNum1;
double secondNum2;
cout << "What is your first number" << endl;
cin >> secondNum1;
cout << "what is your second number" << endl;
cin >> secondNum2;
cout << "Your solution is: " << secondNum1 - secondNum2 << endl;
cout << "Press any number to Return to Menu" << endl;
}

void option3() //This will do multiplication :D
{
double thirdNum1;
double thirdNum2;
cout << "What is your first number" << endl;
cin >> thirdNum1;
cout << "what is your second number" << endl;
cin >> thirdNum2;
cout << "Your solution is: " << thirdNum1 * thirdNum2 << endl;
cout << "Press any number to Return to Menu" << endl;
}

void option4() //This will do division :D
{
double fourNum1;
double fourNum2;
cout << "What is your first number" << endl;
cin >> fourNum1;
cout << "what is your second number" << endl;
cin >> fourNum2;
cout << "Your solution is: " << fourNum1 / fourNum2 << endl;
cout << "Press any number to Return to Menu" << endl;
}

int main()
{
Menu();

int choice;

cin >> choice;

if (choice == 1)
{
option1();
int choice1;
cin >> choice1;
   if (choice1 >= 0)
   return main();
}

if (choice == 2)
{
option2();
int choice2;
cin >> choice2;
   if (choice2 >= 0)
   return main();
}

if (choice == 3)
{
option3();   
int choice3;
cin >> choice3;
   if (choice3 >= 0)
   return main(); 
}

if (choice == 4)
{
option4(); 
int choice4;
cin >> choice4;
   if (choice4 >= 0)
   return main();   
}

if (choice == 5)
{
   
   int choice5;
   cout << "Thank you for using Orlando's Calculator :D bye..." << endl;
   cout << "Press 5 again to exit" << endl;
   cin >> choice5;
   
   if (choice5 == 5)
   {
   return 0; 
   }
}
 
return 0;
}

