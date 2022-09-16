<template>
  <div>
    <div class="form-wrapper">
      <div>메뉴 이름: <input v-model="name" type="text" /></div>
      <div>메뉴 설명: <input v-model="description" type="text" /></div>
      <input v-on:change="fileChange" type="file" />

      <div v-if="$route.params.id">
        <button @click="update">메뉴 수정하기</button>
        <button @click="updateImage">이미지 수정하기</button>
      </div>

      <button v-else @click="create">메뉴 추가하기</button>
      
    </div>

    <div class="image-wrapper" v-if="file">
      <img :src="setURL(file)" width="100%" />
    </div>
  </div>
</template>

<script>
import { api } from "@/utils/axios";
export default {
  data() {
    return {
      name: null,
      description: null,
      file: null,
    };
  },
  async created() {
    console.log(this.$route);

    if (this.$route.params.id) {
      this.$store.commit("SET_TITLE", "메뉴 수정하기");
      const result = await api.menus.findOne(this.$route.params.id);
      console.log(result);
      this.name = result.data.name;
      this.description = result.data.description;
    } else {
      this.$store.commit("SET_TITLE", "메뉴 추가하기");
    }
  },
  methods: {
    fileChange(e) {
      console.log(e.target.files);
      this.file = e.target.files[0];
    },
    setURL(file) {
      console.log(file);
      const imageURL = URL.createObjectURL(file);
      console.log(imageURL);
      return imageURL;
    },

    async create() {
      if (!this.name || !this.description || !this.file) {
        alert("빈 값이 있습니다 내용을 전부 작성해주세요");
      }
      const result = await api.menus.create(
        this.name,
        this.description,
        this.file
      );
      console.log(result);
      // 요청 성공
      if (result.data.success) {
        alert(result.data.message);
        this.$router.push("/admin/menus");
      }
      // 요청 실패
      if (!result.data.success) {
        alert(result.data.message);
      }
    },
      async update() {
      // update;
      const result = await api.menus.update(this.$route.params.id, this.name, this.description);
      console.log(result);
      alert(result.data.message);
      this.$router.push(`/admin/menus/${this.$route.params.id}`)
    },
    
    async updateImage(){
      const result = await api.menus.updateImage(this.$route.params.id,this.file);
      console.log(result);
      alert(result.data.message);
    }

  },
};
</script>

<style>
.form-wrapper {
  display: flex;
  flex-direction: column;
  margin-top: 50px;
  border: 1px solid black;
  padding: 20px;
}

.form-wrapper > * {
  margin: 10px;
}

.image-wrapper {
  margin-top: 30px;
}
</style>