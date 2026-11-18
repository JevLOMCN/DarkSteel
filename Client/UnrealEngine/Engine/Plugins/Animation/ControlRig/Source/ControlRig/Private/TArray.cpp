// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 146

// operator=<int,int> @ 14a206890

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::operator=<int,int>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,TArrayView<int,int> *param_1)

{
  int *piVar1;
  int iVar2;
  int *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<unsigned_int,int> @ 14a206920

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=<unsigned_int,int>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_int,int> *param_1)

{
  int *piVar1;
  int iVar2;
  uint *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<TArray<int,TSizedDefaultAllocator<32>_>,int> @ 14a2069b0

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<int,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int> @ 14a206a50

TArray<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArrayView<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<FName,int> @ 14a206af0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::operator=<FName,int>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,TArrayView<FName,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FName *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// AddUniqueImpl<FRigControlElement_*_const_&> @ 14a20ba40

int __thiscall
TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FRigControlElement_*_const_&>
          (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *this,
          FRigControlElement **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FRigControlElement **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FRigControlElement **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<USkeletalMeshComponent_*_const_&> @ 14a20bb40

int __thiscall
TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<USkeletalMeshComponent_*_const_&>
          (TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *this,
          USkeletalMeshComponent **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(USkeletalMeshComponent **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(USkeletalMeshComponent **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FRigElementKey_const_&> @ 14a20bc40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,FRigElementKey *param_1)

{
  FRigElementKey *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRigElementKey *pFVar6;
  
  pFVar1 = (FRigElementKey *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if ((pFVar6->Name == param_1->Name) && (pFVar6->Type == param_1->Type)) {
        iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar1) / 0xc);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar2 = (this->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0xc) = *(undefined8 *)param_1;
  *(uint *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = (param_1->Name).Number;
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UStaticMeshComponent>_> @ 14a20bd80

int __thiscall
TArray<TObjectPtr<UStaticMeshComponent>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UStaticMeshComponent>_>
          (TArray<TObjectPtr<UStaticMeshComponent>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UStaticMeshComponent> *param_1)

{
  FScriptContainerElement *pFVar1;
  UStaticMeshComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UStaticMeshComponent **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UStaticMeshComponent **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<TSoftObjectPtr<UControlRigShapeLibrary>_> @ 14a20be90

int __thiscall
TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSoftObjectPtr<UControlRigShapeLibrary>_>
          (TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *this,
          TSoftObjectPtr<UControlRigShapeLibrary> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x28)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x28;
    *(undefined8 *)pFVar1 = *(undefined8 *)&param_1->SoftObjectPtr;
    uVar3 = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x10;
    *(undefined8 *)(pFVar1 + 8) = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x8;
    *(undefined8 *)(pFVar1 + 0x10) = uVar3;
    *(undefined8 *)(pFVar1 + 0x18) = 0;
    *(undefined8 *)(pFVar1 + 0x18) = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18 = 0;
    *(undefined4 *)(pFVar1 + 0x20) = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x20;
    *(undefined4 *)(pFVar1 + 0x24) = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x24;
    *(undefined8 *)&(param_1->SoftObjectPtr).field_0x20 = 0;
  }
  return iVar5;
}

// Append<FRigControlElement_*,TSizedDefaultAllocator<32>_> @ 14a20bf90

void __thiscall
TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>::
Append<FRigControlElement_*,TSizedDefaultAllocator<32>_>
          (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// Append<FRigModuleReference_*,TSizedDefaultAllocator<32>_> @ 14a20c030

void __thiscall
TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_>::
Append<FRigModuleReference_*,TSizedDefaultAllocator<32>_>
          (TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// Append<FRigElementKey,TSizedDefaultAllocator<32>_> @ 14a20c0d0

void __thiscall
TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Append<FRigElementKey,TSizedDefaultAllocator<32>_>
          (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ForElementType<FRigElementKey> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this == (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
                      (0xc,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FRigElementKey>)0x0) {
      this = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    memcpy((void *)((longlong)this + (longlong)iVar5 * 0xc),(param_1->AllocatorInstance).Data,
           (longlong)iVar1 * 0xc);
  }
  return;
}

// TArray<FRigElementKey,TSizedDefaultAllocator<32>_> @ 14a21cfb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FRigElementKey> *param_1)

{
  FRigElementKey *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 1) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  return this;
}

// operator= @ 14a227130

TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *param_1)

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
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 14a2271d0

TArray<TTuple<unsigned_short,unsigned_short>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TTuple<unsigned_short,unsigned_short>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TTuple<unsigned_short,unsigned_short>,TSizedDefaultAllocator<32>_> *this,
          TArray<TTuple<unsigned_short,unsigned_short>,TSizedDefaultAllocator<32>_> *param_1)

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
              (4,2,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 14a227270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> *this,
          TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FControlRigComponentMappedElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<FControlRigComponentMappedElement,int>
              ((FControlRigComponentMappedElement *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FControlRigComponentMappedElement *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a227310

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

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
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// operator= @ 14a2273b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigElementResolveResult *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigElementResolveResult *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a227450

TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x28,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x28);
    }
  }
  return this;
}

// operator= @ 14a2274f0

TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x40,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 6);
    }
  }
  return this;
}

