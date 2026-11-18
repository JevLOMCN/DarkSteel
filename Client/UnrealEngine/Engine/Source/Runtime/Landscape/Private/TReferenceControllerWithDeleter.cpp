// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// DestroyObject @ 145f0bba0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<char,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<char,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TArray<char,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<char,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 145f2bb60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHeightmapTextureEdgeSnapshot,SharedPointerInternals::DefaultDeleter<FHeightmapTextureEdgeSnapshot>,1>
::DestroyObject(TReferenceControllerWithDeleter<FHeightmapTextureEdgeSnapshot,SharedPointerInternals::DefaultDeleter<FHeightmapTextureEdgeSnapshot>,1>
                *this)

{
  FHeightmapTextureEdgeSnapshot *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FHeightmapTextureEdgeSnapshot *)0x0) {
    pFVar2 = (pFVar1->EdgeData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x58);
    return;
  }
  return;
}

// DestroyObject @ 145f2bba0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLandscapeComponentGrassData,SharedPointerInternals::DefaultDeleter<FLandscapeComponentGrassData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLandscapeComponentGrassData,SharedPointerInternals::DefaultDeleter<FLandscapeComponentGrassData>,1>
                *this)

{
  FLandscapeComponentGrassData *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLandscapeComponentGrassData *)0x0) {
    pFVar2 = (pFVar1->HeightWeightData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)&(pFVar1->WeightOffsets).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar1->WeightOffsets).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeGrassType>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeGrassType>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeGrassType>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->WeightOffsets);
    ::operator_delete(pFVar1,0x68);
  }
  return;
}

// DestroyObject @ 145f8a2b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLandscapeSceneViewExtension,SharedPointerInternals::DefaultDeleter<FLandscapeSceneViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLandscapeSceneViewExtension,SharedPointerInternals::DefaultDeleter<FLandscapeSceneViewExtension>,1>
                *this)

{
  FLandscapeSceneViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLandscapeSceneViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145f8a2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

