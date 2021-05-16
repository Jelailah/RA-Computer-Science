# RA-Computer-Science

## Modular Multiplictaive Inverse

The modular multiplicative inverse of an integer **_a_** is any number **_x_** such that **_a\*x_** is congruent to **1** modulo **_m_**. 

Using the Euclidean Algorithm, we can find the value of **_x_** by solving the following equation:

**_ax + my = 1_**, where **_x_** and **_y_** are unknown and **_x_** is the modular multiplicative inverse of **_a_**.

However, this can only be solved if the **_gcd(a,m)=1_**. 

The complete solution can be found [here](https://github.com/Jelailah/RA-Computer-Science/blob/main/modular_multiplicative_inverse.cpp)

## Merkle Tree

A Merkle Tree is a data structuring method that composes of hashes of different blocks of data, summarizing all the transations in a block. In a Merkle Tree, every leaf node is labelled with the cryptographic hash of a data block, and every non-leaf node is labelled with the cryptographic hash of the labels of its child nodes. This provides an efficient and fast way of verifying a data's accuracy.

A singe hash, on the other hand, does not store the hashes of individual blocks/chuncks of data. Rather, it combines all the individual hashes and hash them again to obtain a root hash, then only stores that root hash in a trusted server. However, this can give false acknowledgment of a hash's existence if the server is compromised.

By storing hashes of different blocks of data, the Merkle tree is able to construct an audit trail that can help in accurately detecting if any data has been compromised along the line.

Breaking this down further, here are some of the reasons why Merkle Tree is better than Single Hash:

* **Data Verification:**  Very little information is required by the trusted server when verifying information from a Merkle Tree. It also helps to save bandwith since the size of data verification packet is small.
* **Consistency Verification**: By storing hashes of different data blocks, it can be used to verify that the data is untampered with. This means verifying that the newer version at any time frame includes all the data of the older version and in the same order.
* **Data Synchronization**: Merkle trees can be used in synchronizing data across multiple nodes (peers) in a distributed system. With merkle trees, we don't need to compare the entire data to figure out what changed — we can just do a hash comparison of the trees. Once we figure out which leaves have been changed, the corresponding data chunk can be sent over the network and synced across all the nodes.

## References
* https://www.codementor.io/blog/merkle-trees-5h9arzd3n8
* https://en.wikipedia.org/wiki/Merkle_tree
* https://selfkey.org/what-is-a-merkle-tree-and-how-does-it-affect-blockchain-technology/
* https://cp-algorithms.com/algebra/module-inverse.html#:~:text=Practice%20Problems-,Definition,x%E2%89%A11modm.&text=It%20can%20be%20proven%20that,a%2Cm)%3D1)
