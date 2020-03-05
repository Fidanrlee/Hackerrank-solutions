
template <typename T>
class  AddElements {
    T e;
        public:
        AddElements<T>(T element){
                e=element;
        }
        T add(T element){
            e+=element;
            return e;
        }
        string concatenate(T element){
            e+=element;
            return e;
        }

};

/*Write the class AddElements here*/

