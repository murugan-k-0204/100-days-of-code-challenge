class Solution:
    def distanceBetweenBusStops(self, distance: List[int], start: int, destination: int) -> int:
        if start>destination:
            start,destination = destination,start
        clock = sum(distance[start:destination])
        anti_clock  = sum(distance[0:start]) + sum(distance[destination:])
        return min(clock,anti_clock)
        
        
