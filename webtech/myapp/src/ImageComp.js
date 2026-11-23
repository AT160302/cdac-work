import React from 'react'
import imgpath from '../src/shared/constant/constantData'


export const ImageComp = () => {
  return (
    <div>
        <h2>My images are </h2>
        <img  src={imgpath.gulabjamun} alt= "gulab jamun" height= "500px" width= "300 px" />
        <br/>
        <img  src={imgpath.sweet2} alt= "sweet 2" height = "500px" width="300 px"/>
    </div>
  )
}
