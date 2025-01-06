# 📝 Student Average Score Calculator  

This is a simple **C++ program** that calculates a student's average score based on their attendance, assignments, mid-term test (UTS), and final test (UAS). The program demonstrates the use of basic **input/output operations**, **string handling**, and **conditional statements** in C++.  

---

## 💻 Features  
1. **User Input**:  
   - NIM (Student ID)  
   - Name  
   - Scores for attendance, assignments, mid-term, and final exams.  

2. **Weighted Calculation**:  
   - Attendance: **10%**  
   - Assignments: **20%**  
   - Mid-term: **30%**  
   - Final exam: **40%**  

3. **Output**:  
   - Displays the student's information and calculated average score.  
   - Checks if the score is sufficient or insufficient based on a threshold of **60**.  

---

## 🚀 How It Works  
1. **Input Section**:  
   - The user provides their details and scores.  
2. **Calculation**:  
   - The program calculates the weighted average using the formula:  
     ```
     average = ((attendance_weight * attendance_score) +
                (assignment_weight * assignment_score) +
                (midterm_weight * midterm_score) +
                (final_weight * final_score)) 
                / total_weight;
     ```
3. **Result Display**:  
   - The program displays the NIM, name, scores, and average score.  
   - It determines if the average score is **sufficient** or **insufficient**.  

---

## 📋 Example Output  
```plaintext
============================
MENGHITUNG NILAI RATA - RATA
============================

Masukan NIM : 12345
Masukan Nama : John Doe
Masukan Nilai Absen : 80
Masukan Nilai Tugas : 75
Masukan Nilai UTS : 70
Masukan Nilai UAS : 90

Berikut Adalah Identitas & Nilai anda

NIM Anda Adalah : 12345
Nama Nama Adalah : John Doe
Nilai Absen Anda : 80
Nilai Tugas Anda: 75
Nama UTS Anda : 70
Nama UAS Anda : 90

Nilai Rata-rata Anda Adalah : 78.5
Nilai anda mengcukupi : 78.5
