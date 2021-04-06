class Solution:
    def defangIPaddr(self, address: str) -> str:
        return "".join( '[.]' if ch == '.' else ch for ch in address)