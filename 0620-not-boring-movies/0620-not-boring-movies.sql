# Write your MySQL query statement below
SELECT *
From Cinema
WHERE id%2!=0 AND description NOT LIKE "BORING"
ORDER BY rating DESC;