void MyQueue :: push(int x)
{
    arr[rear++] = x;
}

/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop()
{
    if(front==rear) return -1;
    return arr[front++];     
}
