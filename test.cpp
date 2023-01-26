#include "base.cpp"

int main()
{
    vec_phoneBook vecPhone;
    map_phoneBook mapPhone;
    umap_phoneBook umapPhone;

    vecPhone.addContact("Kutay", "05312279343");
    vecPhone.addContact("Ahmet", "05312345678");
    vecPhone.addContact("Mehmet","05234567234");
    vecPhone.addContact("Berkay", "05152340842");
    vecPhone.addContact("Deniz", "05074151758");
    vecPhone.addContact("Doğukan", "05124567890");
    vecPhone.addContact("Onur", "05056418959");
    vecPhone.addContact("Bülent", "05335033056");
    vecPhone.addContact("Dilek", "05067823421");
    vecPhone.addContact("Bahadir", "05322245678");
    mapPhone.addContact("Kutay", "05312279343");
    mapPhone.addContact("Ahmet", "05312345678");
    mapPhone.addContact("Mehmet","05234567234");
    mapPhone.addContact("Berkay", "05152340842");
    mapPhone.addContact("Deniz", "05074151758");
    mapPhone.addContact("Doğukan", "05124567890");
    mapPhone.addContact("Onur", "05056418959");
    mapPhone.addContact("Bülent", "05335033056");
    mapPhone.addContact("Dilek", "05067823421");
    mapPhone.addContact("Bahadir", "05322245678");
    umapPhone.addContact("Kutay", "05312279343");
    umapPhone.addContact("Ahmet", "05312345678");
    umapPhone.addContact("Mehmet","05234567234");
    umapPhone.addContact("Berkay", "05152340842");
    umapPhone.addContact("Deniz", "05074151758");
    umapPhone.addContact("Doğukan", "05124567890");
    umapPhone.addContact("Onur", "05056418959");
    umapPhone.addContact("Bülent", "05335033056");
    umapPhone.addContact("Dilek", "05067823421");
    umapPhone.addContact("Bahadir", "05322245678");
    
    auto start_vec = chrono::high_resolution_clock::now();
    cout << vecPhone.getPhoneNumber("Bahadir") << endl;
    auto end_vec = chrono::high_resolution_clock::now();
    chrono::duration<double> time_vec = end_vec - start_vec;
    cout << "Vector run time complexity: " << time_vec.count() << " seconds" << endl;
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;

    auto start_map = chrono::high_resolution_clock::now();
    cout << mapPhone.getPhoneNumber("Deniz") << endl;
    auto end_map = chrono::high_resolution_clock::now();
    chrono::duration<double> time_map = end_map - start_map;
    cout << "Map run time complexity: " << time_map.count() << " seconds" << endl;
    cout << "Map memory compexity: " << sizeof(mapPhone) << endl;

    auto start_umap = chrono::high_resolution_clock::now();
    cout << umapPhone.getPhoneNumber("Deniz") << endl;
    auto end_umap = chrono::high_resolution_clock::now();
    chrono::duration<double> time_umap = end_umap - start_umap;
    cout << "Unordered Map run time complexity: " << time_umap.count() << " seconds" << endl;
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;

    return 0;
}
