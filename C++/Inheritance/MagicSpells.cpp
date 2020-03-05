

        if(Fireball* dc=dynamic_cast<Fireball*>(spell)){
            dc->revealFirepower();
        }
        
        else if(Frostbite* dc=dynamic_cast<Frostbite*>(spell)){
            dc->revealFrostpower();
        }
        
        else if(Thunderstorm* dc=dynamic_cast<Thunderstorm*>(spell)){
            dc->revealThunderpower();
        }
        
        else if(Waterbolt* dc=dynamic_cast<Waterbolt*>(spell)){
            dc->revealWaterpower();
        }
        else {
                string scrollname = spell->revealScrollName();
                string journal    = SpellJournal::read();
                int Journalarray[scrollname.size()+1][journal.size()+1];

                for(int i=0;i<=scrollname.size();i++){
                    for(int j=0;j<=journal.size();j++){
                        if(i==0 ||j==0)
                        Journalarray[i][j]=0;
                    else if(scrollname[i-1]==journal[j-1])
                        Journalarray[i][j]=1+Journalarray[i-1][j-1];
                    else
                        Journalarray[i][j]=max(Journalarray[i][j-1],Journalarray[i-1][j]);
                         }
                    }
                cout<<Journalarray[scrollname.size()][journal.size()]<<endl;
                }
/* Enter your code here. Read input from STDIN. Print output to STDOUT */

