# Write your MySQL query statement below
SELECT e.name as Employee FROM Employee as e 
INNER JOIN Employee m
ON e.managerId = m.id 
WHERE e.salary > m.salary;