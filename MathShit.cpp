


Mathes::Mathes(){
}

double Mathes::powerOfTen(int n){
    double result = 1.0;
    if(n>=0)
    {
        for(int i = 0 ;i<n;i++)
        {
        result *= 10.0;
        }
    }
    else
    {
       for(int i = 0 ;i<0-n;i++)
        {
        result *= 0.1;
        } 
    }
    return result;
}

double Mathes::squareRoot(double n){
     double input = n; 
     double result = 0.0;
     int max = 10; 
     int i;
     double j = 1.0;
     for(i = max ; i > 0 ; i--){
        if(input - (( 2 * result ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
        {
            while( input - (( 2 * result ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
            {
                j++;
                if(j >= 10) break;
            }
            j--; //correct the extra value by minus one to j
            input -= (( 2 * result ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)); //find value of input

            result += j * powerOfTen(i);     // find sum of a
            j = 1.0;
        }
    }
 
    for(i = 0 ; i >= 0 - max ; i--){
        if(input - (( 2 * result ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
        {
            while( input - (( 2 * result ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
            {
                j++;
            }
            j--;
            input -= (( 2 * result ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)); //find value of input
            result += j * powerOfTen(i);     // find sum of a
            j = 1.0;
        }
    }
    // find the number on each digit
    return result;
}

void Mathes::equation(int a,int b,int c){
    double delta = b*b-4*a*c;
    if(delta>0.0)
    {
        std::cout<<"Phuong trinh co 2 nghiem\n"<<std::endl;
        std::cout<<"Nghiem 1: "<<(-b+squareRoot(delta))/2<<"\n"<<std::endl;
        std::cout<<"Nghiem 2: "<<(-b+squareRoot(delta))/2<<"\n"<<std::endl;
    }
    else if(delta==0.0)
    {
        std::cout<<"Phuong trinh co 1 nghiem = "<<-b/2*a<<"\n"<<std::endl;
        
    }
    else 
    {
        std::cout<<"Phuong trinh vo nghiem\n"<<std::endl;
    }
}

