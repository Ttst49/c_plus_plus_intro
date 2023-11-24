#include <iostream>

using namespace std;

int fieldInfo(){

    int length;
    int width;
    cout << "Donnez la longueur du champ" << endl;
    cin >> length;
    cout << "Donnez une largeur de champ" << endl;
    cin >> width;
    cout << "Le perimètre de votre champ est " << (length + width) * 2 << endl;
    cout << "La surface de votre champ est " << length * width << endl;
    return 0;
}


int main(){
    fieldInfo();
    return 0;
}