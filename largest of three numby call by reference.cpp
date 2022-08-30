double largestfun(double &num1, double &num2, double &num3)
{
    double *temp;
    double *zamp;
    double *ramp;
    temp = &num1;
    zamp = &num2;
    ramp = &num3;
    if((*temp>=*zamp) && (*temp>=*ramp))
    {
        return (*temp);
    }
    else if((*zamp>=*temp) && (*zamp>=*ramp))
    {
    	return(*zamp);
	}
    else
    {
    	 return (*ramp);
	}
}
int main()
{
double a,b,c;
double result;
cout<<"Enter three numbers"<<endl;
cin>>a>>b>>c;
result = largestfun(a,b,c);
cout<<"The result is:"<<result"<<endl";
system("pause");
}
