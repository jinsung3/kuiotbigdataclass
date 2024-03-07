# kuiotbigdataclass
C/C ++ database arduino 

---
## 2024-02-22
---

- instruction.
- google slide share.
- github sign up.
- github create repository.
- ubuntu hangle setting.
- vscode install
- git install
- sql workbench install - ubuntu
- MySQL DBMS install - ubuntu
- vscode mysql extension install
- Chapter01 database 데이터베이스 개론
- chapter03 SQL 기초
 - 데이터베이스 만들기 create database;
 - 데이터베이스에 테이블 만들기 3개
  - bookid
  - bookname
  - publisher
  - price
- 데이터베이스에 데이터 넣기 insert into...values(...);
- 유저 만들어서 권한 설정 하기;
 - grant all privilages on *.* to 'root'@'localhost' identifled by '1234';
- windows cli에서 testDB 생성하기 -p[ECF]
- 데이터 조작어

___

## 2024-02-23
___

- mysql unbuntu 문제 해결
- user를 새로 만들어서 권한을 주어 봤지만 해결되지 않았음.
- 권한 설정 및 user create 시
  - 새로운 유저를 만들때 mysql_net
  ive_password를 사용하도록 설정
- 우분투 myworkbench에서 코드를 작성하고
  vscode에서 git에 연동.
  -추가한 파일:
    - create_database.sql
    - create_table.sql
    - insert_data.sql
    - create_user.sql
    - select.sql
  -3차 내용 추가
    - 셀렉트 쓰는 방법
- 2장 데이터베이스 모델 진행.
- 3장 group by 165p까지 진행
  - 윈도우 DBMS를 우분투에서 연결
  - 윈도우 DBMS에 외부인 IP 접근 가능한 user 생성
  - 윈도우 방화벽에 3360 포트 열기
  - 윈도우 DBMS에 임의의 데이터 넣고 우분투에 확인.
- 우분투 DBMS를 윈도우에서 연결
  - 우분투 DBMS에 외부 IP접근 가능한 user 접근 가능한 user 생성
  - 우분투 방화벽에 전체 포트 열기
  - 우분투 DBMS에 임의의 데이터 넣고 윈도우에서 확인

___

## 2024-02-29
___

제작 과정 설명
리눅스용 cmake 만들기
전처리 어셈블리 바이너리 링크
활동을 하다
기본적으로
여러개 등록
연속 실행
플래시 가능 포럼
활용
3장 이어서 진행
4장 내장함수
SQL 내장함수
숫자함수
문자열 문자열
날짜 표기
주제


---

## 2024-02-29

---

- 빌드 과정 설명
  - make cmake for linux
  - 전처리 어셈블리 바이너리 링크
- make 실습
  - 기본 문법
  - 여러개 명령어 등록
  - 연속 실행
  - 생략 가능 명령어
  - 변수 사용
- 3장 끝까지 진행
  - DML
    - select 
      - where, group by, having, order by
  - DDL
    - create, alter, drop
  - DCL
    - insert, update, delete
- 4장 내장함수
  - SQL 내장함수
    - 숫자함수
      - abs, ceil, floor, round, sign...
    - 문자열 함수
      - concat, replace, substr, length...
    - 날짜 함수
      - str_to_date, date_format, adddate, sysdate...
      - format 형식 %Y-%m-%d %H:%i:%s ...


---

## 2024-03-07

---


- mysql 내장 함수
  - null ifnull
- 외래키 확인 및 삭제 방법
```sql
set sql_safe_updates=0;
-- 무시하고 삭제
SET foreign_key_checks = 0;
delete from Customer;
SET foreign_key_checks = 1;

-- 제약 조건 확인
select * from information_schema.table_constraints where table_name = 'Orders';

-- 확인된 제약 조건으로 외래키 삭제
alter table Orders drop foreign key Orders_ibfk_2;
```
- 부속질의
  - select 부속질의 (스칼라 부속질의)
  - from 부속질의 ( 인라인 뷰)
  - where 부속질의
    - 단일 - 비교 ( =, >, <, >=, <=, !=, <>, is null, is not null) [비교]
    - 다수의 열, 단일 행 ( all, some, any) [한정]
    - 다수의 행, 다수의 열 ( in, not in, exists, not exists)[집합, 존재]
- 뷰
  - 뷰 생성 - create view 뷰이름 as select ...
  - 뷰 삭제 - drop view 뷰이름
  - 뷰 수정 - create or replace view 뷰이름 as select ...
- 인덱스
  - 인덱스 생성 - create index 인덱스이름 on 테이블이름(열이름)
  - 인덱스 삭제 - drop index 인덱스이름 on 테이블이름
  - 인덱스 재구성 - analyze table 테이블이름


```shell

sudo apt-get install.git
git clone https://github.com/jinsung3/kuiotbigdataclass.git
