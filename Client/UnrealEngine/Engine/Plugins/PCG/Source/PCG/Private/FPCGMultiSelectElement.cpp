// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 1499e8c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMultiSelectElement::ExecuteInternal(FPCGMultiSelectElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UPCGSettings *pUVar6;
  FObjectPtr_u_0 this_01;
  FText *this_02;
  FPCGTaggedData *pFVar7;
  FPCGDataCollection *pFVar8;
  bool bVar9;
  FObjectPtr_u_0 local_res10;
  FName local_res18;
  FString local_78;
  FString local_68;
  FText local_58;
  FPCGDataCollection local_48;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId320,"FPCGMultiSelectElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGMultiSelect.cpp"
               ,0x140);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId320);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar5 = UPCGMultiSelectSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar5);
    if (bVar3) {
      this_01 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      this_01.Handle = (UObject *)0x0;
    }
    goto LAB_1499e8d10;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar6 = UPCGNode::GetSettings(this_00), pUVar6 == (UPCGSettings *)0x0)) {
    pFVar7 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMultiSelectSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
    if (pFVar7 != (FPCGTaggedData *)0x0) {
      local_res10 = (FObjectPtr_u_0)(pFVar7->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGMultiSelectSettings *)local_res10.Handle == (UPCGMultiSelectSettings *)0x0)
        goto LAB_1499e8d0e;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UPCGMultiSelectSettings *)local_res10.Handle != (UPCGMultiSelectSettings *)0x0) {
        pUVar5 = UPCGMultiSelectSettings::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar5);
        this_01 = local_res10;
        if (bVar3) goto LAB_1499e8d10;
      }
    }
  }
  else {
    pUVar6 = UPCGNode::GetSettings(this_00);
    this_01.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar6);
    if ((UPCGMultiSelectSettings *)this_01.Handle != (UPCGMultiSelectSettings *)0x0) {
      pUVar5 = UPCGMultiSelectSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&(this_01.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(this_01.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8)
          == &pUVar5->_padding_)) goto LAB_1499e8d10;
    }
  }
LAB_1499e8d0e:
  this_01.Handle = (UObject *)0x0;
LAB_1499e8d10:
  if (((UPCGMultiSelectSettings *)this_01.Handle == (UPCGMultiSelectSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGMultiSelect.cpp"
                         ,0x143,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  bVar3 = UPCGMultiSelectSettings::GetSelectedPinLabel
                    ((UPCGMultiSelectSettings *)this_01.Handle,&local_res18);
  if (bVar3) {
    pFVar8 = PCGGather::GatherDataForPin
                       (&local_48,&param_1->InputData,local_res18,
                        PCGPinConstants::DefaultOutputLabel);
    FPCGDataCollection::operator=(&param_1->OutputData,pFVar8);
    if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
               local_48.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_48.TaggedData.AllocatorInstance.Data);
    }
  }
  else if (1 < (byte)LogPCG._0_1_) {
    this_02 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"FPCGMultiSelectElement",L"ValueDoesNotExist",
                         L"Selected value is not a valid option.");
    FText::ToString(this_02);
    FPCGContext::GetTaskName(param_1,&local_68);
    FPCGContext::GetExecutionSourceName(param_1,&local_78);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149a10250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMultiSelectElement::SupportsBasePointDataInputs
          (FPCGMultiSelectElement *this,FPCGContext *param_1)

{
  return true;
}

