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

int faktorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * faktorial(n -1);
    }
}


int sum(int a, int b){
    return a+b;
}

int distance(int c, int d){
    return sum(c,d);
}


int parameterDek(int a=1, int c=3){
    return a+c;
}

int main(int argc, char const *argv[]){
    cout<<parameterDek();
    return 0;
}


int kurang(int a, int b){
    return a-b;
}
