const express = require("express");
const app = express();  // app 객체 생성
const PORT = 8080; // 8080 포트 지정

const cors = require("cors");
app.use(cors());

// req : 요청(request)
// res : 응답(response)
app.get("/api/info", (req, res) => {
  return res.json({
    name: "jony",
    job: "tutor",
  });
});

// 
app.listen(PORT, () => console.log(`this server listening on ${PORT}`));
