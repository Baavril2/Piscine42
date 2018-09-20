ldapsearch -QLLL "(cn=z*)" cn | grep "cn" | cut -d ":" -f2 | cut -c 2- | sort -drf 
