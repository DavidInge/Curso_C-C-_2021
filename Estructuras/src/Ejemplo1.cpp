#include <iostream>
using namespace std;


    /*se crea un metodo para realizar una resta sin utilizar su operador */

    int metodoResta(int a, int b){
     int valorRes=0;
    while (a>b)
    {       
        b++;
        valorRes++;
    }
    return valorRes;
    }


    int metodMultiplicar(int a, int b)
    {
        int valorMult=0;
        while(a!=0)
        {
            a--;
            valorMult += b;
        }
        return valorMult;
    }

int main()
{
    /* se imprime los valores y se manda a llamar el metodo */   
    cout<<"5-1= "<<metodoResta(5,1)<<endl;
    cout<<"5*3= "<<metodMultiplicar(5,3)<<endl;
}