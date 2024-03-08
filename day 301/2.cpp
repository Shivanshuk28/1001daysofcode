//2325. Decode the Message


class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>mpp;
        //character of the given key string is mapped with first apperance of all 26 
        // lowercase characters  
        int ii=0;
        //a different variable is kept because it will help us in ignoring the spaces that will 
        // come in all along between key string.
        for(int i=0;i<key.size();i++){
            if(key[i]!=' '){
                //also this condition is kept because in a string the characters can repeat so,
                // we want that we dont assign the value again in a map.
                if(mpp.find(key[i])!=mpp.end()){
                    continue;
                }
                else{
                    mpp[key[i]]='a'+ii;
                    ii++;
                }
                
            }
        }
        //commented out(was made to just check the output)
        // for(auto x:mpp){
        //     cout<<x.first<<"  "<<x.second<<endl;
        // }
        for(int i=0;i<message.size();i++){
            if(message[i]!=' '){
                message[i]=mpp[message[i]];
            }
        }
        return message;
    }
};