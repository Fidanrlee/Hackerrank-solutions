

//Define the structs Workshops and Available_Workshops.
struct Workshop{
int start_time;
int end_time;
int duration;
};

struct Available_Workshops{
int n;
vector <Workshop> W_array; 
};
//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize(int* start_time,int* duration, int n){
         Available_Workshops* A=new (Available_Workshops);
         A->n=n;   
            Workshop w;
        for(int i=0;i<n;i++){
            w.start_time=start_time[i];
            w.duration=duration[i];
            w.end_time=start_time[i]+duration[i];
            A->W_array.push_back(w);
        }
        return A;
}
bool compare(Workshop a,Workshop b){
    return a.end_time<b.end_time;
}
int CalculateMaxWorkshops( Available_Workshops * ptr){
            sort(ptr->W_array.begin(),ptr->W_array.end(),compare);
        int maxw=1;
        int lasttime=ptr->W_array[0].end_time;
        for(int i=1;i<ptr->n;i++){
            if(ptr->W_array[i].start_time>=lasttime){
                maxw++;
                lasttime=ptr->W_array[i].end_time;
            }
        }
    return maxw;

}



