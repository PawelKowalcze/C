# Lab 10

Proszę wykonać tę instrukcję w parach (wylosowanych). 

## Zadanie programistyczne

* Proszę zaimplementować klasę `fib` posiadającą dynamicznie alokowaną tablicę liczb. Konstruktor klasy powinien wypełniać tablicę kolejnymi liczbami ciągu Fibonacciego (dla przykładu, jak inicjujemy 5 elementową tablicę - zostanie ona wypełniona [1, 1, 2, 3, 5]). Proszę nie zapomnieć o destruktorze.
* Proszę zaimplementować metodę `print` wyświetlającą elementy tego ciągu
* Proszę  zaimplementować metodę `add`, która dodaje kolejny element na końcu tablicy, nadal zgody z ciągiem. Proszę pamiętać o zarządzaniu pamięcią!
* Proszę zaimplementować klasę pochodną `fib_start`, która wypełnia `n` elementową tablicę jak ciąg Fibonacciego od elementów `a` i `b` podanych w konstruktorze, czyli `fib_start(5, 3, -5)` wypełni 5 elementową tablicę wartościami [3, -5, -2, -7, -9]. 
* Proszę do klasy `fib_start` dopisać metodę `remove` usuwającą pierwszy element ciągu liczb. Proszę pamiętać, że zawsze musimy mieć minimum dwa elementy ciągu. 

## Przeciążenie

1. Proszę zdefiniować klasę czas, która przechowuje czas jako liczba minut od 12 w nocy. Klasa powinna mieć przeciążony konstruktor, w którym możemy podać liczbę minut od 12 w nocy, lub godzinę i minutę, lub string w formacie `03:45` i metodę `print`, która wypisuje godzinę w formacie `xx:xx`. Rozwiązanie proszę zapisać jako plik `Lab10_1_solved.cpp` i umieść w swojej gałęzi git.
1. Proszę dokończyć implementację klasy wektor zdefiniowanej na wykładzie. Rozwiązanie proszę zapisać jako plik `Lab10_2_solved.cpp` i umieść w swojej gałęzi git.

## Referencja

1. Proszę stworzyć klasę `Vec` o dwóch polach `x_` i `y_` i metodach `print`, `add_one` dodającej jeden do `x_` i `y_`. Następnie proszę napisać cztery funkcje, których argumenty to `Vec` (różnie pobierany). Sama funkcja ma dwie linijki, użycie metody `add_one` oraz `print`. Każda funkcja w różny sposób pobiera dane do funkcji. Sposób przekazywania danych do funkcji to: 
* kopiowanie, 
* wskaźnik, 
* referencja 
* stała referencja. 

Jeżeli jakiś sposób przekazania nie działa, proszę go zakomentować i dodać opis czemu to nie działa. Proszę poza wypisaniem danych w funkcji wypisać dane przed i po wywołaniu funkcji. 

2. Następnie proszę dodać kolejne 4 funkcje, których argumentami jest tablica obiektów `Vec` oraz jej długość (drugi argument to poprosut `int`). Dla każdego obiektu tablicy wykonujemy metodę `add_one` i wypisujemy otrzymane wartości. Który typ przekazania danych będzie poprawny? Rozwiązanie proszę zapisać jako plik `Lab10_3_solved.cpp` i umieść w swojej gałęzi git.

