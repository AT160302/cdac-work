import React, { Component, PureComponent } from "react";

class Purecomp extends PureComponent {
    render () {
        console.log("Pure component")
        return (
            <div>
                <h2>Hi i am pure component</h2>
                <div>Item:{this.props.newItem} </div>
            </div>
        )
    }
 
}

export default Purecomp;