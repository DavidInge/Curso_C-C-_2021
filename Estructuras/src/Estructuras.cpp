#include <iostream>
using namespace std;

void estructuraSTRUCT()
{
    struct Persona /*Se define que es un struct de tipo persona con typedef*/
    {
        int edad;
        float altura;
    };
    
    Persona papa;
    papa.altura=1.55;
    papa.edad=25;

    cout<<"Edad de papá "<<papa.edad<<endl;
    cout<<"Altura de papá "<<papa.altura<<endl;

}

void estructuraUNION()
{
union Persona
{
    int edad;
    float altura;
};

Persona mama;
mama.altura=1.69;
mama.edad=59;
cout<<"Edad de papá "<<mama.edad<<endl;
cout<<"Altura de papá "<<mama.altura<<endl;
}

int main()
{
    estructuraSTRUCT();
}