int ft_str_is_uppercase(char *str){

    int i=0;

    while (str[i]){
        if (str[i] >='A' && str[i] <='Z' || str[i] =='\0'){
    
                i++;

        }else{
            
                return 0;
        } 
    }
    return 1;
}