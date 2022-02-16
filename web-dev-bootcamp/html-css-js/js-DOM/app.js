const allLinks = document.querySelectorAll('a');

// for (let link of allLinks) {
//     link.innerText = 'I AM A LINK!!!!'
// }


// for (let link of allLinks) {
//     link.style.color = 'rgb(0, 108, 134)';
//     link.style.textDecorationColor = 'magenta';
//     link.style.textDecorationStyle = 'wavy'
// }

const lis = document.querySelectorAll('li');
let j = 0;
for (let el of lis){
    if(el[j].classList.contains('highlight') === true){
        el[j].classLis.toggle('highlight');
    }else{
        el[j].classList.add('highlight');
    }
    j++;
}
