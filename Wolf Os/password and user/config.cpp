#include <iostream>
#include <fstream>
using namespace std;

void config();

int main(){
 config();
}

void config(){
 ifstream verificar("../password and user/config.txt");
 if (verificar.is_open() && verificar.peek() != EOF) {
     return;
 }
verificar.close();


  string name,password;
   ofstream data;
   data.open("../password and user/config.txt",ios::app);
   cout<<R"(
|                   __                                        
|                /    /                          /          
| ___  ___  ___ (       ___       ___  ___  ___    ___  ___ 
||    |   )|   )|___ | |   )|   )|   )|   )|    | |   )|   )
||__  |__/ |  / |    | |__/ |__/ |    |__/||__  | |__/ |  /  
|                      __/                                   )";
 cout<<"\ningrese sus datos: \n";
    cout<<"nombre de usuario: ";   cin>>name;
    cout<<"contraseña: "; cin>>password;

    data<<name<<"\n"<<password;

    data.close();

}