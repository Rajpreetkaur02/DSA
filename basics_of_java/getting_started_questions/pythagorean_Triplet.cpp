 public static void main(String[] args) {
			Scanner scn = new Scanner(System.in);
			int a=scn.nextInt();
			int b=scn.nextInt();
			int c=scn.nextInt();
			boolean flag=false;
			int max=a;
			if(b>=max){
				max=b;
			}
			if(c>=max){
				max=c;
			}
			if(max==a){
				flag=((b*b+c*c)==(a*a));
				System.out.println(flag);
			}
			else if(max==b){
				flag=((a*a+c*c)==(b*b));
				System.out.println(flag);
			}
			else{
				flag=((a*a+b*b)==(c*c));
				System.out.println(flag);
			}
  	  }
