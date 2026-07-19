const mouse = document.querySelector(".mouse"); 

window.addEventListener("mousemove",(e)=>{
mouse.style.left=e.pageX + "px"; 
mouse.style.top=e.pageY + "px"; 

})
window.addEventListener("mousedown",(e)=>{
 mouse.style.transform = "translate(-50%, -50%) scale(2)";
})
window.addEventListener("mouseup",(e)=>{
 mouse.style.transform = "translate(-27%, -23%) scale(1)";
})
