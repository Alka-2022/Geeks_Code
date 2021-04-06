class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        comp_total = []
        for i in accounts:
            total = sum(i)
            comp_total.append(total)
        return max(comp_total)