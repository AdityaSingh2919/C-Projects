import java.util.Scanner;
class ptice{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
       int n = sc.nextInt();
        String str=sc.next();
        String Adrian="ABC";
        String Bruno="BABC";
        String Goran="CCAABB";
        int count1=0;
        int count2=0;
        int count3=0;
        int max=-1;
        for(int i=0;i<str.length();i++){
            if(Adrian.charAt(i % 3) == str.charAt(i)){
                count1++;
               
            }if(Bruno.charAt(i % 4) == str.charAt(i)){
                count2++;
                
            }if(Goran.charAt(i % 6) == str.charAt(i)){
                count3++;
               
            }
        }
        max=Math.max(count1, Math.max(count2,count3));
        System.out.println(max);
        if(count1 == max)
        System.out.println("Adrian");

        if(count2 == max)
             System.out.println("Bruno");

            if(count3 == max)
            System.out.println("Goran");
    }
}
