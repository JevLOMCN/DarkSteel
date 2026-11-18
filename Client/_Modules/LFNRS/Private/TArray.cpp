// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 3

// operator= @ 146c929a0

TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FLocalFileEventInfo *pFVar3;
  
  if (this != param_1) {
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FLocalFileEventInfo *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FLocalFileEventInfo,FLocalFileEventInfo,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// AddDefaulted_GetRef @ 146ca2a30

FLocalFileChunkInfo * __thiscall
TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
          (TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_> *this)

{
  FLocalFileChunkInfo *pFVar1;
  int iVar2;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  pFVar1 = (FLocalFileChunkInfo *)((this->AllocatorInstance).Data + (longlong)iVar2 * 0x18);
  DefaultConstructItems<FLocalFileChunkInfo,int>(pFVar1,1);
  return pFVar1;
}

// AddDefaulted_GetRef @ 146ca2a90

FLocalFileEventInfo * __thiscall
TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
          (TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  FLocalFileEventInfo *pFVar2;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  pFVar2 = (FLocalFileEventInfo *)((this->AllocatorInstance).Data + (longlong)iVar1 * 0x50);
  DefaultConstructItems<FLocalFileEventInfo,int>(pFVar2,1);
  return pFVar2;
}

