public class basics {
    //we use static because we want to run this main function without creating an object of the class
    //the contents of the main function does not depend on any object
    public static void main(String[] args)//this is the void main of java
    { 
        System.out.println("hello");
        //println means print new line and print means just print 
        //instead of println we can also use \n character with print
        System.out.println("hello world");
        // *
        // **
        // ***
        // ****
        System.out.print("*\n**\n***\n****\n"); 
        //OR
        System.out.println("*");
        System.out.println("**");
        System.out.println("***");
        System.out.println("****");   
        // *****
        //    *
        //   *
        //  *
        // ***** 
        System.out.print("\n*****\n   *\n  *\n *\n*****\n");
    }
}
