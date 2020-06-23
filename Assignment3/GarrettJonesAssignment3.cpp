#include <iostream>
#include <string>
using namespace std;

int main()
{
        string nameG;
        string city;
        string age;
        string college;
        string profession;
        string animalType;
        string petName;

        cout << "Lets create an imaginary character! \n";
        cout << "Please answer the following questions. \n ";
        cout << "What is your name? \n";
        getline(cin, nameG);

        cout << "How old are you? \n";
        getline(cin, age);

        cout << "What city do you live in? \n ";
        getline(cin, city);

        cout << "Where did you go to college? \n ";
        getline(cin, college);

        cout << "What profession did you go for? \n ";
        getline(cin, profession);

        cout << "What type of pet do you have? \n";
        getline(cin, animalType);

        cout << "What is your pet's name? \n";
        getline(cin, petName);

        cout << "There once was a person named " << nameG << " who lived in " << city << ".";
        cout << " At the age of " << age <<", " << nameG << " went to " << college<< ". ";
        cout << nameG << " graduated and went to work as a " << profession << ". Then, " << nameG;
        cout << " adopted a(n) " << animalType << " named " << petName << ". They both lived happily ever after!";

        return 0;
}
