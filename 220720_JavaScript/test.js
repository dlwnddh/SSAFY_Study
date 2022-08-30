const btns = [];

for (i = 0; i < 5; i++) {
  btns.push(document.createElement("button"));  // button 태그를 btns 변수에 추가
}

for (i = 0; i < 5; i++) {
  btns[i].setAttribute("class", "sample-btn");  // btns button 태그에 class 설정
  const txt = document.createTextNode("버튼" + (i + 1));  // txt 변수에 "버튼" + (i + 1) 저장
  btns[i].append(txt);  // btn의 태그 안에 txt 삽입
  document.querySelector("body").append(btns[i]); // html의 body에 btns 삽입
}