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
for (let el of lis){
    if(el.classList.contains('highlight') === true){
        el.classLis.toggle('highlight');
    }else{
        el.classList.add('highlight');
    }
}