// Empty @ 14a250c00

void __thiscall
TArray<TObjectPtr<UControlRigOverrideAsset>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TObjectPtr<UControlRigOverrideAsset>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a250c50

void __thiscall
TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FControlRigOverrideValue,int>
              ((FControlRigOverrideValue *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a250cc0

void __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a250d10

void __thiscall
TArray<FRigPhysicsSolverDescription,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigPhysicsSolverDescription,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a250d60

void __thiscall
TArray<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
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

// Find @ 14a25a330

int __thiscall
TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *this,
          TSoftObjectPtr<UControlRigShapeLibrary> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x28) {
    pFVar4 = pFVar2;
    do {
      bVar3 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(pFVar4 + 8),
                         (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
      if (bVar3) {
        return (int)(((longlong)pFVar4 - (longlong)pFVar2) / 0x28);
      }
      pFVar4 = pFVar4 + 0x28;
    } while (pFVar4 != pFVar2 + (longlong)iVar1 * 0x28);
  }
  return -1;
}

// Insert @ 14a272cb0

int __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,FName *param_1,int param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  *(FName *)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = *param_1;
  return param_2;
}

// Remove @ 14a2839c0

int __thiscall
TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_> *this,UAssetUserData **param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UAssetUserData **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UAssetUserData **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 14a283f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FControlRigOverrideValue *this_00;
  
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
  this_00 = (FControlRigOverrideValue *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x58);
  FControlRigOverrideValue::~FControlRigOverrideValue(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0x58);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// operator=<FRigBaseElement_*_const,int> @ 14a2cb260

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_>::operator=<FRigBaseElement_*_const,int>
          (TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRigBaseElement_*_const,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigBaseElement **_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// AddUniqueImpl<FRigBaseElement_*_const_&> @ 14a2cc180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FRigBaseElement_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FRigBaseElement_*_const_&>
          (TArray<FRigBaseElement_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          FRigBaseElement **param_1)

{
  ForElementType<FRigBaseElement_*> FVar1;
  ForElementType<FRigBaseElement_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FRigBaseElement_*> FVar6;
  ForElementType<FRigBaseElement_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FRigBaseElement_*>)this;
  if (FVar2 != (ForElementType<FRigBaseElement_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FRigBaseElement_*>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FRigBaseElement **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FRigBaseElement_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FRigBaseElement_*>)this;
  if (FVar2 != (ForElementType<FRigBaseElement_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FRigBaseElement_*>)this;
    if (FVar2 != (ForElementType<FRigBaseElement_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FRigBaseElement **)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigBaseElement_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FRigBaseElement_*>)0x0) {
    this = (TArray<FRigBaseElement_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
           FVar2;
  }
  *(FRigBaseElement **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<UScriptStruct_const_*_const_&> @ 14a2cc290

int __thiscall
TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UScriptStruct_const_*_const_&>
          (TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *this,UScriptStruct **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UScriptStruct **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UScriptStruct **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FRigTransformElement::FElementToDirty_const_&> @ 14a2cc390

int __thiscall
TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
::AddUniqueImpl<FRigTransformElement::FElementToDirty_const_&>
          (TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
           *this,FElementToDirty *param_1)

{
  undefined8 *puVar1;
  ForElementType<FRigTransformElement::FElementToDirty> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FRigTransformElement::FElementToDirty> FVar7;
  ForElementType<FRigTransformElement::FElementToDirty> FVar8;
  ForElementType<FRigTransformElement::FElementToDirty> FVar9;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
  if (FVar2 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    FVar8 = FVar2;
  }
  FVar9 = (ForElementType<FRigTransformElement::FElementToDirty>)
          ((longlong)this->ArrayNum * 0x10 + (longlong)FVar8);
  if (FVar8 != FVar9) {
    FVar7 = FVar8;
    do {
      if (*(FRigTransformElement **)FVar7 == param_1->Element) {
        iVar6 = (int)((longlong)FVar7 - (longlong)FVar8 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      FVar7 = (ForElementType<FRigTransformElement::FElementToDirty>)((longlong)FVar7 + 0x10);
    } while (FVar7 != FVar9);
  }
  FVar8 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
  if (FVar2 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    FVar8 = FVar2;
  }
  if ((ulonglong)FVar8 <= param_1) {
    FVar8 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
    if (FVar2 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
      FVar8 = FVar2;
    }
    if ((param_1 < (FElementToDirty *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigTransformElement::FElementToDirty>_>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  uVar4 = *(undefined8 *)&param_1->HierarchyDistance;
  if (FVar2 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    this = (TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  puVar1 = (undefined8 *)((longlong)this + (longlong)iVar6 * 0x10);
  *puVar1 = param_1->Element;
  puVar1[1] = uVar4;
  return iVar6;
}

// AddUniqueImpl<URigHierarchy::FQueuedNotification_const_&> @ 14a2cc4b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<URigHierarchy::FQueuedNotification,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<URigHierarchy::FQueuedNotification_const_&>
          (TArray<URigHierarchy::FQueuedNotification,TSizedDefaultAllocator<32>_> *this,
          FQueuedNotification *param_1)

{
  FScriptContainerElement *pFVar1;
  FQueuedNotification *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  
  iVar7 = Find(this,param_1);
  if (iVar7 == -1) {
    pFVar2 = (FQueuedNotification *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    iVar7 = this->ArrayNum;
    if (iVar7 == this->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar7 + 1;
    FVar5 = (param_1->Key).Name;
    pFVar3 = (this->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)iVar7 * 0x18;
    *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
    *(FName *)(pFVar1 + 8) = FVar5;
    *(FName *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = param_1->ComponentName;
  }
  return iVar7;
}

// AddUniqueImpl<FRigTransformElement::FElementToDirty> @ 14a2cc580

int __thiscall
TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
::AddUniqueImpl<FRigTransformElement::FElementToDirty>
          (TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
           *this,FElementToDirty *param_1)

{
  undefined8 *puVar1;
  ForElementType<FRigTransformElement::FElementToDirty> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FRigTransformElement::FElementToDirty> FVar7;
  ForElementType<FRigTransformElement::FElementToDirty> FVar8;
  ForElementType<FRigTransformElement::FElementToDirty> FVar9;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
  if (FVar2 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    FVar8 = FVar2;
  }
  FVar9 = (ForElementType<FRigTransformElement::FElementToDirty>)
          ((longlong)this->ArrayNum * 0x10 + (longlong)FVar8);
  if (FVar8 != FVar9) {
    FVar7 = FVar8;
    do {
      if (*(FRigTransformElement **)FVar7 == param_1->Element) {
        iVar6 = (int)((longlong)FVar7 - (longlong)FVar8 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      FVar7 = (ForElementType<FRigTransformElement::FElementToDirty>)((longlong)FVar7 + 0x10);
    } while (FVar7 != FVar9);
  }
  FVar8 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
  if (FVar2 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    FVar8 = FVar2;
  }
  if ((ulonglong)FVar8 <= param_1) {
    FVar8 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
    if (FVar2 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
      FVar8 = FVar2;
    }
    if ((param_1 < (FElementToDirty *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigTransformElement::FElementToDirty>_>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  uVar4 = *(undefined8 *)&param_1->HierarchyDistance;
  if (FVar2 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    this = (TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  puVar1 = (undefined8 *)((longlong)this + (longlong)iVar6 * 0x10);
  *puVar1 = param_1->Element;
  puVar1[1] = uVar4;
  return iVar6;
}

// Append<FRigElementKey,TSizedDefaultAllocator<32>_> @ 14a2cc6a0

void __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
Append<FRigElementKey,TSizedDefaultAllocator<32>_>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 0xc,(param_1->AllocatorInstance).Data
            ,(longlong)iVar1 * 0xc);
    param_1->ArrayNum = 0;
  }
  return;
}

// Append<TArrayView<FRigBaseElement_*_const,int>_> @ 14a2cc750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TArray<FRigBaseElement_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::
Append<TArrayView<FRigBaseElement_*_const,int>_>
          (TArray<FRigBaseElement_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<FRigBaseElement_*_const,int> *param_1)

{
  int iVar1;
  ForElementType<FRigBaseElement_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigBaseElement_*>_>
                    (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FRigBaseElement_*>)0x0) {
    this = (TArray<FRigBaseElement_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *)
           FVar2;
  }
  memcpy((void *)((longlong)this + (longlong)iVar5 * 8),param_1->DataPtr,(longlong)iVar1 << 3);
  return;
}

// Contains<FRigComponentKey> @ 14a2cd4a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::Contains<FRigComponentKey>
          (TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_> *this,FRigComponentKey *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  bool bVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 0x28;
  if (pFVar5 != pFVar1) {
    pFVar4 = (FName *)(pFVar5 + 0x14);
    do {
      cVar2 = (char)pFVar4[2].ComparisonIndex.Value;
      if (cVar2 != '\0') {
        if ((((cVar2 == '\x01') && (pFVar4[1] == param_1->Name)) &&
            (*pFVar4 == (param_1->ElementKey).Name)) &&
           ((ERigElementType)pFVar4[-1].Number == (param_1->ElementKey).Type)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          return true;
        }
      }
      pFVar5 = pFVar5 + 0x28;
      pFVar4 = pFVar4 + 5;
    } while (pFVar5 != pFVar1);
  }
  return false;
}

// Contains<FRigElementKey> @ 14a2cd530

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Contains<FRigElementKey>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,FRigElementKey *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)this->ArrayNum * 0xc;
  if (pFVar2 != pFVar1) {
    do {
      if ((*(FName *)(pFVar2 + 4) == param_1->Name) &&
         (*pFVar2 == (FScriptContainerElement)param_1->Type)) {
        return true;
      }
      pFVar2 = pFVar2 + 0xc;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// Contains<FRigElementKey> @ 14a2cd570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::Contains<FRigElementKey>
          (TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_> *this,FRigElementKey *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement local_18;
  undefined4 uStack_14;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 0x28;
  do {
    if (pFVar5 == pFVar1) {
      return false;
    }
    if (pFVar5[0xc] != (FScriptContainerElement)0x0) {
      uVar2 = param_1->Type;
      uVar3 = (param_1->Name).ComparisonIndex;
      if (((pFVar5[0xc] == (FScriptContainerElement)0x1) &&
          (*(longlong *)(pFVar5 + 4) == CONCAT44((param_1->Name).Number,uVar3))) &&
         (*pFVar5 == (FScriptContainerElement)uVar2)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return true;
      }
    }
    pFVar5 = pFVar5 + 0x28;
  } while( true );
}

// FindByKey<FRigElementKey> @ 14a2d0f90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyWithLabel * __thiscall
TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>::FindByKey<FRigElementKey>
          (TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *this,FRigElementKey *param_1
          )

{
  FRigElementKeyWithLabel *pFVar1;
  FRigElementKeyWithLabel *pFVar2;
  
  pFVar2 = (FRigElementKeyWithLabel *)(this->AllocatorInstance).Data;
  pFVar1 = pFVar2 + this->ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if ((param_1->Name == (pFVar2->Key).Name) && (param_1->Type == (pFVar2->Key).Type)) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return (FRigElementKeyWithLabel *)0x0;
}

// IndexOfByKey<FRigElementKey> @ 14a2d33d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>::IndexOfByKey<FRigElementKey>
          (TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *this,FRigElementKey *param_1
          )

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x14) {
    pFVar2 = pFVar1;
    do {
      if ((param_1->Name == *(FName *)(pFVar2 + 4)) &&
         ((FScriptContainerElement)param_1->Type == *pFVar2)) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x14);
      }
      pFVar2 = pFVar2 + 0x14;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x14);
  }
  return -1;
}

// TArray<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TSizedDefaultAllocator<32>_> @ 14a2d7d90

TArray<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TSizedDefaultAllocator<32>_>::
TArray<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TSizedDefaultAllocator<32>_>
          (TArray<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<TTuple<FRigHierarchyKey,FRigHierarchyKey>_> *param_1)

{
  TTuple<FRigHierarchyKey,FRigHierarchyKey> *pTVar1;
  TTuple<FRigHierarchyKey,FRigHierarchyKey> *pTVar2;
  int iVar3;
  
  pTVar1 = param_1->_First;
  pTVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)(((longlong)pTVar2 - (longlong)pTVar1) / 0x50);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,4,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TTuple<FRigHierarchyKey,FRigHierarchyKey>,int>
            ((this->AllocatorInstance).Data,pTVar1,iVar3);
  return this;
}

// operator= @ 14a2df500

TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigConnectionRuleStash *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigConnectionRuleStash,int>
              ((FRigConnectionRuleStash *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigConnectionRuleStash *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigConnectionRuleStash,FRigConnectionRuleStash,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a2df5a0

TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *param_1)

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
              (2,1,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 2);
    }
  }
  return this;
}

// operator= @ 14a2df640

TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x14,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x14);
    }
  }
  return this;
}

// Empty @ 14a300c30

void __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a300c80

void __thiscall
TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a300cd0

void __thiscall
TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a300d20

void __thiscall
TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 14a304a10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<URigHierarchy::FQueuedNotification,TSizedDefaultAllocator<32>_>::Find
          (TArray<URigHierarchy::FQueuedNotification,TSizedDefaultAllocator<32>_> *this,
          FQueuedNotification *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x18) {
    pFVar2 = pFVar1;
    do {
      if ((((*pFVar2 == (FScriptContainerElement)param_1->Type) &&
           (*(FName *)(pFVar2 + 8) == (param_1->Key).Name)) &&
          (pFVar2[4] == (FScriptContainerElement)(param_1->Key).Type)) &&
         (*(FName *)(pFVar2 + 0x10) == param_1->ComponentName)) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x18);
      }
      pFVar2 = pFVar2 + 0x18;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x18);
  }
  return -1;
}

// Pop @ 14a335d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TTuple<FRigHierarchyRecord,FRigHierarchyRecord> * __thiscall
TArray<TTuple<FRigHierarchyRecord,FRigHierarchyRecord>,TSizedDefaultAllocator<32>_>::Pop
          (TArray<TTuple<FRigHierarchyRecord,FRigHierarchyRecord>,TSizedDefaultAllocator<32>_> *this
          ,TTuple<FRigHierarchyRecord,FRigHierarchyRecord> *__return_storage_ptr__,
          EAllowShrinking param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  TTuple<FRigHierarchyRecord,FRigHierarchyRecord> *pTVar9;
  longlong lVar10;
  int iVar11;
  
  if (this->ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TTuple<FRigHierarchyRecord,FRigHierarchyRecord> *)(*pcVar3)();
      return pTVar9;
    }
  }
  pFVar2 = (this->AllocatorInstance).Data;
  lVar10 = (longlong)this->ArrayNum * 0x20;
  iVar11 = this->ArrayNum + -1;
  pFVar1 = pFVar2 + lVar10 + -0x20;
  uVar4 = *(undefined8 *)pFVar1;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  pFVar2 = pFVar2 + lVar10 + -0x10;
  uVar6 = *(undefined8 *)pFVar2;
  uVar7 = *(undefined8 *)(pFVar2 + 8);
  this->ArrayNum = iVar11;
  *(undefined8 *)__return_storage_ptr__ = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar7;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,&this->AllocatorInstance,iVar11,&this->ArrayMax);
  }
  return __return_storage_ptr__;
}

// Remove @ 14a338610

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *this,FRigBaseElement **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(FRigBaseElement **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(FRigBaseElement **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Remove @ 14a338780

int __thiscall
TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
::Remove(TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
         *this,FElementToDirty *param_1)

{
  ForElementType<FRigTransformElement::FElementToDirty> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FRigTransformElement::FElementToDirty> FVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
  if (FVar1 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
    if (FVar1 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (FElementToDirty *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar5)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar10 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<FRigTransformElement::FElementToDirty>)this;
  if (FVar1 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    FVar5 = FVar1;
  }
  iVar11 = 0;
  bVar3 = *(FRigTransformElement **)FVar5 != param_1->Element;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar10) {
      plVar6 = (longlong *)(lVar7 * 0x10 + (longlong)FVar5);
      do {
        if (bVar3 != ((FRigTransformElement *)*plVar6 != param_1->Element)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
        plVar6 = plVar6 + 2;
      } while (lVar7 < lVar10);
    }
    if (bVar3 != false) {
      if (iVar11 != iVar8) {
        memmove((longlong *)((longlong)iVar11 * 0x10 + (longlong)FVar5),
                (longlong *)((longlong)iVar8 * 0x10 + (longlong)FVar5),
                (longlong)(iVar9 - iVar8) << 4);
      }
      iVar11 = iVar11 + (iVar9 - iVar8);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar8 = iVar9;
    if (lVar10 <= lVar7) {
      this->ArrayNum = iVar11;
      return iVar4 - iVar11;
    }
  } while( true );
}

// Remove @ 14a338940

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_> *this,FRigHierarchyKey *param_1)

{
  FRigHierarchyKey *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  <lambda_1> local_res8;
  
  pFVar1 = (FRigHierarchyKey *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  local_res8.Item = param_1;
  iVar4 = RemoveAll<_TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                    (this,&local_res8);
  return iVar4;
}

// RemoveAt @ 14a339210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x60;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x60,(longlong)iVar4 * 0x60);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14a3392f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x14;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x14,(longlong)iVar4 * 0x14);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14a3393d0

void __thiscall
TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a339420

void __thiscall
TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2
          )

{
  int iVar1;
  FRigConnectionRuleStash *_Dst;
  
  _Dst = (FRigConnectionRuleStash *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<FRigConnectionRuleStash,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14a34f0f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<UE::Math::TQuat<float>,int> @ 14a387ca0

TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::operator=<UE::Math::TQuat<float>,int>
          (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TQuat<float>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TQuat<float> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  }
  return this;
}

// operator=<UE::Math::TTransform<float>,int> @ 14a387d30

TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::
operator=<UE::Math::TTransform<float>,int>
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TTransform<float>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TTransform<float> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x30);
  }
  return this;
}

// operator=<UE::Math::TVector<float>,int> @ 14a387dd0

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::
operator=<UE::Math::TVector<float>,int>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TVector<float>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TVector<float> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  }
  return this;
}

// operator=<FInstancedStruct,int> @ 14a387e70

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=<FInstancedStruct,int>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FInstancedStruct,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FInstancedStruct *pFVar3;
  
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FInstancedStruct,FInstancedStruct,int>((this->AllocatorInstance).Data,pFVar3,iVar2)
  ;
  return this;
}

