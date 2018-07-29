#include<iostream>
using namespace std;
void INSERT(void);
void DELETE(void);
void SEARCH(void);
void SORT_A(void);
void SORT_De(void);
int Show(void);
void menu(void)//MENU Function.
{
    cout<<"\t\t*** MENU ***";
    cout<<"\n 0.Exit\n";
    cout<<"\n 1.View all elements\n";
    cout<<"\n 2.Insert new element\n";
    cout<<"\n 3.Search an element\n";
    cout<<"\n 4.Delete an element (user should input item to be searched and delete)\n";
    cout<<"\n 5.Sort elements in ascending order\n";
   cout<<"\n 6.Sort elements in descending order\n";
    cout<<"\n 7.Find memory location of an element (user should input index number). \nYoushould use the formula to calculate memory address from base address of an array.\n";
   cout<<"*********************************************************************************\n";
    cout<<"Please Choose One Option From Menu :";
};
int main()
{
    int c;
    menu();//Calling The Menu Function For Showing User What Wants.
    cin>>c;
    //Choosing The Menu Item.
    if(c==0)
    {
      cout<<"*****Exit*****";
    }
    if(c==1)
    {
        show();
    }
    if(c==2)
    {
        INSERT();
    }
    if(c==3)
    {
        SEARCH();
    }
    if(c==4)
    {
        DELETE();
    }
    if(c==5)
    {
        SORT_A();
    }
    if(c==6)
    {
        SORT_De();
    }

    return 0;
} ;



void show(void)
{
    int n,c,arr[100];
   cout<<"Enter number of elements in array\n";
    cin>>n;

    cout<<"Enter %d elements\n", n;

    for (c = 0; c < n; c++)
    {
       cin>>arr[c];
    }
   cout<<"Elements Are :";
    for (c = 0; c < n; c++)
    {
        cout<<" %d   ",arr[c];
    }

}


void INSERT(void)
{
    int arr[100], position,value, c,n;

   cout<<"Enter number of elements in array\n";
    cin>>n;

    cout<<"Enter %d elements\n", n;

    for (c = 0; c < n; c++)
        cin>>arr[c];

  cout<<"Enter the location where you wish to insert an element\n";
   cin>>position;

 cout<<"Enter the value to insert\n";
   cin>>"%d", &value;

    for (c = n - 1; c >= position - 1; c--)
        arr[c+1] = arr[c];

    arr[position-1] = value;

cout<<"Resultant array is\n";

    for (c = 0; c <= n; c++)
       cout<<arr[c];
}


void DELETE(void)
{
    int n,c,arr[100],p;
    printf("Enter number of elements in array\n");
    cin>>n;

    cout<<"Enter %d elements\n"<<n;

    for (c = 0; c < n; c++)
       cin>>arr[c];

    printf("Enter the location where you wish to delete element\n");
    cin>>p;

    if (p >= n+1)
        cout<<"Deletion not possible.\n";
    else
    {
        for (c = p - 1; c < n - 1; c++)
            arr[c] = arr[c+1];

        cout<<"Resultant array:\n";

        for (c = 0; c < n - 1; c++)
     cout<<"%d\n", arr[c];
    }

}


void SEARCH(void)
{
    int n,c,arr[100],s;
    cout<<"Enter number of elements in array\n";
    cin>>n;

    cout<<"Enter %d elements\n"<<n;

    for (c = 0; c < n; c++)
        cin>>arr[c]);
  cout<<"Which Element You Want To search :";
    cin>>s;
    for(c = 0; c < n; c++)

        if(arr[c]==s)
           cout<<"The Element %d is in %d Position "<<arr[c]<<c+1);
        else
            cout<<"The Element is Not Found..";

}


void SORT_A(void)
{
    int i, j, a, n, number[100];
    cout<<"Enter the number of element \n";
   cin>>n;
  cout<<"Enter %d elements\n"<<n;
    for (i = 0; i < n; ++i)
       cin>>"%d", &number[i];

    for (i = 0; i < n; ++i)
    {

        for (j = i + 1; j < n; ++j)
        {

            if (number[i] > number[j])
            {

                a =  number[i];
                number[i] = number[j];
                number[j] = a;

            }

        }

    }

  cout<<"The numbers arranged in ascending order are given below \n";
    for (i = 0; i < n; ++i)
       cout<< number[i];
}

void SORT_De(void)
{
    int number[30];

    int i, j, a, n;
    cout<<"Enter the number of element "<<\n;
    scanf("%d", &n);
 cout<<"Enter %d elements\n", n);
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    /*  sorting begins ... */

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in descending order are given below\n");

    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }

}

