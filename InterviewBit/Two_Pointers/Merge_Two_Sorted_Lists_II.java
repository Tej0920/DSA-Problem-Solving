public class Solution {
	public void merge(ArrayList<Integer> a, ArrayList<Integer> b) {
	    if((a == null || a.isEmpty()) && (b == null || b.isEmpty()))
            return;
        
        ArrayList<Integer> arr = new ArrayList<>(a.size()+b.size());
        
        int aIndex = 0, bIndex=0;
        while(aIndex < a.size() && bIndex < b.size()) {
            if(a.get(aIndex) < b.get(bIndex)) {
                arr.add(a.get(aIndex));
                aIndex++;
            } else {
                arr.add(b.get(bIndex));
                bIndex++;
            }
        }
        if(bIndex < b.size()) {
            while(bIndex < b.size()) {
                arr.add(b.get(bIndex));
                bIndex++;
            }
        }
        if(aIndex < a.size()) {
            while(aIndex < a.size()) {
                arr.add(a.get(aIndex));
                aIndex++;
            }
        }
        
        a.clear();
        for(Integer data : arr) {
            //System.out.print(", "+data);
            a.add(data);
        }
	}
}
