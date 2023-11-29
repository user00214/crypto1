#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Fonction pour chiffrer une lettre selon le chiffrement de César
char chiffrementCesar(char lettre, int decalage) {
    if (isalpha(lettre)) {
        char base = isupper(lettre) ? 'A' : 'a';
        return static_cast<char>((lettre - base + decalage) % 26 + base);
    }
    return lettre;  // Ne pas chiffrer les caractères non alphabétiques
}

// Fonction pour chiffrer un mot
string chiffrementCesarMot(const string& mot, int decalage) {
    string motChiffre = "";
    for (char caractere : mot) {
        motChiffre += chiffrementCesar(caractere, decalage);
    }
    return motChiffre;
}

// Fonction pour chiffrer une chaîne de caractères
string chiffrementCesarTexte(const string& texte, int decalage) {
    stringstream ss(texte);
    string mot;
    string texteChiffre = "";

    while (ss >> mot) {
        texteChiffre += chiffrementCesarMot(mot, decalage) + " ";
    }

    return texteChiffre;
}

int main() {
    // Exemple d'utilisation
    string texte;
    int decalage;

    cout << "Entrez la clé de chiffrement de César : ";
    cin >> decalage;
    cin.ignore();  // Ignorer le caractère de nouvelle ligne restant dans le buffer

    cout << "Entrez le texte à chiffrer : ";
    getline(cin, texte);

    // Appel de la fonction de chiffrement de César pour le texte entier
    string texteChiffre = chiffrementCesarTexte(texte, decalage);

    cout << "Texte chiffré : " << texteChiffre << endl;

    return 0;
}
