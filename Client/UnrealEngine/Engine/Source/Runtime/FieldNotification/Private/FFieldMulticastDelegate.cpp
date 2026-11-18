// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 17

// operator() @ 1441beca0

void __thiscall
`UE::FieldNotification::FFieldMulticastDelegate::RemoveAll'::__l2::<lambda_1>::operator()
          (void *this,FInvocationElement *param_1)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)this;
  iVar6 = ((param_1->Key).Id.BitNumber - *(int *)(lVar2 + 0x20)) + 1;
  if (0 < iVar6) {
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(lVar2 + 8),iVar6);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar2 + 8),iVar5,iVar6,false);
  }
  lVar2 = *(longlong *)this;
  iVar6 = (param_1->Key).Id.BitNumber;
  if ((iVar6 < 0) || (*(int *)(lVar2 + 0x20) <= iVar6)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar7 = *(longlong *)(lVar2 + 0x18);
  if (*(longlong *)(lVar2 + 0x18) == 0) {
    lVar7 = lVar2 + 8;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  return;
}

// operator() @ 1441bed70

void __thiscall
`UE::FieldNotification::FFieldMulticastDelegate::RemoveAll'::__l2::<lambda_1>::operator()
          (void *this,FInvocationElement *param_1)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)this;
  iVar6 = ((param_1->Key).Id.BitNumber - *(int *)(lVar2 + 0x20)) + 1;
  if (0 < iVar6) {
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(lVar2 + 8),iVar6);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar2 + 8),iVar5,iVar6,false);
  }
  lVar2 = *(longlong *)this;
  iVar6 = (param_1->Key).Id.BitNumber;
  if ((iVar6 < 0) || (*(int *)(lVar2 + 0x20) <= iVar6)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar7 = *(longlong *)(lVar2 + 0x18);
  if (*(longlong *)(lVar2 + 0x18) == 0) {
    lVar7 = lVar2 + 8;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  return;
}

// Add @ 1441c09d0

FDelegateHandle __thiscall
UE::FieldNotification::FFieldMulticastDelegate::Add
          (FFieldMulticastDelegate *this,UObject *param_1,FFieldId *param_2,
          FFieldValueChangedDynamicDelegate *param_3)

{
  int *piVar1;
  code *pcVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FDelegateHandle FVar11;
  UFunction *pUVar12;
  FScriptContainerElement *pFVar13;
  FWeakObjectPtr *pFVar14;
  undefined8 uVar15;
  TScriptDelegate<FNotThreadSafeDelegateMode> *in_stack_00000028;
  FDelegateAllocation local_138;
  FName local_128;
  FWeakObjectPtr local_120;
  FInvocationKey local_118;
  UObject *local_f8 [2];
  FWeakObjectPtr local_e8;
  FName FStack_e0;
  int local_d8;
  int iStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  uint local_c0;
  FWeakObjectPtr local_b8;
  int local_b0;
  uint local_90;
  FWeakObjectPtr local_88;
  int local_80;
  undefined1 local_78 [8];
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(in_stack_00000028);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_stack_00000028,&local_70
              );
    local_128 = in_stack_00000028->FunctionName;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_stack_00000028,&local_58
              );
    pUVar8 = FWeakObjectPtr::Get(&in_stack_00000028->Object);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    local_e8 = (FWeakObjectPtr)((ulonglong)local_e8 & 0xffffffffffffff00);
    uVar15 = 0;
    FStack_e0 = (FName)&local_138;
    local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_138.DelegateSize = 0;
    puVar9 = Core::Private::DelegateAllocate(0x30,&local_138);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXPEAV1_UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      *(FName *)(puVar9 + 4) = local_128;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar8);
      }
      puVar9[5] = 0;
      local_f8[0] = pUVar8;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 5),(FObjectPtr)local_f8);
      if ((local_128 == (FName)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFunctionName != NAME_None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x56,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        FVar11.ID = (*pcVar2)();
        return (FDelegateHandle)FVar11.ID;
      }
      if (pUVar8 != (UObject *)0x0) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar9 + 5));
        pUVar12 = UObject::FindFunctionChecked(pUVar8,local_128);
        puVar9[3] = pUVar12;
      }
    }
    if ((local_138.DelegateSize != 0) &&
       ((FWeakObjectPtr)local_138.DelegateAllocator != (FWeakObjectPtr)0x0)) {
      puVar9 = (undefined8 *)
               (**(code **)(*(longlong *)local_138.DelegateAllocator + 0x40))
                         (local_138.DelegateAllocator,local_78);
      uVar15 = *puVar9;
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (FFieldId *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_118.Object.WeakPtr.ObjectIndex = 0;
    local_118.Object.WeakPtr.ObjectSerialNumber = 0;
    local_120 = (FWeakObjectPtr)param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (FFieldId *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_118,(FObjectPtr)&local_120);
    local_118.Id.FieldName.ComparisonIndex.Value = *(uint *)&param_3->field_0x0;
    local_118.Id.FieldName.Number = *(uint *)&param_3->field_0x4;
    local_118.Id.BitNumber = *(int *)&param_3->field_0x8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_stack_00000028,&local_40
              );
    local_118.DynamicName.ComparisonIndex = (in_stack_00000028->FunctionName).ComparisonIndex;
    local_118.DynamicName.Number = (in_stack_00000028->FunctionName).Number;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    if (this->DelegateLockCount < 1) {
      iVar7 = UpperBound(this,&local_118);
      iVar4 = local_138.DelegateSize;
      FVar3 = local_138.DelegateAllocator;
      local_120.ObjectSerialNumber = local_118.DynamicName.ComparisonIndex.Value;
      local_120.ObjectIndex = local_118.Id.BitNumber;
      local_90 = local_118.DynamicName.Number;
      local_e8 = local_118.Object.WeakPtr;
      FStack_e0 = local_118.Id.FieldName;
      local_88 = (FWeakObjectPtr)local_138.DelegateAllocator;
      local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_80 = local_138.DelegateSize;
      local_138.DelegateSize = 0;
      TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
      ::InsertUninitializedImpl(&this->Delegates,iVar7,1);
      pFVar14 = (FWeakObjectPtr *)
                ((this->Delegates).AllocatorInstance.Data + (longlong)iVar7 * 0x30);
      *pFVar14 = local_e8;
      *(FName *)(pFVar14 + 1) = FStack_e0;
      pFVar14[2] = local_120;
      pFVar14[3].ObjectIndex = local_90;
      pFVar14[4] = (FWeakObjectPtr)FVar3;
      pFVar14[5].ObjectIndex = iVar4;
    }
    else {
      piVar1 = &(this->Delegates).ArrayMax;
      uVar6 = (this->Delegates).ArrayNum;
      local_c8 = CONCAT44(local_118.DynamicName.ComparisonIndex.Value,local_118.Id.BitNumber);
      local_c0 = local_118.DynamicName.Number;
      local_d8 = local_118.Object.WeakPtr.ObjectIndex;
      iStack_d4 = local_118.Object.WeakPtr.ObjectSerialNumber;
      uStack_d0 = local_118.Id.FieldName.ComparisonIndex.Value;
      uStack_cc = local_118.Id.FieldName.Number;
      local_b8 = (FWeakObjectPtr)local_138.DelegateAllocator;
      local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_b0 = local_138.DelegateSize;
      local_138.DelegateSize = 0;
      if (uVar6 == *piVar1) {
        uVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,(ForAnyElementType *)this,piVar1);
      }
      (this->Delegates).ArrayNum = uVar6 + 1;
      pFVar13 = (this->Delegates).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30;
      *(int *)pFVar13 = local_d8;
      *(int *)(pFVar13 + 4) = iStack_d4;
      *(uint *)(pFVar13 + 8) = uStack_d0;
      *(uint *)(pFVar13 + 0xc) = uStack_cc;
      *(undefined8 *)(pFVar13 + 0x10) = local_c8;
      *(uint *)(pFVar13 + 0x18) = local_c0;
      *(FWeakObjectPtr *)(pFVar13 + 0x20) = local_b8;
      *(int *)(pFVar13 + 0x28) = local_b0;
      if (this->AddedEmplaceAt < (ushort)uVar6) {
        uVar6 = (uint)this->AddedEmplaceAt;
      }
      this->AddedEmplaceAt = (ushort)uVar6;
    }
    *(undefined8 *)param_1 = uVar15;
    if (local_138.DelegateSize != 0) {
      if (local_138.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return (FDelegateHandle)(ulong64)param_1;
      }
      (*(code *)**(undefined8 **)local_138.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_138,0,0,0x10);
      local_138.DelegateSize = 0;
    }
    if (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_138.DelegateAllocator);
    }
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 1441c0da0

