# 성장트리 학생 정보 관리 시스템

## 프로젝트 소개
학생 정보를 이진 탐색 트리(BST)로 관리하는 프로그램입니다.

## 개발 환경
- Language : C
- IDE : Visual Studion Code
- OS : Windows

## 팀원 소개
| 이름 | 역할 |
|-----||-----|
|원종찬||-----|
|주예서|------|

## 주요 기능
- 학사 조직 구조 생성 및 관리
- 학생 정보 등록
- 학번 기반 학생 조회
- 성적 입력 및 수정
- 평균 점수 계산
- 우수 학생 분류
- 위험 학생 분류
- 해시맵 기반 고속 검색

## 사용 자료구조
- Tree(트리) : 학교 -> 학과 -> 학년 -> 반으로 이어지는 계층 구조 표현을 위해 사용했다.
- HashMap(해시맵) : 학번을 Key로 사용하여 학생 정보 검색을 빠르게 하기 위해 사용했다.
- LinkedList(연결리스트) : 각 Class에 소속된 학생 정보를 저장하기 위해 사용했다.

## 프로젝트 구조
project/

├── main.c

├── src/
│   ├── student.c
│   ├── tree.c
│   ├── hashmap.c
│   └── menu.c

├── include/
│   ├── student.h
│   ├── tree.h
│   ├── hashmap.h
│   └── menu.h

├── docs/
│   ├── ProjectProposal.hwp
│   ├── AlgorithmDesign.hwp
│   └── FinalReport.hwp

├── data/
│   └── sample_students.txt

├── README.md

└── .gitignore

## 실행 방법
gcc main.c src/student.c src/tree.c src/hashmap.c src/menu.c -I include -o seongjangtree

## 실행 화면 예시
SeongJangTree

1. 학생 등록
2. 학생 조회
3. 성적 수정
4. 평균 계산
5. 우수 학생 조회
6. 위험 학생 조회
0. 종료

선택 : 

## 기대 효과
- 학생 정보의 효율적인 관리 및 정비
- 학번 기반의 빠른 검색 지원
- 성적 분석 자동화
- 우수 학생 식별 지원
- Tree, HashMap, LinkedList 자료구조 활용 능력 향
## 어려웠던 점

## 느낀점


