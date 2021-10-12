
function run {
 if ! pgrep $1 ;
  then
    $@&
  fi
}



run "/home/rishit/.suckless/suckless/slstatus-powerline/slstatus"

run "/home/rishit/.fehbg"

run "picom --experimental-backends"