// operator=<FLinearColor,int> @ 14a387f10

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=<FLinearColor,int>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FLinearColor,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FLinearColor *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  }
  return this;
}

// operator=<FRigComponentKey,int> @ 14a387fa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>::operator=<FRigComponentKey,int>
          (TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRigComponentKey,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigComponentKey *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x14);
  }
  return this;
}

// operator=<FRigElementKey,int> @ 14a388040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=<FRigElementKey,int>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRigElementKey,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigElementKey *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  }
  return this;
}

// operator=<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int> @ 14a3880e0

TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArrayView<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<float,TSizedDefaultAllocator<32>_>,int> @ 14a388180

TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<float,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int> @ 14a388220

TArray<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArrayView<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int> *param_1
          )

{
  int *piVar1;
  int iVar2;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)
             (this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int> @ 14a3882c0

TArray<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::operator=<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArrayView<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int>
                 *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
             (this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int> @ 14a388360

TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArrayView<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                 *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             (this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int> @ 14a388400

TArray<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArrayView<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int> @ 14a3884a0

TArray<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArrayView<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int> @ 14a388540

TArray<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArrayView<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<FName,TSizedDefaultAllocator<32>_>,int> @ 14a3885e0

TArray<TArray<FName,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<FName,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<FName,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<FName,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TArray<FName,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<FName,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<FString,TSizedDefaultAllocator<32>_>,int> @ 14a388680

TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<FString,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<TArray<bool,TSizedDefaultAllocator<32>_>,int> @ 14a388720

TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=<TArray<bool,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TArray<bool,TSizedDefaultAllocator<32>_>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  
  DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// operator=<FString,int> @ 14a3888e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::operator=<FString,int>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,TArrayView<FString,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  
  DestructItems<FString,int>((FString *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FString,FString,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// operator=<bool,int> @ 14a388980

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::operator=<bool,int>
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,TArrayView<bool,int> *param_1)

{
  int *piVar1;
  int iVar2;
  bool *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2);
  }
  return this;
}

// AddUniqueImpl<FRigTransformElement_*_const_&> @ 14a38d180

int __thiscall
TArray<FRigTransformElement_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FRigTransformElement_*_const_&>
          (TArray<FRigTransformElement_*,TSizedDefaultAllocator<32>_> *this,
          FRigTransformElement **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FRigTransformElement **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FRigTransformElement **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FControlRigSequenceObjectReference_const_&> @ 14a38d280

int __thiscall
TArray<FControlRigSequenceObjectReference,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FControlRigSequenceObjectReference_const_&>
          (TArray<FControlRigSequenceObjectReference,TSizedDefaultAllocator<32>_> *this,
          FControlRigSequenceObjectReference *param_1)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar5 + 1;
    pUVar2 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
    *(UClass **)&pFVar1[(longlong)iVar5 * 8].field_0x0 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UAnimInstance>_> @ 14a38d360

int __thiscall
TArray<TObjectPtr<UAnimInstance>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UAnimInstance>_>
          (TArray<TObjectPtr<UAnimInstance>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UAnimInstance> *param_1)

{
  FScriptContainerElement *pFVar1;
  UAnimInstance *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UAnimInstance **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UAnimInstance **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// CopyToEmpty<TRigVMTypeIndex,int> @ 14a391350

void __thiscall
TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::CopyToEmpty<TRigVMTypeIndex,int>
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *this,TRigVMTypeIndex *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0xc);
  }
  return;
}

// Empty @ 14a4047e0

void __thiscall
TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a404830

void __thiscall
TArray<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
Empty(TArray<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
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

// Empty @ 14a4048a0

void __thiscall
TArray<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::Empty(TArray<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
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

// Empty @ 14a404910

void __thiscall
TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
Empty(TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
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

// Empty @ 14a404980

void __thiscall
TArray<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
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

// Empty @ 14a4049f0

void __thiscall
TArray<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
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

// Empty @ 14a404a60

void __thiscall
TArray<TArray<FName,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TArray<FName,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FName,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
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

// Empty @ 14a404ad0

void __thiscall
TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
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

// Empty @ 14a404b40

void __thiscall
TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
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

// Find @ 14a409540

int __thiscall
TArray<FControlRigSequenceObjectReference,TSizedDefaultAllocator<32>_>::Find
          (TArray<FControlRigSequenceObjectReference,TSizedDefaultAllocator<32>_> *this,
          FControlRigSequenceObjectReference *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  UClass *pUVar8;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar7 = pFVar3;
  do {
    if (pFVar7 == pFVar3 + (longlong)iVar1 * 8) {
      return -1;
    }
    pUVar8 = *(UClass **)pFVar7;
    if ((pUVar8 == (UClass *)0x0) ||
       (pUVar5 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar5 == (UClass *)0x0)) {
LAB_14a4095a8:
      pUVar8 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar5->_padding_;
      if (((int)pUVar8->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14a4095a8;
    }
    pUVar5 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
    if ((pUVar5 == (UClass *)0x0) ||
       (pUVar6 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14a4095e5:
      pUVar5 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14a4095e5;
      pUVar5 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
    }
    if (pUVar8 == pUVar5) {
      return (int)((longlong)pFVar7 - (longlong)pFVar3 >> 3);
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// Insert @ 14a423e50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneControlRigSpaceBaseKey *param_1,int param_2)

{
  FMovieSceneControlRigSpaceBaseKey *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (FMovieSceneControlRigSpaceBaseKey *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x10;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  FVar3 = (param_1->ControlRigElement).Name;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x10;
  *(undefined8 *)pFVar6 = *(undefined8 *)param_1;
  *(FName *)(pFVar6 + 8) = FVar3;
  return param_2;
}

// InsertUninitializedImpl @ 14a424170

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 14a4241f0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 14a424270

void __thiscall
TArray<TTuple<FName,FMovieSceneAnimTypeID>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FName,FMovieSceneAnimTypeID>,TSizedDefaultAllocator<32>_> *this,int param_1
          ,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// Remove @ 14a43b410

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,FRigElementKey *param_1)

{
  FRigElementKey *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  
  pFVar1 = (FRigElementKey *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  lVar7 = (longlong)iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  if ((*(FName *)(pFVar2 + 4) == param_1->Name) &&
     (*pFVar2 == (FScriptContainerElement)param_1->Type)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  lVar9 = 0;
  iVar10 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar11 = iVar10 + 1;
    if (lVar9 < lVar7) {
      pFVar8 = pFVar2 + lVar9 * 0xc;
      do {
        if ((*(FName *)(pFVar8 + 4) == param_1->Name) &&
           (*pFVar8 == (FScriptContainerElement)param_1->Type)) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        if (bVar13 != bVar5) break;
        iVar11 = iVar11 + 1;
        lVar9 = lVar9 + 1;
        pFVar8 = pFVar8 + 0xc;
      } while (lVar9 < lVar7);
    }
    if (bVar13 != 0) {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0xc,pFVar2 + (longlong)iVar10 * 0xc,
                (longlong)(iVar11 - iVar10) * 0xc);
      }
      iVar12 = iVar12 + (iVar11 - iVar10);
    }
    bVar13 = bVar13 ^ 1;
    iVar10 = iVar11;
    if (lVar7 <= lVar9) {
      this->ArrayNum = iVar12;
      return iVar6 - iVar12;
    }
  } while( true );
}

// RemoveAt @ 14a43da10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14a43df10

void __thiscall
TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FBoolParameterNameAndCurve *_Dst;
  
  _Dst = (FBoolParameterNameAndCurve *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x128);
  DestructItems<FBoolParameterNameAndCurve,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x128);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43df90

void __thiscall
TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FColorParameterNameAndCurves *_Dst;
  
  _Dst = (FColorParameterNameAndCurves *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x4a8);
  DestructItems<FColorParameterNameAndCurves,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x4a8);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e010

void __thiscall
TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FConstraintAndActiveChannel *_Dst;
  
  _Dst = (FConstraintAndActiveChannel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x128)
  ;
  DestructItems<FConstraintAndActiveChannel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x128);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e090

void __thiscall
TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FEnumParameterNameAndCurve *_Dst;
  
  _Dst = (FEnumParameterNameAndCurve *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x130);
  DestructItems<FEnumParameterNameAndCurve,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x130);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e110

void __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FInstancedStruct *_Dst;
  
  _Dst = (FInstancedStruct *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<FInstancedStruct,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e190

void __thiscall
TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FIntegerParameterNameAndCurve *_Dst;
  
  _Dst = (FIntegerParameterNameAndCurve *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x128);
  DestructItems<FIntegerParameterNameAndCurve,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x128);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e210

void __thiscall
TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScalarParameterNameAndCurve *_Dst;
  
  _Dst = (FScalarParameterNameAndCurve *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x130);
  DestructItems<FScalarParameterNameAndCurve,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x130);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e290

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TArray<FSpaceControlNameAndChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FSpaceControlNameAndChannel,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FSpaceControlNameAndChannel *_Dst;
  
  _Dst = (FSpaceControlNameAndChannel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x150)
  ;
  DestructItems<FSpaceControlNameAndChannel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x150);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e310

void __thiscall
TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FTransformParameterNameAndCurves *_Dst;
  
  _Dst = (FTransformParameterNameAndCurves *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0xa70);
  DestructItems<FTransformParameterNameAndCurves,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xa70);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e390

void __thiscall
TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FVector2DParameterNameAndCurves *_Dst;
  
  _Dst = (FVector2DParameterNameAndCurves *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 600);
  DestructItems<FVector2DParameterNameAndCurves,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 600);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e410

void __thiscall
TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FVectorParameterNameAndCurves *_Dst;
  
  _Dst = (FVectorParameterNameAndCurves *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x380);
  DestructItems<FVectorParameterNameAndCurves,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x380);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a43e490

