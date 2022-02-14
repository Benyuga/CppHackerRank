#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int age,standard;
        string first_name,last_name;
    public:
        void set_age(int &value){
            this->age=value;
        }
        void set_standard(int &value){
            this->standard=value;
        }
        void set_first_name(string &value){
            this->first_name=value;
        }
        void set_last_name(string &value){
            this->last_name=value;
        }
        
        int get_age(){
            return this->age;
        }
        int get_standard(){
            return this->standard;
        }
        string get_first_name(){
            return this->first_name;
        }
        string get_last_name(){
            return this->last_name;
        }
        void to_string(){
            cout<<this->age<<","<<this->first_name<<","<<this->last_name<<","<<this->standard;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}
