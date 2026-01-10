# Push Swap: A 42 Project to Master Stack-Based Sorting 🎩

Welcome to **Push Swap**, where your mission is to sort a set of integers using only two stacks and a limited set of operations. This project is designed to test your algorithmic skills, especially in the art of sequential access sorting. Let’s dive into the world of stack manipulation, efficient sorting, and optimized move counts to achieve a clean, organized stack!

## 🌟 Goal

Sort integers in ascending order using only two stacks (A and B) and a predefined set of operations. The challenge? Use the fewest moves possible to optimize your solution. Achieving efficiency in this constrained environment is key, as each move counts!

## 🔄 Instruction Set

Here’s the arsenal of operations you’ll use to manage and sort the stacks:

| Code | Instruction         | Action                                            |
|------|----------------------|---------------------------------------------------|
| `sa` | swap a              | Swaps the top two elements of stack A.            |
| `sb` | swap b              | Swaps the top two elements of stack B.            |
| `ss` | swap a + swap b     | Performs `sa` and `sb` simultaneously.            |
| `pa` | push a              | Moves the top element of stack B to stack A.      |
| `pb` | push b              | Moves the top element of stack A to stack B.      |
| `ra` | rotate a            | Shifts all elements in stack A from bottom to top.|
| `rb` | rotate b            | Shifts all elements in stack B from bottom to top.|
| `rr` | rotate a + rotate b | Performs `ra` and `rb` simultaneously.            |
| `rra`| reverse rotate a    | Shifts all elements in stack A from top to bottom.|
| `rrb`| reverse rotate b    | Shifts all elements in stack B from top to bottom.|
| `rrr`| reverse rotate a + b| Performs `rra` and `rrb` simultaneously.          |

## 🧠 Algorithm

The Push Swap project employs a **Butterfly Sort** algorithm, ideal for handling integers with high efficiency. Here’s a breakdown of how it works:

### Butterfly Sort for Large Sets

For large sets, we use **Butterfly Sort**. The algorithm:

1. **Indexation**: For each object of  the stack we affect an index which corresponds to its place in a growing sorted stack.
2. **Limit**: We set a limit to split the large numbers of the stack_a by push_shing them on stack_b and by increasing the size of the limit with an index that grow by 1 on each turn. At the end of this step the stack_b has a shape of a butter fly wing.
3. **Sorting in growing order**: Depending on the position of the object with higter index of the stack_a, we rotate or reverse rotate the stack_b and push the object to a. Repeate this action until the stack_b is clear.
4. **Finish**: Your stack is sorted.

### Basic Usage

To compile and execute:

```bash
make              # Compiles the push_swap executable 
```

To clean all:

```bash
make fclean			# Clean all
```

To compile for the second time:
```bash
make re 
```

For example:
```bash
./push_swap 4 3 2 1
```

Happy sorting, and may your moves be minimal! 🏆