void __thiscall
TArray<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14a43e510

void __thiscall
TArray<FControlRigSequenceObjectReferences,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FControlRigSequenceObjectReferences,TSizedDefaultAllocator<32>_> *this,int param_1
          )

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  pvVar2 = *(void **)_Dst;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 0x10,(longlong)iVar3 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14a43e5a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TArray<UE::MovieScene::FAccumulatedControlRigValues::FEntry,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<UE::MovieScene::FAccumulatedControlRigValues::FEntry,TSizedDefaultAllocator<32>_>
                 *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FEntry *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (FEntry *)(pFVar1 + (longlong)param_1 * 0x88);
  DestructItems<UE::MovieScene::FAccumulatedControlRigValues::FEntry,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x88,(longlong)iVar2 * 0x88);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14a459c60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FFrameNumber,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14a459da0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,int param_1,
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
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FInstancedStruct,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,param_1 - iVar2);
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
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14a459ed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FKeyHandle,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FKeyHandle,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<FRigElementKey_const_,int> @ 14a4fe950

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=<FRigElementKey_const_,int>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRigElementKey_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigElementKey *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  }
  return this;
}

// CopyToEmpty<FRigElementKey,int> @ 14a4ff910

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::CopyToEmpty<FRigElementKey,int>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,FRigElementKey *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0xc);
  }
  return;
}

