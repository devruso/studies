 const p1 = {
   score: 0,
   button: document.querySelector('#p1Btn'),
   display: document.querySelector('#p1Score')
 }
 const p2 = {
   score: 0,
   button: document.querySelector('#p2Btn'),
   display: document.querySelector('#p2Score')
 }
 const resetBtn = document.querySelector('#resetBtn');
 const select = document.querySelector('#playto');
 
 let winningScore = 3;
 let p1Score = 0;
 let p2Score = 0;
 let gameOver = false;

 function updateScores(player, opponent){
   if(!gameOver){
      player.score++;
      if(player.score === winningScore){
      gameOver = true;
      player.display.classList.add('has-text-success');
      opponent.display.classList.add('has-text-danger');
      player.button.disabled = true;
      opponent.button.disabled = true;
    }
    player.display.textContent = player.score;
}
 }

 select.addEventListener('change',function(){
    winningScore = parseInt(this.value)
    reseter();
})
const reseter = function(){
  p1.score = 0;
  p2.score = 0;
  p1.display.textContent = p1Score;
  p2.display.textContent = p2Score;
  p1.display.classList.remove('has-text-success','has-text-danger');
  p2.display.classList.remove('has-text-danger','has-text-success');
  p1.button.disabled = false;
  p2.button.disabled = false;
  gameOver = false;
}

 p1.button.addEventListener('click', ()=>{
    updateScores(p1,p2)
})

p2.button.addEventListener('click', ()=>{
  updateScores(p2,p1)
})

resetBtn.addEventListener('click',reseter);

