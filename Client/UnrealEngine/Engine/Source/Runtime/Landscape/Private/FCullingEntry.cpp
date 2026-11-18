// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ~FCullingEntry @ 145f279e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UE::Landscape::Culling::FCullingEntry::~FCullingEntry(FCullingEntry *this)

{
  void *pvVar1;
  ForElementType<UE::Landscape::Culling::FDispatchIntermediates> FVar2;
  ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> FVar3;
  
  *(undefined4 *)&(this->CullingArguments).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CullingArguments).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CullingArguments);
  FVar2 = (this->DispatchIntermediateData).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)0x0) {
    FVar2 = (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)
            &this->DispatchIntermediateData;
  }
  DestructItems<UE::Landscape::Culling::FDispatchIntermediates,int>
            ((FDispatchIntermediates *)FVar2,(this->DispatchIntermediateData).ArrayNum);
  FVar2 = (this->DispatchIntermediateData).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->IntermediateData).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
    FVar3 = (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)
            &this->IntermediateData;
  }
  DestructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>
            ((FViewStateIntermediateData *)FVar3,(this->IntermediateData).ArrayNum);
  FVar3 = (this->IntermediateData).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  return;
}

