// import React,{ useState } from 'react'
// // import imgPath from './src/shared/constant/constantData';

// const UseStateHookComp = ()=> {
//     const [myName,setMyName] = useState("Aqsa");
//     const [count,setCount] = useState(0);
//     const [item,setItem] = useState(["Samosa","Dosa","Idli","Poha"]);
//     const [menu,setMenu] = useState([
//       // key : value json format
//         {id: 1, name: "chicken", price: 500},       
//         {id: 2, name: "paneer", price: 200},
//     ])

//     return(
//         <div>
//             <h2>This is use</h2>
//             <h2>This is UseStateHookCom</h2>
//             <strong>Name:{myName}</strong>{" "}
//             <button type='button' className='btn btn-outline primary' onClick={()=>setMyName("Aqsa  tadvi")}>change Name</button>
            
//             <strong>Counter:{count}</strong>{" "}
//             <button type='button' className='btn btn-outline-primary' onClick={()=>setCount(count + 1)}>increment count</button>
            
//             <hr/>

//             <ul>
//                 {
//                     item.map((val,index)=> {
//                     return <li key ={index}> {val}</li>
//                  })
//                 }
//             </ul>

//             {
//                 menu.length >0 && map((val,index)=>{

//                 })
//             }


//         </div>
        
            
//     )
        


// } 
// export default UseStateHookComp;   
   



//     // return  <div>
//     //         <h2>This is UseStateHookCom</h2>
//     //         <strong>Name:{myName}</strong>{" "}
//     //         <button type='button' className='btn btn-outline primary' onClick={()=>setMyName("Aqsa  tadvi")}>change Name</button>
//     //         <hr/>
//     //         <strong>Counter:{count}</strong>{" "}
//     //         <button type='button' className='btn btn-outline-primary' onClick={()=>setCount(count + 1)}>increment count</button>
            
//     //         <hr/>
//     //         <div/>

//         {/* <ul>
//                     { */}
//     //                 item.length > 0 && map((val,index)=> {
//     //                 return <li key ={index}> {val}</li>
//     //                 })
//     //             }
//     //         </ul>

            
//     //          {/* {
//     //             menu.length > 0 && map((val,index)=>{
//     //                    <div className='card border-primary' key={index} style={{width:"200px"}} > 
//     //              <img src={val.path} alt={val.title} style={{width:"199px"}} />
//     //                     <div className='card-body border-primary'>
//     //                         <h3>Name:{val.name},Price:{val.price}</h3>
//     //                     <div/>
//     //                 <div/>
//     //           }) */}
                            
//     //  
