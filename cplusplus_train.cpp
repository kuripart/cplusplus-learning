#include<cstdio>
#include<iostream>
#include<string>

using namespace std;


enum enum1
{
	A, B, C, D
};



string func() {
	return string("this is string");
}

struct Employee {
	int id;
	const char* name;
	const char* role;
};

struct S {
	int x : 1;
	bool y : 1;
};

union u1
{
	char c;
	int i;
};

int main() {


	Employee e1 = { 100, "e1", "role1" };
	Employee* ep = &e1;
	printf("%d\n", (*ep).id);
	puts((*ep).name);
	printf("%d\n", ep->id);
	puts(ep->name);

	S sa;
	sa.x = true;
	sa.y = false;
	printf("%d\n", sa.x);
	printf("%d\n", sa.y);
	printf("%d\n", A);

	u1 u11;
	u11.c = 'g';

	printf("%c\n", u11.c);
	printf("%d\n", u11.i);

}