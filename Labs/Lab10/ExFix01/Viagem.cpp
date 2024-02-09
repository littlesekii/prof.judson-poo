#include <iostream> 
#include <fstream> 
#include "Tempo.h"
using namespace std;

int main()
{
    ifstream fin{ "viagem.txt" };
    if (!fin.is_open())
    {
        cout << "Arquivo viagem.txt não localizado\n";
        return EXIT_FAILURE;
    }

    Tempo ida, volta;
    fin >> ida;
    fin >> volta;
    fin.close();

    Tempo total = 5 + ida + volta;  // 5 horas de passeio 

    ofstream fout{ "passeio.txt" };

    fout << "Ida: " << ida << endl;
    fout << "Volta: " << volta << endl;
    fout << "Tempo Total: " << total << endl;
    fout.close();

    return 0;
}
