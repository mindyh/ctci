# Recursion
#### Strategy
* BASE CASE FIRST!!!!!!!!!!!!!!!!!!!!!!

# Trees
#### Vocab
* Binary Search Tree - left nodes are always less than right nodes
* Search tree - you choose whether left < right or right < left
* balanced - left and right trees don't differ by more than tolerance. O(log n) search time when balanced, o(n) worst case when unbalanced.
* Full and complete - every branch has 2 leaves, 2^n - 1 nodes.

#### Algorithms
* Traversal
  * in-order travel - visit left side, then current node, then right side 
* balancing
  * O(n) with Day-Stout-Warren aglo
 
# Graphs
#### Vocab
* Undirected
* Directed
* Strong connectivity
  * every node has a path to every other node
* DAG

#### Algorithms
* BFS - O(m+n), queue
* DFS - O(m+n), stack
* Check for Bipartiteness (every edge has one end in each side)
  * Cannot contain an odd cycle
  * build on top of BFS, mark each node 0 or 1 check if any 2 edges connect nodes of the same number
  * 
  
# Greedy
* Interval Scheduling
 * choose the one that finishes first 
* Shortest path (Dijkstra)
 * until you reach your final node, store the shortest path needed to reach each new node  
* Min spanning tree (Prim)
 *  Add the next node you can that would minimize cost
* Min spanning arborescence 
 * MST for Directed graph 
 * For each edge, delete all edges with cost >= to it (including itself). The edge belongs if there no longer exists a path from root to that node.
* Union Find
 * counting components  
 * if (Find(u) != Find(u)) Union(Find(u), Find(v))
* Min-cut/Max-flow
* Clustering
* Data compression
* 
  

---
