# Write your MySQL query statement be
SELECT 
    patient_id, 
    patient_name, 
    conditions
FROM 
    Patients
WHERE 
    conditions LIKE '% DIAB1%'      -- DIAB1 as a standalone condition
    OR conditions LIKE 'DIAB1%'    -- DIAB1 at the start of the string
    OR conditions LIKE '% DIAB1-%' -- DIAB1 followed by a dash
    OR conditions LIKE '% DIAB1 %' -- DIAB1 followed by a space
