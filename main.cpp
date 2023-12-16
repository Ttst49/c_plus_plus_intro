#include <iostream>
#include <cmath>
#include "array"


int fieldInfo(){

    int length;
    int width;
    std::cout << "Donnez la longueur du champ" << std::endl;
    std::cin >> length;
    std::cout << "Donnez une largeur de champ" << std::endl;
    std::cin >> width;
    std::cout << "Le perimètre de votre champ est " << (length + width) * 2 << std::endl;
    std::cout << "La surface de votre champ est " << length * width << std::endl;
    return 0;
}

int getAverage(){

    int number;
    int sum = 0;
    int number_of_marks;
    std::cout << "Combien de notes voulez-vous associer pour récuperer une moyenne";
    std::cin >> number_of_marks;
    for (int i = 0; i < number_of_marks; ++i) {
        std::cout << "Donnez moi un nombre";
        std::cin >> number;
        sum += number;
    }
    std::cout << "Votre moyenne est " << sum/number_of_marks;
    return 0;
}


int exchangeVariables(){

    int numberA;
    int numberB;
    int tmp;
    std::cout << "Donnez moi un nombre A";
    std::cin >> numberA;
    std::cout << "Donnez moi un nombre B";
    std::cin >> numberB;
    tmp = numberA;
    numberA = numberB;
    numberB = tmp;
    std::cout << "Le nombre a est:" << numberA << std::endl << "Le nombre b est:" << numberB;
    return 0;
}


int getFullPriceFromKiloPrice(){

    float prixAuKilo;
    int nombresDeKilos;
    float TVA;
    float prixTTC;

    std::cout << "Definissez le prix au kilo";
    std::cin >> prixAuKilo;
    std::cout << "Definissez le nombres de kilos achetés";
    std::cin >> nombresDeKilos;
    std::cout << "Definissez la TVA de ce produit";
    std::cin >> TVA;

    TVA = prixAuKilo * TVA/100;
    prixTTC = (prixAuKilo + TVA) * (float)nombresDeKilos;
    std::cout << "Le prix final est de " << prixTTC;


    return 0;
}

double getDistance(){

    double x1,y1;
    double x2,y2;
    double x,y;
    std::cout << "Donnez la coordonnée x1";
    std::cin >> x1;
    std::cout << "Donnez la coordonnée y1";
    std::cin >> y1;
    std::cout << "Donnez la coordonnée x2";
    std::cin >> x2;
    std::cout << "Donnez la coordonnée y2";
    std::cin >> y2;
    x = x2-x1;
    x = pow(x,2);
    y = y2-y1;
    y = pow(y,2);

    std::cout << "La distance entre les 2 coordonnées est x:"<< x << " y:" << y;
    return 0;
}



int getHigher(){

    int nbr1;
    int higherNumber;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Donnez un nombre";
        std::cin >> nbr1;
        if (nbr1 > higherNumber){
            higherNumber = nbr1;
        }
    }
    std::cout << "le nombre le plus haut entré est " << higherNumber;
    return 0;
}



int getAbsolute(){
    int userNumber;

    std::cout << "Donnez un nombre qui sera converti en absolu";
    std::cin >> userNumber;
    if (userNumber<0){
        userNumber = abs(userNumber);
    }
    std::cout << "L'absolu de votre nombre est " <<userNumber;
    return 0;
}


int valueBetween(){
    double a,b,c;

    std::cout << "Donnez un entier a";
    std::cin >> a;
    std::cout << "Donnez un entier b";
    std::cin >> b;
    std::cout << "Donnez un entier c";
    std::cin >> c;
    if (c<b && c>a || c>b && c<a){
        std::cout << "Le nombre " << c << " est compris entre le nombre " << a << " et le nombre " << b;
    } else{
        std::cout << "Le nombre " << c << " n'est pas compris entre le nombre " << a << " et le nombre " << b;
    }
    return 0;
}

int isOddAndBetweenBornes(){
    int a;
    std::cout << "Donnez un nombre a";
    std::cin >> a;
    if (a % 2 == 1 && 84 <= a && a <= 101 ){
        std::cout << "Votre nombre est impair et est compris entre 84 et 101";
    } else{
        std::cout << "Votre nombre n'est pas impair et n'est pas compris entre 84 et 101";
    }
    return 0;
}

int checkNumbersInArray(){

    int arr[10];

    for (int i = 0; i <= 9; ++i) {
        std::cout << "Donnez le nombre qui sera dans le tableau à la valeur ["<<i<<"]";
        std::cin >> arr[i];
    }
    for (int j : arr) {
        if(j>=10){
            std::cout << "la valeur " << j << " est supérieure ou égale à 10" << std::endl;
        }
    }
    return 0;
}


int checkIfVInArray(){

    int V,arr[10];
    for (int i = 0; i <= 9; ++i) {
        std::cout << "Donnez un nombre qui sera dans le tableau à la valeur ["<<i<<"]";
        std::cin >> arr[i];
    }
    std::cout << "Donnez la valeur de V qui sera cherché dans le tableau";
    std::cin >> V;
    for (int j : arr) {
        if (j == V){
            std::cout << "La valeur " << V << " est dans le tableau";
        }
    }
    return 0;
}



int checkHigherNumberInArray(){

    int tmpHigher,arr[10];

    for (int i = 0; i <= 9; i++) {
        std::cout << "Donnez un nombre qui sera dans le tableau à la valeur ["<<i<<"]";
        std::cin >> arr[i];
    }

    for (int x = 0; x < 9; x++) {
        std::cout << arr[x];
        if (arr[x] > tmpHigher){
            tmpHigher = arr[x];
            std::cout << tmpHigher << std::endl;
        }
    }
    std::cout << "Le chiffre le plus grand du tableau est " << tmpHigher;
    return 0;
}


int checkIfVInArrayAndReplaceItByA0AtTheEnd()
{
    const int N=10;
    int t[N],i,j,V;
    bool trouve;
    for(i=0;i<N;i++){std::cout<<"Tapez un entier ";std::cin>>t[i];}
    std::cout<<"Tapez la valeur de V : ";std::cin>>V;

    trouve=false;
    i=0;
    while(!trouve && i<N)
        if(t[i]==V)trouve=true; else i++;

    if(trouve)
    {
        for(j=i;j<N-1;j++)t[j]=t[j+1];
        t[N-1]=0;
    }
    for(i=0;i<N;i++)std::cout<<t[i]<<std::endl;

    return 0;
}

int main(){
    checkIfVInArrayAndReplaceItByA0AtTheEnd();
    return 0;
}