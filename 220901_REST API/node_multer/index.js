const express = require("express");
const cors = require("cors");
const morgan = require("morgan");
const multer = require("multer");

const upload = multer({
  storage: multer.diskStorage({
    // 업로드 되는 파일 저장
    destination: (req, file, done) => {
      done(null, "public/");
    },
    // 업로드 되는 파일의 이름 저장
    filename: (req, file, done) => {
      done(null, file.originalname);
    },
    // 업로드 되는 파일의 사이즈 limit
    // limits: {},
  }),
});

const app = express();
const PORT = 8080;

app.use(morgan("dev"));
app.use(express.json());
app.use(cors());

// public 경로로 오면, express의 public 폴더를 보여주겠다.
app.use("/public", express.static("public"));

// upload.single("key값")
// 파일 업로드는 POST 요청으로만 해야한다.
app.post("/api/file", upload.single("file"), (req, res) => {
  return res.json({ test: "OK" });
});

app.listen(PORT, () => console.log(`${PORT} 가동중`));
