import React, {Component} from "react";


class FriendDetailsComp extends Component{   //we have extended bcz we are making this normal class as a class component
    render() {
        const {pname,pcontact,pgender,paddress}= this.props ;
        return (
        <div>
        <p>
        Name:{pname},Contact:{pcontact}, Gender:{pgender}, Address: {paddress}
        </p>
        </div>
        )
}
}

export default FriendDetailsComp;