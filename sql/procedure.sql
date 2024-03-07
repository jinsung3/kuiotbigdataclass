delimiter //;
create procedure dorepeat2(p1 int)
begin
	set @x= 0;
    repeat 
		set @x=@x+1;
	until @x > p1
    end repeat;
end;
//
delimiter;

call dorepeat(100);
select @x;

--