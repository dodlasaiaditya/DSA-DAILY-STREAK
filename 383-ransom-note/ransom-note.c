bool canConstruct(char* ransomNote, char* magazine) {
    int k=strlen(ransomNote);
    int l= strlen(magazine);
    int hash1[26]={0};
    int hash2[26]={0};
    for(int i=0;i<k;i++){
        hash1[ransomNote[i]-'a']++;
    }
    for(int i=0;i<l;i++){
    hash2[magazine[i]-'a']++;
    }
    for(int i=0;i<26;i++){
   if(hash1[i] > hash2[i]){
    return false;
   }
    }
 return true;   
}