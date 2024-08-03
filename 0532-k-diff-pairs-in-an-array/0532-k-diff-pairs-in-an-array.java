class Solution {
    public int findPairs(int[] nums, int k) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        int ans = 0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            int num = entry.getKey();
            int count = entry.getValue();

            if (k == 0) {
                if (count > 1) {
                    ans++;
                }
            } else {
                if (map.containsKey(num + k)) {
                    ans++;
                }
            }
        }

        return ans;
    }
}