//ch4_pointer.cpp -- our first pointer variable
//goes with Listing 4.15 on page 155 of book

//try changing the prefix incrementor on line 17 to a postfix incrementor and see what happens!

#include <iostream>
int main()
{
        using namespace std;
        int updates = 6;
        int * p_updates;
        p_updates = &updates;

        cout << "Value of updates is: " << updates << endl;
        cout << "Value of p_updates is: " << p_updates << endl;
        cout << "And *p_updates is: " << *p_updates << endl;
        updates++;

        ++*p_updates;
        //TRY CHANGING THE LINE ABOVE and see how it affects the code!

        //p_updates = p_updates + 1;
        //TRY CHANGING THE LINE ABOVE and see how it affects the code!

        cout << "Now updates is: " << updates << endl;
        cout << "And p_updates is:" << p_updates << endl;
        cout << "And *p_updates is: " << *p_updates << endl;

        return 0;
}
