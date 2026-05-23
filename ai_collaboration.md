# AI Collaboration Log

## Tools used

* ChatGPT

## A prompt that worked well

### Prompt

"Here is my TicTacToe code and project structure. Help me redesign the feature so it is easier to test while keeping the code beginner-friendly and consistent with CIS 25."

### Why it worked

The prompt included my existing code, class structure, and assignment requirements. This gave enough context for the AI to suggest improvements without overengineering the project.

The AI suggested separating gameplay logic from input/output by adding methods like `placeMove()`, `switchPlayer()`, and `getCell()`. These changes made testing easier while keeping the code simple.

---

## A prompt that did not work

### Prompt

"Write all the TicTacToe code and tests."

### What went wrong

The response was too large and included changes that did not match my project style. Some suggestions also made the design more complicated than necessary for a beginner CIS 25 project.

### How I recovered

I restarted with smaller prompts and asked for one change at a time. I reviewed each function individually before adding it to the project.

---

## Code I rejected

The AI suggested using more advanced C++ features such as structured abstractions and more compact syntax. I rejected those suggestions because they were harder to explain and did not match the simpler coding style used in the rest of my project.

I also rejected suggestions to completely redesign the project structure because the assignment only required a small second feature.

---

## Fresh-conversation review

I started a fresh AI conversation and asked for a code review of the TicTacToe feature. The review suggested improving method naming consistency and separating gameplay logic from direct user input.

I applied the suggestion to rename methods like `draw_board()` to `drawBoard()` for consistency with the rest of the project.

I also applied the suggestion to move move-validation logic into `placeMove()` because it improved testing and readability.

I rejected suggestions that added unnecessary abstractions or advanced features because they would make the code harder to explain in a beginner-level class.

---

## What I'd do differently next time

Next time I would start with the testable design earlier instead of writing all gameplay logic directly inside the `play()` function first.
