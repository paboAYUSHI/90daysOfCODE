int main() {

    int i, j, arr[1000000], count, temp=0,st[1000000]= {0};//use long int

    scanf("%d",&count);

    for (i=0;i<count;i++){

        scanf("%d",&arr[i]);

    }

    st[count-1] = arr[count-1];

    temp = arr[count-1];

    for(i=count-2;i>=0;i--) {

        for(j=i+1;j<count;j++)

        if(arr[i] < arr[j]) {

             st[i]= arr[i]^ st[j];//use stamina of next higer element

        break;

       }

    if(st[i] == 0)

        st[i] = arr[i];//no higher values then itself

    if(st[i] > temp)

        temp = st[i];//max of stamina

    }//for

    printf("%d",temp);

    return 0;

}