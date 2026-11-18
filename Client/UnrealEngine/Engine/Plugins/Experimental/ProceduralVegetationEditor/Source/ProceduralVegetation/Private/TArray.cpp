// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 2

// operator= @ 14da68080

TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<TSoftObjectPtr<UObject>,int>
              ((TSoftObjectPtr<UObject> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSoftObjectPtr<UObject>,TSoftObjectPtr<UObject>,int>
              ((this->AllocatorInstance).Data,(TSoftObjectPtr<UObject> *)pFVar3,iVar2);
  }
  return this;
}

// RemoveAtImpl @ 14daa0c50

void __thiscall
TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FLocalDynamicMeshData *_Dst;
  int iVar1;
  
  _Dst = (FLocalDynamicMeshData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FLocalDynamicMeshData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

