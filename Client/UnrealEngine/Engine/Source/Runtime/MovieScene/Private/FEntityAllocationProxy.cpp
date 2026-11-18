// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// GetAllocation @ 14613a200

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocation * __thiscall
UE::MovieScene::FEntityAllocationProxy::GetAllocation(FEntityAllocationProxy *this)

{
  return *(FEntityAllocation **)
          (*(longlong *)&this->Manager->EntityAllocations + (longlong)this->AllocationIndex * 8);
}

// GetAllocation @ 14613a220

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocation * __thiscall
UE::MovieScene::FEntityAllocationProxy::GetAllocation(FEntityAllocationProxy *this)

{
  return *(FEntityAllocation **)
          (*(longlong *)&this->Manager->EntityAllocations + (longlong)this->AllocationIndex * 8);
}

// GetAllocationType @ 14613a240

/* WARNING: Enum "Type": Some values do not have unique names */

FComponentMask * __thiscall
UE::MovieScene::FEntityAllocationProxy::GetAllocationType(FEntityAllocationProxy *this)

{
  return (FComponentMask *)
         ((longlong)this->AllocationIndex * 0x38 +
         *(longlong *)&this->Manager->EntityAllocationMasks);
}

