use madangdb;

create view vw_Book
as select *
	from Book
    where bookname like "%축구%";
    
select * from vw_Book;

-- 4-21 example

create view vw_Orders(orderid, custid, name, bookid,
						bookname, saleprice, orderdate)
as select od.orderid, cs.custid, cs.name, bk.bookid,
			bk.bookname, od.saleprice, od.orderdate
	from Orders od, Customer cs, Book bk
    where od.custid = cs.custid and od.bookid = bk.bookid;
    
select orderid, bookname, saleprice
from vw_Orders
where name like '김연아';