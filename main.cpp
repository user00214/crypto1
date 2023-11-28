#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Entrez le texte à chiffrer : ";
    string texte;
    getline(cin, texte);

    cout << "Entrez la clé A : ";
    int cleA;
    cin >> cleA;

    cout << "Entrez la clé B : ";
    int cleB;
    cin >> cleB;

    string texteChiffre;
    for (int i = 0; i < texte.length(); i++) {
        char lettre = texte[i];
        int code = lettre - 'a';
        int codeChiffre = (cleA * code + cleB) % 26;
        lettre = 'a' + codeChiffre;
        texteChiffre += lettre;
    }

    cout << "Texte chiffré : " << texteChiffre << endl;

    return 0;
}

