// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetBatch @ 14d4fbff0

FPropertyBindingCopyInfoBatch * __thiscall
FPropertyBindingBindingCollection::GetBatch
          (FPropertyBindingBindingCollection *this,FPropertyBindingIndex16 param_1)

{
  code *pcVar1;
  bool bVar2;
  FPropertyBindingCopyInfoBatch *pFVar3;
  
  if (param_1.Value == 0xffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetBatchIndex.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
                       ,0x109,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPropertyBindingCopyInfoBatch *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->CopyBatches).ArrayNum <= (int)(uint)param_1.Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPropertyBindingCopyInfoBatch *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FPropertyBindingCopyInfoBatch *)
         ((this->CopyBatches).AllocatorInstance.Data + (ulonglong)param_1.Value * 0x18);
}

// GetBatchCopies @ 14d4fc090

TArrayView<FPropertyBindingCopyInfo_const_,int> * __thiscall
FPropertyBindingBindingCollection::GetBatchCopies
          (FPropertyBindingBindingCollection *this,
          TArrayView<FPropertyBindingCopyInfo_const_,int> *__return_storage_ptr__,
          FPropertyBindingCopyInfoBatch *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FPropertyBindingCopyInfo_const_,int> *pTVar4;
  int iVar5;
  
  uVar1 = (param_1->BindingsBegin).Value;
  iVar5 = (uint)(param_1->BindingsEnd).Value - (uint)uVar1;
  if (iVar5 == 0) {
    __return_storage_ptr__->DataPtr = (FPropertyBindingCopyInfo *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    if ((this->PropertyCopies).ArrayNum <= (int)(uint)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FPropertyBindingCopyInfo_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar5;
    __return_storage_ptr__->DataPtr =
         (FPropertyBindingCopyInfo *)
         ((this->PropertyCopies).AllocatorInstance.Data + (ulonglong)uVar1 * 0x60);
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FPropertyBindingCopyInfo_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// operator= @ 14d52cea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPropertyBindingBindingCollection * __thiscall
FPropertyBindingBindingCollection::operator=
          (FPropertyBindingBindingCollection *this,FPropertyBindingBindingCollection *param_1)

{
  TArray<FPropertyBindingCopyInfoBatch,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FPropertyBindingCopyInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPropertyBindingPropertyIndirection,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FPropertyBindingCopyInfoBatch *pFVar6;
  FPropertyBindingCopyInfo *pFVar7;
  FPropertyBindingPropertyIndirection *pFVar8;
  UScriptStruct *pUVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined1 auStackY_a8 [32];
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pTVar1 = &this->CopyBatches;
  if (pTVar1 != &param_1->CopyBatches) {
    DestructItems<FPropertyBindingCopyInfoBatch,int>
              ((FPropertyBindingCopyInfoBatch *)(pTVar1->AllocatorInstance).Data,
               (this->CopyBatches).ArrayNum);
    iVar5 = (param_1->CopyBatches).ArrayNum;
    piVar2 = &(this->CopyBatches).ArrayMax;
    pFVar6 = (FPropertyBindingCopyInfoBatch *)(param_1->CopyBatches).AllocatorInstance.Data;
    (this->CopyBatches).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FPropertyBindingCopyInfoBatch,FPropertyBindingCopyInfoBatch,int>
                ((pTVar1->AllocatorInstance).Data,pFVar6,iVar5);
    }
  }
  pTVar3 = &this->PropertyCopies;
  if (pTVar3 != &param_1->PropertyCopies) {
    DestructItems<FPropertyBindingCopyInfo,int>
              ((FPropertyBindingCopyInfo *)(pTVar3->AllocatorInstance).Data,
               (this->PropertyCopies).ArrayNum);
    iVar5 = (param_1->PropertyCopies).ArrayNum;
    piVar2 = &(this->PropertyCopies).ArrayMax;
    pFVar7 = (FPropertyBindingCopyInfo *)(param_1->PropertyCopies).AllocatorInstance.Data;
    (this->PropertyCopies).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,iVar5,*piVar2,&pTVar3->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FPropertyBindingCopyInfo,FPropertyBindingCopyInfo,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  pTVar4 = &this->PropertyIndirections;
  if (pTVar4 != &param_1->PropertyIndirections) {
    iVar5 = (param_1->PropertyIndirections).ArrayNum;
    piVar2 = &(this->PropertyIndirections).ArrayMax;
    pFVar8 = (FPropertyBindingPropertyIndirection *)
             (param_1->PropertyIndirections).AllocatorInstance.Data;
    (this->PropertyIndirections).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FPropertyBindingPropertyIndirection,FPropertyBindingPropertyIndirection,int>
                ((pTVar4->AllocatorInstance).Data,pFVar8,iVar5);
    }
  }
  this->bBindingsResolved = param_1->bBindingsResolved;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)&param_1->BindingsOwner != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1->BindingsOwner);
  }
  *(undefined8 *)&this->BindingsOwner = *(undefined8 *)&param_1->BindingsOwner;
  *(undefined8 *)&(this->BindingsOwner).field_0x8 =
       *(undefined8 *)&(param_1->BindingsOwner).field_0x8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 = (param_1->PropertyReferenceStructType).field0_0x0.DebugPtr,
     pUVar9 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->PropertyReferenceStructType).field0_0x0 = (param_1->PropertyReferenceStructType).field0_0x0
  ;
  lVar10 = *(longlong *)&param_1->PropertyReferenceCopyFunc;
  uStack_40 = (longlong *)0x0;
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)&(param_1->PropertyReferenceCopyFunc).field_0x28;
    puVar20 = (undefined8 *)&(param_1->PropertyReferenceCopyFunc).field_0x10;
    if (puVar11 != (undefined8 *)0x0) {
      puVar20 = puVar11;
    }
    (**(code **)*puVar20)(puVar20,&local_58);
  }
  lVar18 = *(longlong *)&this->PropertyReferenceCopyFunc;
  uVar19 = *(undefined8 *)&(this->PropertyReferenceCopyFunc).field_0x8;
  uVar12 = *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x10;
  uVar13 = *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x14;
  uVar14 = *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x18;
  uVar15 = *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x1c;
  uVar16 = *(undefined8 *)&(this->PropertyReferenceCopyFunc).field_0x20;
  plVar17 = *(longlong **)&(this->PropertyReferenceCopyFunc).field_0x28;
  *(longlong *)&this->PropertyReferenceCopyFunc = lVar10;
  *(undefined8 *)&(this->PropertyReferenceCopyFunc).field_0x8 = uStack_60;
  *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x10 = (undefined4)local_58;
  *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x14 = local_58._4_4_;
  *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x18 = uStack_50;
  *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x1c = uStack_4c;
  *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x20 = (undefined4)local_48;
  *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x24 = local_48._4_4_;
  *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x28 = (undefined4)uStack_40;
  *(undefined4 *)&(this->PropertyReferenceCopyFunc).field_0x2c = uStack_40._4_4_;
  local_58._0_4_ = uVar12;
  local_58._4_4_ = uVar13;
  uStack_50 = uVar14;
  uStack_4c = uVar15;
  local_48 = uVar16;
  uStack_40 = plVar17;
  if (lVar18 != 0) {
    plVar21 = &local_58;
    if (plVar17 != (longlong *)0x0) {
      plVar21 = plVar17;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  lVar10 = *(longlong *)&param_1->PropertyReferenceResetFunc;
  uStack_40 = (longlong *)0x0;
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)&(param_1->PropertyReferenceResetFunc).field_0x28;
    puVar20 = (undefined8 *)&(param_1->PropertyReferenceResetFunc).field_0x10;
    if (puVar11 != (undefined8 *)0x0) {
      puVar20 = puVar11;
    }
    (**(code **)*puVar20)(puVar20,&local_58);
  }
  lVar18 = *(longlong *)&this->PropertyReferenceResetFunc;
  uVar12 = *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x10;
  uVar13 = *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x14;
  uVar14 = *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x18;
  uVar15 = *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x1c;
  uVar16 = *(undefined8 *)&(this->PropertyReferenceResetFunc).field_0x20;
  plVar17 = *(longlong **)&(this->PropertyReferenceResetFunc).field_0x28;
  *(longlong *)&this->PropertyReferenceResetFunc = lVar10;
  *(undefined8 *)&(this->PropertyReferenceResetFunc).field_0x8 = uVar19;
  *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x10 = (undefined4)local_58;
  *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x14 = local_58._4_4_;
  *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x18 = uStack_50;
  *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x1c = uStack_4c;
  *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x20 = (undefined4)local_48;
  *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x24 = local_48._4_4_;
  *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x28 = (undefined4)uStack_40;
  *(undefined4 *)&(this->PropertyReferenceResetFunc).field_0x2c = uStack_40._4_4_;
  local_58._0_4_ = uVar12;
  local_58._4_4_ = uVar13;
  uStack_50 = uVar14;
  uStack_4c = uVar15;
  local_48 = uVar16;
  uStack_40 = plVar17;
  if (lVar18 != 0) {
    plVar21 = &local_58;
    if (plVar17 != (longlong *)0x0) {
      plVar21 = plVar17;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  return this;
}

