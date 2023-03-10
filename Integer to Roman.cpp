class Solution {
public:
    string intToRoman(int num) {
        int binler = num/1000;
        int yuzler = num/100 - binler*10;
        int onlar = num/10 - binler*100 - yuzler*10;
        int birler = num - binler*1000 - yuzler *100 - onlar*10;
        int i=0;
        string result;
        while(binler--) result.push_back('M');;
        if(yuzler == 9) {
            result.push_back('C');; 
            result.push_back('M');;
        }
        else if(yuzler>=5){
            result.push_back('D');
            while(yuzler-- - 5) result.push_back('C');;
        }
        else if(yuzler == 4){
            result.push_back('C');
            result.push_back('D');
        }
        else{
            while(yuzler--) result.push_back('C');;
        }




        if(onlar == 9) {
            result.push_back('X');; 
            result.push_back('C');;
        }
        else if(onlar>=5){
            result.push_back('L');
            while(onlar-- - 5) result.push_back('X');;
        }
        else if(onlar == 4){
            result.push_back('X');
            result.push_back('L');
        }
        else{
            while(onlar--) result.push_back('X');;
        }



        if(birler == 9) {
            result.push_back('I');; 
            result.push_back('X');;
        }
        else if(birler>=5){
            result.push_back('V');
            while(birler-- - 5) result.push_back('I');;
        }
        else if(birler == 4){
            result.push_back('I');
            result.push_back('V');
        }
        else{
            while(birler--) result.push_back('I');;
        }
        return result;
    }
};
