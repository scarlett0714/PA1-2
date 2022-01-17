//202110547, 황윤선, C프로그래밍(0452), rect.c, 2021/04/03
#include <stdio.h>
int main(void)
{
	int a, b; //방 세로길이:a, 방 가로길이:b
	int c, d; //테이블 세로길이:c, 테이블 가로길이:d
	char e; //테이블 간 간격:e
	char f; //테이블 당 하객 수:f
	int r; //최대 하객 수:r
	int x, y; //방의 세로부분에서 최대로 들어갈 수 있는 테이블의 개수 : x, 방의 가로부분에서 최대로 들어갈 수 있는 테이블의 개수 ; y

	printf("What are the length and width of the room (in meters)?\n");
	scanf("%d %d", &a, &b);

	printf("What are the length and width of the table (in meters)?\n");
	scanf("%d %d", &c, &d);

	printf("How much space is required between tables (in meters)?\n");
	scanf("%hhd", &e);

	printf("How many people does each table seat?\n");
	scanf("%hhd", &f);

	x = (a - e) / (e + c); //테이블 당 간격의 개수는 테이블 수보다 1개 더 많다. 
						   //따라서 방의 세로길이에서 간격 1번을 빼준 뒤,
						   //(테이블 세로길이+간격)세트가 몇 쌍이 들어가는지 계산한다. 
						   //이때, x값은 나눗셈의 몫만 출력해야하므로 int형으로 설정한다.
	y = (b - e) / (e + d); //x와 같은 방식으로 가로방향에 들어갈 수 있는 테이블의 수도 결정한다.
	r = x * y * f;

	printf("This arrangement seats %d people.", r);

	return 0;
}