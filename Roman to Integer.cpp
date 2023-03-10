

int val(char roman){
    switch(roman){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int len(char* s){
    int i=0;
    while(s[i]!=0){
        i++;
    }
    return i;
}


int romanToInt(char * s){
    int result=0, i;
    for(i=0; i<len(s)-1; i++){
        if(val(s[i])>=val(s[i+1])){
            result+=val(s[i]);
        }
        else{
            result-=val(s[i]);
        }
        
    }
    result+=val(s[i]);
    return result;
}
