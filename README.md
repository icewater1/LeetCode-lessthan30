# LeetCode-lessthen30
LeetCode 要30行以內解題(不包括題目注解)

## 解題進度
### Easy:
**28**題 (31/5/2020)

### Medium:
**2**題 (18/5/2020)

## 奇技淫巧收集

### 796. Rotate String (Easy)
    class Solution {
    public:
        bool rotateString(string A, string B) {
            if (A.length() != B.length()) return false;
            return (A+A).find(B) != -1;
        }
    };
