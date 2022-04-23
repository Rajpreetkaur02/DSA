public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
       int t=scn.nextInt();
       
       for(int i=0;i<t;i++){
         boolean flag=true;
         int n=scn.nextInt();
         for(int div=2;(div*div)<=n;div++){
           if(n%div==0){
             flag=false;
             break;
           }
         }
       if(flag){
         System.out.println("prime");
       }
       else{
         System.out.println("not prime");
       }
       }
       
   }
