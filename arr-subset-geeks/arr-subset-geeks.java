
class Solution {
    public boolean isSubset(int a[], int b[]) {
        
        // code here
        
 
        

        
        Arrays.sort(a);
        Arrays.sort(b);
        int n1=a.length;
        int n2=b.length;
        int i=0,j=0;
       
        while(i<n1 && j<n2){
            if(a[i]==b[j]){
                i++;
                j++;
                
            
            }
            else i++;
            
        }
        
        if(j==n2){
            return true;
        }
        else{
            return false;
        }
            
    }
}