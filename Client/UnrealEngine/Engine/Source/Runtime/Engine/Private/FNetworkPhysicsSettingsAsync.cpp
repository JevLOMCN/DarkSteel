// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FNetworkPhysicsSettingsAsync @ 1482dd960

void __thiscall
FNetworkPhysicsSettingsAsync::~FNetworkPhysicsSettingsAsync(FNetworkPhysicsSettingsAsync *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData.Keys.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_
  ;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_
       = 0;
  pvVar2 = (void *)(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_
  ;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_);
  return;
}

