#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;
void screen();
int main(){
 screen();
}

void screen(){
  ifstream leer;
  leer.open("../password and user/config.txt");
   string user;
   string nombre, pass;
   getline(leer, nombre);
   getline(leer, pass);



    cout<<R"(                      
|              /           /     
|             (  ___  ___    ___ 
|             | |   )|   )| |   )
|             | |__/ |__/ | |  / 
|                    __/          )";

cout<<"      \n BIENVENIDO "<<nombre;

 do{
 cout<<"      \n CONTRASEÑA: "; cin>>user;
 if(user == pass){
 break;
 }else {
    cout<<"\r    INCORRECTO... "<< flush;
    usleep(200000);

    cout << "\r                    \r" << flush;
 }
   
}while(true);
}