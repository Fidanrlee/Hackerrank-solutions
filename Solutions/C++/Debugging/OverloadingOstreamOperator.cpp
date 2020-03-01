

void process_input(int n) {
    try{
    int d = largest_proper_divisor(n);
    cout << "result=" << d << endl;
    cout<< "returning control flow to caller"<<endl;
    }
    catch(const invalid_argument& ia){
        cout<<ia.what()<<endl;
        cout<<"returning control flow to caller"<<endl;
    }
    
    
}

