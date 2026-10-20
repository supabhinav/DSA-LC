class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int i = 0;

        while (i < n) {
            char current = chars[i];
            int count = 0;

            // Count consecutive occurrences
            while (i < n && chars[i] == current) {
                count++;
                i++;
            }

            // Write the character
            chars[write++] = current;

            // Write the count if greater than 1
            if (count > 1) {
                string num = to_string(count);

                for (char digit : num) {
                    chars[write++] = digit;
                }
            }
        }

        return write;
    }
};