grep -v '^#' /etc/passwd | sed -n '2~2p' | awk -F: '{print $1}' | rev |
sort -r | head -n "$FT_LINE2" | tail -n "$((FT_LINE2 - FT_LINE1 + 1))" |
awk '{printf "%s, ", $0}' | sed 's/, $/./'
