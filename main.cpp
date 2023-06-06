#include <iostream>

using namespace std;


// stworzenie struktury dla pojedynczego elementu stosu, zawiera wskaznik na element ponizej
struct element{
    int value;
    element *below;
};


// sprawdza czy stos jest pusty
bool isEmpty(element *_stack){
    return _stack == nullptr;
}

// dodanie elementu na szczyt stosu
void push(element *&_stack, int value){
    element *temp = new element;
    temp->value = value;

    temp->below = _stack;
    _stack = temp;
}

// usuniecie elementu z wierzchu stosu
void pop(element *&_stack){
    _stack = _stack->below;
}

// wyswietlenie elementu znajdujacego sie na szcycie stosu
int top(element *_stack){
    return _stack->value;
}



int main()
{

    // inicjalizacja stosu jako wskaznik na psuty element, z niego wszystko wychodzi
    element *stos = nullptr;

    cout << isEmpty(stos) << endl;

    push(stos, 1);
    push(stos, 2);
    push(stos, 3);
    push(stos, 4);

    cout << top(stos) << endl;
    cout << isEmpty(stos) << endl;
    pop(stos);

    cout << top(stos) << endl;
    cout << isEmpty(stos) << endl;
    pop(stos);

    cout << top(stos) << endl;
    cout << isEmpty(stos) << endl;
    pop(stos);

    cout << top(stos) << endl;
    cout << isEmpty(stos) << endl;
    pop(stos);


    cout << isEmpty(stos) << endl;



    return 0;
}