FDelegateHandle __thiscall
UE::FieldNotification::FFieldMulticastDelegate::Add
          (FFieldMulticastDelegate *this,UObject *param_1,FFieldId *param_2,
          TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *param_3)

{
  int *piVar1;
  FName FVar2;
  FWeakObjectPtr FVar3;
  FFieldId *this_00;
  TWeakObjectPtr<UObject_const_,FWeakObjectPtr> TVar4;
  FName FVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  FWeakObjectPtr *pFVar11;
  undefined8 uVar12;
  FFieldId *in_stack_00000028;
  FInvocationKey local_78;
  int local_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  undefined4 local_40;
  FName local_38;
  int local_30;
  
  this_00 = in_stack_00000028;
  if (((in_stack_00000028->BitNumber == 0) || (in_stack_00000028->FieldName == (FName)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)in_stack_00000028->FieldName + 0x38))(), cVar6 == '\0')) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    uVar12 = 0;
    if ((this_00->BitNumber != 0) && (FVar2 = this_00->FieldName, FVar2 != (FName)0x0)) {
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)FVar2 + 0x40))(FVar2,&stack0x00000028);
      uVar12 = *puVar9;
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (FFieldId *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_78.Object.WeakPtr.ObjectIndex = 0;
    local_78.Object.WeakPtr.ObjectSerialNumber = 0;
    in_stack_00000028 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (FFieldId *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_78,(FObjectPtr)&stack0x00000028);
    local_78.Id.FieldName.ComparisonIndex.Value = *(uint *)&param_3->field_0x0;
    local_78.Id.FieldName.Number = *(uint *)&param_3->field_0x4;
    local_78.Id.BitNumber = *(int *)&param_3->field_0x8;
    local_78.DynamicName.ComparisonIndex.Value = 0;
    local_78.DynamicName.Number = 0;
    if (this->DelegateLockCount < 1) {
      iVar8 = UpperBound(this,&local_78);
      FVar5 = local_78.Id.FieldName;
      TVar4.WeakPtr = local_78.Object.WeakPtr;
      FVar2 = this_00->FieldName;
      FVar3.ObjectSerialNumber = local_78.DynamicName.ComparisonIndex.Value;
      FVar3.ObjectIndex = local_78.Id.BitNumber;
      local_30 = this_00->BitNumber;
      local_40 = 0;
      (this_00->FieldName).ComparisonIndex = 0;
      (this_00->FieldName).Number = 0;
      this_00->BitNumber = 0;
      local_38 = FVar2;
      TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
      ::InsertUninitializedImpl(&this->Delegates,iVar8,1);
      pFVar11 = (FWeakObjectPtr *)
                ((this->Delegates).AllocatorInstance.Data + (longlong)iVar8 * 0x30);
      *(undefined8 *)param_1 = uVar12;
      *pFVar11 = TVar4.WeakPtr;
      *(FName *)(pFVar11 + 1) = FVar5;
      pFVar11[2] = FVar3;
      pFVar11[3].ObjectIndex = 0;
      *(FName *)(pFVar11 + 4) = FVar2;
      pFVar11[5].ObjectIndex = local_30;
    }
    else {
      local_38 = this_00->FieldName;
      piVar1 = &(this->Delegates).ArrayMax;
      (this_00->FieldName).ComparisonIndex = 0;
      (this_00->FieldName).Number = 0;
      local_48 = (ulonglong)(uint)local_78.Id.BitNumber;
      local_30 = this_00->BitNumber;
      this_00->BitNumber = 0;
      uVar7 = (this->Delegates).ArrayNum;
      local_58 = local_78.Object.WeakPtr.ObjectIndex;
      iStack_54 = local_78.Object.WeakPtr.ObjectSerialNumber;
      uStack_50 = local_78.Id.FieldName.ComparisonIndex.Value;
      uStack_4c = local_78.Id.FieldName.Number;
      local_40 = 0;
      if (uVar7 == *piVar1) {
        uVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,(ForAnyElementType *)this,piVar1);
      }
      (this->Delegates).ArrayNum = uVar7 + 1;
      *(undefined8 *)param_1 = uVar12;
      pFVar10 = (this->Delegates).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30;
      *(int *)pFVar10 = local_58;
      *(int *)(pFVar10 + 4) = iStack_54;
      *(uint *)(pFVar10 + 8) = uStack_50;
      *(uint *)(pFVar10 + 0xc) = uStack_4c;
      *(ulonglong *)(pFVar10 + 0x10) = local_48;
      *(undefined4 *)(pFVar10 + 0x18) = local_40;
      *(FName *)(pFVar10 + 0x20) = local_38;
      *(int *)(pFVar10 + 0x28) = local_30;
      if (this->AddedEmplaceAt < (ushort)uVar7) {
        uVar7 = (uint)this->AddedEmplaceAt;
      }
      this->AddedEmplaceAt = (ushort)uVar7;
    }
  }
  if ((this_00->BitNumber != 0) && (this_00->FieldName != (FName)0x0)) {
    (*(code *)**(undefined8 **)this_00->FieldName)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,0,0x10);
    this_00->BitNumber = 0;
  }
  if (this_00->FieldName != (FName)0x0) {
    FMemory::Free((void *)this_00->FieldName);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Broadcast @ 1441c1010

void __thiscall
UE::FieldNotification::FFieldMulticastDelegate::Broadcast
          (FFieldMulticastDelegate *this,UObject *param_1,FFieldId *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  FNameEntryId local_58;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  
  iVar6 = 0;
  this->DelegateLockCount = this->DelegateLockCount + 1;
  uVar8 = (this->Delegates).ArrayNum;
  uVar7 = uVar8;
  if ((int)(uint)this->AddedEmplaceAt <= (int)uVar8) {
    uVar7 = (uint)this->AddedEmplaceAt;
  }
  if (0 < (int)uVar7) {
    local_58 = (param_2->FieldName).ComparisonIndex;
    do {
      uVar10 = uVar7 >> 1;
      uVar1 = *(undefined8 *)
               ((this->Delegates).AllocatorInstance.Data +
               (longlong)(int)(uVar10 + iVar6) * 0x30 + 8);
      iVar5 = local_58.Value - (int)uVar1;
      if (iVar5 == 0) {
        iVar5 = (param_2->FieldName).Number - (int)((ulonglong)uVar1 >> 0x20);
      }
      if (-1 < iVar5) {
        iVar6 = uVar10 + iVar6 + (uVar7 & 1);
      }
      uVar7 = uVar10;
    } while (uVar10 != 0);
  }
  uVar7 = iVar6 - 1;
  if ((-1 < (int)uVar7) && ((int)uVar7 < (int)uVar8)) {
    lVar11 = (longlong)(int)uVar7 * 0x30;
    do {
      uVar8 = 0;
      if ((int)uVar7 < (this->Delegates).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar9 = (this->Delegates).AllocatorInstance.Data + lVar11;
      if (*(FName *)(pFVar9 + 8) != param_2->FieldName) break;
      bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar9,param_1);
      if (((bVar4) && (*(int *)&pFVar9[0x28].field_0x0 != 0)) &&
         (plVar2 = *(longlong **)(pFVar9 + 0x20), plVar2 != (longlong *)0x0)) {
        local_40 = param_2->BitNumber;
        local_48 = param_2->FieldName;
        (**(code **)(*plVar2 + 0x68))(plVar2,param_1,&local_48);
      }
      lVar11 = lVar11 + -0x30;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  uVar8 = (this->Delegates).ArrayNum - 1;
  if ((int)(uint)this->AddedEmplaceAt <= (int)uVar8) {
    lVar11 = (longlong)(int)uVar8 * 0x30;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->Delegates).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar9 = (this->Delegates).AllocatorInstance.Data + lVar11;
      if (*(FName *)(pFVar9 + 8) == param_2->FieldName) {
        bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar9,param_1);
        if (((bVar4) && (*(int *)&pFVar9[0x28].field_0x0 != 0)) &&
           (plVar2 = *(longlong **)(pFVar9 + 0x20), plVar2 != (longlong *)0x0)) {
          local_30 = param_2->BitNumber;
          local_38 = param_2->FieldName;
          (**(code **)(*plVar2 + 0x68))(plVar2,param_1,&local_38);
        }
      }
      uVar8 = uVar8 - 1;
      lVar11 = lVar11 + -0x30;
    } while ((int)(uint)this->AddedEmplaceAt <= (int)uVar8);
  }
  this->DelegateLockCount = this->DelegateLockCount + -1;
  ExecuteLockOperations(this);
  return;
}

