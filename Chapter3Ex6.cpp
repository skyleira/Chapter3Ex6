/*
Title: Chapter 3 Exercise 6 - Ingredient Adjuster
File Name: Chatper3Ex6.cpp
Programmer: Tyler Hively
Date: 10/10/2024
Requirements: 
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar

• 1 cup of butter

• 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. 
Write a program that asks the user how many cookies he or she wants to make, 
then displays the number of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>
using namespace std;

int main()
{
 
 /*
  1.5 divided by 48 is 0.03125
  1 divided by 48 is 0.02083333333333333333333333333333
  2.75 divided by 48 is 0.05729166666666666666666666666667
 */ 
    const double cupsSugar = 0.03125;
    const double cupsButter = 0.02083333333333333333333333333333;
    const double cupsFlower = 0.05729166666666666666666666666667;

    double totalCookies;
    double totalcupsSugar;
    double totalcupsButter;
    double totalcupsFlower;

    cout << "-------Cookie Recipe Ingredient Adjuster-------" << endl;
    cout << "Please enter the amount of cookies you wish to bake: " << endl;
    cin >> totalCookies;

    totalcupsSugar = cupsSugar * totalCookies;
    totalcupsButter = cupsButter * totalCookies;
    totalcupsFlower = cupsFlower * totalCookies;

    cout << "If you wish to bake " << totalCookies << " cookies, then you will need:" << endl;
    cout << endl;
    cout << totalcupsSugar << " cups of sugar." << endl;
    cout << endl;
    cout << totalcupsButter << " cups of butter." << endl;
    cout << endl;
    cout << totalcupsFlower << " cups of flower." << endl;
}
