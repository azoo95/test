#include "stdafx.h"

struct AAA
{
	char a[100];

	virtual ~AAA()
	{
		int a = sizeof(*this);
	}
};

struct BBB final : public AAA
{
	char b[200];

	~BBB()
	{
		int a = sizeof(*this);
	}
};

int main()
{
	AAA* aaa = new BBB;
	int a = sizeof(AAA);
	int b = sizeof(BBB);
	int c = sizeof(*aaa);
	delete aaa;

    return 0;
}
