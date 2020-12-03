### Priority Queue ADT

**Full priority-queue ADT**

````c++
template <class Item>
class PQ
{
    private :
		//Implementation-dependent code
    pubilc :
    	//Implementation-dependent handle definition 
    	PQ(int);
    	int empty() cons;
    	handle insert(Item);
    	Item getmax();
    	void change(handle,Item);
    	void remove(handle);
    	void join(PQ<Item>&);
};
````

