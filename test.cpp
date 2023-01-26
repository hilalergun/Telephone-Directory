#include"base.cpp"

int main()
{
    vec_phoneBook vecPhone;
    map_phoneBook mapPhone;
    umap_phoneBook umapPhone;

    vecPhone.addContact("Kutay", "05312279343");
    auto start_vec = chrono::high_resolution_clock::now();
    cout<<vecPhone.getPhoneNumber("Kutay")<<endl;
    auto end_vec= chrono::high_resolution_clock::now();
    chrono::duration<double> time_vec = end_vec - start_vec;
    cout<<"Run time complexity: "<<time_vec.count()<<" seconds"<<endl;
    cout<<"Memory complexity: "<<sizeof(vecPhone)<<endl;
    
    mapPhone.addContact("Deniz", "05074151758");
    auto start_map = chrono::high_resolution_clock::now();
    cout<<mapPhone.getPhoneNumber("Deniz")<<endl;
    auto end_map = chrono::high_resolution_clock::now();
    chrono::duration<double> time_map = end_map - start_map;
    cout<<"Run time complexity: "<<time_map.count()<<" seconds"<<endl;
    cout<<"Memory compexity: "<<sizeof(mapPhone)<<endl;

    umapPhone.addContact("Doğukan", "05124567890");
    auto start_umap = chrono::high_resolution_clock::now();
    cout<<umapPhone.getPhoneNumber("Doğukan")<<endl;
    auto end_umap = chrono::high_resolution_clock::now();
    chrono::duration<double> time_umap = end_umap - start_umap;
    cout<<"Run time complexity: "<<time_umap.count()<<" seconds"<<endl;
    cout<<"Memory complexity: "<<sizeof(umapPhone)<<endl;

    return 0;
}

