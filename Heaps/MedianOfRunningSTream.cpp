  #include<iostream>
  #include<queue>
  #include<vector>
  using namespace std;
  int main()
  {
      int data;
      cin>>data;
      double median = data;
      cout<<median<<" ";
      priority_queue<int> leftmaxheap;
      priority_queue<int, vector<int> , greater<int>> rightminheap;
      leftmaxheap.push(data);
      while(true)
      {
          cin>>data;
          if(data==0)
          {
              break;
          }
          if(data>median){
            if(rightminheap.size()>leftmaxheap.size())
            {
            leftmaxheap.push(rightminheap.top());
            rightminheap.pop();

            rightminheap.push(data);
            median = (leftmaxheap.top() + leftmaxheap.top()) / 2.0 ;
          }else if(rightminheap.size()<leftmaxheap.size())
          {
              rightminheap.push(data);
                 median = (leftmaxheap.top() + leftmaxheap.top()) / 2.0 ;
          }
          else{ 
             rightminheap.push(data);
             median = rightminheap.top();
          }
          }else{
              if(leftmaxheap.size()>rightminheap.size())
              {
                  rightminheap.push(leftmaxheap.top());
                  leftmaxheap.pop();
                  leftmaxheap.push(data);
                  median = (leftmaxheap.top() + rightminheap.top())/2.0;
              }else if(rightminheap.size()>leftmaxheap.size())
              {
                  leftmaxheap.push(data);
                  median = (leftmaxheap.top() + rightminheap.top())/2.0;

              }else {
                  leftmaxheap.push(data);
                  median = leftmaxheap.top();
              }
          }

      }
      return 0
  }