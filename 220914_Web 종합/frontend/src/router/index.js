import Vue from 'vue'
import VueRouter from 'vue-router'

// order
import OrderMain from "../views/order/Main.vue"
import OrderList from "../views/order/List.vue"
import OrderRegister from "../views/order/Register.vue"
import OrderDetail from "../views/order/Detail.vue"

// admin-menu
import AdminMenuMain from "../views/admin-menu/Main.vue"
import AdminMenuList from "../views/admin-menu/List.vue"
import AdminMenuRegister from "../views/admin-menu/Register.vue"
import AdminMenuDetail from "../views/admin-menu/Detail.vue"


Vue.use(VueRouter)

const routes = [
  // orders
  {
    path: '/',
    name: 'home',
    component: OrderMain
  },
  {
    path: "/orders",
    name: 'orders',
    component: OrderList
  },
  {
    path: "/orders/register",
    name: 'order-register',
    component: OrderRegister
  },
  {
    path: "/orders/register/:id",
    name: 'order-update',
    component: OrderRegister
  },
  {
    path: '/orders/:id',
    name: 'order-detail',
    component: OrderDetail
  },

  // menus
  {
    path: "/admin/home",
    name: 'menus-home',
    component: AdminMenuMain
  },
  {
    path: "/admin/menus",
    name: "menus",
    component: AdminMenuList
  },
  {
    path: "/admin/menus/register",
    name: 'menus-register',
    component: AdminMenuRegister
  },
  {
    path: "/admin/menus/register/:id",
    name: 'menus-update',
    component: AdminMenuRegister
  },
  {
    path: "/admin/menus/:id",
    name: 'menus-detail',
    component: AdminMenuDetail
  }

]

const router = new VueRouter({
  mode: 'history',
  base: process.env.BASE_URL,
  routes
})

export default router
