bool xorf(bool a, bool b)
{
    return (a && !b) || (!a && b) ? true : false;   
}
