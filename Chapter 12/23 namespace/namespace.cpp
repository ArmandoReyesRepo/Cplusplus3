// Demonstrate a namespace. 
 
namespace CounterNameSpace 
{ 
  int upperbound; 
  int lowerbound; 
 
  class counter 
  { 
     int count; 
   public: 
     counter(int n)
	 {  
       if(n <= upperbound) count = n; 
       else count = upperbound; 
     } 
 
     void reset(int n) 
	 { 
       if(n <= upperbound) count = n; 
     } 
 
     int run() 
	 { 
       if(count > lowerbound) return count--; 
       else return lowerbound; 
     } 
  }; 
}