// CompleteRemove @ 1441c1280

void __thiscall
UE::FieldNotification::FFieldMulticastDelegate::CompleteRemove
          (FFieldMulticastDelegate *this,FRemoveResult *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  FNameEntryId local_38;
  
  if ((param_1->FieldId).FieldName != (FName)0x0) {
    FVar1 = (param_1->FieldId).FieldName;
    iVar8 = 0;
    uVar6 = (this->Delegates).ArrayNum;
    uVar9 = uVar6;
    if ((int)(uint)this->AddedEmplaceAt <= (int)uVar6) {
      uVar9 = (uint)this->AddedEmplaceAt;
    }
    if (0 < (int)uVar9) {
      local_38 = FVar1.ComparisonIndex.Value;
      do {
        uVar12 = uVar9 >> 1;
        uVar2 = *(undefined8 *)
                 ((this->Delegates).AllocatorInstance.Data +
                 (longlong)(int)(uVar12 + iVar8) * 0x30 + 8);
        iVar7 = local_38.Value - (int)uVar2;
        if (iVar7 == 0) {
          iVar7 = FVar1.Number - (int)((ulonglong)uVar2 >> 0x20);
        }
        if (-1 < iVar7) {
          iVar8 = uVar12 + iVar8 + (uVar9 & 1);
        }
        uVar9 = uVar12;
      } while (uVar12 != 0);
    }
    uVar9 = iVar8 - 1;
    if ((-1 < (int)uVar9) && ((int)uVar9 < (int)uVar6)) {
      lVar13 = (longlong)(int)uVar9 * 0x30;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Delegates).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (this->Delegates).AllocatorInstance.Data + lVar13;
        if (*(FName *)(pFVar11 + 8) != (param_1->FieldId).FieldName) break;
        bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar11,param_1->Object)
        ;
        if ((((bVar4) && (*(int *)&pFVar11[0x28].field_0x0 != 0)) &&
            (*(longlong **)(pFVar11 + 0x20) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(pFVar11 + 0x20) + 0x38))(), cVar5 != '\0')) {
          param_1->bHasOtherBoundDelegates = true;
          break;
        }
        lVar13 = lVar13 + -0x30;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    if (param_1->bHasOtherBoundDelegates == false) {
      uVar10 = (ulonglong)this->AddedEmplaceAt;
      iVar8 = (this->Delegates).ArrayNum;
      if ((int)(uint)this->AddedEmplaceAt < iVar8) {
        lVar13 = uVar10 * 0x30;
        do {
          uVar9 = (uint)uVar10;
          uVar6 = 0;
          if ((int)uVar9 < iVar8) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = (this->Delegates).AllocatorInstance.Data + lVar13;
          if (((*(FName *)(pFVar11 + 8) == (param_1->FieldId).FieldName) &&
              (bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                                 ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar11,
                                  param_1->Object), bVar4)) &&
             ((*(int *)&pFVar11[0x28].field_0x0 != 0 &&
              ((*(longlong **)(pFVar11 + 0x20) != (longlong *)0x0 &&
               (cVar5 = (**(code **)(**(longlong **)(pFVar11 + 0x20) + 0x38))(), cVar5 != '\0'))))))
          {
            param_1->bHasOtherBoundDelegates = true;
            return;
          }
          iVar8 = (this->Delegates).ArrayNum;
          uVar10 = (ulonglong)(uVar9 + 1);
          lVar13 = lVar13 + 0x30;
        } while ((int)(uVar9 + 1) < iVar8);
      }
    }
  }
  return;
}

