// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 4

// StaticStruct @ 14d49c740

UScriptStruct * __cdecl FGameplayTagContainerMatchCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerMatchCondition,
                         (UObject *)pUVar1,L"GameplayTagContainerMatchCondition");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d49c780

UStruct * __thiscall
FGameplayTagContainerMatchCondition::GetInstanceDataType(FGameplayTagContainerMatchCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData
                           ,(UObject *)pUVar1,L"GameplayTagContainerMatchConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData.
         OuterSingleton;
}

// TestCondition @ 14d49c7c0

bool __thiscall
FGameplayTagContainerMatchCondition::TestCondition
          (FGameplayTagContainerMatchCondition *this,FStateTreeExecutionContext *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FGameplayTagContainer *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UPackage *pUVar8;
  FText *pFVar9;
  UEnum *this_00;
  FNodeCustomDebugData *pFVar10;
  FScriptContainerElement *pFVar11;
  byte bVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 local_res8 [8];
  FStateTreeExecutionContext *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_e8 [8];
  FNodeCustomDebugData local_e0;
  FGameplayTagContainerMatchCondition *local_c8;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  
  local_res10 = param_1;
  if (((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
       *(ushort *)((longlong)&this->_padding_ + 4))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                         ,0x2b7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x74,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((*(longlong *)&param_1->CurrentNodeInstanceData == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x75,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar3 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData
                           ,(UObject *)pUVar8,L"GameplayTagContainerMatchConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d49c8be;
LAB_14d49c8e2:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct->IsChildOf(T::StaticStruct())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x76,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else {
LAB_14d49c8be:
    iVar14 = (int)(Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData
                  .OuterSingleton)->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar14) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar14 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FGameplayTagContainerMatchConditionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14d49c8e2;
  }
  pFVar4 = *(FGameplayTagContainer **)&(param_1->CurrentNodeInstanceData).field_0x8;
  bVar12 = 0;
  if (this->MatchType == Any) {
    iVar14 = pFVar4[1].GameplayTags.ArrayNum;
    if (this->bExactMatch == false) {
      if (iVar14 == 0) goto LAB_14d49c99b;
      pFVar13 = pFVar4[1].GameplayTags.AllocatorInstance.Data;
      pFVar1 = pFVar13 + (longlong)iVar14 * 8;
      while( true ) {
        if (pFVar4[1].GameplayTags.ArrayNum != iVar14) {
          local_e8[0] = 0;
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_e8);
        }
        if (pFVar13 == pFVar1) break;
        pFVar11 = (pFVar4->GameplayTags).AllocatorInstance.Data;
        pFVar2 = pFVar11 + (longlong)(pFVar4->GameplayTags).ArrayNum * 8;
        if (pFVar11 != pFVar2) {
          do {
            if (*(longlong *)pFVar11 == *(longlong *)pFVar13) goto LAB_14d49cb56;
            pFVar11 = pFVar11 + 8;
          } while (pFVar11 != pFVar2);
        }
        pFVar11 = (pFVar4->ParentTags).AllocatorInstance.Data;
        pFVar2 = pFVar11 + (longlong)(pFVar4->ParentTags).ArrayNum * 8;
        if (pFVar11 != pFVar2) {
          do {
            if (*(longlong *)pFVar11 == *(longlong *)pFVar13) goto LAB_14d49cb56;
            pFVar11 = pFVar11 + 8;
          } while (pFVar11 != pFVar2);
        }
        pFVar13 = pFVar13 + 8;
      }
    }
    else {
      if (iVar14 == 0) goto LAB_14d49c99b;
      pFVar13 = pFVar4[1].GameplayTags.AllocatorInstance.Data;
      pFVar1 = pFVar13 + (longlong)iVar14 * 8;
      while( true ) {
        if (pFVar4[1].GameplayTags.ArrayNum != iVar14) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar13 == pFVar1) break;
        pFVar11 = (pFVar4->GameplayTags).AllocatorInstance.Data;
        pFVar2 = pFVar11 + (longlong)(pFVar4->GameplayTags).ArrayNum * 8;
        if (pFVar11 != pFVar2) {
          do {
            if (*(longlong *)pFVar11 == *(longlong *)pFVar13) goto LAB_14d49cb56;
            pFVar11 = pFVar11 + 8;
          } while (pFVar11 != pFVar2);
        }
        pFVar13 = pFVar13 + 8;
      }
    }
    goto LAB_14d49c991;
  }
  if (this->MatchType != All) {
    local_c8 = this;
    `FGameplayTagContainerMatchCondition::TestCondition'::__l4::<lambda_1>::operator()(&local_c8);
    bVar12 = 0;
    goto LAB_14d49c99b;
  }
  iVar14 = pFVar4[1].GameplayTags.ArrayNum;
  if (this->bExactMatch == false) {
    if (iVar14 != 0) {
      pFVar13 = pFVar4[1].GameplayTags.AllocatorInstance.Data;
      pFVar1 = pFVar13 + (longlong)iVar14 * 8;
      while( true ) {
        if (pFVar4[1].GameplayTags.ArrayNum != iVar14) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar13 == pFVar1) goto LAB_14d49cb56;
        pFVar11 = (pFVar4->GameplayTags).AllocatorInstance.Data;
        pFVar2 = pFVar11 + (longlong)(pFVar4->GameplayTags).ArrayNum * 8;
        if (pFVar11 != pFVar2) {
          do {
            if (*(longlong *)pFVar11 == *(longlong *)pFVar13) goto LAB_14d49ca73;
            pFVar11 = pFVar11 + 8;
          } while (pFVar11 != pFVar2);
        }
        pFVar11 = (pFVar4->ParentTags).AllocatorInstance.Data;
        pFVar2 = pFVar11 + (longlong)(pFVar4->ParentTags).ArrayNum * 8;
        if (pFVar11 == pFVar2) break;
        while (*(longlong *)pFVar11 != *(longlong *)pFVar13) {
          pFVar11 = pFVar11 + 8;
          if (pFVar11 == pFVar2) goto LAB_14d49c991;
        }
LAB_14d49ca73:
        pFVar13 = pFVar13 + 8;
      }
      goto LAB_14d49c991;
    }
  }
  else if (iVar14 != 0) {
    pFVar13 = pFVar4[1].GameplayTags.AllocatorInstance.Data;
    pFVar1 = pFVar13 + (longlong)iVar14 * 8;
    while( true ) {
      if (pFVar4[1].GameplayTags.ArrayNum != iVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar13 == pFVar1) goto LAB_14d49cb56;
      pFVar11 = (pFVar4->GameplayTags).AllocatorInstance.Data;
      pFVar2 = pFVar11 + (longlong)(pFVar4->GameplayTags).ArrayNum * 8;
      if (pFVar11 == pFVar2) break;
      while (*(longlong *)pFVar11 != *(longlong *)pFVar13) {
        pFVar11 = pFVar11 + 8;
        if (pFVar11 == pFVar2) goto LAB_14d49c991;
      }
      pFVar13 = pFVar13 + 8;
    }
LAB_14d49c991:
    bVar12 = 0;
    goto LAB_14d49c99b;
  }
LAB_14d49cb56:
  bVar12 = 1;
LAB_14d49c99b:
  if (-1 < StateTreeDebugChannel->Enabled) {
    pFVar9 = UE::StateTree::DescHelpers::GetGameplayTagContainerAsText(&local_58,pFVar4 + 1,0x3c);
    FText::ToString(pFVar9);
    pFVar9 = UE::StateTree::DescHelpers::GetExactMatchText(&local_68,this->bExactMatch,Text);
    FText::ToString(pFVar9);
    this_00 = StaticEnum<enum_EGameplayContainerMatchType>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_c0);
    ::FName::ToString(&local_c0,&local_a8);
    pFVar9 = UE::StateTree::DescHelpers::GetGameplayTagContainerAsText(&local_78,pFVar4,0x3c);
    FText::ToString(pFVar9);
    pFVar9 = UE::StateTree::DescHelpers::GetInvertText(&local_88,this->bInvert,Text);
    FText::ToString(pFVar9);
    ::FString::PrintfImpl(&local_b8,L"%s\'%s\' contains \'%s %s%s\'");
    local_e0.TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.TraceDebuggerString.Data.ArrayNum = 0;
    local_e0.TraceDebuggerString.Data.ArrayMax = 0;
    iVar14 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    pFVar10 = (FNodeCustomDebugData *)
              ::FString::ConstructFromPtrSize
                        (&local_98,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar14);
    if (&local_e0 != pFVar10) {
      if (local_e0.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_e0.TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_e0.TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar10->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar10->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.TraceDebuggerString.Data.ArrayNum = (pFVar10->TraceDebuggerString).Data.ArrayNum;
      local_e0.TraceDebuggerString.Data.ArrayMax = (pFVar10->TraceDebuggerString).Data.ArrayMax;
      (pFVar10->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar10->TraceDebuggerString).Data.ArrayMax = 0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_e0.MergePolicy = Override;
    FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
              ((FStateTreeReadOnlyExecutionContext *)local_res10,&local_e0);
    if (local_e0.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_e0.TraceDebuggerString.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  return (bool)(bVar12 ^ this->bInvert);
}

// operator() @ 15057dd00

bool __thiscall
`FGameplayTagContainerMatchCondition::TestCondition'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3402221905023860647>);
  if (bVar2) {
    this_00 = StaticEnum<enum_EGameplayContainerMatchType>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3402221905023860647>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057ddc5;
    }
  }
  bVar2 = false;
LAB_15057ddc5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

