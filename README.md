# Quick Sort (qsort) Algorithm Explained Simply

Quick Sort is a fast way to sort lists (arrays) of items. It works by splitting the list into smaller parts, sorting them, and then putting them back together. Here's a simple explanation.

## How Quick Sort Works

1. **Pick a Pivot**: Choose one item from the list (like the first item). This is called the "pivot".
2. **Split the List**: Rearrange the list so:
   - Items **smaller than the pivot** go to the **left**.
   - Items **equal to the pivot** stay in the middle.
   - Items **larger than the pivot** go to the **right**.
3. **Repeat**: Do the same for the left and right parts until the whole list is sorted.

## Example: Sorting `[5, 3, 8, 4, 2]`

### Step 1: First Pivot (5)
- List: `[5, 3, 8, 4, 2]`
- **Pivot = 5**.
- Split into:
  - Left (≤5): `[3, 4, 2]`
  - Right (>5): `[8]`

### Step 2: Sort Left Part `[3, 4, 2]`
- **New Pivot = 3**.
- Split into:
  - Left (≤3): `[2]`
  - Right (>3): `[4]`
- Combine: `[2] + [3] + [4]` → `[2, 3, 4]`

### Step 3: Combine Everything
- Left Sorted: `[2, 3, 4]`
- Pivot: `[5]`
- Right Sorted: `[8]`
- **Final List**: `[2, 3, 4, 5, 8]`

## Why Use Quick Sort?
- **Fast**: Works quickly for most lists.
- **No Extra Space**: Sorts the list without needing extra memory.

## When It’s Slow
- If the pivot is always the smallest or largest item, it becomes slow (but this is rare).

## Simple Code Example (Pseudocode)
