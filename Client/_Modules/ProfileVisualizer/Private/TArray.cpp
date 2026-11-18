// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 2

// operator= @ 148d58b40

TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FVisualizerEvent,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FVisualizerEvent,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// Empty @ 148d73520

void __thiscall
TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

