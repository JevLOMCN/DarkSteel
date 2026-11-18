// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 5

// operator= @ 14d2658f0

TArray<FKConvexElem,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FKConvexElem,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *this,
          TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FKConvexElem *pFVar3;
  
  if (this != param_1) {
    DestructItems<FKConvexElem,int>((FKConvexElem *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FKConvexElem *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FKConvexElem,FKConvexElem,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14d265990

TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *this,
          TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x98);
    }
  }
  return this;
}

// RemoveAtImpl @ 14d276100

void __thiscall
TArray<FProcMeshSection,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FProcMeshSection,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FProcMeshSection *_Dst;
  
  _Dst = (FProcMeshSection *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x60);
  DestructItems<FProcMeshSection,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x60);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14d276780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FProcMeshSection,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FProcMeshSection,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FProcMeshSection,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x60,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14d2768b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x58;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x58,(longlong)iVar4 * 0x58);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

