//Count the mnaximum number of continuous women followed  by men seating together

public class Main
{
	public static void main(String[] args) {
	    String s="MMMWMWWMWMMMWMMW";
	    int count_w=0;
	    int count_m=0;
	    int max=-1;
	    for(int i=0;i<s.length();i++){
	        if(count_m==0&&s.charAt(i)=='W'){
	            count_w++;
	        }
	        else if(count_m!=0&&s.charAt(i)=='W'){
	            if(count_m<count_w){
	                max=Math.max(max,2*count_m);
	               
	            }
	            else{
	                max=Math.max(max,2*count_w);
	            }
	             count_m=0;
	             count_w=1;
	        }
	        else if(count_w>count_m&&s.charAt(i)=='M'){
	            count_m++;
	        }
	    }
	    if(count_m<count_w){
	                max=Math.max(max,2*count_m);
	               
	            }
	            else{
	                max=Math.max(max,2*count_w);
	            }
		System.out.println(max);
	}
}
