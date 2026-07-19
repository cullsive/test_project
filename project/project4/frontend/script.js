const containe = document.querySelector(".container");
const buton = document.querySelector(".follow"); 
const img = document .querySelector(".profil")
const span = document.querySelector(".spans"); 
const thank = document .querySelector(".thanks"); 
const retor = document.querySelector(".retour"); 
console.log(buton , containe , span , img, thank);

buton.addEventListener("click", ()=>{
    containe.classList.toggle("active1"); 
    
    span.classList.toggle("active2"); 
    img.classList.toggle("active3"); 
    thank.classList.toggle("active4"); 
    buton.classList.toggle("active5"); 
    retor.classList.toggle("active6");
})
retor.addEventListener("click", ()=>{
containe.classList.toggle("active1"); 
    
    span.classList.toggle("active2"); 
    img.classList.toggle("active3"); 
    thank.classList.toggle("active4"); 
    buton.classList.toggle("active5"); 
    retor.classList.toggle("active6");
})