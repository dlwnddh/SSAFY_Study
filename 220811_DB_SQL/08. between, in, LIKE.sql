SELECT * FROM city;

-- BETWEEN A AND B    A와 B 사이의 값
select * from city where Population BETWEEN 500 and 900;

-- in (후보 item1, 후보 item2 ...)
-- 지정된 컴럼의 값이 큭정 값에 해당되는 조건을 만들 때 활용 or
-- or의 역할
select * from city where Name in ('Seoul', 'Sydney', 'Oxford');

-- in 조건을 제외
select * from city where Name not in ('Seoul', 'Sydney', 'Oxford');

-- LIKE
-- WHEHE 절 다음에 활용
-- 문자열 검색 NAME = Seoul

-- % : 다중문자를 의미(와일드카드) New로 시작하는 모든 문자열을 가져온다.
select * from city where Name LIKE 'New%';

-- New가 들어가는 모든 city를 가져온다.
select * from city where Name LIKE '%New%';

-- _ : 한가지 문자만 가져올 때
-- CountryCode가 K_R -> K와 R 사이에 한글자는 아무거나 들어가야 된다.
select * from city where CountryCode LIKE 'K_R';