// CopyToEmpty<FRigUnit_MultiFABRIK_ChainGroup,int> @ 14a4ff9a0

void __thiscall
TArray<FRigUnit_MultiFABRIK_ChainGroup,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FRigUnit_MultiFABRIK_ChainGroup,int>
          (TArray<FRigUnit_MultiFABRIK_ChainGroup,TSizedDefaultAllocator<32>_> *this,
          FRigUnit_MultiFABRIK_ChainGroup *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x48,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FRigUnit_MultiFABRIK_ChainGroup,FRigUnit_MultiFABRIK_ChainGroup,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 14a518da0

TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x18,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
    }
  }
  return this;
}

// operator= @ 14a518e40

TArray<FAimTarget,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAimTarget,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAimTarget,TSizedDefaultAllocator<32>_> *this,
          TArray<FAimTarget,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x90,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x90);
    }
  }
  return this;
}

// operator= @ 14a518ee0

TArray<FCRSimLinearSpring,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCRSimLinearSpring,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCRSimLinearSpring,TSizedDefaultAllocator<32>_> *this,
          TArray<FCRSimLinearSpring,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 14a518f80

TArray<FCRSimPointForce,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCRSimPointForce,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCRSimPointForce,TSizedDefaultAllocator<32>_> *this,
          TArray<FCRSimPointForce,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x28,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x28);
    }
  }
  return this;
}

