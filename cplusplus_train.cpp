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

const char* bin_str(const uint8_t& num) {
	static char buf[sizeof(num) * 8 + 1];
	for (char& c : buf) {
		c = 0;
	}
	printf("%s\n", buf);
	char* buf_p = buf;
	for (uint8_t bitmask = 0b10000000; bitmask; bitmask >>= 1) {
		//printf("%s\n", buf);
		//buf_p--;
		//printf("%c", *buf_p);
		//buf_p++;
		//*(buf_p++) = bitmask & num ? '1' : '0';
		*buf_p = bitmask & num ? '1' : '0';
		buf_p++;
	}

	char* bp = buf;
	for (char c = *bp; *bp; ++bp) {
		printf("%c\n", c);
		c = *bp;
	}

	return buf;
}

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

	int xc = 0;
	int xd = 0;

	//xc = ++xc;
	//xd = xd++;

	printf("%d\n", ++xc);
	printf("%d\n", xd++);


	int b = 0b10000000;
	b >>= 1;
	b >>= 1;
	b >>= 1;
	b >>= 1;
	b >>= 1; //4
	b >>= 1; //2
	b >>= 1; //1
	int x = 5;

	int y = x & b;


	printf("%d\n", b);
	printf("%d\n", y);
	printf("**************************************");
	printf("%s\n", bin_str(5));


}