import React from 'react'
import { Link } from 'react-router-dom'

const NavCompo = () => {
  return (
    <div>
        <Link to="carousel" className = 'btn btn-primary btn-sm'>Carousel</Link> {" "}
        <Link to="list" className = 'btn btn-primary btn-sm'>List</Link> {" "}
        <Link to="ProductAdd" className = 'btn btn-primary btn-sm'>ProductAdd</Link> {" "}
        <Link to="ProductDash" className = 'btn btn-primary btn-sm'>ProductDash</Link> {" "}
        <Link to="ProductUpdate" className = 'btn btn-primary btn-sm'>ProductUpdate</Link> {" "}
        <Link to="UserList" className = 'btn btn-primary btn-sm'>UserList</Link> {" "}
        
    </div>
  )
}

export default NavCompo