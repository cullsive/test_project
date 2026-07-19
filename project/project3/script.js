const mouse = document.querySelector(".mouse");
const effe1 = document.querySelector(".effe1"); 
const effe2 = document.querySelector(".effe2"); 
const effe3 = document.querySelector(".effe3"); 
const effe4 = document.querySelector(".effe4"); 
const effe5 = document.querySelector(".effe5"); 
const effe6 = document.querySelector(".effe6"); 
const body = document.querySelector("body"); 
const img = document.querySelector("img"); 
const mat1 = document.querySelector(".mat1"); 
const mat2 = document.querySelector(".mat2"); 
const nav = document .querySelector("nav"); 
const max = document.querySelector(".button-max"); 
// const eco = document .querySelector(".span1");
//  console.log(eco);
 
// console.log(effe1,effe2,effe3,effe4,effe5,effe6);
// console.log(body);

window.addEventListener("mousemove", (e) => {
  if (mouse) {
    mouse.style.left = e.pageX + "px";
    mouse.style.top = e.pageY + "px";
  }
});

window.addEventListener("mousedown",()=>{

mouse.style.transform= "translate(-29%, -25%) scale(2) "

});
window.addEventListener("mouseup",()=>{

mouse.style.transform= "translate(-50%, -50%) scale(1) "

}); 

effe1.addEventListener("click",(e)=>{
effe1.classList.add("mera1");
effe2.classList.add("mera2");
effe3.classList.add("mera3");
effe4.classList.add("mera4");
effe5.classList.add("mera5");
effe6.classList.add("mera6");

// console.log("me");

setTimeout(() => {
       img.classList.add("imagine");
    },310);

setTimeout(() => {
       mat1.classList.add("timatique");
    },350);
setTimeout(() => {
       mat2.classList.add("timatique");
    },350);
setTimeout(() => {
       nav.classList.add("timatique");
    },350);
setTimeout(() => {
      max.classList.add("passat");
    },350);
// setTimeout(() => {
//       eco.classList.add("pixe");
//     },350);

 
});
