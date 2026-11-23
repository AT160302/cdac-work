import React from "react";
import { createBrowserRouter } from "react-router-dom";
import MylistComp from "../component/MylistComp";
import MyCarouselComp from "../component/MyCarouselComp";
import ReactHookComp from "../hooks/ReactHookComp"
import UseStateHookComp from "../hooks/UseStateHookComp";
import PageNoteFound from "../layout/PageNotFound"
import DashboardCompo from "../layout/DashboardCompo";
import ProductAddCompo from "../CRUD/ProductAddCompo";
import ProductDashComp from "../CRUD/ProductDashComp";
import ProductUpdateCompo from "../CRUD/ProductUpdateCompo";
import UserListComp from "../component/UserListComp";
import LoginCompo from "../layout/LoginCompo";

const router= createBrowserRouter([
    {path:"/",element: <LoginCompo/>},

    {path:"login",element: <LoginCompo/>},

{
    path: "dashboard", element: <DashboardCompo/>, children:[
       // default routing
    {path:"",element: <MyCarouselComp/>},
    // naming routing
    {path:"carousel",element: <MyCarouselComp/>},
    {path:"list",element: <MylistComp/>},
    // Parameterized routing
    {path:"list/:id",element: <MylistComp/>},

    // Child routing
    {path:"Reacthooks",element: <ReactHookComp/>,
        children:[
            {path: "usestate", element: <UseStateHookComp/>}
        ]
    },
    {path:"ProductAdd",element: <ProductAddCompo/>},
    {path:"ProductDash",element: <ProductDashComp/>},
    {path:"ProductUpdate/:Id",element: <ProductUpdateCompo/>},
    {path:"UserList",element:<UserListComp/>}


]},



    //  wild card 

    {path: "*", element: <PageNoteFound/>}

])

export default router;