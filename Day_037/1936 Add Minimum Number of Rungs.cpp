class Solution:
    def addRungs(self, rungs: List[int], dist: int) -> int:
        extra = 0
        last = 0
        for i in rungs:
            if i - last > dist:
                extra += int((i-last) /dist)
                if (i-last)%dist ==0:
                    extra-=1
            last = i
        return extra
