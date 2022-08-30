const bucketList = [
  {
    id: 1,
    text: "여행 가기",
    done: false,
  },
  {
    id: 2,
    text: "치킨 먹기",
    done: true,
  },
  {
    id: 3,
    text: "코딩 하기",
    done: true,
  },
  {
    id: 4,
    text: "요리 하기",
    done: false,
  },
];

const arr = bucketList.filter((obj) => obj.done === false)

console.log(arr);