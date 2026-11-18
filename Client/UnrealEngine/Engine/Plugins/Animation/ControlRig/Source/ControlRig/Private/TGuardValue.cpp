// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_> @ 14a21d0b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
* __thiscall
TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
::
TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
          (TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
           *this,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FRigElementResolveResult *pFVar3;
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *pTVar4;
  
  this->RefValue = param_1;
  pTVar4 = &this->OriginalValue;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OriginalValue).ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = (FRigElementResolveResult *)(param_1->AllocatorInstance).Data;
  (this->OriginalValue).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,0,&pTVar4->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
              ((pTVar4->AllocatorInstance).Data,pFVar3,iVar2);
  }
  pTVar4 = this->RefValue;
  if (pTVar4 != param_2) {
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)(pTVar4->AllocatorInstance).Data,pTVar4->ArrayNum);
    iVar2 = param_2->ArrayNum;
    piVar1 = &pTVar4->ArrayMax;
    pFVar3 = (FRigElementResolveResult *)(param_2->AllocatorInstance).Data;
    pTVar4->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar2,*piVar1,&pTVar4->AllocatorInstance,iVar2,piVar1);
      ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
                ((pTVar4->AllocatorInstance).Data,pFVar3,iVar2);
    }
  }
  return this;
}

