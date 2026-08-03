# Write your MySQL query statement below
SELECT *,
CASE 
WHEN x + y <= z THEN 'No'
WHEN z + y <= x THEN 'No'
WHEN x + z <= y THEN 'No'
else 'Yes'
 End as triangle
 FROM Triangle;