<template>
  <div>
    <main>
      <router-link to="/admin/menus/register">
          <b-button class="order-button w-100" variant="outline-dark">메뉴 추가하기</b-button>
      </router-link>

      <div @click="moveDetail(menu.id)" v-for="menu in menus" :key="menu.id">
        <div class="menu-container">
          <div
            class="menu-image"
            :style="`background-image:url(${setImage(menu.image_src)})`"
          ></div>
          <div class="menu-info-wrapper">
            <h2 class="menu-name">{{ menu.name }}</h2>
            <p class="menu-description">{{ menu.description }}</p>
          </div>
        </div>
      </div>
    </main>
  </div>
</template>

<script>
import { api } from "@/utils/axios";
export default {
  data() {
    return {
      menus: [],
    };
  },
  async created() {
    this.$store.commit("SET_TITLE", "메뉴 목록");
    const result = await api.menus.findAll();
    this.menus = result.data;
    console.log(this.menus);
  },

  methods: {
    setImage(image_src) {
      return `http://localhost:8081/${image_src}`;
    },
  },
};
</script>

<style scoped>
.menu-container {
  display: flex;
  align-content: center;
  border-bottom: 3px solid black;
}

.menu-info-wrapper {
  margin: 0 auto;
  text-align: center;
}

.menu-name {
  font-size: 25px;
  font-weight: bold;
}

.menu-description {
  padding-top: 10px;
}

.menu-image {
  border: 1px solid black;
  background-size: cover;
  height: 180px;
  width: 180px;
}
</style>
