#include<iostream>
#include<conio.h>
using namespace std;
class BaseMath
{
private:
     bool Even(int n)
    {
        bool result =false;
        if(n%2==0)
            result = true;
        return result;
    }
public:

    float factorial(int n)
    {
        float factorial=1;
        for(int i=1;i<=n;i++)
            factorial *=i;
        return factorial;
    }

};
class AdvancedMath : public BaseMath
{
public:
    float euler(int n)
    {
        float euler=1;
        for(int i=1;i<=n;i++)
        {
            euler= euler + (float)1/factorial(i);
        }
        cout<<euler;
    }
};
main()
{
    BaseMath n;
    printf("Factorial(4) is %0.2f \n",n.factorial(4));
    AdvancedMath m;
    m.euler(4);
    getch();
}
