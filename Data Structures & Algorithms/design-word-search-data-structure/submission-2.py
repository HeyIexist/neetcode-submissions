class TrieNode:
    def __init__(self):
        self.alphabets = {}
        self.word = False

class WordDictionary:

    def __init__(self):
        self.root = TrieNode()

    def addWord(self, word: str) -> None:
        curr = self.root
        for letter in word:
            if letter not in curr.alphabets:
                curr.alphabets[letter] = TrieNode()
            curr = curr.alphabets[letter]
        curr.word = True

    def search(self, word: str) -> bool:
        def dfs(j, root):
            cur = root
            for i in range(j, len(word)):
                c = word[i]
                if c == '.':
                    for alphabet in cur.alphabets.values():
                        if dfs(i+1, alphabet):
                            return True
                    return False
                else:
                    if c not in cur.alphabets:
                        return False
                    cur = cur.alphabets[c]
            return cur.word
        return dfs(0, self.root)
            

