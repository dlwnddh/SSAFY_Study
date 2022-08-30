function erase(str, start, num) {
    const a = str.substring(0, start);
    const b = str.substring(start + num, str.length);

    return a+b;
}

const str = "ABCDEFG";

const result = erase(str, 3, 2);
console.log(result);