// operator= @ 14a519020

TArray<FCRSimSoftCollision,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCRSimSoftCollision,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCRSimSoftCollision,TSizedDefaultAllocator<32>_> *this,
          TArray<FCRSimSoftCollision,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x80,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 7);
    }
  }
  return this;
}

// operator= @ 14a5190c0

TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *this,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x20,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 5);
    }
  }
  return this;
}

// operator= @ 14a519160

TArray<FConstraintData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FConstraintData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FConstraintData,TSizedDefaultAllocator<32>_> *this,
          TArray<FConstraintData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FConstraintData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FConstraintData,int>
              ((FConstraintData *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FConstraintData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FConstraintData,FConstraintData,int>((this->AllocatorInstance).Data,pFVar3,iVar2)
    ;
  }
  return this;
}

// operator= @ 14a519200

TArray<FConstraintParent,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FConstraintParent,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *this,
          TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 14a5192a0

TArray<FConstraintTarget,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FConstraintTarget,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FConstraintTarget,TSizedDefaultAllocator<32>_> *this,
          TArray<FConstraintTarget,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x70,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x70);
    }
  }
  return this;
}

// operator= @ 14a519340

TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_> *this,
          TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FFABRIKChainLink *pFVar3;
  
  if (this != param_1) {
    DestructItems<FFABRIKChainLink,int>
              ((FFABRIKChainLink *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FFABRIKChainLink *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FFABRIKChainLink,FFABRIKChainLink,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a5193e0

TArray<FInstructionRecord,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInstructionRecord,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FInstructionRecord,TSizedDefaultAllocator<32>_> *this,
          TArray<FInstructionRecord,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x1c,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x1c);
    }
  }
  return this;
}

