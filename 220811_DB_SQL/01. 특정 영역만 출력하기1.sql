-- sample data 문제

SELECT * FROM minco.honey;

-- 1. + num 이 3, 5 번 레코드만 출력하기
select * from honey where num = 3 or num = 5;

-- 2. name, age 필드 출력하고 , 2 <= num <= 5 번 레코드만 출력
select name, age from honey where num >= 2 and num <= 5;

-- 3. 나이가 20 대인 친구들만 출력
select * from honey where age >= 20 and age < 30;

-- 4. num 이 짝수이면서 , age 는 홀수인 친구들만 출력 (사람 이름만 출력)
select name from honey where num % 2 = 0 and age % 2 = 1;