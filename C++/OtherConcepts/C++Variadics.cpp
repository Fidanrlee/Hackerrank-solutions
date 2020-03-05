
template <bool a>
int reversed_binary_value(){
return a;
}

template <bool a,bool b, bool... digits>
int reversed_binary_value(){
return a+(reversed_binary_value <b,digits...>()<<1);
}
// Enter your code for reversed_binary_value<bool...>()

