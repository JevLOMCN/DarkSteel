// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// TArrayView<TObjectPtr<UCameraRigTransition>_const_,int><TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_> @ 14d57b1c0

TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> * __thiscall
TArrayView<TObjectPtr<UCameraRigTransition>_const_,int>::
TArrayView<TObjectPtr<UCameraRigTransition>_const_,int><TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> *this,
          TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> *pTVar4;
  
  this->DataPtr = (TObjectPtr<UCameraRigTransition> *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

