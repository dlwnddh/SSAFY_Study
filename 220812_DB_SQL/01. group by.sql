select ID, sum(Population) as 합계 from city
-- 그룹을 지어 데이터를 묶는다
GROUP BY CountryCode
ORDER BY ID;

select CountryCode, count(Population) as 도시수 from city
GROUP BY CountryCode
-- Group by에 조건 절 추가
having count(Population) > 200;