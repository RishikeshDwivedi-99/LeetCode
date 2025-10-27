class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        int n = brokenLetters.length();
        int[] freqArray = new int[26];

        for(int i = 0;i < n;i++){
            freqArray[brokenLetters.charAt(i) - 'a']++;
        }

        String[] words = text.split(" ");
        int count = 0;
        for(String word : words) {
            boolean isTyped = true;
            for (char c : word.toCharArray()) {
                if (freqArray[c - 'a'] > 0) {
                    isTyped = false;
                    break;            
                }
            }
            if(isTyped == true) count++;
        }
        return count;
        
    }
}