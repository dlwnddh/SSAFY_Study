SELECT * FROM minco.honey;

-- insert into 테이블 value('값', '값' ....)
-- 7번, 이순신, 20세
insert into honey values(7, '이순신', '20');
-- 8번, 박중박 50세
insert into honey values(8, '박중박', '50');

-- UPDATE 테이블 SET 필드 = 값 WHERE 레코드 조건
-- 이순신의 나이를 320으로 바꾼다.
-- update honey set age = '320' where name = '이순신';
-- name = '이순신'이 단 하나의 존재가 아닐수도 있으므로 오류 발생(초기 세팅에서 name은 pk가 체크되어 있지 않다.)
update honey set age = '320' where num = '7';

-- num pk -> 유일무이 중복이 안되는 존재 (단 하나만 존재)

-- 박중박의 이름을 박재훈으로 변경
update honey set name = '박재훈' where num = '8';

-- delete from 테이블 where 조건
-- 7번 레코드 삭제
delete from honey where num = 7;
-- 8번 레코드 삭제
delete from honey where num = 8;