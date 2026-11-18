// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a7990

UScriptStruct * __cdecl FStateTreeCompareDistanceCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareDistanceCondition,
                         (UObject *)pUVar1,L"StateTreeCompareDistanceCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d4a79d0

UStruct * __thiscall
FStateTreeCompareDistanceCondition::GetInstanceDataType(FStateTreeCompareDistanceCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData,
                           (UObject *)pUVar1,L"StateTreeCompareDistanceConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.
         OuterSingleton;
}

// TestCondition @ 14d4a7a10

bool __thiscall
FStateTreeCompareDistanceCondition::TestCondition
          (FStateTreeCompareDistanceCondition *this,FStateTreeExecutionContext *param_1)

{
  longlong lVar1;
  double *pdVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  UPackage *pUVar8;
  FText *pFVar9;
  FNodeCustomDebugData *pFVar10;
  int iVar11;
  undefined1 auVar12 [16];
  FNodeCustomDebugData local_e8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FText local_70;
  FText local_60 [2];
  
  if (((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
       *(ushort *)((longlong)&this->_padding_ + 4))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                         ,0x2b7,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x74,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((*(longlong *)&param_1->CurrentNodeInstanceData == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x75,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  lVar1 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData,
                           (UObject *)pUVar8,L"StateTreeCompareDistanceConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4a7b14;
  }
  else {
LAB_14d4a7b14:
    iVar11 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.
                  OuterSingleton)->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar11 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14d4a7b5b;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
LAB_14d4a7b5b:
  pdVar2 = *(double **)&(param_1->CurrentNodeInstanceData).field_0x8;
  dVar5 = (pdVar2[4] - pdVar2[1]) * (pdVar2[4] - pdVar2[1]) +
          (pdVar2[3] - *pdVar2) * (pdVar2[3] - *pdVar2) +
          (pdVar2[5] - pdVar2[2]) * (pdVar2[5] - pdVar2[2]);
  bVar6 = UE::StateTree::Conditions::CompareNumbers<double>
                    (dVar5,pdVar2[6] * pdVar2[6],this->Operator);
  if (-1 < StateTreeDebugChannel->Enabled) {
    ::FString::PrintfImpl(&local_90,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_a0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    auVar12._8_8_ = 0;
    auVar12._0_8_ = pdVar2[6];
    ::FString::PrintfImpl(&local_b0,L"%f");
    pFVar9 = UE::StateTree::DescHelpers::GetOperatorText(local_60,this->Operator,Text);
    FText::ToString(pFVar9);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar5;
    sqrtpd(auVar12,auVar4);
    ::FString::PrintfImpl(&local_c0,L"%f");
    pFVar9 = UE::StateTree::DescHelpers::GetInvertText(&local_70,this->bInvert,Text);
    FText::ToString(pFVar9);
    ::FString::PrintfImpl(&local_d0,L"%sDistance %s %s %s (from [%s] to [%s])");
    local_e8.TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.TraceDebuggerString.Data.ArrayNum = 0;
    local_e8.TraceDebuggerString.Data.ArrayMax = 0;
    iVar11 = local_d0.Data.ArrayNum + -1;
    if (local_d0.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    pFVar10 = (FNodeCustomDebugData *)
              ::FString::ConstructFromPtrSize
                        (&local_80,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar11);
    if (&local_e8 != pFVar10) {
      if (local_e8.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_e8.TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_e8.TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar10->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar10->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.TraceDebuggerString.Data.ArrayNum = (pFVar10->TraceDebuggerString).Data.ArrayNum;
      local_e8.TraceDebuggerString.Data.ArrayMax = (pFVar10->TraceDebuggerString).Data.ArrayMax;
      (pFVar10->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar10->TraceDebuggerString).Data.ArrayMax = 0;
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    local_e8.MergePolicy = Override;
    FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
              ((FStateTreeReadOnlyExecutionContext *)param_1,&local_e8);
    if (local_e8.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_e8.TraceDebuggerString.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_60[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  return (bool)(bVar6 ^ this->bInvert);
}

