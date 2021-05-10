
/* ����� ����������
 1 ���� - ������������� (preprocessing) ������������
 2 ���� - ���������� (compilation) ��� ���������� - ������� � �� � ��������
 3 ���� - �������� (linking) ���������� (������)

    ��� ���� ����� ������ ��� ����� �������
    ����� ����� � cmd.

     ��� 1 �����:
     ��������� ���������� � ������ -E, ������������ ����� ���������������
     ..\ >gcc.exe -E hello_world.c
     ��� ���� ����� ��� � � Clion -> Shift-shift = preprocess current TU

        ���� ����������:
        >gcc.exe -c hello_world.c
        �� ������ ��������� ���� hello_world.o - �������� ��������� ����





*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("Hello world!\n");
    return 0;
}
