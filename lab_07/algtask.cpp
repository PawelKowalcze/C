#include<iostream>
using namespace std;

struct List {
    int x;
    double y;
    List *previous;
    List *next;
};

void addBefore(List *current, int intValue, double doubleValue){
    List *newList = new List {intValue, doubleValue, nullptr, nullptr};
    newList->previous = current->previous;
    newList->next = current;

    if (current->previous) {
        current->previous->next = newList;
    }
    current->previous = newList;
}

void addLast(List* head, int intValue, double doubleValue) {
    List* newList = new List {intValue, doubleValue, nullptr, nullptr};

    // Znajdź ostatni element w strukturze
    List* last = head;
    while (last->next) {
        last = last->next;
    }

    // Aktualizacja wskaźników dla nowego elementu
    newList->previous = last;
    last->next = newList;
}

void displayList(List* head) {
    List* current = head;
    while (current) {
        std::cout << "Int: " << current->x << ", Double: " << current->y << std::endl;
        current = current->next;
    }
}

int main () {
    List* head = new List{0, 0.0, nullptr, nullptr};

    // Dodanie kilku elementów do listy
    addLast(head, 1, 1.1);
    addLast(head, 2, 2.2);
    addBefore(head->next, -1, -1.1);

    // Wyświetlenie zawartości listy
    displayList(head);

    // Zwolnienie pamięci zajmowanej przez elementy listy
    List* current = head;
    while (current) {
        List* next = current->next;
        delete current;
        current = next;
    }
    
    return 0;
}