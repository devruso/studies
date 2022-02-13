
let maximum = parseInt(prompt("Enter maximum number"));
const ideal = Math.floor(Math.random() * maximum) + 1;
let control =0;

while(!maximum){
    maximum = parseInt(prompt("Enter maximum number"));
}

let guess= parseInt(prompt("Enter your first guess"));

while(guess !== ideal ){
    control++;
    if(guess > ideal){
    guess = parseInt(prompt("Too high"));
    }else if(guess < ideal){
    guess = parseInt(prompt("Too low"));
}
    if(guess ==- -1) break;
}
console.log(`You needed ${control} attempts`);