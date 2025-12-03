
const studentName = document.querySelector(".student-name");
const timeCompleted = document.getElementById("timeCompleted");

let x = 2;

studentName.addEventListener("click", () => {
  
  const d = new Date();

  timeCompleted.textContent =
    "Thời gian hoàn thành 17:" +
    (20 + x) + ":" +
    d.getSeconds() +
    " ngày 25/11/2025";

    x = x + 2;

});
