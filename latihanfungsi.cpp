#include <iostream> 
using namespace std; 
void tambah(int a, int b){ 
	printf("%d + %d = %d\n", a, b, a+b); 
} 
void kurang(int a, int b){ 
	printf("%d - %d = %d\n", a, b, a-b);
}
void kali(int a, int b){ 
	printf("%d * %d = %d\n", a, b, a*b);
}
void bagi(int a, int b){ 
	printf("%d / %d = %d\n", a, b, a/b);
}
int main(){ 
    int a,b;
    cout << "Masukkan Nilai a :" << endl;
    cin >> a;
    cout << "Masukkan Nilai b :" << endl;
    cin >> b;

	tambah(a, b); 
	kurang(a, b); 
	kali(a, b);
    bagi(a, b); 
	return 0;
}