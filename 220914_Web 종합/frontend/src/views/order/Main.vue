<template>
  <div>

    <div class="main-container">

      <div>
        <router-link to="/orders/register">
          <b-button class="order-button" variant="outline-dark"> 주문하기 </b-button>
        </router-link>
      </div>

<!-- to /orders 주문하기 -> 주문 내역 조회하기 -->
      <div>
        <router-link to="/orders">
          <b-button class="order-button" variant="outline-dark"> 주문내역 조회하기 </b-button>
        </router-link>
      </div>

      <div class="icon-wrapper">
        <span class="material-symbols-outlined">local_cafe</span>
      </div>

    </div>

  </div>
</template>

<script>
export default {
  created(){
    this.$store.commit("SET_TITLE", "SSAFY-CAFE(메인)")
  }
}
</script>


<style scoped>
/* scoped가 들어가면 해당 컴포넌트에서만 해당 css가 적용 */
.main-container{
  position: absolute;
  top:50%;
  left: 50%;
  transform: translate(-50%, -50%);
}

.main-container > div{
  text-align: center;
  margin-top: 30px;
}

.icon-wrapper>span{
  font-size:80px;
}

.order-button{
  min-width: 180px;
}

</style>
