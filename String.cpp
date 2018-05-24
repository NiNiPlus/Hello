String& String::operator += (const String& s1)
{
    char *a = this->rep;
    this->rep = new char[this->len + s1.len + 1];
    strcpy(this->rep,a);
    strcat(this->rep,s1.rep);
    delete [] a;
    this->len += s1.len;
    
    return *this;
}

String& operator + (const String& s1,const String& s2)
{
    char * a = new cahr(s1.len+s2.len+1);
    
    strcpy(a,s1.rep);
    strcat(a,s2.rep);
    
    String s3(a);
    delete []a;
    
    return s3;
}
