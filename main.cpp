#include <iostream>

using namespace std;

float metry; // warto�� wpisana przez u�ytkownika


float ile_centymetrow(float m) //funkcja konwertuj�ca z metr�w na centymetry
{
    float centymetry= m*10;
}

float ile_kilometrow(float m) //funkcja konwertuj�ca z metr�w na kilometry
{
    float kilometry= m/1000;
}

void ile_milimetrow(float m) //procedura konwertuj�ca z metr�w na milimetry

{
    cout<< "Na milimetry "<< m*1000;
}

int main()

{
    cout<< "ile metrow?"<< endl;
    cin>> metry;
    cout<< "Na centymetry: " <<ile_centymetrow(metry)<< endl;
    cout<< "Na kilometry: " <<ile_kilometrow(metry)<< endl;
    ile_milimetrow(metry);



    return 0;
}


