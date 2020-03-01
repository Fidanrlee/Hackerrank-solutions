   try {
        cout<< Server::compute(A,B)<<endl;
   } 
    catch (const bad_alloc &err) {
        cout <<"Not enough memory" << endl;
   } 
    catch (const exception &err) {
        cout << "Exception: " << err.what() << endl;
   }
    catch (...) {
            cout << "Other Exception" << endl;
        }
            