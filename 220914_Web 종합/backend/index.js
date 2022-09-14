const express = require("express");
const { pool } = require("./db");

const app = express();
const PORT = 8081;

const cors = require("cors");
app.use(cors());

const morgan = require("morgan");
app.use(morgan("dev"));

app.use(express.json());
app.use("/public", express.static("public"));

const path = require("path");
const multer = require("multer");
const upload = multer({
    storage: multer.diskStorage({
      destination: (req, file, done) => {
		
        done(null, "public/");
      },
      filename: (req, file, done) => {
		console.log('test')
		// console.log(file); 
		const ext = path.extname(file.originalname);
		// console.log(ext);
		const fileNameExeptExt = path.basename(file.originalname, ext);
		// console.log(fileNameExeptExt);
		const saveFileName = fileNameExeptExt + Date.now() + ext;
		console.log(saveFileName);
        done(null, saveFileName)    
      },
    }),
    limits: { fileSize: 5 * 1024 * 1024 },
  });






app.get("/api/menus", async (req, res) => {
	try {
		const data = await pool.query("SELECT * FROM menus");
		return res.json(data[0]);
	} catch (error) {
		return res.json({
			success: false,
			message: "전체 메뉴 목록 조회에 실패하였습니다."
		});
	}
});


app.get("/api/menus/:id", async (req, res) => {
	try {

		const data = await pool.query("SELECT * FROM menus WHERE id = ?", [req.params.id]);
		console.log(data[0]);
		return res.json(data[0][0]);

	} catch (error) {
		console.log(error);
		return res.json({
			success: false, message: "메뉴 조회에 실패하였습니다."
		});
	}
});

app.post('/api/menus', upload.single('file'),async(req, res) => {
	try {
		console.log(req.file);
		console.log(req.file.path);
		console.log(req.body);
		const path = req.file.path.replace("\\", "/");
		const data = await pool.query(`INSERT INTO menus (name, description, image_src)
		 VALUES (?, ?, ?)`, [req.body.name, req.body.description, path]);

		return res.json({
			success: true, message: "메뉴 등록에 성공하였습니다."
		});
	} catch (error) {
		console.log(error);
		return res.json({
			success: false, message: "메뉴 등록에 실패하였습니다."
		});
	}
})


app.patch('/api/menus/:id', async(req , res) => {
	try {
		console.log(req.params);
		
		const data = await pool.query(`UPDATE menus SET name = ?, description = ? where id = ?`,
		 [req.body.name, req.body.description, req.params.id]);

		return res.json({
			success: true, message: "메뉴 정보 수정에 성공하였습니다."
		});
	} catch (error) {
		console.log(error);
		return res.json({
			success: false, message: "메뉴 정보 수정에 실패하였습니다."
		});
	}
})


app.post('/api/menus/:id/image', upload.single('file'), async(req , res) => {
	try {
		
		const data = await pool.query(`UPDATE menus SET image_src= ? where id = ?`,
		 [req.file.path, req.params.id]);

		return res.json({
			success: true, message: "메뉴 이미지 수정에 성공하였습니다."
		});
	} catch (error) {
		console.log(error);
		return res.json({
			success: false, message: "메뉴 이미지 수정에 실패하였습니다."
		});
	}
})


app.delete('/api/menus/:id', async(req , res) => {
	try {
		const data = await pool.query(`DELETE FROM menus WHERE id = ?`,
		 [req.params.id]);

		return res.json({
			success: true, message: "메뉴 삭제에 성공하였습니다."
		});
	} catch (error) {
		console.log(error);
		return res.json({
			success: false, message: "메뉴 삭제에 실패하였습니다."
		});
	}
})


// orders 파트 시작

app.get("/api/orders", async (req, res) => {
	try {
		const data = await pool.query(`
		SELECT a.id, quantity, request_detail, name, description
		FROM orders as a
		INNER JOIN menus as b
		ON a.menus_id = b.id
		ORDER BY a.id DESC
		`);
		return res.json(data[0]);
	} catch (error) {
		console.log(error);
		return res.json({
			success: false,
			message: "전체 주문 목록 조회에 실패하였습니다."
		});
	}
});




app.post('/api/orders', async(req, res) => {
	try {
		
		const data = await pool.query(`INSERT INTO orders (quantity, request_detail, menus_id)
		 VALUES (?, ?, ?)`, [req.body.quantity, req.body.request_detail, req.body.menus_id]);

		return res.json({
			success: true, message: "주문에 성공하였습니다."
		});
	} catch (error) {
		console.log(error);
		return res.json({
			success: false, message: "주문에 실패하였습니다."
		});
	}
})

// 도전 파트 시작 


app.get("/api/orders/:id", async (req, res) => {
	try {
		const data = await pool.query(`
		SELECT a.id, quantity, request_detail, name, description
		FROM orders as a
		INNER JOIN menus as b
		ON a.menus_id = b.id
		WHERE a.id =?
		`, [req.params.id]);

		return res.json(data[0]);
	} catch (error) {
		console.log(error);
		return res.json({
			success: false,
			message: "전체 주문 목록 조회에 실패하였습니다."
		});
	}
});


app.patch('/api/orders/:id', async(req , res) => {
	try {
		console.log(req.params);
		
		const data = await pool.query(`
		UPDATE orders
		SET quantity = ?, request_detail = ?, menus_id = ?
		where id = ?`,
		 [req.body.quantity, req.body.request_detail,req.body.menus_id ,req.params.id]);

		return res.json({
			success: true, message: "주문 내역 수정에 성공하였습니다."
		});
	} catch (error) {
		console.log(error);
		return res.json({
			success: false, message: "주문 내역 수정에 실패하였습니다."
		});
	}
})


app.delete('/api/orders/:id', async(req , res) => {
	try {
		const data = await pool.query(`DELETE FROM orders WHERE id = ?`,
		 [req.params.id]);

		return res.json({
			success: true, message: "주문 내역 삭제에 성공하였습니다."
		});
	} catch (error) {
		console.log(error);
		return res.json({
			success: false, message: "주문 내역 삭제에 실패하였습니다."
		});
	}
})





app.listen(PORT, () => console.log(`this server listening on ${PORT}`));
