#include <stdio.h>
#include <stdlib.h>


/*!
 * C- �� �������� ������
 * ���������� - ������� �������� ��������� ���� �� \���� , �������� ����������� ������������
 * �� - ������������ �������������� �������, ������ ��� �� ����������,������������ ��������.
 * ���������� �������� ������ ���������� ������� ����������
*/


int main(){
  printf("Hello, my name is Lol\n"
           "What is you name?\n");
    char name[20];  // ������ ������ ���� �������� ��������!
    scanf("%s", name); // ��������� �� name �� �����
    printf("Hello, %s! How old are you? \n", name);
    int year;
    scanf ("%d", &year); // ��������� �� name �����

    return 0;
}
