

const ChildComp = (props) => {
    const {newItem, newPrice, parentmethod} = props;
    
        return<div>
            <h2> this is a Child component</h2>
            
            <h2> samosa: {newItem}, Salary: {newPrice}</h2>
                <button type="button" onClick={()=>parentmethod()}> change state data 1</button>
        </div>
    
        
    }

export default ChildComp;