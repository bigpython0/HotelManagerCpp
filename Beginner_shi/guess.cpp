#include <iostream> 
#include <random>
#include <time.h>
//#include <cstdio>

using namespace std;

int random(int min, int max) //range : [min, max]
{
   static bool first = true;
   if (first) 
   {  
      srand( time(NULL) ); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}

int main() {
    int num = 1;
    cout << "Welcome to the guessing game. \nYou have 5 tries to guess the number between 1 and 100 inclusively. \nGood luck";

    int guess;
    int i = 1;
    bool hasGuessed = false;

    while (i<10 && hasGuessed == false) {
        cout << "\nType a number: ";
        cin >> guess;
    
        if (guess < num) {
            cout << "Too small";
        } else if (guess > num) {
            cout << "too big";
        } else {
            cout << "BINGO";
            hasGuessed = true;
        }
        i++;
    }

    if (hasGuessed == false) {
        cout << "\nyou suck\n";
        cout << "The num was " + std::to_string(num); 
    }

    return 0;
}

