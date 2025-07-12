# Results

This directory provides the raw output of **CAiMR** and **COMER** over 30 runs.  
It contains three `.xlsx` files in total.

---

### `CAiMR_results.xlsx`

- This file contains 11 sheets, each corresponding to one subject program.
- For each subject, the following metrics are reported:
  - `size`: the size of the generated test suite
  - `time`: the test generation time (in milliseconds)
  - `#mgs`: the number of metamorphic groups
  - `#detected`: the number of detected faults
- These results were obtained by running CAiMR with the `mode` option set to **0**,  
  which means **follow-up test cases that do not cover new combinations are retained** in the test suite.
- Detailed usage instructions for CAiMR can be found in [`generator/README.md`](../generator/README.md).

---

### `CAiMR-Alt_results.xlsx`

- This file is structured identically to `CAiMR_results.xlsx`, with 11 subject-specific sheets.
- The difference lies in the setting of the `mode` option:
  - Here, `mode` is set to **1**,  
    meaning **follow-up test cases that do not cover new combinations are discarded**.
    
---

### `COMER_results.xlsx`

- This file also contains 11 sheets, each for one subject.
- For each subject, the following metrics are reported:
  - `size`: the size of the generated test suite
  - `time`: the test generation time (in milliseconds)
  - `#mgs`: the number of metamorphic groups
  - `#unmatched`: the number of test cases that **do not match any MIR**
- These results were obtained using the COMER approach.  
  COMER and its usage details are available at:  
  [https://github.com/syjya/Comer](https://github.com/syjya/Comer)