// operator= @ 14a519480

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

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

// operator= @ 14a5194e0

TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigElementWeight,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *param_1)

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
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// operator= @ 14a519580

TArray<FRigUnit_CCDIK_RotationLimitPerItem,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigUnit_CCDIK_RotationLimitPerItem,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigUnit_CCDIK_RotationLimitPerItem,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigUnit_CCDIK_RotationLimitPerItem,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 14a519620

TArray<FRigUnit_DistributeRotation_Rotation,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigUnit_DistributeRotation_Rotation,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigUnit_DistributeRotation_Rotation,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigUnit_DistributeRotation_Rotation,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x30,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x30);
    }
  }
  return this;
}

// operator= @ 14a5196c0

TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x30,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x30);
    }
  }
  return this;
}

// operator= @ 14a519760

TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TEnumAsByte<enum_EObjectTypeQuery>,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14a5197f0

TArray<ERigControlTransformChannel,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<ERigControlTransformChannel,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// Insert @ 14a532540

int __thiscall
TArray<`FRigUnit_MultiFABRIK::StaticExecute'::__l14::FLocalBoneData,TSizedDefaultAllocator<32>_>::
Insert(void *this,FLocalBoneData *param_1,int param_2)

{
  FName *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  FNameEntryId FVar5;
  bool bVar6;
  int iVar7;
  
  if ((*(FLocalBoneData **)this <= param_1) &&
     (param_1 < *(FLocalBoneData **)this + *(int *)((longlong)this + 0xc))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  iVar7 = *(int *)((longlong)this + 8);
  if (iVar7 == *(int *)((longlong)this + 0xc)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,this,(int *)((longlong)this + 0xc));
  }
  *(int *)((longlong)this + 8) = iVar7 + 1;
  lVar2 = (longlong)param_2 * 0x18;
  memmove((void *)(*(longlong *)this + lVar2 + 0x18),(void *)(*(longlong *)this + lVar2),
          (longlong)(iVar7 - param_2) * 0x18);
  lVar3 = *(longlong *)this;
  iVar7 = param_1->BoneIndex;
  FVar5.Value = (param_1->ParentBoneName).ComparisonIndex.Value;
  pFVar1 = (FName *)(lVar2 + lVar3);
  *pFVar1 = param_1->BoneName;
  pFVar1[1].ComparisonIndex = (FNameEntryId)iVar7;
  pFVar1[1].Number = FVar5.Value;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = *(undefined8 *)&(param_1->ParentBoneName).Number;
  return param_2;
}

// Reset @ 14a533fb0

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 14a534000

void __thiscall
TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetNum @ 14a55caa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FCachedRigElement,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x20,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x20,(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14a55cbf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x60,0,
           (longlong)(param_1 - iVar5) * 0x60);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x60;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x60,(longlong)iVar5 * 0x60);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14a55cd50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x20,0,
           (longlong)(param_1 - iVar5) << 5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x20,(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14a55cea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRigUnit_ChainInfo_Segment,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FRigUnit_ChainInfo_Segment,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x60,0,
           (longlong)(param_1 - iVar5) * 0x60);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x60;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x60,(longlong)iVar5 * 0x60);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

