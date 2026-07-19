let mext = document.querySelector(".mext");
let prev = document.querySelector(".prev"); 
let slider = document.querySelector(".slider"); 


mext.addEventListener("click", ()=>{
let slides = document .querySelectorAll(".slides"); 
slider.appendChild(slides[0]); 

});

prev.addEventListener("click", ()=>{
let slides = document .querySelectorAll(".slides"); 
slider.prepend(slides[slides.length -1]); 

})

// slider.addEventListener("click",()=>{
// let slides = document .querySelectorAll(".slides"); 
// slider.appendChild(slides[0]);

// })