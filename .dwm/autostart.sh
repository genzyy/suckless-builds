
function run {
 if ! pgrep $1 ;
  then
    $@&
  fi
}



run "dwmblocks"

run "/home/rishit/.fehbg"

run "picom --experimental-backends"
