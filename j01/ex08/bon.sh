ldapsearch -QLLL "sn=*bon*" | grep "sn:" | wc -l | cut -c 6-
