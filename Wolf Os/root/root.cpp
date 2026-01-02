#include <cstdlib> 

void passwordUser();
void login();
void loading();
void desktop();
int main(){
   loading();
   passwordUser();
   login();
   desktop();
} 

void loading(){
    system("\"../loading/loadingScreen\"");
}

void passwordUser(){
    system("\"../password and user/config\"");
}

void login(){
     system("\"../login/config\"");
}

void desktop(){
     system("\"../desktop/config\"");
}