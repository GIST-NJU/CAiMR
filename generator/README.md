# CAiMR Test Generator Usage

This document describes how to run the CAiMR test case generator using the provided `CAiMR.jar` file.

## 📁 Setup

1. **Create a `subjects` directory** in the same directory where `CAiMR.jar` is located.

2. **Place all 11 subject programs** under the `subjects/` directory.

Your directory structure should look like this:

your-folder/
├── CAiMR.jar
└── subjects/
&nbsp; ├── Boyer/
&nbsp; ├── Bsearch2/  
&nbsp; ├── ...


## ▶️ Running the Generator

Use the following command to run CAiMR:

java -jar CAiMR.jar <name> <strength> <mode>

Where:
- <name>: Name of the subject (e.g., Boyer, Printtokens2)
- <strength>: Coverage strength (2, 3, or 4)
- <mode>:

  - 0: Retain follow-ups not covering new combinations
  - 1: Discard them


**Example**

java -jar CAiMR.jar Boyer 2 0

This command tests the subject Boyer with 2-way strength, and retains follow-up test cases even if they do not introduce new combinations.

 ⚠️ **Note**: It is recommended that you recompile the subject programs in your own environment before running CAiMR.jar, to ensure compatibility and avoid unexpected issues.


## 📄 Output Files
After execution, four output files will be generated under:
subjects/<name>/output/

**Example**

subjects/Boyer/output
├── tests_abstract.txt
├── tests_concrete.txt
├── mgs.txt
└── statistic.csv


`tests_abstract.txt`
- Contains the generated abstract test cases (one per line).

`tests_concrete.txt`

- Contains the corresponding concrete test cases (one per line).mgs.txt (Metamorphic Groups)Lists each metamorphic group (MG) as a triple:


`mgs.txt`
- Lists each metamorphic group (MG) as a triple:
<source_index> <followup_index> <relation_index>
Where:
>- source_index: Index of source test case in tests_concrete.txt, starting from 0
>- followup_index: Index of follow-up test case in tests_concrete.txt, starting from 0
>- relation_index: Index of the metamorphic relation, starting from 1 (e.g., 1, 2, 3)

`tests_abstract.txt`
- Contains summary statistics:

| Line | Description                                                                     |
|------|---------------------------------------------------------------------------------|
| 1    | Size of the test suite                                                          |
| 2    | Generation time (in milliseconds)                                               |
| 3    | Number of metamorphic groups (MGs)                                              |
| 4+   | Fault detection for each faulty version (`1`: detected, `0`: not detected)      |