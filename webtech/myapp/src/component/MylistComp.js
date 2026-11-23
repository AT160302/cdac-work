import React, { Component } from 'react'

 class MylistComp extends Component {

    constructor(props) {
      super(props)
    
      this.state = {
         courses:[
            {id:1,name:"html",price: 5000},
            {id:2,name:"css",price: 1000},
            {id:3,name:"nodejs",price: 700},
            {id:4,name:"express.js",price: 1000},
            {id:5,name:"react",price: 50000}
         ],
         emp:[
            {empid: 1,name: "Aqsa", salary: 1500000},
            {empid: 2,name: "Zulfeen", salary: 1200000},
            {empid: 1,name: "Raj", salary: 1500000},
            {empid: 1,name: "Simran", salary: 1500000},
         ]
        //  create dynamically table for this emp
      }
    }
  render() {
    const {courses}= this.state;  //destructing
    return (
      <div>
        <h2>MylistComp</h2>
        <ul>
            {
                courses.map((val,index)=>{
                    return <li key={index}>{val.id}- {val.name}-{val.price}</li>
                })
            }
        </ul>

      </div>
    )
  }
}

export default MylistComp