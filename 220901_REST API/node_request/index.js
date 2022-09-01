const express = require("express");
const cors = require("cors");
const morgan = require("morgan");

const app = express();
const PORT = 8080;

app.use(morgan("dev"));
app.use(express.json());
app.use(cors());

app.get("/api/users");

// :id 유저에 대한 정보
// :id 값이 path에 담긴다.
app.get("/api/users/:id", (req, res) => {
  // path(http 명칭) = params(express에서 담기는 값)에 담긴다.
  console.log(req.params);
  // req.params.id

  // query
  console.log(req.query);

  return res.json({
    params: req.params,
    query: req.query,
  });
});

app.post("/api/users", (req, res) => {
  console.log(req.body);
  return res.json({
    body: req.body,
  });
});

app.listen(PORT, () => console.log(`${PORT} 가동중`));
