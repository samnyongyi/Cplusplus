char name1[6]={'G', 'r', 'a', 'c', 'e', '\0'};	// name1은 문자열 “Grace”
char name2[5]={'G', 'r', 'a', 'c', 'e'};	// name2는 문자열이 아니고 단순 문자 배열
char name3[10]=“Grace”;	// name3[6]부터 \0으로 초기화

char name4[6];	//문자열 입력 방법1, 입력할때 빈칸 존재시 이후의 문자열들은 입력 불가
cin >> name;
