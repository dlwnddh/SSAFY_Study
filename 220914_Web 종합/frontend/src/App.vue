<template>
  <div id="app">
    <header>
      <h2>{{ $store.state.title }}</h2>
    </header>

    <router-view/>

    <footer>
      <div>All right reserved</div>
      <router-link to="/admin/home"> 관리자페이지(메뉴)</router-link>
      <br/>
      <router-link to="/">메인페이지(주문)</router-link>
    </footer>

  </div>
</template>

<script>
export default {
  created(){
    this.$store.commit("SET_TITLE", "SSAFY-CAFE")
  }

}
</script>

<style>
header,footer{
  border-top: 2px solid gray;
  border-bottom: 2px solid gray;
}
#app {
  display: flex;
  flex-direction: column;
  min-height: 100vh;
}

#app>header{
  text-align: center;
}

#app>div{
  flex:1;
}
#app>footer{
  text-align: center;
}


</style>
