import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        //when we have to use string and integer both in a code then we have to use Integer.parseInt
        int n=Integer.parseInt(scn.nextLine());
        String name = scn.nextLine();
        System.out.println("hello "+name);
        System.out.println("counting is");
        for(int i=0;i<=n;i++){
            System.out.println(i);
        }
        scn.close();
    }
}
