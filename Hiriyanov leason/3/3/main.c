
/* этапы компил€ции
 1 этап - препроцессинг (preprocessing) предоработка
 2 этап - компил€ци€ (compilation) или трансл€ци€ - перевод с яѕ в машинный
 3 этап - линковка (linking) компановка (сборка)

    дл€ того чтобы пройти эти этапы ручками
    нужно зайти в cmd.

     дл€ 1 этапа:
     запустить компил€тор с флагом -E, остановитьс€ после предпроцессинга
     ..\ >gcc.exe -E hello_world.c
     это тоже самое что и в Clion -> Shift-shift = preprocess current TU

        этап трансл€ции:
        >gcc.exe -c hello_world.c
        на выходе получитс€ файл hello_world.o - создалс€ объектный файл





*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("Hello world!\n");
    return 0;
}
