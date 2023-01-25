#include"base.cpp"

int main()
{
    vec_phoneBook vecPhone;
    map_phoneBook mapPhone;
    umap_phoneBook umapPhone;

    vecPhone.addContact("Kutay", "05312279343");
    clock_t start_vec = clock();
    cout<<vecPhone.getPhoneNumber("Kutay")<<endl;
    clock_t end_vec = clock();
    double time_taken_vec = double(end_vec - start_vec)/CLOCKS_PER_SEC;
    cout<<"Run time complexity: "<<time_taken_vec<<" seconds"<<endl;
    
    mapPhone.addContact("Deniz", "05074151758");
    clock_t start_map = clock();
    cout<<mapPhone.getPhoneNumber("Deniz")<<endl;
    clock_t end_map = clock();
    double time_taken_map = double(end_map - start_map)/CLOCKS_PER_SEC;
    cout<<"Run time complexity: "<<time_taken_map<<" seconds"<<endl;

    umapPhone.addContact("Doğukan", "05124567890");
    clock_t start_umap = clock();
    cout<<umapPhone.getPhoneNumber("Doğukan")<<endl;
    clock_t end_umap = clock();
    double time_taken_umap = double(end_umap - start_umap)/CLOCKS_PER_SEC;
    cout<<"Run time complexity: "<<time_taken_umap<<" seconds"<<endl;

    return 0;
}


