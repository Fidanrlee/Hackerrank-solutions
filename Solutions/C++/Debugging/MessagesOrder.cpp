

class Message {
public:
 
    Message() {}
    Message(const string& T):text(T){ current_id =++id;}
    const string& get_text() {
        return text;
    }
  bool operator < (const Message& m1){
    if(current_id<m1.current_id)
    return true;
    else
    return false; 
  }  
  private:
    static int id;
    int current_id;
    string text;
};
int Message::id=0;
class MessageFactory {
    
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        Message M(text);
        return M;
    }
};

