#include "RE/BSScript/ObjectBindPolicy.h"


namespace RE
{
	namespace BSScript
	{
		void ObjectBindPolicy::BindObject(BSTSmartPointer<Object>& a_objectPtr, VMHandle a_handle)
		{
			using func_t = decltype(&ObjectBindPolicy::BindObject);
			REL::Offset<func_t> func(Offset::BSScript::ObjectBindPolicy::BindObject);
			return func(this, a_objectPtr, a_handle);
		}
	}
}
