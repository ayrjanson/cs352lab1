#include <iostream>
#include "range.hpp"

using namespace std;
int main() {
    range r = {1, 10};
    cout << "[" << r.begin << "," << r.end << ")" << endl;

    // UNCOMMENT BELOW FOR PART 1
    // cout << r << endl;

    // UNCOMMENT BELOW FOR PART 2
    // range s = {5};
    // cout << s << endl;

    // UNCOMMENT BELOW FOR PART 3
    // const range t = {7, 7};
    // bool t_empty = t.empty();
    // cout << t << (t_empty ? " is" : " is not") << " empty" << endl;

    // UNCOMMENT BELOW FOR PART 4
    // searchable& u = r;
    // int x = 7;
    // bool x_found = u.contains(x);
    // cout << x << (x_found ? " is" : " is not") << " in " << r << endl;
}