// ExecuteLockOperations @ 1441c1c50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::FieldNotification::FFieldMulticastDelegate::ExecuteLockOperations(FFieldMulticastDelegate *this)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  
  if (this->DelegateLockCount < 1) {
    piVar16 = &(this->Delegates).ArrayNum;
    if (2 < this->CompactionCount) {
      uVar17 = *piVar16 - 1;
      if (-1 < (int)uVar17) {
        lVar15 = (longlong)(int)uVar17 * 0x30;
        do {
          uVar12 = 0;
          if ((int)uVar17 < *piVar16) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar14 = (this->Delegates).AllocatorInstance.Data;
          if (((*(int *)(pFVar14 + lVar15 + 0x28) == 0) ||
              (plVar4 = *(longlong **)(pFVar14 + lVar15 + 0x20), plVar4 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar4 + 0x30))(), cVar11 != '\0')) {
            TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
            ::RemoveAt(&this->Delegates,uVar17,Default);
            uVar1 = this->AddedEmplaceAt;
            if ((uVar1 != 0xffff) && (uVar17 < uVar1)) {
              if ((uVar1 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("AddedEmplaceAt > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\FieldNotification\\Private\\FieldNotificationDelegate.cpp"
                                      ,0x1e1,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              this->AddedEmplaceAt = this->AddedEmplaceAt - 1;
            }
          }
          lVar15 = lVar15 + -0x30;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      this->CompactionCount = 0;
    }
    piVar16 = &(this->Delegates).ArrayNum;
    uVar1 = this->AddedEmplaceAt;
    iVar13 = *piVar16;
    if ((int)(uint)uVar1 < iVar13) {
      do {
        uVar17 = (uint)uVar1;
        if ((iVar13 <= (int)uVar17) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar14 = (this->Delegates).AllocatorInstance.Data;
        if (((*(int *)(pFVar14 + (ulonglong)uVar17 * 0x30 + 0x28) == 0) ||
            (plVar4 = *(longlong **)(pFVar14 + (ulonglong)uVar17 * 0x30 + 0x20),
            plVar4 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar4 + 0x38))(), cVar11 == '\0')) {
          uVar1 = this->AddedEmplaceAt;
          if ((*piVar16 <= (int)(uint)uVar1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(&this->Delegates,(uint)uVar1);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,(ForAnyElementType *)this,*piVar16,&(this->Delegates).ArrayMax);
        }
        else {
          uVar1 = this->AddedEmplaceAt;
          if ((*piVar16 <= (int)(uint)uVar1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar14 = (this->Delegates).AllocatorInstance.Data;
          uVar17 = *piVar16;
          if ((int)(uint)this->AddedEmplaceAt <= *piVar16) {
            uVar17 = (uint)this->AddedEmplaceAt;
          }
          uVar12 = 0;
          if (0 < (int)uVar17) {
            uVar5 = *(undefined8 *)(pFVar14 + (ulonglong)uVar1 * 0x30 + 8);
            uVar12 = 0;
            do {
              uVar18 = uVar17 >> 1;
              uVar6 = *(undefined8 *)(pFVar14 + (longlong)(int)(uVar18 + uVar12) * 0x30 + 8);
              iVar13 = (int)uVar5 - (int)uVar6;
              if (iVar13 == 0) {
                iVar13 = (int)((ulonglong)uVar5 >> 0x20) - (int)((ulonglong)uVar6 >> 0x20);
              }
              if (-1 < iVar13) {
                uVar12 = (uVar17 & 1) + uVar18 + uVar12;
              }
              uVar17 = uVar18;
            } while (uVar18 != 0);
          }
          uVar1 = this->AddedEmplaceAt;
          if (uVar12 != uVar1) {
            if ((*piVar16 <= (int)(uint)uVar1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar14 = (this->Delegates).AllocatorInstance.Data + (ulonglong)uVar1 * 0x30;
            uVar2 = *(undefined4 *)(pFVar14 + 0x18);
            uVar8 = *(undefined8 *)pFVar14;
            uVar9 = *(undefined8 *)(pFVar14 + 8);
            uVar5 = *(undefined8 *)(pFVar14 + 0x10);
            uVar6 = *(undefined8 *)(pFVar14 + 0x20);
            uVar3 = *(undefined4 *)(pFVar14 + 0x28);
            *(undefined4 *)(pFVar14 + 0x28) = 0;
            *(undefined8 *)(pFVar14 + 0x20) = 0;
            uVar1 = this->AddedEmplaceAt;
            if ((*piVar16 <= (int)(uint)uVar1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
            ::RemoveAtSwapImpl(&this->Delegates,(uint)uVar1);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,(ForAnyElementType *)this,*piVar16,&(this->Delegates).ArrayMax);
            TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
            ::InsertUninitializedImpl(&this->Delegates,uVar12,1);
            pFVar14 = (this->Delegates).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x30;
            *(undefined8 *)pFVar14 = uVar8;
            *(undefined8 *)(pFVar14 + 8) = uVar9;
            *(undefined8 *)(pFVar14 + 0x10) = uVar5;
            *(undefined4 *)(pFVar14 + 0x18) = uVar2;
            *(undefined8 *)(pFVar14 + 0x20) = uVar6;
            *(undefined4 *)(pFVar14 + 0x28) = uVar3;
          }
          this->AddedEmplaceAt = this->AddedEmplaceAt + 1;
        }
        uVar1 = this->AddedEmplaceAt;
        iVar13 = *piVar16;
      } while ((int)(uint)uVar1 < iVar13);
    }
    this->AddedEmplaceAt = 0xffff;
    this->DelegateLockCount = 0;
  }
  return;
}

// GetView @ 1441c2470

TArray<UE::FieldNotification::FFieldMulticastDelegate::FDelegateView,TSizedDefaultAllocator<32>_> *
__thiscall
UE::FieldNotification::FFieldMulticastDelegate::GetView
          (FFieldMulticastDelegate *this,
          TArray<UE::FieldNotification::FFieldMulticastDelegate::FDelegateView,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  UObject *pUVar9;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar10;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar3 = (this->Delegates).ArrayNum;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar4 = (this->Delegates).ArrayNum;
    this_00 = (FWeakObjectPtr *)(this->Delegates).AllocatorInstance.Data;
    pFVar10 = this_00 + (longlong)iVar4 * 6;
    while( true ) {
      if ((this->Delegates).ArrayNum != iVar4) {
        `TCheckedPointerIterator<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar10) break;
      if ((this_00[5].ObjectIndex != 0) && (this_00[4] != (FWeakObjectPtr)0x0)) {
        cVar6 = (**(code **)(*(longlong *)this_00[4] + 0x38))();
        if (cVar6 != '\0') {
          if ((this_00[5].ObjectIndex == 0) || (this_00[4] == (FWeakObjectPtr)0x0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)(*(longlong *)this_00[4] + 0x10))();
          }
          pUVar9 = FWeakObjectPtr::Get(this_00);
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
          iVar7 = this_00[2].ObjectIndex;
          uVar5 = *(undefined8 *)&this_00[2].ObjectSerialNumber;
          *(FWeakObjectPtr *)(pFVar2 + 8) = this_00[1];
          *(int *)(pFVar2 + 0x10) = iVar7;
          *(undefined8 *)(pFVar2 + 0x20) = uVar5;
          *(UObject **)pFVar2 = pUVar9;
          *(undefined8 *)(pFVar2 + 0x18) = uVar8;
        }
      }
      this_00 = this_00 + 6;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// Remove @ 1441c2710

FRemoveResult * __thiscall
UE::FieldNotification::FFieldMulticastDelegate::Remove
          (FFieldMulticastDelegate *this,FRemoveResult *__return_storage_ptr__,
          FFieldValueChangedDynamicDelegate *param_1)

{
  FName FVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FRemoveResult *pFVar7;
  UObject *pUVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  FInvocationElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  FNameEntryId local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  __return_storage_ptr__->Object = (UObject *)0x0;
  __return_storage_ptr__->bRemoved = false;
  __return_storage_ptr__->bHasOtherBoundDelegates = false;
  (__return_storage_ptr__->FieldId).FieldName.ComparisonIndex = 0;
  (__return_storage_ptr__->FieldId).FieldName.Number = 0;
  bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  if (!bVar5) {
    return __return_storage_ptr__;
  }
  uVar14 = (this->Delegates).ArrayNum - 1;
  if (-1 < (int)uVar14) {
    lVar17 = (longlong)(int)uVar14 * 0x30;
    do {
      uVar11 = 0;
      if ((int)uVar14 < (this->Delegates).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRemoveResult *)(*pcVar4)();
        return pFVar7;
      }
      pFVar13 = (FInvocationElement *)((this->Delegates).AllocatorInstance.Data + lVar17);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_58);
      FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x10;
      FVar1.Number = *(uint *)&param_1->field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if ((pFVar13->Key).DynamicName == FVar1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_40);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
        if ((((pUVar8 != (UObject *)0x0) && (*(int *)&(pFVar13->Delegate).field_0x8 != 0)) &&
            (plVar2 = *(longlong **)&pFVar13->Delegate, plVar2 != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(*plVar2 + 0x28))(plVar2,pUVar8), cVar6 != '\0')) {
          RemoveElement(this,pFVar13,uVar14,__return_storage_ptr__);
          break;
        }
      }
      lVar17 = lVar17 + -0x30;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  if ((__return_storage_ptr__->FieldId).FieldName != (FName)0x0) {
    iVar10 = 0;
    uVar14 = (this->Delegates).ArrayNum;
    FVar1 = (__return_storage_ptr__->FieldId).FieldName;
    uVar11 = uVar14;
    if ((int)(uint)this->AddedEmplaceAt <= (int)uVar14) {
      uVar11 = (uint)this->AddedEmplaceAt;
    }
    if (0 < (int)uVar11) {
      local_68 = FVar1.ComparisonIndex.Value;
      do {
        uVar16 = uVar11 >> 1;
        uVar3 = *(undefined8 *)
                 ((this->Delegates).AllocatorInstance.Data +
                 (longlong)(int)(uVar16 + iVar10) * 0x30 + 8);
        iVar9 = local_68.Value - (int)uVar3;
        if (iVar9 == 0) {
          iVar9 = FVar1.Number - (int)((ulonglong)uVar3 >> 0x20);
        }
        if (-1 < iVar9) {
          iVar10 = uVar16 + iVar10 + (uVar11 & 1);
        }
        uVar11 = uVar16;
      } while (uVar16 != 0);
    }
    uVar11 = iVar10 - 1;
    if ((-1 < (int)uVar11) && ((int)uVar11 < (int)uVar14)) {
      lVar17 = (longlong)(int)uVar11 * 0x30;
      do {
        uVar14 = 0;
        if ((int)uVar11 < (this->Delegates).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FRemoveResult *)(*pcVar4)();
          return pFVar7;
        }
        pFVar15 = (this->Delegates).AllocatorInstance.Data + lVar17;
        if (*(FName *)(pFVar15 + 8) != (__return_storage_ptr__->FieldId).FieldName) break;
        bVar5 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar15,
                           __return_storage_ptr__->Object);
        if ((((bVar5) && (*(int *)&pFVar15[0x28].field_0x0 != 0)) &&
            (*(longlong **)(pFVar15 + 0x20) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(pFVar15 + 0x20) + 0x38))(), cVar6 != '\0')) {
          __return_storage_ptr__->bHasOtherBoundDelegates = true;
          break;
        }
        lVar17 = lVar17 + -0x30;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    if (__return_storage_ptr__->bHasOtherBoundDelegates == false) {
      uVar12 = (ulonglong)this->AddedEmplaceAt;
      iVar10 = (this->Delegates).ArrayNum;
      if ((int)(uint)this->AddedEmplaceAt < iVar10) {
        lVar17 = uVar12 * 0x30;
        do {
          uVar11 = (uint)uVar12;
          uVar14 = 0;
          if ((int)uVar11 < iVar10) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FRemoveResult *)(*pcVar4)();
            return pFVar7;
          }
          pFVar15 = (this->Delegates).AllocatorInstance.Data + lVar17;
          if (((*(FName *)(pFVar15 + 8) == (__return_storage_ptr__->FieldId).FieldName) &&
              (bVar5 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                                 ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar15,
                                  __return_storage_ptr__->Object), bVar5)) &&
             ((*(int *)&pFVar15[0x28].field_0x0 != 0 &&
              ((*(longlong **)(pFVar15 + 0x20) != (longlong *)0x0 &&
               (cVar6 = (**(code **)(**(longlong **)(pFVar15 + 0x20) + 0x38))(), cVar6 != '\0'))))))
          {
            __return_storage_ptr__->bHasOtherBoundDelegates = true;
            return __return_storage_ptr__;
          }
          iVar10 = (this->Delegates).ArrayNum;
          uVar12 = (ulonglong)(uVar11 + 1);
          lVar17 = lVar17 + 0x30;
        } while ((int)(uVar11 + 1) < iVar10);
      }
    }
  }
  return __return_storage_ptr__;
}

// Remove @ 1441c2ac0

FRemoveResult * __thiscall
UE::FieldNotification::FFieldMulticastDelegate::Remove
          (FFieldMulticastDelegate *this,FRemoveResult *__return_storage_ptr__,
          FDelegateHandle param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FRemoveResult *pFVar6;
  ulong64 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  FInvocationElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 local_48 [16];
  FName local_38;
  int local_30;
  
  __return_storage_ptr__->Object = (UObject *)0x0;
  (__return_storage_ptr__->FieldId).FieldName.ComparisonIndex = 0;
  (__return_storage_ptr__->FieldId).FieldName.Number = 0;
  __return_storage_ptr__->bRemoved = false;
  __return_storage_ptr__->bHasOtherBoundDelegates = false;
  if (param_1.ID == 0) {
    return __return_storage_ptr__;
  }
  uVar13 = (this->Delegates).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar16 = (longlong)(int)uVar13 * 0x30;
    do {
      uVar10 = 0;
      if ((int)uVar13 < (this->Delegates).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FRemoveResult *)(*pcVar3)();
        return pFVar6;
      }
      pFVar12 = (FInvocationElement *)((this->Delegates).AllocatorInstance.Data + lVar16);
      if (((*(int *)&(pFVar12->Delegate).field_0x8 != 0) &&
          (plVar1 = *(longlong **)&pFVar12->Delegate, plVar1 != (longlong *)0x0)) &&
         (puVar7 = (ulong64 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_48), *puVar7 == param_1.ID)
         ) {
        RemoveElement(this,pFVar12,uVar13,__return_storage_ptr__);
        break;
      }
      lVar16 = lVar16 + -0x30;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  if ((__return_storage_ptr__->FieldId).FieldName != (FName)0x0) {
    local_30 = (__return_storage_ptr__->FieldId).BitNumber;
    iVar9 = 0;
    uVar13 = (this->Delegates).ArrayNum;
    local_38 = (__return_storage_ptr__->FieldId).FieldName;
    uVar10 = uVar13;
    if ((int)(uint)this->AddedEmplaceAt <= (int)uVar13) {
      uVar10 = (uint)this->AddedEmplaceAt;
    }
    if (0 < (int)uVar10) {
      do {
        uVar15 = uVar10 >> 1;
        uVar2 = *(undefined8 *)
                 ((this->Delegates).AllocatorInstance.Data +
                 (longlong)(int)(uVar15 + iVar9) * 0x30 + 8);
        iVar8 = local_38.ComparisonIndex.Value - (int)uVar2;
        if (iVar8 == 0) {
          iVar8 = local_38.Number - (int)((ulonglong)uVar2 >> 0x20);
        }
        if (-1 < iVar8) {
          iVar9 = uVar15 + iVar9 + (uVar10 & 1);
        }
        uVar10 = uVar15;
      } while (uVar15 != 0);
    }
    uVar10 = iVar9 - 1;
    if ((-1 < (int)uVar10) && ((int)uVar10 < (int)uVar13)) {
      lVar16 = (longlong)(int)uVar10 * 0x30;
      do {
        uVar13 = 0;
        if ((int)uVar10 < (this->Delegates).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FRemoveResult *)(*pcVar3)();
          return pFVar6;
        }
        pFVar14 = (this->Delegates).AllocatorInstance.Data + lVar16;
        if (*(FName *)(pFVar14 + 8) != (__return_storage_ptr__->FieldId).FieldName) break;
        bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar14,
                           __return_storage_ptr__->Object);
        if ((((bVar4) && (*(int *)&pFVar14[0x28].field_0x0 != 0)) &&
            (*(longlong **)(pFVar14 + 0x20) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(pFVar14 + 0x20) + 0x38))(), cVar5 != '\0')) {
          __return_storage_ptr__->bHasOtherBoundDelegates = true;
          break;
        }
        lVar16 = lVar16 + -0x30;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    if (__return_storage_ptr__->bHasOtherBoundDelegates == false) {
      uVar11 = (ulonglong)this->AddedEmplaceAt;
      iVar9 = (this->Delegates).ArrayNum;
      if ((int)(uint)this->AddedEmplaceAt < iVar9) {
        lVar16 = uVar11 * 0x30;
        do {
          uVar10 = (uint)uVar11;
          uVar13 = 0;
          if ((int)uVar10 < iVar9) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FRemoveResult *)(*pcVar3)();
            return pFVar6;
          }
          pFVar14 = (this->Delegates).AllocatorInstance.Data + lVar16;
          if (((*(FName *)(pFVar14 + 8) == (__return_storage_ptr__->FieldId).FieldName) &&
              (bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                                 ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar14,
                                  __return_storage_ptr__->Object), bVar4)) &&
             ((*(int *)&pFVar14[0x28].field_0x0 != 0 &&
              ((*(longlong **)(pFVar14 + 0x20) != (longlong *)0x0 &&
               (cVar5 = (**(code **)(**(longlong **)(pFVar14 + 0x20) + 0x38))(), cVar5 != '\0'))))))
          {
            __return_storage_ptr__->bHasOtherBoundDelegates = true;
            return __return_storage_ptr__;
          }
          iVar9 = (this->Delegates).ArrayNum;
          uVar11 = (ulonglong)(uVar10 + 1);
          lVar16 = lVar16 + 0x30;
        } while ((int)(uVar10 + 1) < iVar9);
      }
    }
  }
  return __return_storage_ptr__;
}

// RemoveAll @ 1441c2e00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FRemoveAllResult * __thiscall
UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
          (FFieldMulticastDelegate *this,FRemoveAllResult *__return_storage_ptr__,UObject *param_1,
          void *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FRemoveAllResult *pFVar6;
  int iVar7;
  FInvocationElement *pFVar8;
  uint uVar9;
  FInvocationElement *pFVar10;
  FScriptContainerElement *_Dst;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  UObject *local_res18;
  void *local_res20;
  FRemoveAllResult *local_60;
  UObject *local_58;
  
  __return_storage_ptr__->RemoveCount = 0;
  (__return_storage_ptr__->HasFields).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (__return_storage_ptr__->HasFields).NumBits = 0;
  (__return_storage_ptr__->HasFields).MaxBits = 0x80;
  local_res18 = param_1;
  local_res20 = param_2;
  local_60 = __return_storage_ptr__;
  local_58 = param_1;
  if (this->DelegateLockCount < 1) {
    uVar11 = (this->Delegates).ArrayNum - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 * 0x30;
      do {
        uVar9 = ~uVar11 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar11 < (this->Delegates).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FRemoveAllResult *)(*pcVar2)();
          return pFVar6;
        }
        pFVar8 = (FInvocationElement *)((this->Delegates).AllocatorInstance.Data + lVar12);
        local_res10 = 0;
        if (((*(int *)&(pFVar8->Delegate).field_0x8 == 0) ||
            (*(longlong **)&pFVar8->Delegate == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)&pFVar8->Delegate + 0x30))(), cVar4 != '\0')) {
          uVar5 = 0;
          if ((int)uVar11 < (this->Delegates).ArrayNum) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FRemoveAllResult *)(*pcVar2)();
            return pFVar6;
          }
          _Dst = (this->Delegates).AllocatorInstance.Data + lVar12;
          if ((*(int *)(_Dst + 0x28) != 0) && (*(undefined8 **)(_Dst + 0x20) != (undefined8 *)0x0))
          {
            (**(code **)**(undefined8 **)(_Dst + 0x20))();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)(_Dst + 0x20),0,0,0x10);
            *(undefined4 *)(_Dst + 0x28) = 0;
          }
          if (*(void **)(_Dst + 0x20) != (void *)0x0) {
            FMemory::Free(*(void **)(_Dst + 0x20));
          }
          iVar7 = (this->Delegates).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + 0x30,(longlong)iVar7 * 0x30);
          }
          piVar1 = &(this->Delegates).ArrayNum;
          *piVar1 = *piVar1 + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,(ForAnyElementType *)this,(this->Delegates).ArrayNum,
                     &(this->Delegates).ArrayMax);
        }
        else {
          bVar3 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar8,local_res18);
          if (bVar3) {
            if ((((local_res20 == (void *)0x0) || (*(int *)&(pFVar8->Delegate).field_0x8 == 0)) ||
                (*(longlong **)&pFVar8->Delegate == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(**(longlong **)&pFVar8->Delegate + 0x28))(), cVar4 == '\0')) {
              `UE::FieldNotification::FFieldMulticastDelegate::RemoveAll'::__l2::<lambda_1>::
              operator()(&local_60,pFVar8);
            }
            else {
              TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
              ::RemoveAt(&this->Delegates,uVar11,Default);
              __return_storage_ptr__->RemoveCount = __return_storage_ptr__->RemoveCount + 1;
            }
          }
        }
        lVar12 = lVar12 + -0x30;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    this->CompactionCount = 0;
  }
  else {
    iVar7 = (this->Delegates).ArrayNum;
    pFVar8 = (FInvocationElement *)(this->Delegates).AllocatorInstance.Data;
    pFVar10 = pFVar8 + iVar7;
    while( true ) {
      if ((this->Delegates).ArrayNum != iVar7) {
        `TCheckedPointerIterator<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar10) break;
      bVar3 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar8,local_res18);
      if (bVar3) {
        if ((((param_2 == (void *)0x0) || (*(int *)&(pFVar8->Delegate).field_0x8 == 0)) ||
            (*(longlong **)&pFVar8->Delegate == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)&pFVar8->Delegate + 0x28))(), cVar4 == '\0')) {
          if (((*(int *)&(pFVar8->Delegate).field_0x8 != 0) &&
              (*(longlong **)&pFVar8->Delegate != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(**(longlong **)&pFVar8->Delegate + 0x30))(), cVar4 == '\0')) {
            `UE::FieldNotification::FFieldMulticastDelegate::RemoveAll'::__l2::<lambda_1>::
            operator()(&local_60,pFVar8);
          }
          goto LAB_1441c2f32;
        }
        if ((*(int *)&(pFVar8->Delegate).field_0x8 != 0) &&
           (*(undefined8 **)&pFVar8->Delegate != (undefined8 *)0x0)) {
          (**(code **)**(undefined8 **)&pFVar8->Delegate)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&pFVar8->Delegate,0,0,0x10);
          *(undefined4 *)&(pFVar8->Delegate).field_0x8 = 0;
        }
        this->CompactionCount = this->CompactionCount + 1;
        __return_storage_ptr__->RemoveCount = __return_storage_ptr__->RemoveCount + 1;
        pFVar8 = pFVar8 + 1;
      }
      else {
LAB_1441c2f32:
        pFVar8 = pFVar8 + 1;
      }
    }
  }
  return __return_storage_ptr__;
}

// RemoveAll @ 1441c3150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FRemoveAllResult * __thiscall
UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
          (FFieldMulticastDelegate *this,FRemoveAllResult *__return_storage_ptr__,UObject *param_1,
          FFieldId *param_2,void *param_3)

{
  code *pcVar1;
  FFieldId *pFVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FRemoveAllResult *pFVar6;
  int iVar7;
  int *piVar8;
  FInvocationElement *pFVar9;
  uint uVar10;
  FInvocationElement *pFVar11;
  FScriptContainerElement *_Dst;
  uint uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  UObject *local_res18;
  FFieldId *local_res20;
  FRemoveAllResult *local_60;
  UObject *local_58;
  
  __return_storage_ptr__->RemoveCount = 0;
  (__return_storage_ptr__->HasFields).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (__return_storage_ptr__->HasFields).NumBits = 0;
  (__return_storage_ptr__->HasFields).MaxBits = 0x80;
  local_res18 = param_1;
  local_res20 = param_2;
  local_60 = __return_storage_ptr__;
  local_58 = param_1;
  if (this->DelegateLockCount < 1) {
    uVar12 = (this->Delegates).ArrayNum - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 * 0x30;
      do {
        uVar10 = ~uVar12 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar12 < (this->Delegates).ArrayNum) {
          uVar5 = uVar10;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FRemoveAllResult *)(*pcVar1)();
            return pFVar6;
          }
        }
        pFVar9 = (FInvocationElement *)((this->Delegates).AllocatorInstance.Data + lVar13);
        local_res10 = 0;
        if ((*(int *)&(pFVar9->Delegate).field_0x8 == 0) ||
           (*(longlong **)&pFVar9->Delegate == (longlong *)0x0)) {
LAB_1441c33b5:
          uVar5 = 0;
          if ((int)uVar12 < (this->Delegates).ArrayNum) {
            uVar5 = uVar10;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              pFVar6 = (FRemoveAllResult *)(*pcVar1)();
              return pFVar6;
            }
          }
          _Dst = (this->Delegates).AllocatorInstance.Data + lVar13;
          if ((*(int *)(_Dst + 0x28) != 0) && (*(undefined8 **)(_Dst + 0x20) != (undefined8 *)0x0))
          {
            (**(code **)**(undefined8 **)(_Dst + 0x20))();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)(_Dst + 0x20),0,0,0x10);
            *(undefined4 *)(_Dst + 0x28) = 0;
          }
          if (*(void **)(_Dst + 0x20) != (void *)0x0) {
            FMemory::Free(*(void **)(_Dst + 0x20));
          }
          iVar7 = (this->Delegates).ArrayNum + ~uVar12;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + 0x30,(longlong)iVar7 * 0x30);
          }
          piVar8 = &(this->Delegates).ArrayNum;
          *piVar8 = *piVar8 + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,(ForAnyElementType *)this,(this->Delegates).ArrayNum,
                     &(this->Delegates).ArrayMax);
        }
        else {
          cVar4 = (**(code **)(**(longlong **)&pFVar9->Delegate + 0x30))();
          if (cVar4 != '\0') goto LAB_1441c33b5;
          bVar3 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar9,local_res18);
          if (bVar3) {
            if (((((pFVar9->Key).Id.FieldName == local_res20->FieldName) && (param_3 != (void *)0x0)
                 ) && (*(int *)&(pFVar9->Delegate).field_0x8 != 0)) &&
               (*(longlong **)&pFVar9->Delegate != (longlong *)0x0)) {
              cVar4 = (**(code **)(**(longlong **)&pFVar9->Delegate + 0x28))();
              if (cVar4 != '\0') {
                TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
                ::RemoveAt(&this->Delegates,uVar12,Default);
                __return_storage_ptr__->RemoveCount = __return_storage_ptr__->RemoveCount + 1;
                goto LAB_1441c347f;
              }
            }
            `UE::FieldNotification::FFieldMulticastDelegate::RemoveAll'::__l2::<lambda_1>::
            operator()(&local_60,pFVar9);
          }
        }
LAB_1441c347f:
        lVar13 = lVar13 + -0x30;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    this->CompactionCount = 0;
  }
  else {
    iVar7 = (this->Delegates).ArrayNum;
    pFVar9 = (FInvocationElement *)(this->Delegates).AllocatorInstance.Data;
    piVar8 = (int *)&(pFVar9->Delegate).field_0x8;
    pFVar11 = pFVar9 + iVar7;
    while( true ) {
      pFVar2 = local_res20;
      if ((this->Delegates).ArrayNum != iVar7) {
        `TCheckedPointerIterator<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar11) break;
      bVar3 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar9,local_res18);
      if (bVar3) {
        if ((*(FName *)(piVar8 + -8) == pFVar2->FieldName) && (param_3 != (void *)0x0)) {
          if (*piVar8 == 0) goto LAB_1441c327e;
          if (*(longlong **)(piVar8 + -2) != (longlong *)0x0) {
            cVar4 = (**(code **)(**(longlong **)(piVar8 + -2) + 0x28))();
            if (cVar4 != '\0') {
              if ((*piVar8 != 0) && (*(undefined8 **)(piVar8 + -2) != (undefined8 *)0x0)) {
                (**(code **)**(undefined8 **)(piVar8 + -2))();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)(piVar8 + -2),0,0,0x10);
                *piVar8 = 0;
              }
              this->CompactionCount = this->CompactionCount + 1;
              __return_storage_ptr__->RemoveCount = __return_storage_ptr__->RemoveCount + 1;
              goto LAB_1441c327e;
            }
          }
        }
        if ((*piVar8 != 0) && (*(longlong **)(piVar8 + -2) != (longlong *)0x0)) {
          cVar4 = (**(code **)(**(longlong **)(piVar8 + -2) + 0x30))();
          if (cVar4 == '\0') {
            `UE::FieldNotification::FFieldMulticastDelegate::RemoveAll'::__l2::<lambda_1>::
            operator()(&local_60,pFVar9);
          }
        }
      }
LAB_1441c327e:
      pFVar9 = pFVar9 + 1;
      piVar8 = piVar8 + 0xc;
    }
  }
  return __return_storage_ptr__;
}

// RemoveElement @ 1441c36c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::FieldNotification::FFieldMulticastDelegate::RemoveElement
          (FFieldMulticastDelegate *this,FInvocationElement *param_1,int param_2,
          FRemoveResult *param_3)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  param_3->Object = pUVar3;
  (param_3->FieldId).FieldName = (param_1->Key).Id.FieldName;
  (param_3->FieldId).BitNumber = (param_1->Key).Id.BitNumber;
  if ((*(int *)&(param_1->Delegate).field_0x8 != 0) &&
     (*(longlong **)&param_1->Delegate != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)&param_1->Delegate + 0x38))();
    if (cVar1 != '\0') {
      bVar2 = true;
      goto LAB_1441c371b;
    }
  }
  bVar2 = false;
LAB_1441c371b:
  param_3->bRemoved = bVar2;
  if (this->DelegateLockCount < 1) {
    TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
    ::RemoveAt(&this->Delegates,param_2,Default);
  }
  else {
    if ((*(int *)&(param_1->Delegate).field_0x8 != 0) &&
       (*(undefined8 **)&param_1->Delegate != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)&param_1->Delegate)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&param_1->Delegate,0,0,0x10);
      *(undefined4 *)&(param_1->Delegate).field_0x8 = 0;
    }
    this->CompactionCount = this->CompactionCount + 1;
  }
  return;
}

// RemoveFrom @ 1441c3790

FRemoveFromResult __thiscall
UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom
          (FFieldMulticastDelegate *this,UObject *param_1,FFieldId *param_2,
          FFieldValueChangedDynamicDelegate *param_3)

{
  bool bVar1;
  TScriptDelegate<FNotThreadSafeDelegateMode> *in_stack_00000028;
  bool local_58;
  bool local_57 [15];
  FFieldId local_48;
  <lambda_1> local_38;
  
  local_57[0] = false;
  local_58 = false;
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(in_stack_00000028);
  if (bVar1) {
    local_48.FieldName.ComparisonIndex.Value = *(uint *)&param_3->field_0x0;
    local_48.FieldName.Number = *(uint *)&param_3->field_0x4;
    local_38.bRemoved = local_57;
    local_38.bFieldPresent = &local_58;
    local_48.BitNumber = *(int *)&param_3->field_0x8;
    local_38.Self = this;
    local_38.InObject = (UObject *)param_2;
    RemoveFrom<_UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom_::__l2::<lambda_1>_>
              (this,&local_38,&local_48,&local_58);
  }
  *(bool *)param_1 = local_57[0];
  param_1->field_0x1 = local_58;
  return SUB82(param_1,0);
}

// RemoveFrom @ 1441c3860

FRemoveFromResult __thiscall
UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom
          (FFieldMulticastDelegate *this,UObject *param_1,FFieldId *param_2,FDelegateHandle param_3)

{
  longlong in_stack_00000028;
  bool local_58;
  bool local_57 [15];
  FFieldId local_48;
  <lambda_1>_conflict local_38;
  
  local_57[0] = false;
  local_58 = false;
  if (in_stack_00000028 == 0) {
    *(undefined2 *)param_1 = 0;
    return SUB82(param_1,0);
  }
  local_48.FieldName = *(FName *)param_3.ID;
  local_38.InDynamicDelegate = (FFieldValueChangedDynamicDelegate *)&stack0x00000028;
  local_38.bRemoved = local_57;
  local_38.bFieldPresent = &local_58;
  local_48.BitNumber = *(int *)(param_3.ID + 8);
  local_38.Self = this;
  local_38.InObject = (UObject *)param_2;
  RemoveFrom<_UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom_::__l2::<lambda_1>_>
            (this,&local_38,&local_48,&local_58);
  *(bool *)param_1 = local_57[0];
  param_1->field_0x1 = local_58;
  return SUB82(param_1,0);
}

// Reset @ 1441c3900

void __thiscall UE::FieldNotification::FFieldMulticastDelegate::Reset(FFieldMulticastDelegate *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  short sVar5;
  FInvocationElement *pFVar6;
  FInvocationElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar6 = (FInvocationElement *)(this->Delegates).AllocatorInstance.Data;
  iVar2 = (this->Delegates).ArrayNum;
  if (0 < this->DelegateLockCount) {
    pFVar7 = pFVar6 + iVar2;
    while( true ) {
      if ((this->Delegates).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      if (((*(int *)&(pFVar6->Delegate).field_0x8 == 0) ||
          (*(longlong **)&pFVar6->Delegate == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)&pFVar6->Delegate + 0x38))(), cVar4 == '\0')) {
        sVar5 = 0;
      }
      else {
        sVar5 = 1;
      }
      this->CompactionCount = this->CompactionCount + sVar5;
      if ((*(int *)&(pFVar6->Delegate).field_0x8 != 0) &&
         (puVar3 = *(undefined8 **)&pFVar6->Delegate, puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&pFVar6->Delegate,0,0,0x10);
        *(undefined4 *)&(pFVar6->Delegate).field_0x8 = 0;
      }
      pFVar6 = pFVar6 + 1;
    }
    return;
  }
  piVar1 = &(this->Delegates).ArrayMax;
  if ((this->Delegates).ArrayMax < 0) {
    DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
              (pFVar6,iVar2);
    (this->Delegates).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)this,0,piVar1);
    }
    this->DelegateLockCount = 0;
    this->CompactionCount = 0;
    this->AddedEmplaceAt = 0xffff;
    return;
  }
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            (pFVar6,iVar2);
  (this->Delegates).ArrayNum = 0;
  this->DelegateLockCount = 0;
  this->CompactionCount = 0;
  this->AddedEmplaceAt = 0xffff;
  return;
}

// UpperBound @ 1441c3b00

int __thiscall
UE::FieldNotification::FFieldMulticastDelegate::UpperBound
          (FFieldMulticastDelegate *this,FInvocationKey *param_1)

{
  uint uVar1;
  FName FVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = 0;
  uVar1 = (this->Delegates).ArrayNum;
  if ((int)(uint)this->AddedEmplaceAt <= (int)uVar1) {
    uVar1 = (uint)this->AddedEmplaceAt;
  }
  if (0 < (int)uVar1) {
    FVar2 = (param_1->Id).FieldName;
    do {
      uVar5 = uVar1 >> 1;
      uVar3 = *(undefined8 *)
               ((this->Delegates).AllocatorInstance.Data + (longlong)(int)(uVar5 + iVar4) * 0x30 + 8
               );
      iVar6 = FVar2.ComparisonIndex.Value.Value - (int)uVar3;
      if (iVar6 == 0) {
        iVar6 = FVar2.Number - (int)((ulonglong)uVar3 >> 0x20);
      }
      if (-1 < iVar6) {
        iVar4 = uVar5 + iVar4 + (uVar1 & 1);
      }
      uVar1 = uVar5;
    } while (uVar5 != 0);
  }
  return iVar4;
}

