class Solution {
    public int removeDuplicates(int[] a) {
        List<Integer> arr = new ArrayList<>(); // using extra space..
        for (int i = 0; i < a.length - 1; i++) {
            if (a[i] != a[i + 1])
                arr.add(a[i]); // put different in arraylist
        }
        arr.add(a[a.length - 1]);
        for (int i = 0; i < arr.size(); i++) {
            a[i] = arr.get(i); // update array
        }
        return arr.size();
    }
}