//return a array with the element as temp=first character +middle+last and temp will be repeated num times then inserted in array to return array 


import java.util.*;
public class Main
{
	public static void main(String[] args) {
	String []arr={"world","hello","madam"};
	String[]res=new String[arr.length];
	int num=2,i=0;
	for(i=0;i<arr.length;i++)
	{
	    String temp="";
	    temp=temp+String.valueOf(arr[i].charAt(0))+
	              String.valueOf(arr[i].charAt((arr[i].length()-1)/2))+
	              String.valueOf(arr[i].charAt(arr[i].length()-1));
	  res[i]= temp.repeat(num+1);
	    
	}
	
	for(i=0;i<res.length;i++){
	    System.out.println(res[i]);
	}
	}
}
