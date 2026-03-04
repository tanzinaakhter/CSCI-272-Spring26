using namespace std;

class Car {
    private:
        string brand{"Mercedes"};
        string model = "C-Class";
        int year {2023};
        
    public:
        Car(){ // default constructor
            cout<< "Object constructor" << endl;
            
        }
        ~Car(){ // Destructor
            cout << "Object is destoryed" << endl;
        } 
        Car(string b, string m, int y){ // paramterized constructor
            brand = b;
            model = m;
            year = y;
        }
        
        Car(const Car &other){ // copy constructor
            brand = other.brand;
            model = other.model;
            year = other.year;
        }
        void startEngine(){
            // code to start the car's engine 
            cout<< "start engine " <<"{brand:"<< brand <<"|model:"<< model<<"}"<< endl;
            
        }
    

        
};