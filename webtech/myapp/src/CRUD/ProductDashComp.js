import axios from "axios";
import React, { useEffect, useState } from "react";
import { Link } from "react-router-dom";

import DeleteIcon from '@mui/icons-material/Delete';
import EditIcon from '@mui/icons-material/Edit';

const ProductDashComp = () => {
  const [myproducts, setMyPoducts] = useState([]);

  useEffect(() => {
    getData();
  }, []);

  const getData = () => {
    axios
      .get("http://localhost:5050/user")
      .then((res) => {
        console.log(res.data);
        setMyPoducts(res.data);
      })
      .catch((error) => {});
  };

  const deleteData = (Id) => {
    console.log(Id);
    if (window.confirm(`are you sure to delete product id: ${Id}`))
      axios.delete(`http://localhost:5050/user/${Id}`).then((res) => {
        window.alert("deleted successfully");
        getData();
      });
  };
  return (
    <div>
      <h2>ProductDashComp</h2>
      <Link  to = "/dashboard/ProductAdd">Product Add</Link>
      <table className="table table-bordered table-hover">
        <thead>
          <tr>
            <th>Id</th><th>Name</th><th>Post</th><th>Sallary</th><th>action</th>
          </tr>
        </thead>

        <tbody>
          {myproducts.map((val, index) => {
            return (
              <tr key={index}>
                <td>{val.Id}</td>
                <td>{val.Name}</td>
                <td>{val.Post}</td>
                <td>{val.Salary}</td>
                <td>
                  <button type="button"
                    onClick={() => {deleteData(val.Id)}}>
                    <DeleteIcon></DeleteIcon>
                  </button>{" "}
                  <Link to ={`/dashboard/ProductUpdate/:${val.Id}`} className='btn btn-outline-success btn-sm'>
                  <EditIcon/>
                  </Link>
                </td>
              </tr>
            );
          })}
        </tbody>
      </table>
    </div>
  );
};

export default ProductDashComp;
