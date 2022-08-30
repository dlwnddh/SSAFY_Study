SELECT * FROM world.city;

-- 1. 인구수가 1000명 미만이면서 , A 로 시작하는 도시 찾기
select * from city where Population < 1000 and NAME LIKE 'A%';

-- 2. 일본 (JPN) 에서 , 인구수가 100 만명 ~ 200 만명 인 도시를 찾아도시 이름과 , 국가 코드 (JPN) 필드만 출력
select name, CountryCode from city where CountryCode = 'JPN' and Population between 1000000 and 2000000;

-- 3. kim 이라는 글자가 포함된 도시명 찾기
select * from city where name LIKE '%kim%';