#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<char *, int> db;
    // INSERTI0ON
    db.insert(make_pair((char *)"Ayam", 12));
    db.insert(make_pair((char *)"Bebek", 10));
    db.insert(make_pair((char *)"Domba", 2));
    db.insert(make_pair((char *)"Sapi", 11));
    db.insert(pair<char *, int>((char *)"Kucing", 99));

    // ACCESS
    cout << db.at((char *)"Ayam") << endl;
    cout << db[(char *)"Domba"] << endl;
    cout << db[(char *)"Belalang"] << endl; // WARNING! BUAT DUMMY

    cout << endl;
    cout << (db.find((char *)"Sapi") != db.end()) << endl;
    cout << (db.find((char *)"Kuda") != db.end()) << endl;

    // ITERATOR
    cout << endl;
    for (auto i = db.begin(); i != db.end(); i++)
        cout << (*i).first << " : " << (*i).second << endl;

    cout << endl;

    // SIZE
    cout << db.size() << endl;
    // db.empty()

    // ERASURE
    db.erase("Belalang");
    return 0;
}
