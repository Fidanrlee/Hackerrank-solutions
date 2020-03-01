
class Person{
    protected:
    string name;
    int age;
    public:
    virtual  void getdata()=0;
    virtual void putdata()=0;  
};

class Professor: public  Person {
    public:
    Professor(){
        this->cur_id++;
        id=cur_id;}
        
    void getdata(){
      cin >> name >> age >> publications;}
    
    void putdata(){ 
        
      cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;}
    
    private:
    int id;
     static int cur_id;
    int publications;
};
int Professor::cur_id = 0;

class Student: public  Person {
    public:
    Student(){  
        this->cur_id++;
        id=cur_id;}
        
    void getdata(){
        cin>>name>>age;
        cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];}
   
    void putdata(){
        cout<<name<<" "<<age<<" ";
        int total=0;
        for(int i=0;i<6;i++){ 
            total+=marks[i];}
        cout<<total<<" "<<id<<endl;}
    
        private:
        static int cur_id;
        int id;
        int marks[6];
};
int Student::cur_id=0; 