# Write your MySQL query statement below
SELECT sell_date, count(distinct product) as num_sold, group_concat(Distinct product) as products
FROM Activities group by sell_date;

