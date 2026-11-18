// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a1205e0

UScriptStruct * __cdecl FRigVMDispatch_ArrayMake::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayMake.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayMake.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayMake,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayMake");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayMake.OuterSingleton;
}

// GetArgumentInfos @ 14a120750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArrayMake::GetArgumentInfos
          (FRigVMDispatch_ArrayMake *this,FRigVMRegistryHandle *param_1)

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
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ValuesName);
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
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
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

// OnNewArgumentType @ 14a120a90

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_ArrayMake::OnNewArgumentType
          (FRigVMDispatch_ArrayMake *this,
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
  
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ValuesName);
  if (*param_1 != local_res10) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
    if (*param_1 != local_res18) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgumentName == ValuesName || InArgumentName == ArrayName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                         ,0xd0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ValuesName);
  local_38.Key = &local_res20;
  local_38.Value = param_2;
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
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

// GetArgumentNameForOperandIndex @ 14a120ca0

FName __thiscall
FRigVMDispatch_ArrayMake::GetArgumentNameForOperandIndex
          (FRigVMDispatch_ArrayMake *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  FName FVar5;
  uint in_register_00000014;
  ForAnyElementType FVar6;
  int iVar7;
  FName local_58;
  FName local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FVar5.Number = in_register_00000014;
  FVar5.ComparisonIndex.Value = param_1;
  iVar7 = (int)param_3 + -1;
  if (param_2 < iVar7) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_48,param_2 + -1);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_58,(wchar_t *)FVar6.Data);
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ValuesName);
    pFVar3 = ::FName::ToString(&local_58,&local_18);
    pFVar4 = ::FName::ToString(&local_50,&local_28);
    RigVMStringUtils::JoinStrings(&local_38,pFVar4,pFVar3,L"_",(wchar_t *)0x0,(wchar_t *)0x0);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)FVar5,(wchar_t *)FVar6.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (param_2 != iVar7) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOperandIndex == (InTotalOperands - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                         ,0x110,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar5 = (FName)(*pcVar1)();
        return FVar5;
      }
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  }
  return FVar5;
}

// GetDispatchFunctionImpl @ 14a120e70

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayMake::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayMake *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19a8d0

