#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector <int> vect;
int val;

int trier()
{

}



int main()
{
    int categorie(0);
    int nbValeur(0);
    cout << "Entrez le nombre de categorie dans l'histogramme : " << endl;
    cin >> categorie ;
    cout << "Entrez le nombre de valeurs a classer : " << endl;
    cin >> nbValeur ;
       for (int x = 0; x < nbValeur; x++)
        {cout << "Rentrez la valeur " << x+1 << ": " ;
         cin >> val; vect.push_back(val) ;}
int maxValue = INT_MIN;
int minValue = INT_MAX;
    for(int i = 0; i<vect.size(); i++){
        cout << vect.at(i)<< endl;

if(vect.at(i) > maxValue) {
maxValue = vect.at(i);
}
if(vect.at(i) < minValue){
minValue= vect.at(i);
}
}
cout << maxValue << endl;
cout << minValue << endl;

int diff = (maxValue - minValue) / categorie;
cout << diff<< endl;
    return 0;
}
