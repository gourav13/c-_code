<html>
<head></head>
<body>

<?php
// define variables and set to empty values
$nameErr = "";

$name= "";
if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["name"])) {
    $nameErr = "Name is required";
  }
  
  <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
  <input type ="text" name="name"> 
  </form>
  <?
  echo $name;
  ?>
</body>
</html>