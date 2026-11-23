import { createSlice, createAsyncThunk } from "@reduxjs/toolkit";

import axios from "axios";

const API_URL = "http://localhost:5050/user";

export const fetchData= createAsyncThunk("api/fetchData",async()=>{
    const response= axios.get(API_URL);
    return (await response).data;
})

const apiSlice = createSlice({
    name:"api",
    initialState:{
        data:[],
        status: "idle",
        error: null

    },
    reducers:{},
    extraReducers: (builder)=>{
        builder.addCase(fetchData.pending,(state)=>{
            state.status="loading"
        })

         builder.addCase(fetchData.fulfilled,(state,action)=>{
            state.status="successed";
            state.data=action.payload;
        })

         builder.addCase(fetchData.rejected,(state,action)=>{
            state.status="failed";
            state.error=action.error.message;
        })
    }


})

export default apiSlice.reducer;
