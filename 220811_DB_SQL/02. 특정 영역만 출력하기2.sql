-- 사이트 문제
-- https://www.w3schools.com/mysql/trymysql.asp?filename=trysql_select_all

-- 1. OrderDetails 의 ProductID 가 14 보다 큰 모든 필드 출력
select * from OrderDetails where ProductID > 14;

-- 2. CustomerName , city 필드 출력 10 < CustomerID <= 50 레코드 출력
select CustomerName, city from Customers where CustomerID > 10 and CustomerID <= 50;

-- 3. Orders 에 CustomerId 가 30 번대만 출력
select * from Orders where CustomerID >= 30 and CustomerID < 40;

-- 4. ProductID 가 짝수이면서 , SupplierId 홀수인 ProductName 과 ProductID 출력 (Products)
select ProductName, ProductID from Products where ProductID % 2 = 0 and Supplierid % 2 = 1;