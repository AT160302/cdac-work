import React, { useEffect } from "react";
import { useDispatch, useSelector } from "react-redux";
import { fetchData } from "../redux/apiSlice";

const UserListComp = () => {
  const dispatch = useDispatch();
  const data = useSelector((state) => state.api.data);
  const status = useSelector((state) => state.api.status);
  const error = useSelector((state) => state.api.error);

  useEffect(() => {
    if (status == "idle") {
      dispatch(fetchData());
    }
  }, [status, dispatch]);

  let content=[];

  if (status == "loading") {
    content = <div>loading...</div>;
  } else if (status == "successed") {
    content = data;
  } else if (status == "failed") {
    content = <div>{error}</div>;
  }

  return (
    <div>
      <h2>UserListComp</h2>
      <table>
        <thead>
          <tr>
            <th>Id</th>
            <th>Name</th>
            <th>Post</th>
            <th>Salary</th>
          </tr>
        </thead>
        <tbody>
          {
          content.length > 0 && content.map((val, index) => {
            return (
              <tr key={index}>
                <td>{val.Id}</td>
                <td>{val.Name}</td>
                <td>{val.Post}</td>
                <td>{val.Salary}</td>
              </tr>
            );
          })}
        </tbody>
      </table>
    </div>
  );
};

export default UserListComp;
