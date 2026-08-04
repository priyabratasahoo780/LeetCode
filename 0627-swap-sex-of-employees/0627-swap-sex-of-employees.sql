# Write your MySQL query statement below
UPDATE Salary
set sex = 
CASE 
WHEN sex = 'm' then 'f'
else 'm'
END;