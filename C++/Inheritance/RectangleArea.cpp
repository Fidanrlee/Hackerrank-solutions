
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    protected:
    int widht;
    int height;
    public:
    void display(){
        cout << widht << " " <<height << endl;
        
    }
    
};
class RectangleArea : public Rectangle{
    public:
    
    void read_input(){
        cin>>widht>>height;
    }
    void display(){
       cout << widht * height << endl;
    }
    
};