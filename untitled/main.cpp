#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Entrez le texte à chiffrer : ";
    string texte;
    getline(cin, texte);

    cout << "Entrez la clé : ";
    int cle;
    cin >> cle;

    string texteChiffre;
    for (int i = 0; i < texte.length(); i++) {
        char lettre = texte[i];
        int code = lettre - 'a';
        int codeChiffre = (code + cle) % 26;
        lettre = 'a' + codeChiffre;
        texteChiffre += lettre;
    }

    cout << "Texte chiffré : " << texteChiffre << endl;

    return 0;
}

