#include <iostream>
using namespace std; 
int main()

{
string firstName, lastName, fullName, favoriteMeal, favoriteMovie; 

getline (cin, firstName);
cout << "Your First Name:" <<firstName <<endl;

getline (cin,lastName);
cout << "Your Last Name:" <<lastName <<endl;

fullName= firstName+lastName;


cout << "Your Full Name:" <<fullName <<endl;

getline (cin, favoriteMeal);
cout << "Your Favorite Meal is:" <<favoriteMeal <<endl;

getline (cin,favoriteMovie);
cout << "Your Favorite Movie is:" <<favoriteMovie <<endl;

}