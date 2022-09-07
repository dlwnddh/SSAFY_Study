<template>
  <div>
    <h1>Header</h1>
    <Search></Search>
    <Navigation></Navigation>
  </div>
</template>

<script>
import Search from "./Search";
import Navigation from "./Navigation";
export default {
  components: {
    Search,
    Navigation,
  },
};
</script>

<style scoped></style>
