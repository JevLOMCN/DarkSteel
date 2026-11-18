// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// ExecuteInternal @ 149b83170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGGatherElement::ExecuteInternal(FPCGGatherElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  FObjectPtr_u_0 this_01;
  FPCGDataCollection *pFVar5;
  FPCGTaggedData *pFVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  FObjectPtr_u_0 local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FPCGDataCollection local_48;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId112,"FPCGGatherElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGather.cpp"
               ,0x70);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId112);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGGatherSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar3);
    if (bVar2) {
      this_01 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      this_01.Handle = (UObject *)0x0;
    }
    goto LAB_149b83266;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_00), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGatherSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
    if (pFVar6 != (FPCGTaggedData *)0x0) {
      local_res10 = (FObjectPtr_u_0)(pFVar6->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettingsWithDynamicInputs *)local_res10.Handle ==
            (UPCGSettingsWithDynamicInputs *)0x0) goto LAB_149b83264;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UPCGSettingsWithDynamicInputs *)local_res10.Handle !=
          (UPCGSettingsWithDynamicInputs *)0x0) {
        pUVar3 = UPCGGatherSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar3);
        this_01 = local_res10;
        if (bVar2) goto LAB_149b83266;
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_00);
    this_01.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar4);
    if ((UPCGSettingsWithDynamicInputs *)this_01.Handle != (UPCGSettingsWithDynamicInputs *)0x0) {
      pUVar3 = UPCGGatherSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&(this_01.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(this_01.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8)
          == &pUVar3->_padding_)) goto LAB_149b83266;
    }
  }
LAB_149b83264:
  this_01.Handle = (UObject *)0x0;
LAB_149b83266:
  if ((UPCGSettingsWithDynamicInputs *)this_01.Handle == (UPCGSettingsWithDynamicInputs *)0x0) {
    pFVar5 = PCGGather::GatherDataForPin
                       (&local_48,&param_1->InputData,PCGPinConstants::DefaultInputLabel,
                        PCGPinConstants::DefaultOutputLabel);
    FPCGDataCollection::operator=(&param_1->OutputData,pFVar5);
    if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
               local_48.TaggedData.ArrayNum);
    local_58.AllocatorInstance.Data = local_48.TaggedData.AllocatorInstance.Data;
  }
  else {
    UPCGSettingsWithDynamicInputs::GetNodeDefinedPinLabels
              ((UPCGSettingsWithDynamicInputs *)this_01.Handle,&local_58);
    iVar1 = local_58.ArrayNum;
    uVar7 = (ulonglong)local_58.ArrayNum;
    pFVar6 = (FPCGTaggedData *)(local_58.AllocatorInstance.Data + uVar7 * 8);
    FVar8.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar7 != iVar1) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if ((FPCGTaggedData *)FVar8.Data == pFVar6) break;
      pFVar5 = PCGGather::GatherDataForPin
                         (&local_48,&param_1->InputData,
                          (FName)(((FPCGTaggedData *)FVar8.Data)->Data).Data.field0_0x0.ObjectPtr.
                                 field0_0x0,PCGPinConstants::DefaultOutputLabel);
      FPCGDataCollection::operator+=(&param_1->OutputData,pFVar5);
      if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
                 local_48.TaggedData.ArrayNum);
      if ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_48.TaggedData.AllocatorInstance.Data);
      }
      uVar7 = (ulonglong)(uint)local_58.ArrayNum;
      FVar8.Data = (FScriptContainerElement *)&(((FPCGTaggedData *)FVar8.Data)->Data).WeakData;
    }
  }
  if ((FPCGTaggedData *)local_58.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ShouldVerifyIfOutputsAreUsedMultipleTimes @ 149b98260

bool __thiscall
FPCGGatherElement::ShouldVerifyIfOutputsAreUsedMultipleTimes
          (FPCGGatherElement *this,UPCGSettings *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149b98ab0

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
FPCGGatherElement::SupportsBasePointDataInputs(FPCGGatherElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 149b98af0

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
FPCGGatherElement::SupportsGPUResidentData(FPCGGatherElement *this,FPCGContext *param_1)

{
  return true;
}

