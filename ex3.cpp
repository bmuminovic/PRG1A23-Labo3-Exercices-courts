#include <iostream>

using namespace std;

// écrire la fonction plus_petite_lettre(str) qui retourne
// le plus petit caractère (au sens du code ASCII) de la chaine
// str. Si cette lettre apparait plusieurs fois c'est la
// dernière instance qui doit être retournée.

char& plus_petite_lettre(string& s) {
    int posSmallest;
    char smallest = 127;
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] <= smallest) {
            posSmallest = i;
            smallest = s[i];
        }
    }

    return s[posSmallest];
}

int main() {

   string s{"wisigoth"};
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche wisi*oth

   s = "abraracourcix";
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche abrar*courcix
}