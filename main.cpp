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

int getAverage(){

    int number;
    int sum = 0;
    int number_of_marks;
    cout << "Combien de notes voulez-vous associer pour récuperer une moyenne";
    cin >> number_of_marks;
    for (int i = 0; i < number_of_marks; ++i) {
        cout << "Donnez moi un nombre";
        cin >> number;
        sum += number;
    }
    cout << "Votre moyenne est " << sum/number_of_marks;
    return 0;
}


int main(){
    getAverage();
    return 0;
}