#include <boost/timer.hpp>
using namespace boost;

int main()
{
    timer t;
    cout << "max timespan"
         << t.elapsed_max() /3600 <<" h " <<endl;
}
