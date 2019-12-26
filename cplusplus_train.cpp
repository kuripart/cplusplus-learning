#include<cstdio>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

#ifndef NULL
#define NULL (0LL)
#endif


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

	auto uux = func();
	printf("%s\n", uux.c_str());
	// printf("%s\n", uux); wont work printf only accepts c string

	if (typeid(uux) == typeid(string)) {
		puts("both are strings");
	}

	vector<int> vi = { 1,2,3,4,5 };
	for (vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
		printf("%d\n", *it);
	}

	for (auto it = vi.begin(); it != vi.end(); ++it) {
		printf("%d\n", *it);
	}
}