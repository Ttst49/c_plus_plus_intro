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


int exchangeVariables(){

    int numberA;
    int numberB;
    int tmp;
    cout << "Donnez moi un nombre A";
    cin >> numberA;
    cout << "Donnez moi un nombre B";
    cin >> numberB;
    tmp = numberA;
    numberA = numberB;
    numberB = tmp;
    cout << "Le nombre a est:" << numberA << endl << "Le nombre b est:" << numberB;
    return 0;
}


int getFullPriceFromKiloPrice(){

    float prixAuKilo;
    int nombresDeKilos;
    float TVA;
    float prixTTC;

    cout << "Definissez le prix au kilo";
    cin >> prixAuKilo;
    cout << "Definissez le nombres de kilos achetés";
    cin >> nombresDeKilos;
    cout << "Definissez la TVA de ce produit";
    cin >> TVA;

    TVA = prixAuKilo * TVA/100;
    prixTTC = (prixAuKilo + TVA) * (float)nombresDeKilos;
    cout << "Le prix final est de " << prixTTC;


    return 0;
}

int main(){
    getFullPriceFromKiloPrice();
    return 0;
}