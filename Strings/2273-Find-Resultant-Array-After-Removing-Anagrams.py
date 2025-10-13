def removeAnagrams(words):
    result = []
    result.append(words[0])
    
    for i in range(1, len(words)):
        lastIndex = len(result) - 1
        prev = result[lastIndex]
        
        sortedPrev = ''.join(sorted(prev))
        sortedNext = ''.join(sorted(words[i]))
        
        
        if(sortedPrev != sortedNext):
            result.append(words[i])
            
    return result

def main():
    words = ["abba", "aabb", "ab", "cd", "cd", "d", "c", "d", "d", "c"]
    result = removeAnagrams(words)
    print(result)
    
main()