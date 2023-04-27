import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int count = s.nextInt();
        for(int i = 1; i <= count; i++){
            int n1= s.nextInt();
            int n2 = s.nextInt();
            System.out.println("Case #"+i+": "+ (n1+n2));
        }
    }
}