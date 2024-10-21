#include <iostream>
#include <conio.h>
using namespace std;

int dinero =600; 
int energia =100;
int conocimiento=10;
int estatus_social=0;
string nombre;

void mostar_estado(){
      cout<<"Estado actual"<<endl;
      cout<<"Dinero:"<< dinero <<"soles"<<endl;
      cout <<"Energia:"<<energia<<"/100"<<endl;
      cout<<"Conocimiento academico"<<conocimiento<<"/100"<<endl;
}

void semana_1(string decision){
    if(decision=="estudiar"){
        cout << nombre << "ha decidido pasar la semana estudiando en la biblioteca "<<endl;
        conocimiento +=5;
        energia -= 10;
    }   else if(decision=="pasar desapercibido"){
        cout<<nombre<<"ha decidido pasar desapercibido"<<endl;
        estatus_social-=5;
    }
    else if(decision=="socializar "){
        cout<< nombre<<"ha decidido conocer a tus companeros y decidir con quien hablaras"<<endl;
        cout<<"Tienes dos opciones"<<endl;
        cout<<"1.Hablar con Marco(es un chico muy inteligente,se la pasa todo el dia estudiando y el pc quien te ayudara siempre que lo nesccites"<<endl;
        cout<<"1.Hablar con Ismael(es un chico muy extrovertido con el cual es facil conocer gente nueva)"<<endl;

        int eleccion;
        cout<<"Escribe el numero de tu eleccion";   
        cin >> eleccion;

        if(eleccion==1){
            cout<<nombre<<"al hablar con Marco, se dan cuenta que tiene muchas cosas en comun y empiezan ganar generar confianza rapidamente";
            conocimiento +=1.5;
            energia -=5;
        }else if(eleccion==2){
            cout<<nombre<<"al hablar con Ismael,te das cuenta que es una persona de muchos amigos,la es facil de relacionarse y ayuda a generar contactos";
            estatus_social += 5;
        }else{
            cout<<"Opcion no valida.No hablaste con nadie";
        }
    mostar_estado();
    }

}

void semana_2(string decision){
}

void semana_3(string decision){
}

void semana_4(string decision){
}

void semana_5(string decision){
}

void semana_6(string decision){
}

void semana_8(string decision){
}

void semana_9(string decision){
}

void semana_10(string decision){
}

void semana_11(string decision){
}

void semana_12(string decision){
}

void semana_13(string decision){
}

void semana_14(string decision){
}

void semana_15(string decision){
}

void semana_16(string decision){
}
int main(){
    cout<<"Bienvenido a My_University_Live";
    cout<<"en este juego tu objetivo va a ser poder pasar el ciclo donde cada decision que tomes afectara en el futuro del juego  ";
}
