const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("", (ans) => {
    let w=ans;
    if (w == 2) console.log("NO");
    else if (w % 2 == 0) console.log("YES");
    else console.log("NO");
    rl.close();
});
