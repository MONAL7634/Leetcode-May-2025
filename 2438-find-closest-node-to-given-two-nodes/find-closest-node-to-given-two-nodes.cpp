#include <vector>
#include <algorithm>
#include <climits> // For INT_MAX

class Solution {
public:
    int closestMeetingNode(const std::vector<int>& edges, int node1, int node2) {
        std::vector<int> dist1 = getDistances(edges, node1);
        std::vector<int> dist2 = getDistances(edges, node2);

        int result = -1;
        int minDistance = INT_MAX;

        for (size_t i = 0; i < edges.size(); ++i) {
            if (dist1[i] != -1 && dist2[i] != -1) {
                int maxDist = std::max(dist1[i], dist2[i]);
                if (maxDist < minDistance) {
                    minDistance = maxDist;
                    result = i;
                }
            }
        }
        return result;
    }

private:
    std::vector<int> getDistances(const std::vector<int>& edges, int start) {
        int n = edges.size();
        std::vector<int> dist(n, -1);
        int d = 0;
        while (start != -1 && dist[start] == -1) {
            dist[start] = d++;
            start = edges[start];
        }
        return dist;
    }
};
