import React, { Component } from "react";

import ChildComp from "./ChildComp";
import Purecomp from "./PureComp";
import UseMemoComp from "./UseMemoComp";

class ParentComp extends Component {
    constructor(props) {
        super(props)

        this.state={
            item:"samosa",
            price: 25
        }
    }
    changeData = ()=>{
        this.setState((prevState)=>({item: "samosa with chatani", price: prevState.price+5}))
    }



    render() {

        return (
        <div>
            <h2> this is parent component</h2>
            <div>
               <h2> samosa: {this.state.item}, Price: {this.state.price}</h2>
                <button type="button" onClick={()=> this.changeData()}> change state data 1</button>
                <hr/>
                <ChildComp newItem={this.state.item} newprice={this.state.price} parentmethod={()=>this.changeData()}></ChildComp>
                <hr/>
                <Purecomp newItem ={this.state.item}></Purecomp>
                <UseMemoComp newItem ={this.state.item}></UseMemoComp>
            </div>
            </div>
            )
    }
}

export default ParentComp;