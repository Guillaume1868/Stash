echo "$1 $2 $3 $4 $5"
ARG="$1 $2 $3 $4 $5"; ./push_swap $ARG | wc -l
