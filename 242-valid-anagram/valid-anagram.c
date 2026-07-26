bool isAnagram(char* s, char* t) {
     int n=strlen(s);
    int k = strlen(t);
    if(n !=k){
        return false;
    }
    int hash1[26]={0};
    int hash2[26]={0};
    for(int i=0;i<n;i++){
        hash1[s[i]-'a']++;
    }
    for(int i=0;i<k;i++){
        hash2[t[i]-'a']++;
    }
    for(int i=0;i<25;i++){
        if(hash1[i] != hash2[i]){
            return false;
        }
    }
return true;
}