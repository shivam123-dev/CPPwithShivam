import java.util.*;
public class city_Bus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] stop = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
        int path[] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
        String src, dest;
        src = sc.nextLine();
        dest = sc.nextLine();
        sc.close();
        if(src.equalsIgnoreCase(dest)) {
            System.out.println("INVALID OUTPUT");
        }   
        else {
            

        }
    }
}