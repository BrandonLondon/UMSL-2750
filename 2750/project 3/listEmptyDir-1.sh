usage() {
echo "must contain only one parameter"
echo "usage: " $0 " must be an existing path or valid director"
echo "[-h|--help] : display this message"
}

iterateDirectory() {
directoryName=$1
flagEmpty=false

# condition to check whether directory is empty or not
if [[ "$(ls -A $directoryName)" ]]; then
    echo Files in subdirectors of $1

    # loop through each file and the sub-directory of the
    # current directory
    for subFiles in $directoryName/*; do

      # if the current path is a file then output the name
      if [[ -f $subFiles ]]; then
        echo $subFiles

        # set the flag as true
        flagEmpty=true

      # otherwise, call the function iterateDirectory by passing
      # subfiles
      else

        iterateDirectory $subFiles

   # if the current path is empty put it at the bottom of empty dir
        if [[ "$flagEmpty"=false ]] && [[ -d $subFiles ]]; then
          echo $subFiles >> EmptyDir.txt
        fi   

      fi
    done
fi
}

directory=$1

if [[ "$#" != '1' ]] || [[ "$directory" = "-h" ]] || { ! [[ -p "$directory" ]] && ! [[ -d "$directory" ]]; }; then
usage
exit 1
fi

# create a new EmptyDir.txt file by sizing to 0
truncate -s 0 EmptyDir.txt

# call the function by passing the directory name
iterateDirectory $directory

# display the data present in the subdirectories
echo Empty sub-directories that are present are $1
cat EmptyDir.txt
