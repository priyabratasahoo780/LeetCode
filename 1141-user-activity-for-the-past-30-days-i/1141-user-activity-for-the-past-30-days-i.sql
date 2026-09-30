# Write your MySQL query statement below
-- SELECT activity_date as day , 
-- count(DISTINCT user_id) as active_users 
-- FROM Activity 
-- GROUP BY activity_date
-- HAVING daydiff(2019-07-21, activity_type) < 30
-- order by day;


SELECT count(DISTINCT user_id) as active_users,
activity_date as day from Activity
WHERE activity_date BETWEEN '2019-06-28' AND '2019-07-27'
group by activity_date;