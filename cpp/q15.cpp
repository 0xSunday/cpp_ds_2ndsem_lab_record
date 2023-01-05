/*-------Write a program to distinguish the properties of static and non-static data members.------*/
#include <iostream>
using namespace std;

class Test
{
private:
    static int static_member;
    int non_static_member;

public:
    Test(int x) : non_static_member(x) {}

    static void increment_static_member()
    {
        static_member++;
    }

    void increment_non_static_member()
    {
        non_static_member++;
    }

    static int get_static_member()
    {
        return static_member;
    }

    int get_non_static_member()
    {
        return non_static_member;
    }
};

int Test::static_member = 0;

int main()
{
    Test t1(5);
    Test t2(10);

    cout << "\n\nt1.static_member: " << t1.get_static_member() << endl;
    cout << "t1.non_static_member: " << t1.get_non_static_member() << endl;
    cout << "t2.static_member: " << t2.get_static_member() << endl;
    cout << "t2.non_static_member: " << t2.get_non_static_member() << endl;

    t1.increment_static_member();
    t1.increment_non_static_member();

    cout << "\nt1.static_member: " << t1.get_static_member() << endl;
    cout << "t1.non_static_member: " << t1.get_non_static_member() << endl;
    cout << "t2.static_member: " << t2.get_static_member() << endl;
    cout << "t2.non_static_member: " << t2.get_non_static_member() << "\n\n";

    return 0;
}
