SELECT * FROM minco.honey;

-- as "별칭 이름"
-- select name as "이름", age "나이" from honey;

-- 정렬하기
-- 정렬할 경우, order by

-- 오름차순 : 기본값 asc
select * from honey order by age;

-- 내림차순 : desc
select * from honey order by age desc;

-- limit (데이터 제한)
select * from honey limit 2;

-- offset
select * from honey limit 2 offset 3;