#include "RE/BSHavok/hkBaseObject/hkReferencedObject/hkpBroadPhase/hkpBroadPhase.h"


namespace RE
{
	const hkpBroadPhase* hkpBroadPhase::GetCapabilityDelegate(Capabilities a_cap) const
	{
		return (caps & a_cap) != Capabilities::kNone ? this : nullptr;
	}


	void hkpBroadPhase::CheckDeterminism()
	{
		return;
	}


	void hkpBroadPhase::AddObject(hkpBroadPhaseHandle* a_object, const hkAabbUint32& a_aabb, hkArray<hkpBroadPhaseHandlePair>& a_pairsOut)
	{
		return AddObject1(a_object, a_aabb, a_pairsOut);
	}


	void hkpBroadPhase::AddObject(hkpBroadPhaseHandle* a_object, const hkAabb& a_aabb, hkArray<hkpBroadPhaseHandlePair>& a_pairsOut)
	{
		return AddObject2(a_object, a_aabb, a_pairsOut);
	}


	void hkpBroadPhase::CalcAabbCache(const hkAabb& a_aabb, hkpBroadPhaseAabbCache* a_aabbCacheOut) const
	{
		return CalcAabbCache1(a_aabb, a_aabbCacheOut);
	}


	void hkpBroadPhase::CalcAabbCache(const hkArrayBase<hkpCollidable*>& a_overlappingCollidables, hkpBroadPhaseAabbCache* a_aabbCacheOut) const
	{
		return CalcAabbCache2(a_overlappingCollidables, a_aabbCacheOut);
	}
}
