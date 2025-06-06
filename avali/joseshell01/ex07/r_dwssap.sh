cat /etc/passwd | cut -d':' -f 1 | sed -n "p;n" | rev | sort -rd | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | sed ':a;N;$!ba;s/\n/, /g' | sed 's/$/./'
