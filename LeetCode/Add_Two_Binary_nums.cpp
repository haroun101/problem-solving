string addBinary(string a, string b) {
    int sz = max(a.size() , b.size());
    reverse(a.begin() , a.end());
    reverse(b.begin() , b.end());
    int r = 0 ;
    string ans ="";
    for(int i = 0 ; i<sz ; i++){
        char ac = (i >= a.size() ? '0' : a[i]);
        char bc = (i >= b.size() ? '0' : b[i]);
        if(ac=='1' and bc=='1'){
            if(r==0){
                ans+='0';
                r = 1;
            }
            else if(r==1){
                ans+='1';
                r = 1;
            }
        }
        else if((ac =='1' and bc =='0') or (ac =='0' and bc =='1')){
            if(r==0){
                ans+='1';
                r = 0;
            }
            else if(r==1){
                ans+='0';
                r = 1;
            }
        }
        else if(ac=='0' and bc=='0'){
            if(r == 0){
                ans+='0';
                r = 0 ;
            }
            else {
                ans+='1';
                r = 0;
            }
        }
    }
    if (r == 1) ans += '1';
    reverse(ans.begin() , ans.end());
    return ans;
}
