import java.util.*;
public class factoviser{
    public static void main(String[] args) {
        // int fact,divd;
        Scanner sc=new Scanner(System.in);
        // System.out.println();
        // int c;
        int fact= sc.nextInt();
        int divd=sc.nextInt();
        
        for(fact=2 ;fact>0;fact--){
            fact = fact * (fact -1);
            // break;
        }
            
            if(fact > 0){
                
                if(  divd% fact == 0){
                    
                    //    cout<<divd<<" divides "<<fact<<"!";
                    System.out.println(divd+"divides"+fact+"!");
             }
             
             else{
                 
                 //  cout<<divd<<" does not divides "<<fact<<"!";
                 System.out.println(divd+"does not divides"+fact+"!");
                 
                }
            } 
            

    }
}

// ackage com.company
// import java.util.*;
// public class factoviser f
// public static void main(String[] args){
// Scanner sc= new Scanner(System.in);
// int a=sc. nextIntO);
// it b=sc.nextIntO);
// int fact=1;
// while (true) {
// for (int 1=1; i<-a; i++) fact-fact*i;
// if(fact%b==0) System.out.println(a+"divids"+b);
// else system.out.println(a+"not divids"+b);
// break;