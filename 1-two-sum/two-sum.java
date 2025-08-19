import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> numToIndex = new HashMap<>();

        for(int i=0;i<nums.length;i++) {
            int compliment = target - nums[i];

            if(numToIndex.containsKey(compliment)) {
                return new int[] {numToIndex.get(compliment), i};
            }

            numToIndex.put(nums[i],i);
        }

        return new int[] {};
    }
}