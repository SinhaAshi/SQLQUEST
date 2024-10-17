# Write your MySQL query statement below
SELECT r.contest_id,ROUND(COUNT(r.contest_id)*100/(SELECT COUNT(user_id) FROM Users),2) AS percentage
FROM Register r
LEFT JOIN Users u
ON u.user_id=r.user_id
GROUP BY contest_id
ORDER BY percentage DESC, r.contest_id;