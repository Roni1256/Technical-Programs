import java.io.*;
public class SumOfEven {
    public static void main(String [] args){
        int s=0;
        for (int i=1;i<=200;i++){
            if (i%2==0){
                s=s+i;
            }
        }
        System.out.println("The sum of even numbers(1-100):"+s);
    }
}
