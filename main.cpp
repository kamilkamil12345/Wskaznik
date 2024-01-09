#include <iostream>

using namespace std;

int main()
{
    int liczba = 100;       //deklarujemy liczbe
    int *wskaznik;          //deklarujemy wskaznik - przed nazw� wska�nika zawsze musi by� *, bez * to nie jest wska�nik
    wskaznik = &liczba;     //do wskaznika przypisujemy adres zmiennej liczba za pomoc� &

    cout << wskaznik << endl;       // wska�nik to zmienna przechowuj�ca w sobie adres innej zmiennej w pamieci RAM komputera, tutaj j� wy�wietlamy
    cout << *wskaznik << endl;      //z gwiazdk� pokazujemy orygina� tego na co wskazujemy

    int x = 500;                    //nowa zmienna
    wskaznik = &x;                  //przestawiam wska�nik na t� zmienn�
    cout << wskaznik << endl;       //tutaj pokazuje wskaznik
    cout << *wskaznik << endl;      //tutaj pokazuje oryginaln� warto�� zmiennej, na kt�r� pokazuje wska�nik
    return 0;
}
