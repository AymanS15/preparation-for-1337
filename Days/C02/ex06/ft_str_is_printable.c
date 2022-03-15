int ft_str_is_printable(char *str){

    int i=0;

    while (str[i]){
        if (str[i] >=' ' && str[i] <='~' || str[i] =='\0'){
    
                i++;

        }else{
            
                return 0;
        } 
    }
    return 1;
}