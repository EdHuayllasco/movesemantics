#include <iostream>
using namespace std;

class A{
    int *p;
public:
    A(){
        p=new int[100];
        cout<<"Constructor por defecto"<<endl;
    }
    A(const A& aObj){//copia todo de aObj a *this
        p=new int[100];
        for(auto i=0;i<100;i++)
            p[i]=aObj.p[i];
        cout<<"Constructor Copia"<<endl;
    }
    A(const A&& obj):p(obj.p){
        cout<<"Constructor de Movimiento"<<endl;
    }
    A& operator=(const A& obj){
        cout<<"Asignacion copia"<<endl;
        p=new int[100];
        for(auto i=0;i<100;i++)
            p[i]=obj.p[i];
        return *this;
    }
    A& operator=(A&& obj){
        cout<<"Asignacion de movimiento"<<endl;
        delete []p;//Liberar los recursos del objeto
        //p=obj.p;
        obj.p=nullptr;
        return *this;
    }
};
int main(int argc, const char * argv[]){
    A a;
    A b;
    b=a;
    b=move(a);
}