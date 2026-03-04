using namespace std;

class Person {
    
public:
    string name{"Tanzina"};
    int age{20};
    char gender{'F'};
    
public:
    void introduce(){
        cout<< "Hello, I'm " << name << ". I'm " << age << " years old ";
        if (gender == 'M'){
            cout << " I'm a male." << endl;
        }
        else if (gender == 'F'){
            cout << " I'm a female" << endl;
        }
        else{
          cout << "Gender Unspecified. " << endl;  
        }
       
    }

};