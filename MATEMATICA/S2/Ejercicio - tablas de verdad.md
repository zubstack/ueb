# (p → r) ∧ (¬p ∨ q) ↔ (p → q)

| p   | q   | r   | p → r | ¬p  | ¬p ∨ q | (p → r) ∧ (¬p ∨ q) | p → q | (p → r) ∧ (¬p ∨ q) ↔ (p → q) |
| --- | --- | --- | ----- | --- | ------ | ------------------ | ----- | ---------------------------- |
| V   | V   | V   | V     | F   | V      | V                  | V     | V                            |
| V   | V   | F   | F     | F   | V      | F                  | V     | F                            |
| V   | F   | V   | V     | F   | F      | V                  | F     | F                            |
| V   | F   | F   | F     | F   | F      | F                  | F     | V                            |
| F   | V   | V   | V     | V   | V      | V                  | V     | V                            |
| F   | V   | F   | V     | V   | V      | V                  | V     | V                            |
| F   | F   | V   | V     | V   | V      | V                  | V     | V                            |
| F   | F   | F   | V     | V   | V      | V                  | V     | V                            |

# (q ∨ r) ∧ (p → q) ↔ (p ∨ ¬q)

| p   | q   | r   | q ∨ r | p → q | (q ∨ r) ∧ (p → q) | ¬q  | p ∨ ¬q | (q ∨ r) ∧ (p → q) ↔ (p ∨ ¬q) |
| --- | --- | --- | ----- | ----- | ----------------- | --- | ------ | ---------------------------- |
| V   | V   | V   | V     | V     | V                 | F   | V      | V                            |
| V   | V   | F   | V     | V     | V                 | F   | V      | V                            |
| V   | F   | V   | V     | V     | V                 | V   | V      | V                            |
| V   | F   | F   | F     | F     | F                 | V   | V      | F                            |
| F   | V   | V   | V     | V     | V                 | F   | F      | V                            |
| F   | V   | F   | V     | V     | V                 | F   | F      | V                            |
| F   | F   | V   | V     | V     | V                 | V   | V      | V                            |
| F   | F   | F   | F     | V     | F                 | V   | V      | F                            |
