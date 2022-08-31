const express = require("express");
const app = express();
const PORT = 8080;

const cors = require("cors");
app.use(cors());

const infos = [
  {
    name: "jony",
    age: 40,
  },
  {
    name: "sylvie",
    age: 27,
  },
  {
    name: "nana",
    age: 1,
  },
];

app.get("/infos/names", (req, res) => {
  const names = infos.map((info) => info.name);
  return res.json(names);
});

app.get("/infos/ages", (req, res) => {
  const ages = infos.map((info) => info.age);
  return res.json(ages);
});

app.get("/infos/:id", (req, res) => {
  const id = Number(req.params.id);
  return res.json(infos[id]);
});

app.listen(PORT, () => console.log(`this server listening on ${PORT}`));