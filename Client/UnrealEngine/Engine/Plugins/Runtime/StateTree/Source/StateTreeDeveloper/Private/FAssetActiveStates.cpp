// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 1

// FAssetActiveStates @ 14d70cd80

FAssetActiveStates * __thiscall
FStateTreeTraceActiveStates::FAssetActiveStates::FAssetActiveStates
          (FAssetActiveStates *this,FAssetActiveStates *param_1)

{
  TArray<FStateTreeStateHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->ActiveStates;
  (this->WeakStateTree).WeakPtr = (param_1->WeakStateTree).WeakPtr;
  piVar2 = &(this->ActiveStates).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ActiveStates).ArrayNum;
  _Src = (param_1->ActiveStates).AllocatorInstance.Data;
  (this->ActiveStates).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 2);
  }
  return this;
}

