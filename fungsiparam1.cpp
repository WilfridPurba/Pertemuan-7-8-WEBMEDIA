#include <iostream>
using namespace std;
void say_hello (string name) {
    cout << "Selamat Pagi" << name << "!\n";
}
int main(){
    // memanggil fungsi say_hello()
    say_hello(" Danu ");
    say_hello(" Medan ");
    say_hello(" Web Media ");
    return 0;
}