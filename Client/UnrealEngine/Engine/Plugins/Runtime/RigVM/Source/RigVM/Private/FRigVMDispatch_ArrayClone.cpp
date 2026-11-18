// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a12ac80

UScriptStruct * __cdecl FRigVMDispatch_ArrayClone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayClone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayClone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayClone,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayClone");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayClone.OuterSingleton;
}

// GetOpCode @ 14a12acc0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall FRigVMDispatch_ArrayClone::GetOpCode(FRigVMDispatch_ArrayClone *this)

{
  return ArrayClone;
}

// GetArgumentNameForOperandIndex @ 14a12adf0

FName __thiscall
FRigVMDispatch_ArrayClone::GetArgumentNameForOperandIndex
          (FRigVMDispatch_ArrayClone *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

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
      ArgumentNames[1] = FRigVMDispatch_ArrayBase::CloneName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                       ,0x476,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a12b130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArrayClone::GetArgumentInfos
          (FRigVMDispatch_ArrayClone *this,FRigVMRegistryHandle *param_1)

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
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::CloneName);
    pFVar7 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_68,local_78,Output);
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

// OnNewArgumentType @ 14a12b480

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_ArrayClone::OnNewArgumentType
          (FRigVMDispatch_ArrayClone *this,
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
  FName local_res20;
  undefined1 local_58 [16];
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_48;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_38;
  undefined1 *local_28;
  TRigVMTypeIndex *local_20;
  
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  if (*param_1 != local_res10) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::CloneName);
    if (*param_1 != local_res18) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgumentName == ArrayName || InArgumentName == CloneName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                         ,0x486,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  local_38.Key = &local_res20;
  local_38.Value = param_2;
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::CloneName);
  local_28 = local_58;
  local_48._First = &local_38;
  local_48._Last =
       (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)&stack0xffffffffffffffe8;
  local_20 = param_2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
            (__return_storage_ptr__,&local_48);
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a12b5f0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayClone::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayClone *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a197fb0

void __cdecl
FRigVMDispatch_ArrayClone::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  int iVar3;
  FRigVMPropertyPath *this;
  FRigVMMemoryHandle *pFVar4;
  longlong lVar5;
  FScriptArrayHelper_u_8 FVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  FProperty *pFVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  uchar *puVar14;
  int iVar15;
  uchar *puVar16;
  FProperty *pFVar17;
  int iVar18;
  <lambda_1> local_68;
  FScriptArrayHelper local_58;
  
  if ((param_2->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this = param_2->DataPtr->PropertyPath;
  if (this == (FRigVMPropertyPath *)0x0) {
    pFVar10 = param_2->DataPtr->Property;
  }
  else {
    pFVar10 = FRigVMPropertyPath::GetTailProperty(this);
  }
  if (((pFVar10 == (FProperty *)0x0) || ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"),
        pFVar10 = (FProperty *)0x0, bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar11 = (ulonglong *)pFVar4->Ptr;
  }
  else {
    puVar11 = (ulonglong *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  lVar8 = pFVar10[1]._padding_;
  (**(code **)(*(longlong *)pFVar10[1]._padding_ + 0x168))();
  lVar5 = pFVar10[1]._padding_;
  iVar2 = *(int *)(lVar5 + 0x34);
  if ((iVar2 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((lVar5 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar17 = param_2->DataPtr[1].Property;
  if (((pFVar17 == (FProperty *)0x0) || ((*(uint *)(pFVar17->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"),
        pFVar17 = (FProperty *)0x0, bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar1 = (EArrayPropertyFlags)pFVar17[1]._padding_;
  FVar6 = (FScriptArrayHelper_u_8)((FScriptArrayHelper_u_8 *)(param_2->DataPtr + 1))->FreezableArray
  ;
  local_58.ElementAlignment = (**(code **)(*(longlong *)pFVar17[1]._padding_ + 0x168))();
  local_58.InnerProperty = (FProperty *)pFVar17[1]._padding_;
  local_58.ElementSize = (local_58.InnerProperty)->ElementSize;
  local_58.field1_0x8 = FVar6;
  local_58.ArrayFlags = EVar1;
  if ((local_58.ElementSize < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_58.InnerProperty == (FProperty *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = (int)puVar11[1];
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((longlong)iVar15);
  }
  iVar3 = (local_58.field1_0x8.FreezableArray)->ArrayNum;
  if (iVar3 < iVar15) {
    FScriptArrayHelper::AddValues(&local_58,iVar15 - iVar3);
  }
  else if (iVar15 < iVar3) {
    iVar18 = iVar3 - iVar15;
    if ((iVar18 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1127,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((local_58.field1_0x8.FreezableArray)->ArrayNum < iVar3) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index + Count <= Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1128,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FScriptArrayHelper::DestructItems(&local_58,iVar15,iVar18);
    local_68.__this = &local_58;
    local_68.Index = iVar15;
    local_68.Count = iVar18;
    FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
              (&local_58,&local_68);
  }
  if (0 < (int)puVar11[1]) {
    pFVar10 = (FProperty *)pFVar10[1]._padding_;
    pFVar17 = (FProperty *)pFVar17[1]._padding_;
    for (iVar15 = 0; iVar15 < (int)puVar11[1]; iVar15 = iVar15 + 1) {
      if ((local_58.field1_0x8.FreezableArray)->ArrayNum == 0) {
        puVar14 = (uchar *)0x0;
      }
      else {
        puVar12 = (undefined1 *)(local_58.field1_0x8.FreezableArray)->_padding_;
        if (((local_58.ArrayFlags & UsesMemoryImageAllocator) != None) &&
           (((ulonglong)puVar12 & 1) != 0)) {
          puVar12 = &(local_58.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar12 >> 0x18);
        }
        puVar14 = puVar12 + (longlong)local_58.ElementSize * (longlong)iVar15;
      }
      if ((int)puVar11[1] == 0) {
        puVar16 = (uchar *)0x0;
      }
      else {
        uVar13 = *puVar11;
        if (((lVar8 & 1) != 0) && ((uVar13 & 1) != 0)) {
          uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar11;
        }
        puVar16 = (uchar *)((longlong)iVar2 * (longlong)iVar15 + uVar13);
      }
      URigVMMemoryStorage::CopyProperty(pFVar17,puVar14,pFVar10,puVar16);
    }
  }
  return;
}

