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

    /*se crea un metodo para realizar una Multiplicacion sin utilizar su operador */
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

    /*se crea un metodo para realizar una Division sin utilizar su operador */
    int metodoDividir(int a, int b)
    {
        int valorDiv=0;
        while(a>=b)
        {
            valorDiv++;
            a-=b;
        }
        return valorDiv;
    }
    /*se crea un metodo para realizar una Potencia sin utilizar su operador */
    int metodoPotencia(int a, int b)
    {
        int valorPot=1;
        while(b!=0)
        {
            
            valorPot=valorPot*a;
            b--;
        }
        return valorPot;
        
    }
    /*se crea un metodo para realizar un Factorial sin utilizar su operador */
    int metodoFactorial(int a)
    {
        int valorFact=1;
        for (int i = 1; i <=a; i++)
        {
            valorFact=valorFact*i;
        }
        
        return valorFact;
        
    }
    /*Metodo optimizado para verificar si un numero es primo o No*/
    void verificarPrimo(int numero)
    {
        bool prime = true;
        /*Hacemos un barrido Ejemplo si es hasta 100 no tiene sentido seguir buscando despues del 50
        Ya que nunca sera divisible 100/51 ....etc */
        for (int i = 2; i < numero/2 && prime; i++)
        {
            if (numero % i==0)
            prime=false;

        }
        if(prime)
            cout<<numero <<" Es primo"<<endl;
            else
            cout<<numero <<" No es primo"<<endl;
    }

    /*Verificamos si un numero es perfecto el cual consiste en que la suma de sus divisores sea el mismo numero buscado 
    Ejemplo 6 --> 6/6=1 6/2=3 6/3=2 --> 3+2+1=6*/

    void verificarNumeroPerfecto(int numero)
    {
        int valor=0;
        for (int i = 1; i < numero; i++)
        {
            if(numero%i==0)
            valor+=i;
        }
        if (valor==numero)
        cout<<numero<<" Es perfecto"<<endl;
        else
        cout<<numero<<" No Es perfecto"<<endl;
    }

    /*Se verifica si los numero son perfectos posterior se compara que los divisores de a sean iguales a la suma de b y 
    alreves que los divisores de b  sean iguales a la suma de b*/
    void verificarNumerosAmigos(int a, int b)
    {
        int sumA=0;
        for (int  i=1; i<a/2; i++)
        {
            if (a % i == 0) sumA+=i;
        }

        int sumB=0;
        for (int  i=1; i<a/2; i++)
        {
            if (b % i == 0) sumB+=i;
        }
        
        if ((a==sumB) && (b==sumA))
        cout<<a<<" y "<<b<<" Son amigos"<<endl;
        else
        cout<<a<<" y "<<b<<" No Son amigos"<<endl;
    }

void verificarNumeroGuay(int numero)
{
    int Sucesion=0;
    bool numeroG=false;
    for (int i = 1; i <numero && numeroG==false; i++)
    {   
       Sucesion+=i;
        if (Sucesion==numero)
        numeroG=true;
    }
    if (numeroG)
        cout<<"el numero es guay";
        else
        cout<<"el numero no es guay";   
}
int main()
{
    /* se imprime los valores y se manda a llamar el metodo */   
    cout<<"5-1= "<<metodoResta(5,1)<<endl;
    cout<<"5*3= "<<metodMultiplicar(5,3)<<endl;
    cout<<"7/3= "<<metodoDividir(7,3)<<endl;
    cout<<"2^3= "<<metodoPotencia(2,3)<<endl;
    cout<<"!5= "<<metodoFactorial(5)<<endl;
    verificarPrimo(25);
    verificarNumeroPerfecto(6);
    verificarNumerosAmigos(6,8);
    verificarNumeroGuay(15);
}

