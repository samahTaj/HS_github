<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login($mysqli) == true) {
    $logged = 'in';
} else {
    $logged = 'out';
}
include ('body/header_login.inc');
include ('body/body_login.inc');

?>
