#include<map>
#include<unordered_map>
#include <iostream>
using namespace std;
int main()
{
  //create
 unordered_map<string,int>m;
 //insertion
 pair<string,int>p1=make_pair("The",1);
 m.insert(p1);
 pair<string,int>p2("sun",2);
 m.insert(p2);
 pair<string,int>p3("sets",3);
 m.insert(p3);
 pair<string,int>p4("in a",4);
 m.insert(p4);
 m["blaze"]=5;
 m["of"]=6;
 m["orange"]=7;
 m["and"]=8;
 m["pink"]=9;
 //search
 cout<<m["blaze"]<<endl;
 cout<<m["pink"]<<endl;
 cout<<m["sets"]<<endl;
 cout<<m["The"]<<endl;
 cout<<m["in a"]<<endl;
 //search for unknown key which is not in the map
 cout<<m["unknownkey"]<<endl;//make space for unknownkey
 cout<<m.at("unknownkey")<<endl;
 //size
 cout<<m.size()<<endl;
 //erase
 /*
 cout<<m.erase("sets")<<endl;
 cout<<m.size()<<endl;
 */
 // Iterator
 //when we use unordered_map, key value in random but in map in order is reserved;
unordered_map<string, int>::iterator it = m.begin();
while (it != m.end())
 {
cout << it->first << " " << it->second << endl;
it++;
}


    return 0;
}
