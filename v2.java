
import java.util.*;

public class v2
{public static void main(String[] args) {
    int []arr;
      int numPoints = 0;
        Scanner scan = new Scanner(System.in);

        for(int i = 0; i < arr.length;i++){
int m  = scan.nextInt();
            if(arr[i]<0) {
                break;
            }
            else arr[i]=m;
        }
		int oddCounter = 0;
		int val = 0;
		int i = 0;
		int length = arr.length;
		while(true) {

			if(i == length) {
				break;
			}
			
			if(arr[i]>0 && arr[i]<10){
				oddCounter++;
				
				if(oddCounter >=2) {

						val = arr[i];
					oddCounter = 0;
					arr[--i] = val;
					length = length-1;
					arr = processArray(arr, i+1);
					val = 0;
				}
				else {
					val = arr[i];
					i++;
				}
			}
			else{
				i++;
				val = 0;
				oddCounter = 0;
			}

		}
		for(int j = 0 ; j<length ; j++) {
			System.out.println(arr[j]);
		}
	}
	public static int[] processArray(int[] arr, int i) {

		for(int k = i; k<arr.length-1 ; k++) {

			arr[k] = arr[k+1];

		}
		return arr;


	}
}
