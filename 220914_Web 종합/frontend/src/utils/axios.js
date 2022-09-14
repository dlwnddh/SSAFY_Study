import axios from "axios";

// 본인이 배포해서 운영중인 express가 존재하는 aws주소:8080
const DOMAIN = "http://localhost:8081";

const request = axios.create({
  baseURL: `${DOMAIN}/api`
});


export const api = {
  menus: {
    findAll: () => request.get("/menus"),
    findOne: (id) => request.get(`/menus/${id}`),
    create: (name, description, file) => {
      // file업로드시 formData를 활용
      const formData = new FormData();
      formData.append('name', name);
      formData.append('description', description);
      formData.append('file', file);
      return request.post("/menus", formData, {
        headers: {
          "Content-Type":"multipart/form-data"
        }
      })
    },
    update: (id, name, description) => request.patch(`/menus/${id}`, {
      name: name,
      // key와 value의 형태가 같으면 생략 
      description:description
    }),
    updateImage: (id, file) => {
      const formData = new FormData();
      formData.append('file', file);
      return request.post(`/menus/${id}/image`, formData, {
        headers: {
          "Content-Type":"multipart/form-data"
        }
      })
    },
    delete: (id) => request.delete(`/menus/${id}`)
  },
  orders: {
    findAll: () => request.get("/orders"),
    create: (menus_id, quantity, request_detail) => request.post('/orders', {
      menus_id: menus_id,
      quantity,
      request_detail
    }),
    // 구현해야할 목록
    findOne: (id) => { },
    update: (id) => { },
    delete: (id) => {}
  }
}
