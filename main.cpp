#include <iostream>

using namespace std;

int main()
{
    int liczba = 100;       //deklarujemy liczbe
    int *wskaznik;          //deklarujemy wskaznik - przed nazwπ wskaünika zawsze musi byÊ *, bez * to nie jest wskaünik
    wskaznik = &liczba;     //do wskaznika przypisujemy adres zmiennej liczba za pomocπ &

    cout << wskaznik << endl;       // wskaünik to zmienna przechowujπca w sobie adres innej zmiennej w pamieci RAM komputera, tutaj jπ wyúwietlamy
    cout << *wskaznik << endl;      //z gwiazdkπ pokazujemy orygina≥ tego na co wskazujemy

    int x = 500;                    //nowa zmienna
    wskaznik = &x;                  //przestawiam wskaünik na tπ zmiennπ
    cout << wskaznik << endl;       //tutaj pokazuje wskaznik
    cout << *wskaznik << endl;      //tutaj pokazuje oryginalnπ wartoúÊ zmiennej, na ktÛrπ pokazuje wskaünik
    return 0;
}
