
#include <iostream>
using namespace std;


void cal(int *min, int *sec, int *hour){
    int d=*hour*3600+*sec+*min*60;
    cout<< "en seconde vaut : "<< d <<endl;

}


int main()
{

int min,sec,hour;

cout << "Entrer L'Heures : ";
cin>> hour;
cout << "\nEntrer Minutes : ";
cin>> min;
cout << "\nEntrer Secondes : ";
cin>> sec;

int *m= &min;
int *s= &sec;
int *h= &hour;

cal(m,s,h);



}

