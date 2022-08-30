-- 3. TOP 5개의 국가 코드, 인구수 출력
select CountryCode, sum(Population) as 인구수 from city
Group by CountryCode
Order by sum(Population) desc
limit 5;