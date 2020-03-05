
    class Matrix{
            public:
            Matrix(){}
            vector<vector<int>> a;
            Matrix &operator+(const Matrix& m2){
            Matrix& result=*this;
            for(int i=0;i<a.size();i++){
               for(int j=0;j<a[i].size();j++)  {
                   result.a[i][j]=a[i][j]+m2.a[i][j];
            }}
            return result;
            }

    };
