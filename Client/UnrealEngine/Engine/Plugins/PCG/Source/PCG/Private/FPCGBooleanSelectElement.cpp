// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 1499e2d10

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
FPCGBooleanSelectElement::ExecuteInternal(FPCGBooleanSelectElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UPCGSettings *pUVar6;
  FObjectPtr_u_0 FVar7;
  FPCGDataCollection *pFVar8;
  FPCGTaggedData *pFVar9;
  FName FVar10;
  bool bVar11;
  FObjectPtr_u_0 local_res10;
  FPCGDataCollection local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId85,"FPCGBooleanSelectElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGBooleanSelect.cpp"
               ,0x55);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId85);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar5 = UPCGBooleanSelectSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar5);
    if (bVar3) {
      FVar7 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar7.Handle = (UObject *)0x0;
    }
    goto LAB_1499e2e02;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar6 = UPCGNode::GetSettings(this_00), pUVar6 == (UPCGSettings *)0x0)) {
    pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBooleanSelectSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
    if (pFVar9 != (FPCGTaggedData *)0x0) {
      local_res10 = (FObjectPtr_u_0)(pFVar9->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_1499e2e00;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
        pUVar5 = UPCGBooleanSelectSettings::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar5);
        FVar7 = local_res10;
        if (bVar3) goto LAB_1499e2e02;
      }
    }
  }
  else {
    pUVar6 = UPCGNode::GetSettings(this_00);
    FVar7.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar6);
    if ((UPCGSettings *)FVar7.Handle != (UPCGSettings *)0x0) {
      pUVar5 = UPCGBooleanSelectSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&(FVar7.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(FVar7.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) goto LAB_1499e2e02;
    }
  }
LAB_1499e2e00:
  FVar7.Handle = (UObject *)0x0;
LAB_1499e2e02:
  if (((UPCGSettings *)FVar7.Handle == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGBooleanSelect.cpp"
                         ,0x58,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FVar10 = PCGBooleanSelectConstants::InputLabelA;
  if ((char)((UPCGSettings *)(FVar7.Handle + 5))->_padding_ != '\0') {
    FVar10 = PCGBooleanSelectConstants::InputLabelB;
  }
  pFVar8 = PCGGather::GatherDataForPin
                     (&local_38,&param_1->InputData,FVar10,PCGPinConstants::DefaultOutputLabel);
  FPCGDataCollection::operator=(&param_1->OutputData,pFVar8);
  if (local_38.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data,
             local_38.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_38.TaggedData.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149a10200

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
FPCGBooleanSelectElement::SupportsBasePointDataInputs
          (FPCGBooleanSelectElement *this,FPCGContext *param_1)

{
  return true;
}

