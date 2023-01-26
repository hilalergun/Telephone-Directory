#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
#include<chrono>

using namespace std;

class phoneBook
{
    private:
    string name;
    string phoneNumber;

    public:
    virtual string getPhoneNumber(const string &name) = 0;
    virtual void addContact(string name, string phone) = 0;
};

class map_phoneBook : public phoneBook
{
    private:
    map <string, string> contacts_map;

    public:
    string getPhoneNumber(const string &name);
    void addContact(string name, string phone);
};

class umap_phoneBook : public phoneBook
{
    private:
    unordered_map <string, string> contacts_umap;

    public:
    string getPhoneNumber(const string &name);
    void addContact(string name, string phone);
};

class vec_phoneBook : public phoneBook
{
    private:
    vector<pair<string,string>> contacts_vec;

    public:
    string getPhoneNumber(const string &name);
    void addContact(string name, string phone);
};  
