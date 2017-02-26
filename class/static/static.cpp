#include <iostream>
using namespace std;

class example {

    public:
        static char chval;
        static int getint(void){
        return ival;
        }   
    private:
        static int ival;
};

char example :: chval = 'a';
int  example :: ival;

int main(void)
{
    example ex;
    cout << ex.getint() << endl;

    cout << ex.chval<< endl;
    example::chval= 'b';
    cout << example::chval << endl;

    return 0; 
}
