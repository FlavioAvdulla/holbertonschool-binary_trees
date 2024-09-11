# Binary Tree Tasks

This repository contains various tasks related to binary trees, including creating nodes, inserting nodes, deleting trees, and traversing trees.

## Table of Contents
1. New Node
2. Insert Left
3. Insert Right
4. Delete
5. Is Leaf
6. Is Root
7. Pre-order Traversal
8. In-order Traversal
9. Post-order Traversal
10. Height
11. Depth
12. Size
13. Leaves
14. Nodes
15. Balance Factor
16. Is Full
17. Is Perfect
18. Sibling
19. Uncle

## Tasks

### 0. New Node
Write a function that creates a binary tree node.

- **Prototype**: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- **Description**: 
  - `parent`: A pointer to the parent node of the node to create.
  - `value`: The value to put in the new node.
  - When created, a node does not have any child.
  - The function must return a pointer to the new node, or `NULL` on failure.
- **File**: [Click Here](0-binary_tree_node.c)

### 1. Insert Left
Write a function that inserts a node as the left-child of another node.

- **Prototype**: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- **Description**: 
  - `parent`: A pointer to the node to insert the left-child in.
  - `value`: The value to store in the new node.
  - The function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`.
  - If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
- **File**: [Click Here](1-binary_tree_insert_left.c)

### 2. Insert Right
Write a function that inserts a node as the right-child of another node.

- **Prototype**: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- **Description**: 
  - `parent`: A pointer to the node to insert the right-child in.
  - `value`: The value to store in the new node.
  - The function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`.
  - If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.
- **File**: [Click Here](2-binary_tree_insert_right.c)

### 3. Delete
Write a function that deletes an entire binary tree.

- **Prototype**: `void binary_tree_delete(binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to delete.
  - If `tree` is `NULL`, do nothing.
- **File**: [Click Here](3-binary_tree_delete.c)

### 4. Is Leaf
Write a function that checks if a node is a leaf.

- **Prototype**: `int binary_tree_is_leaf(const binary_tree_t *node);`
- **Description**: 
  - `node`: A pointer to the node to check.
  - The function must return `1` if `node` is a leaf, otherwise `0`.
  - If `node` is `NULL`, return `0`.
- **File**: [Click Here](4-binary_tree_is_leaf.c)

### 5. Is Root
Write a function that checks if a given node is a root.

- **Prototype**: `int binary_tree_is_root(const binary_tree_t *node);`
- **Description**: 
  - `node`: A pointer to the node to check.
  - The function must return `1` if `node` is a root, otherwise `0`.
  - If `node` is `NULL`, return `0`.
- **File**: [Click Here](5-binary_tree_is_root.c)

### 6. Pre-order Traversal
Write a function that goes through a binary tree using pre-order traversal.

- **Prototype**: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to traverse.
  - `func`: A pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  - If `tree` or `func` is `NULL`, do nothing.
- **File**: [Click Here](6-binary_tree_preorder.c)

### 7. In-order Traversal
Write a function that goes through a binary tree using in-order traversal.

- **Prototype**: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to traverse.
  - `func`: A pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  - If `tree` or `func` is `NULL`, do nothing.
- **File**: [Click Here](7-binary_tree_inorder.c)

### 8. Post-order Traversal
Write a function that goes through a binary tree using post-order traversal.

- **Prototype**: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to traverse.
  - `func`: A pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  - If `tree` or `func` is `NULL`, do nothing.
- **File**: [Click Here](8-binary_tree_postorder.c)

### 9. Height
Write a function that measures the height of a binary tree.

- **Prototype**: `size_t binary_tree_height(const binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to measure the height.
  - If `tree` is `NULL`, the function must return `0`.
- **File**: [Click Here](9-binary_tree_height.c)

### 10. Depth
Write a function that measures the depth of a node in a binary tree.

- **Prototype**: `size_t binary_tree_depth(const binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the node to measure the depth.
  - If `tree` is `NULL`, the function must return `0`.
- **File**: [Click Here](10-binary_tree_depth.c)

### 11. Size
Write a function that measures the size of a binary tree.

- **Prototype**: `size_t binary_tree_size(const binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to measure the size.
  - If `tree` is `NULL`, the function must return `0`.
- **File**: [Click Here](11-binary_tree_size.c)

### 12. Leaves
Write a function that counts the leaves in a binary tree.

- **Prototype**: `size_t binary_tree_leaves(const binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to count the number of leaves.
  - If `tree` is `NULL`, the function must return `0`.
  - A `NULL` pointer is not a leaf.
- **File**: [Click Here](12-binary_tree_leaves.c)

### 13. Nodes
Write a function that counts the nodes with at least 1 child in a binary tree.

- **Prototype**: `size_t binary_tree_nodes(const binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to count the number of nodes.
  - If `tree` is `NULL`, the function must return `0`.
  - A `NULL` pointer is not a node.
- **File**: [Click Here](13-binary_tree_nodes.c)

### 14. Balance Factor
Write a function that measures the balance factor of a binary tree.

- **Prototype**: `int binary_tree_balance(const binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to measure the balance factor.
  - If `tree` is `NULL`, return `0`.
- **File**: [Click Here](14-binary_tree_balance.c)

### 15. Is Full
Write a function that checks if a binary tree is full.

- **Prototype**: `int binary_tree_is_full(const binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to check.
  - If `tree` is `NULL`, the function must return `0`.
- **File**: [Click Here](15-binary_tree_is_full.c)

### 16. Is Perfect
Write a function that checks if a binary tree is perfect.

- **Prototype**: `int binary_tree_is_perfect(const binary_tree_t *tree);`
- **Description**: 
  - `tree`: A pointer to the root node of the tree to check.
  - If `tree` is `NULL`, the function must return `0`.
- **File**: [Click Here](16-binary_tree_is_perfect.c)

### 17. Sibling
Write a function that finds the sibling of a node.

- **Prototype**: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- **Description**: 
  - `node`: A pointer to the node to find the sibling.
  - The function must return a pointer to the sibling node.
  - If `node` is `NULL` or the parent is `NULL`, return `NULL`.
  - If `node` has no sibling, return `NULL`.
- **File**: [Click Here](17-binary_tree_sibling.c)

### 18. Uncle
Write a function that finds the uncle of a node.

- **Prototype**: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- **Description**: 
  - `node`: A pointer to the node to find the uncle.
  - The function must return a pointer to the uncle node.
  - If `node` is `NULL`, return `NULL`.
  - If `node` has no uncle, return `NULL`.
- **File**: [Click Here](18-binary_tree_uncle.c)

## How to Use

1. **Clone the repository**:
    ```bash
    git clone <repository-url>
    ```

2. **Navigate to the task directory**:
    ```bash
    cd <task-directory>
    ```

3. **Open the file in your preferred code editor**.

4. **Implement the functions** as specified in each task.

## Contributing

Feel free to fork this repository and submit pull requests. For major changes, please open an issue first to discuss what you would like to change.

## License

This project is licensed under the MIT License - see the LICENSE file for details.