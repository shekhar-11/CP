The various range limitations and conditions of bs


IF EXACT VALUE IS TO BE CALCULATED
SO ELIMINATING MID BECAUSE AS MID DOESN'T SATISFIES SO NOT NEEDED


while (l <= r)
{
    mid = (l + r) / 2;

    if (good(mid)) return mid;
    else if (mid too small) l = mid + 1;
    else r = mid - 1;
}





FIRST VALUE WHERE RESULT BECOMES TRUE, MINIMAL CASE 

while (l < r)
{
    mid = (l + r) / 2;

    if (good(mid)) r = mid;     // keep mid
    else l = mid + 1;           // discard mid
}





WHERE LAST IS TO BE TRUE MAX CASE UPTIL NOW THE VALUE IS MAX 

while (l < r)
{
    mid = (l + r + 1) / 2;

    if (good(mid)) l = mid;     // keep mid
    else r = mid - 1;           // discard mid
}




================================================================================THE GENERIC STATE===============================================================================


i =lower_lim, j=upper_lim

while(i+1<j)
{
mid
if( required at mid)
i=mid;

else
j=mid;

}











