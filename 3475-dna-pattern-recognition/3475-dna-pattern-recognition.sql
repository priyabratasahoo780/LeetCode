# Write your MySQL query statement below
SELECT sample_id, dna_sequence, species,
Case when dna_sequence like 'ATG%' then 1 else 0 end as has_start,
Case when dna_sequence like '%TAA'
 or dna_sequence like '%TGA'
 or dna_sequence like '%TAG' then 1 else 0 end as has_stop,
Case when dna_sequence like '%ATAT%' then 1 else 0 end as has_atat,
Case when dna_sequence like '%GGG%' then 1 else 0 end as has_ggg
From Samples
Order by sample_id;