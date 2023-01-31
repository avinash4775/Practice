// Array_of_string_find_the_charcaters_that_is_above_the_given_character_and_String_present_left_to_the_character

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		List<String>arr=new ArrayList<String>();
		arr.add("axder");
		arr.add("sujqw");
		arr.add("ytmbc");
		arr.add("olfgh");
		Character a='m';
		int index_i=-1;
		int index_j=-1;

		for(int i=0;i<arr.size();i++){
		    String st=arr.get(i);
		    for(int j=0;j<st.length();j++){
		        if(st.charAt(j)==a){
		            index_i=i;
		            index_j=j;
		        }
		        
		    }
		}
		
		String ans1="";
		String ans2="";
		for(int i=index_i-1;i>=0;i--){
		    ans1=String.valueOf(arr.get(i).charAt(index_j)) +ans1;
		}
		for(int i=index_j-1;i>=0;i--){
		    ans2=String.valueOf(arr.get(index_i).charAt(i))+ans2;
		}
		System.out.println(ans2);
		System.out.println(ans1);
		
	}
}
