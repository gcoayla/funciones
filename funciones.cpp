#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int numero;
    cout<<"Ingrese un numero :"<<endl;
    cin>>numero;
    if(numero==0){
        return 0;
    }
    int solu;
    solu=verificar(numero);
    cout<<"La solucion es :"<<solu<<" "<<endl;
    cout<<" "<<endl;
    main();
}
int verificar(int numero){
    cout<<"Si desea el cuadrado del numero presione 1, si desea el cubo presione 2,si desea fibonacci presione 3"<<endl;
    int veri;
    cin>>veri;
    int solu;
    if(veri==1){
        solu = square(numero);
    }
    else{
        if(veri==2){
            solu = cube(numero);
        }
        else{
            if(veri==3){
                solu=fibo(numero);
            }
            else{
                cout<<"No ingreso una opcion correcta"<<endl;
                solu=verificar(numero);
            }
        }
    }
    return solu;
}
int cube(int x){
    int a=x*square(x);
    return a;
}
int square(int x){
    int a=x*x;
    return a;
}
int fibo(int n){
    if(n==0 or n==1){
        return 1;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}
