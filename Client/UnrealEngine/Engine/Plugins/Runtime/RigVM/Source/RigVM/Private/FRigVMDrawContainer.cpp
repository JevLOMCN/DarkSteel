// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 5

// StaticStruct @ 14a0701e0

UScriptStruct * __cdecl FRigVMDrawContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawContainer.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDrawContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDrawContainer,(UObject *)pUVar1,
                         L"RigVMDrawContainer");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDrawContainer.OuterSingleton;
}

// ~FRigVMDrawContainer @ 14a07b9c0

void __thiscall FRigVMDrawContainer::~FRigVMDrawContainer(FRigVMDrawContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigVMDrawContainer__6B_;
  DestructItems<FRigVMDrawInstruction,int>
            ((FRigVMDrawInstruction *)(this->Instructions).AllocatorInstance.Data,
             (this->Instructions).ArrayNum);
  pFVar1 = (this->Instructions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a07d2b0

FRigVMDrawContainer * __thiscall
FRigVMDrawContainer::operator=(FRigVMDrawContainer *this,FRigVMDrawContainer *param_1)

{
  TArray<FRigVMDrawInstruction,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRigVMDrawInstruction *pFVar4;
  
  pTVar1 = &this->Instructions;
  if (pTVar1 != &param_1->Instructions) {
    DestructItems<FRigVMDrawInstruction,int>
              ((FRigVMDrawInstruction *)(pTVar1->AllocatorInstance).Data,
               (this->Instructions).ArrayNum);
    iVar3 = (param_1->Instructions).ArrayNum;
    piVar2 = &(this->Instructions).ArrayMax;
    pFVar4 = (FRigVMDrawInstruction *)(param_1->Instructions).AllocatorInstance.Data;
    (this->Instructions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FRigVMDrawInstruction,FRigVMDrawInstruction,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

// GetIndex @ 14a095830

int __thiscall FRigVMDrawContainer::GetIndex(FRigVMDrawContainer *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Instructions).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Instructions).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->Instructions).AllocatorInstance.Data + lVar6) == *param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xd0;
    } while ((int)uVar5 < (this->Instructions).ArrayNum);
  }
  return -1;
}

// Reset @ 14a0a2d80

void __thiscall FRigVMDrawContainer::Reset(FRigVMDrawContainer *this)

{
  int *piVar1;
  int iVar2;
  FRigVMDrawInstruction *pFVar3;
  
  iVar2 = (this->Instructions).ArrayNum;
  piVar1 = &(this->Instructions).ArrayMax;
  pFVar3 = (FRigVMDrawInstruction *)(this->Instructions).AllocatorInstance.Data;
  if (-1 < (this->Instructions).ArrayMax) {
    DestructItems<FRigVMDrawInstruction,int>(pFVar3,iVar2);
    (this->Instructions).ArrayNum = 0;
    return;
  }
  DestructItems<FRigVMDrawInstruction,int>(pFVar3,iVar2);
  (this->Instructions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,0,&(this->Instructions).AllocatorInstance,0,piVar1);
  }
  return;
}

