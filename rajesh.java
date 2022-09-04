import java.util.*;

class rajesh
{
	static final int MAX_CHAR = 26;
	
	public static int minChanges(String str)
	{
		
		int n = str.length();
		
		if (n > MAX_CHAR)
			return -1;
		
		int dist_count = 0;
		int count[] = new int[MAX_CHAR];
		
		for(int i = 0; i < MAX_CHAR; i++)
			count[i] = 0;
		
		for (int i = 0; i < n; i++)
		{
			if(count[str.charAt(i)-'a'] == 0)
				dist_count++;
			count[str.charAt(i)-'a']++;
		}
		
		return (n-dist_count);
	}
	
	public static void main (String[] args) {
        Scanner in=new Scanner(System.in);
		
		String str = in.next();
		
		System.out.println(minChanges(str));
	}
}

