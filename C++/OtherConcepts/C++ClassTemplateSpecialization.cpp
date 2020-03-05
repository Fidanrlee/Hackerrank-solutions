

template<>
struct Traits <Color>{
    static string name (int c){
            switch(static_cast<Color>(c)){
                case Color::red: return "red";
                case Color::green: return "green";
                case Color::orange: return "orange";
                default :  return "unknown";
            }
    }

};
template<>
struct Traits <Fruit>{
    static string name (int f){
            switch(static_cast<Fruit>(f)){
                case Fruit::apple: return "apple";
                case Fruit::orange: return "orange";
                case Fruit::pear: return "pear";
                  default :  return "unknown";
            }
    }

};

