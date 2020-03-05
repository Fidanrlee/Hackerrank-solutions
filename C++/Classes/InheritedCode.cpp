/* Define the exception here */
class BadLengthException{
    int x;
    public :
    BadLengthException(int n){
        x=n;
    }
    int what(){
        return x;
    }
};