void __cdecl
FRigVMDispatch_ArrayMake::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FScriptArrayHelper_u_8 FVar3;
  FRigVMPropertyPath *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRigVMMemoryHandle *pFVar7;
  FScriptArrayHelper_u_8 *pFVar8;
  uchar *puVar9;
  FProperty *pFVar10;
  undefined8 *puVar11;
  int iVar12;
  uchar *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong local_res10;
  FProperty *local_res20;
  <lambda_1> local_80;
  <lambda_1> local_70;
  FScriptArrayHelper local_60;
  
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::Last(param_2,0);
  local_res20 = pFVar7->Property;
  if ((local_res20 == (FProperty *)0x0) ||
     ((*(uint *)(local_res20->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    local_res20 = (FProperty *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = (FScriptArrayHelper_u_8 *)TArrayView<FRigVMMemoryHandle,int>::Last(param_2,0);
  EVar1 = (EArrayPropertyFlags)local_res20[1]._padding_;
  FVar3 = (FScriptArrayHelper_u_8)pFVar8->FreezableArray;
  local_60.ElementAlignment = (**(code **)(*(longlong *)local_res20[1]._padding_ + 0x168))();
  local_60.InnerProperty = (FProperty *)local_res20[1]._padding_;
  local_60.ElementSize = (local_60.InnerProperty)->ElementSize;
  local_60.field1_0x8 = FVar3;
  local_60.ArrayFlags = EVar1;
  if ((local_60.ElementSize < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_60.InnerProperty == (FProperty *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = param_2->ArrayNum + -1;
  bVar5 = FRigVMExtendedExecuteContext::IsValidArraySize(param_1,iVar12);
  if (bVar5) {
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((longlong)iVar12);
    }
    iVar2 = (local_60.field1_0x8.FreezableArray)->ArrayNum;
    if (iVar2 < iVar12) {
      FScriptArrayHelper::AddValues(&local_60,iVar12 - iVar2);
    }
    else if (iVar12 < iVar2) {
      iVar15 = iVar2 - iVar12;
      if ((iVar15 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Count>=0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1127,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((local_60.field1_0x8.FreezableArray)->ArrayNum < iVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index + Count <= Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1128,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FScriptArrayHelper::DestructItems(&local_60,iVar12,iVar15);
      local_80.__this = &local_60;
      local_80.Index = iVar12;
      local_80.Count = iVar15;
      FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
                (&local_60,&local_80);
    }
    uVar17 = 0;
    if (0 < iVar12) {
      lVar18 = 0;
      local_res10 = 0;
      while( true ) {
        iVar2 = param_2->ArrayNum;
        uVar6 = 0;
        if ((int)uVar17 < iVar2) {
          uVar6 = ~uVar17 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar11 = (undefined8 *)((longlong)&param_2->DataPtr->Ptr + local_res10);
        if ((FRigVMPropertyPath *)puVar11[2] == (FRigVMPropertyPath *)0x0) {
          puVar9 = (uchar *)*puVar11;
        }
        else {
          puVar9 = FRigVMPropertyPath::GetData_Internal
                             ((FRigVMPropertyPath *)puVar11[2],(uchar *)*puVar11,
                              (FProperty *)puVar11[1]);
        }
        if ((local_60.field1_0x8.FreezableArray)->ArrayNum == 0) {
          puVar13 = (uchar *)0x0;
        }
        else {
          puVar14 = (undefined1 *)(local_60.field1_0x8.FreezableArray)->_padding_;
          if (((local_60.ArrayFlags & UsesMemoryImageAllocator) != None) &&
             (((ulonglong)puVar14 & 1) != 0)) {
            puVar14 = &(local_60.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar14 >> 0x18);
          }
          puVar13 = puVar14 + local_60.ElementSize * lVar18;
        }
        uVar6 = 0;
        if ((int)uVar17 < iVar2) {
          uVar6 = ~uVar17 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) break;
        this = *(FRigVMPropertyPath **)((longlong)&param_2->DataPtr->PropertyPath + local_res10);
        if (this == (FRigVMPropertyPath *)0x0) {
          pFVar10 = *(FProperty **)((longlong)&param_2->DataPtr->Property + local_res10);
        }
        else {
          pFVar10 = FRigVMPropertyPath::GetTailProperty(this);
        }
        URigVMMemoryStorage::CopyProperty
                  ((FProperty *)local_res20[1]._padding_,puVar13,pFVar10,puVar9);
        uVar17 = uVar17 + 1;
        local_res10 = local_res10 + 0x20;
        lVar18 = lVar18 + 1;
        if (iVar12 <= lVar18) {
          return;
        }
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar17 = (local_60.field1_0x8.FreezableArray)->ArrayNum;
    uVar16 = (ulonglong)uVar17;
    if ((int)uVar17 < 0) {
      FScriptArrayHelper::AddValues(&local_60,-uVar17);
      return;
    }
    if (0 < (int)uVar17) {
      if (((local_60.field1_0x8.FreezableArray)->ArrayNum < (int)uVar17) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index + Count <= Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1128,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((local_60.InnerProperty)->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) ==
          CPF_None) {
        pFVar10 = local_60.InnerProperty;
        if ((local_60.field1_0x8.FreezableArray)->ArrayNum == 0) {
          puVar14 = (undefined1 *)0x0;
        }
        else {
          puVar14 = (undefined1 *)(local_60.field1_0x8.FreezableArray)->_padding_;
          if (((local_60.ArrayFlags & UsesMemoryImageAllocator) != None) &&
             (((ulonglong)puVar14 & 1) != 0)) {
            puVar14 = &(local_60.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar14 >> 0x18);
          }
        }
        do {
          if ((pFVar10->PropertyFlags & CPF_NoDestructor) == CPF_None) {
            (**(code **)(pFVar10->_padding_ + 0x138))(pFVar10,puVar14);
            pFVar10 = local_60.InnerProperty;
          }
          puVar14 = puVar14 + local_60.ElementSize;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      local_70.__this = &local_60;
      local_70.Index = 0;
      local_70.Count = uVar17;
      FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
                (&local_60,&local_70);
    }
  }
  return;
}

