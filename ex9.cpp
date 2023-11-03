#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// écrire une fonction nb_char_in_file(filename, c) qui compte le nombre
// de fois que la caractère c apparait dans le fichier. Il doit retourner
// une valeur négative en cas d'impossibilité d'ouvrir le fichier

int nb_char_in_file(string filename, char c) {
    ifstream file =  ifstream(filename);
    if(!file) {
        return -1;
    }

    char a;
    int r = 0;
    while(file >> noskipws >> a) {
        if(a == c)  {
            r++;
        }
    }
    return r;
}

int main() {
   cout << "Entrez le nom du fichier : " << flush;
   string filename; cin >> filename;
   cout << "Entrez le caractere : " << flush;
   char c; cin >> c;

   auto n = nb_char_in_file(filename,c);
   if(n >= 0)
      cout << "Le fichier contient " << n << " fois le caractere " << c << endl;
   else
      cout << "Le fichier est illisible";
}