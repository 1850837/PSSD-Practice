#ifndef BLOCKENEMY_HPP
#define BLOCKENEMY_HPP

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <unordered_set>
using namespace std;

class BlockEnemy {
public:
    struct Edge {
        int u, v, cost;
    };

    int find(int x, vector<int>& parent) {
        if (parent[x] != x)
            parent[x] = find(parent[x], parent);
        return parent[x];
    }

    void unionSet(int x, int y, vector<int>& parent) {
        int px = find(x, parent);
        int py = find(y, parent);
        if (px != py)
            parent[py] = px;
    }

    int minEffort(int N, vector<string> roads, vector<int> occupiedTowns) {
        vector<Edge> edges;
        for (const string& road : roads) {
            stringstream ss(road);
            int a, b, e;
            ss >> a >> b >> e;
            edges.push_back({a, b, e});
        }

        // Sort edges by descending cost
        sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) {
            return a.cost > b.cost;
        });

        vector<int> parent(N);
        for (int i = 0; i < N; ++i)
            parent[i] = i;

        vector<bool> isOccupied(N, false);
        for (int town : occupiedTowns)
            isOccupied[town] = true;

        int effort = 0;

        for (const Edge& edge : edges) {
            int pu = find(edge.u, parent);
            int pv = find(edge.v, parent);

            if (pu == pv) continue;

            // If both components contain occupied towns, we must remove this edge
            bool uHasOccupied = false, vHasOccupied = false;
            for (int i = 0; i < N; ++i) {
                int pi = find(i, parent);
                if (pi == pu && isOccupied[i]) uHasOccupied = true;
                if (pi == pv && isOccupied[i]) vHasOccupied = true;
            }

            if (uHasOccupied && vHasOccupied) {
                effort += edge.cost;
            } else {
                unionSet(edge.u, edge.v, parent);
            }
        }

        return effort;
    }
};

#endif