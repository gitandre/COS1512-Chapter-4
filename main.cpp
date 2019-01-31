#include <iostream>
using namespace std;

double caclUnitPrice(double roundPrice, int diameter );

double caclUnitPrice(double squarePrice, int width, int length);

int main() {

    // declare vars
    int diameter, width, length;
    double roundPrice, squarePrice, roundUnitPrice, squareUnitPrice;

    // prompt and capture values
    cout << "Welcome to Compare A Pizza" << endl;
    cout << "---------------------------------------------"<< endl;
    cout << endl;

    cout << "Enter the diameter of a round Pizza in cm" << endl;
    cin >> diameter;

    cout << "Enter the price of a round Pizza in $" << endl;
    cin >> roundPrice;

    cout << "Enter the width of a square/rectangular Pizza in cm" << endl;
    cin >> width;

    cout << "Enter the length of a square/rectangular Pizza in cm" << endl;
    cin >> length;

    cout << "Enter the price of a round Pizza in $" << endl;
    cin >> squarePrice;

    //set precision etc for cout doubles
    cout.setf(ios::fixed);
    cout.precision(2);

    // calculate the price per cm2 for round pizza
    roundUnitPrice = caclUnitPrice(roundPrice, diameter);
    cout << "The round pizza unit price is " << roundUnitPrice << "/cm2" << endl;
    cout << "---------------------------------------------"<< endl;
    cout << endl;

    // calculate the price per cm2 for square pizza
    squareUnitPrice = caclUnitPrice(squarePrice, width, length);
    cout << "The square pizza unit price is " << squareUnitPrice << "/cm2" << endl;
    cout << "---------------------------------------------"<< endl;
    cout << endl;

    // output the one with the lower price per cm2
    if(roundUnitPrice < squareUnitPrice){
        cout << "The round pizza is the better deal" << endl;
    } else {
        cout << "The square/rectangle pizza is the better deal" << endl;
    }
    cout << "---------------------------------------------"<< endl;
    cout << "più pomodoro per favore!!!" << endl;
    return 0;
}

double caclUnitPrice(double roundPriceP, int diameterP ){

    double const PI = 3.14159;
    double radius = diameterP/2.0;
    double area = PI * radius * radius;
    cout << "Round Pizza total cm2 = " << area << endl;

    return roundPriceP/area;
}

double caclUnitPrice(double squarePriceP, int widthP, int lengthP ){

    double area = widthP * lengthP;
    cout << "Square Pizza total cm2 = " << area << endl;

    return squarePriceP/area;
}