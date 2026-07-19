const la = document.querySelector(".culls"); 
const bouton1 = document.querySelector(".btn"); 
const bouton2 = document.querySelector(".btn1"); 
const bouton3 = document.querySelector(".btnt"); 
const bouton4 = document.querySelector(".btn2"); 
const min = document.querySelector(".loader"); 
const min2= document.querySelector(".loa"); 
const min3= document.querySelector("#ma"); 
const min4= document.querySelector(".divet"); 
const diss= document.querySelector(".img");
const ttx= document.querySelector(".llm");
const ttxx= document.querySelector(".pros");
const conts= document.querySelector(".tab");





bouton1.addEventListener("click", ()=>{
la.classList.toggle("lae"); 
bouton1.classList.toggle("maw"); 
bouton3.classList.toggle("mat"); 
conts.classList.toggle("paq"); 

min.classList.toggle("jj"); 
min2.classList.toggle("jj1"); 
min3.classList.toggle("jj2"); 
min4.classList.toggle("jj3"); 

})
bouton3.addEventListener("click", ()=>{
la.classList.toggle("lae"); 
bouton1.classList.toggle("maw"); 
bouton3.classList.toggle("mat"); 
min.classList.toggle("jj"); 
min2.classList.toggle("jj1"); 
min3.classList.toggle("jj2"); 
min4.classList.toggle("jj3"); 
conts.classList.toggle("paq"); 
})
bouton2.addEventListener("click", ()=>{
diss.classList.toggle("dopsty");
bouton2.classList.toggle("pause");
bouton4.classList.toggle("passe");
ttx.classList.toggle("fft");
ttxx.classList.toggle("oft");

})

bouton4.addEventListener("click", ()=>{
diss.classList.toggle("dopsty");
bouton2.classList.toggle("pause");
bouton4.classList.toggle("passe");
ttx.classList.toggle("fft");
ttxx.classList.toggle("oft");



})

let count = 0.1; // Déclaré une seule fois
const counter = document.getElementById("counter");

setInterval(() => {
  counter.textContent = count.toFixed(1);
  count += 0.1;
  if (count > 8) {
    count = 0.00; // Repart à zéro
  }
}, 1000); // 1 seconde par étape