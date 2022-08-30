-- 1. num을 번호, name을 성함, age를 나이
select  num as "번호", name as "성함", age as "나이" from honey;

-- 2. 이름 사전 순서대로 나이, 이름만 출력
select age, name from honey order by name;