#include"base.h"

string map_phoneBook::getPhoneNumber(const string &name)
{
    auto it = contacts_map.find(name);
    if(it != contacts_map.end())
    {
        return it->second;
    }
    else
    {
        return " ";
    } 
}

string umap_phoneBook::getPhoneNumber(const string &name)
{
    auto it = contacts_umap.find(name);
    if(it != contacts_umap.end())
    {
        return it->second;
    }
    else
    {
        return " ";
    }
}

string vec_phoneBook::getPhoneNumber(const string &name)
{
    for(int i=0; i<contacts_vec.size(); i++)
    {
        if(contacts_vec[i].first == name)
        {
            return contacts_vec[i].second;
        }
        else
        {
            return " ";
        }
    }
    return " ";
}

void map_phoneBook::addContact(string name, string phone)
{
    contacts_map.insert(make_pair(name,phone));
}

void umap_phoneBook::addContact(string name, string phone)
{
    contacts_umap.insert(make_pair(name,phone));
}

void vec_phoneBook::addContact(string name, string phone)
{
    contacts_vec.push_back(make_pair(name, phone));
}
