#include <iostream>

using namespace std;
void swap(int *x,int  *y);
class minheap
{
    int *harr;
    int capacity;
    int heap_size;
public:
    minheap(int a[],int size);
    void buildheap();
    void minheapify(int i);
    int parent(int i)
    {
        return (i-1)/2;
    }
    int left(int i)
    {
      return (2*i+1);
    }
    int right(int i)
    {
        return (2*i+2);
    }

    int getmin()
    {
        return harr[0];
    }
    void replacemin(int x)
    {
        harr[0]=x;
        minheapify(0) ;
    }
};
minheap::minheap(int a[],int size)
{
    heap_size=size;
    harr=a;
}
void minheap::buildheap()
{
    int i=(heap_size/2)-1;
    while(i>=0)
    {
        minheapify(i);
        i--;

    }

}
/*int minheap::extractmin()
{
    if(heap_size==0)
    {
        return INT_MAX;

    }
    int root=harr[0];
    if(heap_size>1)
    {
        harr[0]=harr[heap_size-1];
        minheapify(0);

    }
    heap_size--;
    return root;


}*/


void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void minheap::minheapify(int i)
{
    int l=left(i);
    int r=right(i);
    int smallest=i;
    if(l<heap_size && harr[l]<harr[i])
        smallest=l;
    if(r<heap_size && harr[r]<harr[smallest])
        smallest=r;
    if(smallest!=i)
        {
        swap(&harr[i],&harr[smallest]);
        minheapify(smallest);
        }
}

void kthlargest(int k)
{
    int count=0,x;
    int *arr=new int[k];
    minheap mh(arr,k);
    while(1)
    {
        cout<<"enter next element of stream";
        cin>>x;
        if(count<k-1)
        {
            arr[count]=x;
            count++;

        }
        else
            {
                if(count==k-1)
                {
                    arr[count]=x;
                    mh.buildheap();
                }
                else
                    {
                        if(x>mh.getmin())
                        mh.replacemin(x);
                    }


        cout<<"kth largest element is"<<mh.getmin()<<endl;
        count++;
           }
}
}


int main()
{
    int k=3;
    cout<<"k is"<<k<<endl;
    kthlargest(k);
    return 0;
}

