string intToRoman(int num) {
        unordered_map<int,string> store;
        string ans = "";
        
         store[1]="I";
         store[5]="V";
         store[10]="X";
         store[50]="L";
         store[100]="C";
         store[500]="D";
         store[1000]="M";

         store[4]="IV";
         store[9]="IX";
         store[40]="XL";
         store[90]="XC";
         store[400]="CD";
         store[900]="CM";
        
        vector<int> help{1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int index = 12;
        while(num>0){
            int base = help[index];
            int div = num/base;  // no of div  eg: if 3 then 3 times 1 added
            num = num%base;  //rem
            
            while(div>0){
                ans = ans + store[base];
                div--;
            }
          
            index--;
        }
        
        return ans;

        
    }
