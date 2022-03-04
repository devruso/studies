//XHR
// old way, but redone in early 2022, so i'm redoing it as well.

// const request = new XMLHttpRequest();

// request.onload = ()=>{
//     console.log("It works");
//     const objct = JSON.parse(this.responseText);
// }
// request.onerror=()=>{
//     console.log("Error");
//     console.log(this);
// }
// request.open('GET','https://api.tvmaze.com/singlesearch/shows?q=girls');
// request.send();


const req = new XMLHttpRequest();

req.onload = function(){
    console.log("It loaded!")
    const object = JSON.parse(this.responseText)
    console.log(object)
}
req.onerror = function(){
    console.log("Error!");
    console.log(this);
}
req.open("GET","https://swapi.dev/api/people/1/")
req.send();