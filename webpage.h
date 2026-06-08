#pragma once

const char WEBPAGE[] = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
<meta name='viewport' content='width=device-width, initial-scale=1'>
<style>
*{
  box-sizing:border-box;
}

body{
  margin:0;
  min-height:100vh;
  font-family:Arial, sans-serif;
  background:linear-gradient(135deg,#101014,#1c1c1c,#111827);
  color:white;
  display:flex;
  justify-content:center;
  align-items:center;
  padding:24px;
}

.box{
  width:100%;
  max-width:480px;
  background:rgba(255,255,255,0.06);
  border:1px solid rgba(255,255,255,0.12);
  border-radius:24px;
  padding:28px;
  box-shadow:0 20px 60px rgba(0,0,0,0.45);
  backdrop-filter:blur(10px);
}

h1{
  margin:0 0 28px;
  text-align:center;
  color:#89CFF0;
  font-size:28px;
  letter-spacing:0.5px;
}

form{
  display:flex;
  flex-direction:column;
  gap:12px;
}

label{
  font-size:16px;
  color:#ffb6d9;
  font-weight:bold;
  letter-spacing:0.4px;
}

input{
  width:100%;
  font-size:22px;
  padding:15px 16px;
  border-radius:14px;
  border:2px solid transparent;
  outline:none;
  background:#f4f7fb;
  color:#1c1c1c;
}

input:focus{
  border-color:#89CFF0;
  box-shadow:0 0 0 4px rgba(137,207,240,0.18);
}

button{
  margin-top:8px;
  width:100%;
  font-size:22px;
  font-weight:bold;
  padding:15px 24px;
  border:none;
  border-radius:14px;
  background:#89CFF0;
  color:#1c1c1c;
  cursor:pointer;
}

button:active{
  transform:scale(0.98);
}

.hint{
  margin-top:18px;
  text-align:center;
  font-size:14px;
  color:#b8c1cc;
}
</style>
</head>

<body>
<div class='box'>
  <h1>UNO R4 LED Matrix</h1>

  <form>
    <label for="msg">Type message</label>
    <input id="msg" name="msg" maxlength="40" placeholder="Hello world!">
    <button type='submit'>Send</button>
  </form>

  <p class="hint">Message will appear on the LED matrix</p>
</div>
</body>
</html>
)rawliteral";
