import React, {Component} from "react";

class StateComp extends Component {
    constructor (props){
        super (props);
        this.state={
            fname: "aqsa",
            sal: 80000
        }
    }



    //creating function/method 
    changeState= ()=> {
        this.setState((prevstate)=>({fname: "Aqsa Tadvi", sal:prevstate.sal+1000 }));
    
    }
    render () {
        return<div>
            <h2> this is a statecomponent</h2>
            <p>
                Name: {this.state.fname}, Salary: {this.state.sal}
            </p>
            <button type="button" onClick={()=> this.changeState()}> change state data 1</button>
        </div>
    
        
    }
}

export default StateComp;