const cull = document.querySelector(".img1"); 
const cull2 = document.querySelector(".img"); 
const red = document.querySelector(".mouse"); 
const btn1 = document.querySelector(".r1")
const btn2 = document.querySelector(".r2")



btn1.addEventListener("click", ()=>{
    setTimeout(() => {
        cull.classList.add("active");
    },0);



setTimeout(() => {
    cull2.classList.add("active1");
},50);


})


btn2.addEventListener("click", ()=>{
    setTimeout(() => {
        cull.classList.remove("active");
    },50);



setTimeout(() => {
   cull2.classList.remove("active1");

},0);
})
