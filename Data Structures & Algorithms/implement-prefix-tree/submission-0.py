class TrieNode:
    def __init__(self):
        self.alphabets = {}
        self.isLastLetter = False

class PrefixTree:

    def __init__(self):
        self.root = TrieNode()

    def insert(self, word: str) -> None:
        curr = self.root
        for char in word:
            if char not in curr.alphabets:
                curr.alphabets[char] = TrieNode()
            curr = curr.alphabets[char]
        curr.isLastLetter = True

    def search(self, word: str) -> bool:
        curr = self.root
        for char in word:
            if char not in curr.alphabets:
                return False
            curr = curr.alphabets[char]
        return curr.isLastLetter

    def startsWith(self, prefix: str) -> bool:
        curr = self.root
        for char in prefix:
            if char not in curr.alphabets:
                return False
            curr = curr.alphabets[char]
        return True
        