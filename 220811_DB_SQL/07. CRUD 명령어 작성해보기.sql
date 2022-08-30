-- 1. 모든 레코드 출력
SELECT * FROM minco.honey;

-- 2. num 2, 4번 레코드의 나이 15로 수정
update honey set age = '15' where num = '2';
update honey set age = '15' where num = '4';

-- 3. 1번 레코드 삭제
delete from honey where num = '1';

-- 4. 레코드 추가 (50, 촉촉, 100)
insert into honey values(50, '촉촉', '100');