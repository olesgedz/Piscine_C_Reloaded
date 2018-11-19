find . -iname "*.sh" | cut -c 3- | cut -f2 -d "/" | sed 's/*//' | cut -d'.' -f1 
