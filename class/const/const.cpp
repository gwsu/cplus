#include <iostream>
using namespace std;

class example {

    public:
        example(double pi):PI(pi)
        {
        }
        double getpi(void)
        {
        return PI;
        }
    private:
        const double PI;
};

int main(void)
{
    example ex(3.1415);
    cout<< ex.getpi() << endl;
    return 0; 
}
