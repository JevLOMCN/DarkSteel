// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d49c190

UScriptStruct * __cdecl FGameplayTagMatchCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagMatchCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FGameplayTagMatchCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagMatchCondition,(UObject *)pUVar1,
                         L"GameplayTagMatchCondition");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagMatchCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d49c1f0

UStruct * __thiscall
FGameplayTagMatchCondition::GetInstanceDataType(FGameplayTagMatchCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagMatchConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FGameplayTagMatchConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData,
                         (UObject *)pUVar1,L"GameplayTagMatchConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FGameplayTagMatchConditionInstanceData.OuterSingleton;
}

// TestCondition @ 14d49c230

bool __thiscall
FGameplayTagMatchCondition::TestCondition
          (FGameplayTagMatchCondition *this,FStateTreeExecutionContext *param_1)

{
  longlong lVar1;
  FGameplayTagContainer *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UPackage *pUVar7;
  FText *pFVar8;
  FNodeCustomDebugData *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FString local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FNodeCustomDebugData local_48;
  
  if (((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
       *(ushort *)((longlong)&this->_padding_ + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((*(longlong *)&param_1->CurrentNodeInstanceData == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x75,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar1 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FGameplayTagMatchConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FGameplayTagMatchConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagMatchConditionInstanceData,
                         (UObject *)pUVar7,L"GameplayTagMatchConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FGameplayTagMatchConditionInstanceData.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14d49c331;
  }
  else {
LAB_14d49c331:
    iVar12 = (int)(Z_Registration_Info_UScriptStruct_FGameplayTagMatchConditionInstanceData.
                  OuterSingleton)->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar12) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar12 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FGameplayTagMatchConditionInstanceData.OuterSingleton)->
         _padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14d49c377;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_14d49c377:
  pFVar2 = *(FGameplayTagContainer **)&(param_1->CurrentNodeInstanceData).field_0x8;
  if (-1 < StateTreeDebugChannel->Enabled) {
    ::FName::ToString((FName *)(pFVar2 + 1),&local_98);
    pFVar8 = UE::StateTree::DescHelpers::GetExactMatchText(&local_58,this->bExactMatch,Text);
    FText::ToString(pFVar8);
    pFVar8 = UE::StateTree::DescHelpers::GetGameplayTagContainerAsText(&local_68,pFVar2,0x3c);
    FText::ToString(pFVar8);
    pFVar8 = UE::StateTree::DescHelpers::GetInvertText(&local_78,this->bInvert,Text);
    FText::ToString(pFVar8);
    ::FString::PrintfImpl(&local_a8,L"%s\'%s\' contains \'%s%s\'");
    local_48.TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.TraceDebuggerString.Data.ArrayNum = 0;
    local_48.TraceDebuggerString.Data.ArrayMax = 0;
    iVar12 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    pFVar9 = (FNodeCustomDebugData *)
             ::FString::ConstructFromPtrSize
                       (&local_88,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar12);
    if (&local_48 != pFVar9) {
      if (local_48.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_48.TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_48.TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar9->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar9->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.TraceDebuggerString.Data.ArrayNum = (pFVar9->TraceDebuggerString).Data.ArrayNum;
      local_48.TraceDebuggerString.Data.ArrayMax = (pFVar9->TraceDebuggerString).Data.ArrayMax;
      (pFVar9->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar9->TraceDebuggerString).Data.ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_48.MergePolicy = Override;
    FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
              ((FStateTreeReadOnlyExecutionContext *)param_1,&local_48);
    if (local_48.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_48.TraceDebuggerString.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = pFVar2[1].GameplayTags.AllocatorInstance.Data;
  if (this->bExactMatch == false) {
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      pFVar10 = (pFVar2->GameplayTags).AllocatorInstance.Data;
      pFVar11 = pFVar10 + (longlong)(pFVar2->GameplayTags).ArrayNum * 8;
      for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 8) {
        if (*(FScriptContainerElement **)pFVar10 == pFVar3) goto LAB_14d49c5e8;
      }
      pFVar11 = (pFVar2->ParentTags).AllocatorInstance.Data;
      pFVar3 = pFVar11 + (longlong)(pFVar2->ParentTags).ArrayNum * 8;
      if (pFVar11 != pFVar3) {
        while (*(FScriptContainerElement **)pFVar11 != pFVar2[1].GameplayTags.AllocatorInstance.Data
              ) {
          pFVar11 = pFVar11 + 8;
          if (pFVar11 == pFVar3) {
            return this->bInvert;
          }
        }
LAB_14d49c5e8:
        return (bool)(this->bInvert ^ 1);
      }
    }
  }
  else if (pFVar3 != (FScriptContainerElement *)0x0) {
    pFVar10 = (pFVar2->GameplayTags).AllocatorInstance.Data;
    pFVar11 = pFVar10 + (longlong)(pFVar2->GameplayTags).ArrayNum * 8;
    for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 8) {
      if (*(FScriptContainerElement **)pFVar10 == pFVar3) goto LAB_14d49c5e8;
    }
  }
  return this->bInvert;
}

