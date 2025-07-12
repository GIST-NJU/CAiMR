# Covering Array Integrated with Metamorphic Relation (CAiMR)

This repository provides the implementation and experimental data for the **CAiMR** approach proposed in our paper:

> **CAiMR: Interleaving Covering Array Generation with 
MR-Guided Testing**  


CAiMR integrates metamorphic relations (MRs) directly into the process of covering array generation to support low-cost, automated test oracle construction in combinatorial testing.

---

## 📂 Repository Structure

### `/generator`
Contains the executable `.jar` file that implements CAiMR for generating test cases, along with usage instructions.

- `caimr-generator.jar`  
- `README.txt` — usage instructions

### `/subjects`
Includes the 11 subject programs used in the experiments. These are adopted from the COMER repository with minor adjustments (e.g., filtered MRs in `Trisquarej`).

### `/results`
Provides the experimental results comparing **CAiMR** with **COMER** across the following dimensions:

- Test case generation time  
- Oracle automation support  
- Fault detection effectiveness  
- Test suite size  

The directory contains raw output tables (in `.xlsx`  format).

---

## 📌 Highlights

- **Fully automated MR tracking** during test generation
- **Concrete-level MR matching**, increasing oracle effectiveness
- **Higher test generation efficiency** compared to COMER
- Significantly improved **fault detection rate**

---

## 🛠 Requirements

- Java 11 or higher
- [Choco Solver 4.10.2](https://choco-solver.org/)

---





