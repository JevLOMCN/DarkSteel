// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1230c0

UScriptStruct * __cdecl FRigVMDispatch_ArraySetNum::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetNum.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetNum.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArraySetNum,(UObject *)pUVar1,
                         L"RigVMDispatch_ArraySetNum");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetNum.OuterSingleton;
}

// GetOpCode @ 14a123220

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall FRigVMDispatch_ArraySetNum::GetOpCode(FRigVMDispatch_ArraySetNum *this)

{
  return ArraySetNum;
}

// GetArgumentNameForOperandIndex @ 14a1232b0

FName __thiscall
FRigVMDispatch_ArraySetNum::GetArgumentNameForOperandIndex
          (FRigVMDispatch_ArraySetNum *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

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
      ArgumentNames[1] = FRigVMDispatch_ArrayBase::NumName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                       ,0x1a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a123390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArraySetNum::GetArgumentInfos
          (FRigVMDispatch_ArraySetNum *this,FRigVMRegistryHandle *param_1)

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
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::NumName);
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

// OnNewArgumentType @ 14a1236a0

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_ArraySetNum::OnNewArgumentType
          (FRigVMDispatch_ArraySetNum *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar3;
  FName local_res10;
  FName local_res18;
  undefined1 local_res20 [8];
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_48;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_38;
  undefined1 *local_28;
  TRigVMTypeIndex *local_20;
  
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  if (*param_1 != local_res10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgumentName == ArrayName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                       ,0x1b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  local_38.Key = &local_res18;
  local_38.Value = param_2;
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::NumName);
  local_28 = local_res20;
  local_20 = &RigVMTypeUtils::TypeIndex::Int32;
  local_48._First = &local_38;
  local_48._Last =
       (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)&stack0xffffffffffffffe8;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
            (__return_storage_ptr__,&local_48);
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a1237d0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArraySetNum::GetDispatchFunctionImpl
          (FRigVMDispatch_ArraySetNum *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19b720

void __cdecl
FRigVMDispatch_ArraySetNum::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  int iVar3;
  FScriptArrayHelper_u_8 FVar4;
  FRigVMMemoryHandle *pFVar5;
  code *pcVar6;
  bool bVar7;
  int *piVar8;
  FProperty *pFVar9;
  int iVar10;
  <lambda_1> local_38;
  FScriptArrayHelper local_28;
  
  if ((param_2->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = param_2->DataPtr->Property;
  if (((pFVar9 == (FProperty *)0x0) || ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x15 & 1) == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx"),
     pFVar9 = (FProperty *)0x0, bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar1 = (EArrayPropertyFlags)pFVar9[1]._padding_;
  FVar4 = *(FScriptArrayHelper_u_8 *)param_2->DataPtr;
  local_28.ElementAlignment = (**(code **)(*(longlong *)pFVar9[1]._padding_ + 0x168))();
  local_28.InnerProperty = (FProperty *)pFVar9[1]._padding_;
  local_28.ElementSize = (local_28.InnerProperty)->ElementSize;
  local_28.field1_0x8 = FVar4;
  local_28.ArrayFlags = EVar1;
  if ((local_28.ElementSize < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((local_28.InnerProperty == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = param_2->DataPtr;
  if (pFVar5[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar8 = (int *)pFVar5[1].Ptr;
  }
  else {
    piVar8 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar5[1].PropertyPath,pFVar5[1].Ptr,pFVar5[1].Property);
  }
  bVar7 = FRigVMExtendedExecuteContext::IsValidArraySize(param_1,*piVar8);
  if (bVar7) {
    iVar2 = *piVar8;
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((longlong)iVar2);
    }
    iVar3 = (local_28.field1_0x8.FreezableArray)->ArrayNum;
    if (iVar3 < iVar2) {
      FScriptArrayHelper::AddValues(&local_28,iVar2 - iVar3);
    }
    else if (iVar2 < iVar3) {
      iVar10 = iVar3 - iVar2;
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Count>=0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1127,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((local_28.field1_0x8.FreezableArray)->ArrayNum < iVar3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index + Count <= Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1128,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FScriptArrayHelper::DestructItems(&local_28,iVar2,iVar10);
      local_38.__this = &local_28;
      local_38.Index = iVar2;
      local_38.Count = iVar10;
      FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
                (&local_28,&local_38);
    }
  }
  return;
}

