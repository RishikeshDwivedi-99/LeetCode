import java.util.ArrayList;

class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        
        if (friends == null || friends.length == 0 || order == null || order.length == 0) {
            return new int[0];
        }

        int[] freqArray = new int[friends[friends.length - 1] + 1];
        
        for(int i = 0; i < friends.length; i++) {
            freqArray[friends[i]]++;
        }

        ArrayList<Integer> ans = new ArrayList<Integer>();

        for(int i = 0; i < order.length; i++) {
            
            int id_at_this_rank = order[i];
            if (id_at_this_rank < freqArray.length && freqArray[id_at_this_rank] > 0) {
                ans.add(id_at_this_rank);
            }
        }

        int[] result = new int[ans.size()];
        for(int k = 0; k < ans.size(); k++) {
            result[k] = ans.get(k);
        }
        
        return result;
    }
}