


 const form = document.querySelector('#form1');
 const input1 = form.elements.input1.value;
 const input2= form.elements.input2.value;
 const lista = document.querySelector('#lista')
 
 form.addEventListener('submit',function(e){
         e.preventDefault();  

       let newLi = document.createElement('li');
       newLi.innerText = `${input1} ${input2}`;
     lista.document.appendChild(newLi);

 
})
