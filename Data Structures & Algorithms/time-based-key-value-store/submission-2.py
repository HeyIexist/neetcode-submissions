class TimeMap:
    store : dict
    def __init__(self):
        self.store = {}

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.store:
            self.store[key] = [[value, timestamp]]
        else:
            self.store[key].append([value, timestamp])
    def get(self, key: str, timestamp: int) -> str:
        lists = self.store.get(key, [])
        if(len(lists) == 0):
            return ''
        solution = ['']
        low : int = 0
        high : int = len(lists) - 1
        while low <= high:
            mid : int = low + (high - low) // 2            
            if lists[mid][1] <= timestamp:
                solution.pop()
                solution.append(lists[mid][0])
                low = mid + 1
            else:
                high = mid - 1
        return solution[0]

