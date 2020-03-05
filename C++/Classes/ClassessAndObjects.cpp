class Student{
    private:
    int arr[5];
    
    public:
    
    void input(){
        for (int i=0;i<5;i++)   cin>>arr[i];
    }
    int calculateTotalScore(){
        int cnt=0;
        for (int i=0;i<5;i++)   cnt+=arr[i];
        return cnt;
    }
};