#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //konstans változó neve: N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //hiányzó ;
    for (int i = 0;) //ciklusmag hiányos (ciklusfeltétel, iterátor)
    {
        b[i] = i * 2; //hiányzó dereferencia
    }
    for (int i = 0; i; i++) //hiányzó ciklusfeltétel
    {
        std::cout << "Ertek:" //hiányzó ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //; helyett ,
    {
        atlag += b[i] //hiányzó ; és dereferencia
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //hiányzó destruktor (delete b;)
    return 0;
}
