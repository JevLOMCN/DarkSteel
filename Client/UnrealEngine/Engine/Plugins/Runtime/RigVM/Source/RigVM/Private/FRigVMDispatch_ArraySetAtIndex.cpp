// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1259b0

UScriptStruct * __cdecl FRigVMDispatch_ArraySetAtIndex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetAtIndex.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetAtIndex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArraySetAtIndex,(UObject *)pUVar1,
                         L"RigVMDispatch_ArraySetAtIndex");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetAtIndex.OuterSingleton;
}

// GetOpCode @ 14a125a10

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall
FRigVMDispatch_ArraySetAtIndex::GetOpCode(FRigVMDispatch_ArraySetAtIndex *this)

{
  return ArraySetAtIndex;
}

// GetArgumentNameForOperandIndex @ 14a125a90

FName __thiscall
FRigVMDispatch_ArraySetAtIndex::GetArgumentNameForOperandIndex
          (FRigVMDispatch_ArraySetAtIndex *this,int param_1,int param_2,
          FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ArgumentNames[0] = FRigVMDispatch_ArrayBase::ArrayName;
      ArgumentNames[1] = FRigVMDispatch_ArrayBase::IndexName;
      ArgumentNames[2] = FRigVMDispatch_ArrayBase::ElementName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                       ,0x286,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a125d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArraySetAtIndex::GetArgumentInfos
          (FRigVMDispatch_ArraySetAtIndex *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  FRigVMTemplateArgumentInfo *pFVar7;
  longlong *plVar8;
  FName *pFVar9;
  undefined1 auStack_98 [32];
  FName local_78 [2];
  undefined1 local_68 [64];
  ForAnyElementType local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
    pFVar7 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_68,local_78,IO);
    iVar6 = *(int *)&this->field_0xa0;
    if (iVar6 == *(int *)&this->field_0xa4) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar6 + 1;
    pFVar9 = (FName *)(*(longlong *)puVar1 + (longlong)iVar6 * 0x50);
    *pFVar9 = pFVar7->Name;
    *(ERigVMPinDirection *)&pFVar9[1].ComparisonIndex.Value = pFVar7->Direction;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x4;
    pFVar9[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x0;
    pFVar9[2].Number = uVar5;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x2c;
    pFVar9[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x28;
    pFVar9[7].Number = uVar5;
    *(undefined8 *)&(pFVar7->FactoryCallback).field_0x28 = 0;
    uVar2 = *(uint *)&(pFVar7->FactoryCallback).field_0x14;
    uVar3 = *(uint *)&(pFVar7->FactoryCallback).field_0x18;
    uVar4 = *(uint *)&(pFVar7->FactoryCallback).field_0x1c;
    pFVar9[4].ComparisonIndex.Value = *(uint *)&(pFVar7->FactoryCallback).field_0x10;
    pFVar9[4].Number = uVar2;
    pFVar9[5].ComparisonIndex.Value = uVar3;
    pFVar9[5].Number = uVar4;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x24;
    pFVar9[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x20;
    pFVar9[6].Number = uVar5;
    if (pFVar9[2] != (FName)0x0) {
      *(undefined8 *)&pFVar7->FactoryCallback = 0;
    }
    pFVar9[8].ComparisonIndex = 0;
    pFVar9[8].Number = 0;
    pFVar9[8] = (FName)(pFVar7->TypeIndices).AllocatorInstance.Data;
    (pFVar7->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[9].ComparisonIndex.Value = (pFVar7->TypeIndices).ArrayNum;
    pFVar9[9].Number = (pFVar7->TypeIndices).ArrayMax;
    (pFVar7->TypeIndices).ArrayNum = 0;
    (pFVar7->TypeIndices).ArrayMax = 0;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_68._16_8_ != 0) {
      plVar8 = (longlong *)(local_68 + 0x20);
      if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_68._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::IndexName);
    pFVar7 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_68,local_78,Input);
    iVar6 = *(int *)&this->field_0xa0;
    if (iVar6 == *(int *)&this->field_0xa4) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar6 + 1;
    pFVar9 = (FName *)(*(longlong *)puVar1 + (longlong)iVar6 * 0x50);
    *pFVar9 = pFVar7->Name;
    *(ERigVMPinDirection *)&pFVar9[1].ComparisonIndex.Value = pFVar7->Direction;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x4;
    pFVar9[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x0;
    pFVar9[2].Number = uVar5;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x2c;
    pFVar9[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x28;
    pFVar9[7].Number = uVar5;
    *(undefined8 *)&(pFVar7->FactoryCallback).field_0x28 = 0;
    uVar2 = *(uint *)&(pFVar7->FactoryCallback).field_0x14;
    uVar3 = *(uint *)&(pFVar7->FactoryCallback).field_0x18;
    uVar4 = *(uint *)&(pFVar7->FactoryCallback).field_0x1c;
    pFVar9[4].ComparisonIndex.Value = *(uint *)&(pFVar7->FactoryCallback).field_0x10;
    pFVar9[4].Number = uVar2;
    pFVar9[5].ComparisonIndex.Value = uVar3;
    pFVar9[5].Number = uVar4;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x24;
    pFVar9[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x20;
    pFVar9[6].Number = uVar5;
    if (pFVar9[2] != (FName)0x0) {
      *(undefined8 *)&pFVar7->FactoryCallback = 0;
    }
    pFVar9[8].ComparisonIndex = 0;
    pFVar9[8].Number = 0;
    pFVar9[8] = (FName)(pFVar7->TypeIndices).AllocatorInstance.Data;
    (pFVar7->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[9].ComparisonIndex.Value = (pFVar7->TypeIndices).ArrayNum;
    pFVar9[9].Number = (pFVar7->TypeIndices).ArrayMax;
    (pFVar7->TypeIndices).ArrayNum = 0;
    (pFVar7->TypeIndices).ArrayMax = 0;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_68._16_8_ != 0) {
      plVar8 = (longlong *)(local_68 + 0x20);
      if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_68._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    pFVar7 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_68,local_78,Input);
    iVar6 = *(int *)&this->field_0xa0;
    if (iVar6 == *(int *)&this->field_0xa4) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar6 + 1;
    pFVar9 = (FName *)(*(longlong *)puVar1 + (longlong)iVar6 * 0x50);
    *pFVar9 = pFVar7->Name;
    *(ERigVMPinDirection *)&pFVar9[1].ComparisonIndex.Value = pFVar7->Direction;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x4;
    pFVar9[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x0;
    pFVar9[2].Number = uVar5;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x2c;
    pFVar9[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x28;
    pFVar9[7].Number = uVar5;
    *(undefined8 *)&(pFVar7->FactoryCallback).field_0x28 = 0;
    uVar2 = *(uint *)&(pFVar7->FactoryCallback).field_0x14;
    uVar3 = *(uint *)&(pFVar7->FactoryCallback).field_0x18;
    uVar4 = *(uint *)&(pFVar7->FactoryCallback).field_0x1c;
    pFVar9[4].ComparisonIndex.Value = *(uint *)&(pFVar7->FactoryCallback).field_0x10;
    pFVar9[4].Number = uVar2;
    pFVar9[5].ComparisonIndex.Value = uVar3;
    pFVar9[5].Number = uVar4;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x24;
    pFVar9[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x20;
    pFVar9[6].Number = uVar5;
    if (pFVar9[2] != (FName)0x0) {
      *(undefined8 *)&pFVar7->FactoryCallback = 0;
    }
    pFVar9[8].ComparisonIndex = 0;
    pFVar9[8].Number = 0;
    pFVar9[8] = (FName)(pFVar7->TypeIndices).AllocatorInstance.Data;
    (pFVar7->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[9].ComparisonIndex.Value = (pFVar7->TypeIndices).ArrayNum;
    pFVar9[9].Number = (pFVar7->TypeIndices).ArrayMax;
    (pFVar7->TypeIndices).ArrayNum = 0;
    (pFVar7->TypeIndices).ArrayMax = 0;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_68._16_8_ != 0) {
      plVar8 = (longlong *)(local_68 + 0x20);
      if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_68._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a126190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_ArraySetAtIndex::OnNewArgumentType
          (FRigVMDispatch_ArraySetAtIndex *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar3;
  FRigVMRegistry_NoLock *pFVar4;
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> *piVar5;
  undefined1 auStack_148 [32];
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  FName local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [16];
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_b8;
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_a8;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_80;
  undefined1 *local_70;
  TRigVMTypeIndex *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_50;
  undefined1 *local_40;
  TRigVMTypeIndex *local_38;
  undefined1 *local_30;
  TRigVMTypeIndex *local_28;
  FName *local_20;
  
  local_20 = (FName *)(__security_cookie.value ^ (ulonglong)auStack_148);
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  if (*param_1 != local_128) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    if (*param_1 != local_120) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgumentName == ArrayName || InArgumentName == ElementName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                         ,0x297,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  if (*param_1 == local_118) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
    local_80.Key = &local_110;
    local_80.Value = param_2;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::IndexName);
    local_70 = local_108;
    local_68 = &RigVMTypeUtils::TypeIndex::Int32;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    pFVar4 = FRigVMRegistryHandle::operator->(param_3);
    local_d0 = param_2->Index;
    local_d8 = param_2->Name;
    local_58 = (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,local_98,&local_d8);
    local_60 = local_100;
    local_b8._First = &local_80;
    piVar5 = &local_b8;
    local_b8._Last = &local_50;
  }
  else {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
    pFVar4 = FRigVMRegistryHandle::operator->(param_3);
    local_c0 = param_2->Index;
    local_c8 = param_2->Name;
    local_50.Value =
         (TRigVMTypeIndex *)(**(code **)(pFVar4->_padding_ + 0x148))(pFVar4,local_8c,&local_c8);
    local_50.Key = &local_f8;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::IndexName);
    local_40 = local_f0;
    local_38 = &RigVMTypeUtils::TypeIndex::Int32;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    local_30 = local_e8;
    piVar5 = &local_a8;
    local_a8._First = &local_50;
    local_a8._Last = (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)&local_20;
    local_28 = param_2;
  }
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
            (__return_storage_ptr__,piVar5);
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a126480

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArraySetAtIndex::GetDispatchFunctionImpl
          (FRigVMDispatch_ArraySetAtIndex *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19b460

void __cdecl
FRigVMDispatch_ArraySetAtIndex::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int *piVar8;
  uchar *puVar9;
  FRigVMMemoryHandle *pFVar10;
  FProperty *pFVar11;
  ulonglong uVar12;
  FProperty *pFVar13;
  FProperty *pFVar14;
  int local_res10 [2];
  
  pFVar13 = (FProperty *)0x0;
  if ((param_2->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar14 = param_2->DataPtr->Property;
  if (((pFVar14 == (FProperty *)0x0) || ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar14 = pFVar13,
        bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar6 = pFVar14[1]._padding_;
  puVar3 = (ulonglong *)param_2->DataPtr->Ptr;
  (**(code **)(*(longlong *)pFVar14[1]._padding_ + 0x168))();
  lVar4 = pFVar14[1]._padding_;
  iVar1 = *(int *)(lVar4 + 0x34);
  if ((iVar1 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((lVar4 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar2 = param_2->ArrayNum;
  if ((iVar2 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar8 = (int *)pFVar10[1].Ptr;
  }
  else {
    piVar8 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  local_res10[0] = *piVar8;
  if ((iVar2 < 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar10[2].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  bVar7 = FRigVMExtendedExecuteContext::IsValidArrayIndex(param_1,local_res10,(int)puVar3[1]);
  if (bVar7) {
    if ((int)puVar3[1] != 0) {
      uVar12 = *puVar3;
      if (((lVar6 & 1) != 0) && ((uVar12 & 1) != 0)) {
        uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar3;
      }
      pFVar13 = (FProperty *)((longlong)iVar1 * (longlong)local_res10[0] + uVar12);
    }
    pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
    if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
      pFVar11 = pFVar10->Property;
    }
    else {
      pFVar11 = FRigVMPropertyPath::GetTailProperty(pFVar10->PropertyPath);
    }
    URigVMMemoryStorage::CopyProperty
              ((FProperty *)pFVar14[1]._padding_,(uchar *)pFVar13,pFVar11,puVar9);
  }
  return;
}

