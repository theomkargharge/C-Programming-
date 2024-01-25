#include <iostream>
using namespace std;
// template <class int=int, class int=int, class int=int>
class WireFrmes
{
    int a;
    int b;
    int c;

public:
    WireFrmes()
    {
        int x;
        int y;
        int z;

        a = x;
        b  = y;
        c = z;
        cin>>a>>b>>c;
    }
    void Display(void);
};

void WireFrmes:: Display(){
    int s  = (2*a)+(2*b);
    int v =   (s * c);
   cout<<v<<endl;

}
int main()
{
    // write code from here
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        WireFrmes obj;
        obj.Display();
    }
    

    return 0;
}