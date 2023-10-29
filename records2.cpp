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
            return (o.age>age)? o: *this;
        }
};

int main()
{
    Records ob[5]={Records("Anne",21),Records("Betty",50),Records("Cathy",36),Records("Drake",17),Records("Elaine",70)};
    Records res = ob[0];
    cout<<"                "<<endl;
    for(int i=0;i<=4;i++)
    {
        res = res.eldest(ob[i+1]);
    }
    res.show();
    return 0;
}

