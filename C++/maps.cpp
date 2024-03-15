#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>m;

    //insertion

    pair<string, int>p = make_pair("dear", 1);
    m.insert(p);

    pair<string, int> p2("panda", 3);
    m.insert(p2);

    pair<string, int> p3("AP dhillon", 3);
    m.insert(p3);

    m["kutti"] = 4;

    cout<<m.count("panda")<<endl;
    cout<<m.size()<<endl;

    m.erase("AP dhillon");
    cout<<m.size()<<endl;

    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout<<it -> first <<" "<<it -> second<<endl;
        it++;
    }
}