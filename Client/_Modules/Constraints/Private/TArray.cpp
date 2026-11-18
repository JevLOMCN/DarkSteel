// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 6

// CopyToEmpty<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,int> @ 146491150

void __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,int>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3
          )

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// CopyToEmpty<FTickPrerequisite,int> @ 1464911e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::CopyToEmpty<FTickPrerequisite,int>
          (TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_> *this,FTickPrerequisite *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 4);
  }
  return;
}

// IndexOfByKey<UTickableTransformConstraint_*> @ 1464971b0

int __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
IndexOfByKey<UTickableTransformConstraint_*>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,UTickableTransformConstraint **param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::
            UEOpEquals<UTickableTransformConstraint,bool>
                      ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_00,*param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// operator= @ 14649fe10

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// Remove @ 1464be480

int __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  iVar8 = 0;
  if (iVar6 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  bVar4 = TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::UEOpEquals<UTickableConstraint,bool>
                    ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar1,param_1);
  bVar4 = !bVar4;
  iVar7 = 0;
  do {
    iVar3 = iVar7;
    do {
      iVar3 = iVar3 + 1;
      if (iVar6 <= iVar3) break;
      bVar5 = TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::
              UEOpEquals<UTickableConstraint,bool>
                        ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)
                         (pFVar1 + (longlong)iVar3 * 8),param_1);
    } while (bVar4 == !bVar5);
    if (bVar4 != false) {
      if (iVar8 != iVar7) {
        memmove(pFVar1 + (longlong)iVar8 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar3 - iVar7) << 3);
      }
      iVar8 = iVar8 + (iVar3 - iVar7);
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar7 = iVar3;
    if (iVar6 <= iVar3) {
      this->ArrayNum = iVar8;
      return iVar6 - iVar8;
    }
  } while( true );
}

// RemoveAt @ 1464be770

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

