# Write your MySQL query statement below
SELECT a.id FROM Weather AS a
INNER JOIN Weather AS b
ON dateDiff(a.recordDate,b.recordDate) = 1 
AND a.temperature > b.temperature;