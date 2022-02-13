let arr =[];
let p = prompt("What would you like to do?");
while(p !== "quit"){
    p;
    if(toLowerCase(p) === "new"){
        p;
        arr.push(p);
        console.log(`${p} added to the list`);
    }else if(toLowerCase(p) === "list"){
        console.log(`*********`);
        for(let k =0; k<arr.length; k++ ){
        console.log(`${k}: ${arr[k]}`);
        }
        console.log(`*********`);
    }else if(p === "delete"){
       const index = parseInt(prompt.log("Which index do you want to delete?"));
       if(!Number.isNaN(index)){
            const deleted =arr.splice(index,1);
            console.log(`Ok, deleted ${deleted[index]}`);
       }else{
           console.log("Unkown index");
       }
    }
}