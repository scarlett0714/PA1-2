//202110547, Ȳ����, C���α׷���(0452), rect.c, 2021/04/03
#include <stdio.h>
int main(void)
{
	int a, b; //�� ���α���:a, �� ���α���:b
	int c, d; //���̺� ���α���:c, ���̺� ���α���:d
	char e; //���̺� �� ����:e
	char f; //���̺� �� �ϰ� ��:f
	int r; //�ִ� �ϰ� ��:r
	int x, y; //���� ���κκп��� �ִ�� �� �� �ִ� ���̺��� ���� : x, ���� ���κκп��� �ִ�� �� �� �ִ� ���̺��� ���� ; y

	printf("What are the length and width of the room (in meters)?\n");
	scanf("%d %d", &a, &b);

	printf("What are the length and width of the table (in meters)?\n");
	scanf("%d %d", &c, &d);

	printf("How much space is required between tables (in meters)?\n");
	scanf("%hhd", &e);

	printf("How many people does each table seat?\n");
	scanf("%hhd", &f);

	x = (a - e) / (e + c); //���̺� �� ������ ������ ���̺� ������ 1�� �� ����. 
						   //���� ���� ���α��̿��� ���� 1���� ���� ��,
						   //(���̺� ���α���+����)��Ʈ�� �� ���� ������ ����Ѵ�. 
						   //�̶�, x���� �������� �� ����ؾ��ϹǷ� int������ �����Ѵ�.
	y = (b - e) / (e + d); //x�� ���� ������� ���ι��⿡ �� �� �ִ� ���̺��� ���� �����Ѵ�.
	r = x * y * f;

	printf("This arrangement seats %d people.", r);

	return 0;
}