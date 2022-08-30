const func = () => console.log("Hi");

// 2초 후 함수 실행
setTimeout(func, 2000); // 재사용 or 함수가 길 때 사용

setTimeout(() => console.log("Hi"), 2000);  // 한 번 사용하고 안쓸 때 사용