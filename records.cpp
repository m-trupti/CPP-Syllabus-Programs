#include <iostream>
using namespace std;
class Records
{
    int age;
    string name;
    public:
        Records() {};
        Records(string n,int a): name(n),age(a) {}
        void show()
        {
            cout<<name<<" : "<<age<<endl;
        }
        Records eldest(Records o)
        {
            return (o.age&gt;age)? o: *this;
        }
};

int main()
{
    Records ob[3]={Records("Ani",21),Records("Arka",50),Records("Ram",30)};
    Records res = ob[0];
    for(int i=0;i&lt;2;i++)
        res = res.eldest(ob[i+1]);
    res.show();
    return 0;
}

