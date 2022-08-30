-- 사이트 문제

-- 1. Customers 에 Address 를 주소 ”, city 를 도시 ”, PostalCode 를 우편번호 로 출력 , 우편번호 내림차순으로 정렬
select address as "주소", city as "도시", postalcode as "우편번호" from Customers;

-- 2. OrderDetails 에 OrderDetailID 를 기준으로 내림차순으로 정렬하고 , 5 개만 출력하기
select * from OrderDetails order by OrderDetailID desc limit 5

-- 3. Orders 에 모든 컬럼을 OrderId 를 기준으로 내림차순 정렬 후, 3개를 건너띄고 7개만큼 출력
select * from Orders order by Orderid desc limit 5 offset 3