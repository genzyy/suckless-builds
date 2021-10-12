# custom aliases
alias ls "ptls"
alias pwd "ptpwd"
alias touch "pttouch"
alias cp "ptcp"

alias v "nvim"
alias suck "rm -rf config.h; sudo make clean install"

if status is-interactive
    # Commands to run in interactive sessions can go here
    set -gx PATH ~/.local/bin:$PATH
    starship init fish | source
end
