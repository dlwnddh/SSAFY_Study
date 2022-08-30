// number를 조작할 수 있는 함수
// 객체에는 임의로 속성을 추가하는 것이 가능
const ssafy = {
    number: 99,
    eat() {
        this.number = this.number + 5;
    },
    run() {
        this.number = this.number - 10;
    },
    show() {
        console.log(this.number);
    },
    test: () => {
        console.log(this);
    }
}

ssafy.eat();
ssafy.run();
ssafy.show();
ssafy.test();