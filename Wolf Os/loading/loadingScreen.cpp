#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
void screen1();
void screen2();

int main() {
    screen2();
    screen1();
    return 0;
}
void screen1(){
    int size = 12;

    for (int i = 1; i <= size; ++i) {
        cout << "\r                              |";
        
        for (int j = 0; j < i; ++j) {
            cout <<"#####";
        }

        for (int j = i; j < size; ++j) {
            cout << "     ";
        }

        cout << "] " << (i * 100 / size) << "%" << flush;


        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

void screen2(){
    cout<<R"(
                               MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMMMMMMWNXWMWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMMMMMWOlxWWN00WMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMMMWXd',dkdc:kNMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMWNO:..''...,kWWMMMWMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMWWXd'.........;dKWMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMWWKd;..........,,';kWWWMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMWNk;............;ll::dO0KXNWMMWMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMW0;.....................',:xNWWMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMKc........................,ONWWMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMWkc:'...................,co0WWWWMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMWNNK:.........',cxOOkdoxKWMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMWx'.';'....dXNWMMMWWMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMWKc'dXd'..'xWWMMMMMWMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMWWOONWNOo;':d0WMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMMMMMMWNKOk0WMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               LOADING:)";
                               cout<<"\n";
}