int birthday(vector<int> s, int d, int m) {
    int count = 0;
    int current_sum = 0;
    
   
    if (s.size() < m) return 0;
    
    
    for (int i = 0; i < m; i++) {
        current_sum += s[i];
    }
    

    if (current_sum == d) {
        count++;
    }
    
  
    for (int i = m; i < s.size(); i++) {
        current_sum += s[i] - s[i - m];
        if (current_sum == d) {
            count++;
        }
    }
    
    return count;
}