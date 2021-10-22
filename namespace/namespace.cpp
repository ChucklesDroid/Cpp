// 	Pseudo Code to demonstrate namespace behaviour
namespace ContosoData
{
	class ObjectManager
	{
	public :
		void doSomething() ;
	}
	void Func(ObjectManager) {} 
}

//	To use namespace members without directive or declarations
To call members :-
ContosoData::ObjectManager mgr ;
ContosoData::doSomething() ;
ContosoData::Func(mgr) ;

// 	To use declaration to bring one identifier into scope
using ContosoData::ObjectManager ;
ObjectManager mgr ;
mgr.doSomething() ;
