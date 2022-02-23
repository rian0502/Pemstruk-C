#include <iostream>

using namespace std;

//void tidak mengembalikan apapun
void sayHello(){
    cout<<"Selamat Datang\n";
}

int tambah(){

    return 1+2;
}
int tambah(int a, int b){
    return a+b;
}

double tambah(int a){
    return a+2;
}

int tambah(string nama){
    return 1;
}

int kurang(int, int);


int change(int a){
    a = 10;
    return a;
}


int main(int argc, char const *argv[]){
    int nilaifaktor = 10;
    
    for(int i= 10-1; i<1;i--){
        cout<<nilaifaktor <<" x "<<i<<" = "<<nilaifaktor * i<<endl;
    }
    return 0;
}

int kurang(int a, int b){
    return a-b;
}
