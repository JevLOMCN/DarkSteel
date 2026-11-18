// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 1499eeab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGSwitchElement::ExecuteInternal(FPCGSwitchElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  FObjectPtr_u_0 this_01;
  FText *this_02;
  FPCGTaggedData *pFVar8;
  FPCGDataCollection *pFVar9;
  bool bVar10;
  FObjectPtr_u_0 local_res10;
  FName local_res18;
  FString local_78;
  FString local_68;
  FText local_58;
  FPCGDataCollection local_48;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId409,"FPCGSwitchElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGSwitch.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId409);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
      pFVar8 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSwitchSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
      if (pFVar8 != (FPCGTaggedData *)0x0) {
        local_res10 = (FObjectPtr_u_0)(pFVar8->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSwitchSettings *)local_res10.Handle == (UPCGSwitchSettings *)0x0)
          goto LAB_1499eebae;
          UE::GC::MarkAsReachable(local_res10.Handle);
        }
        if ((UPCGSwitchSettings *)local_res10.Handle != (UPCGSwitchSettings *)0x0) {
          pUVar6 = UPCGSwitchSettings::StaticClass();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar6);
          this_01 = local_res10;
          if (bVar3) goto LAB_1499eebb0;
        }
      }
    }
    else {
      pUVar7 = UPCGNode::GetSettings(this_00);
      this_01.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
      if ((UPCGSwitchSettings *)this_01.Handle != (UPCGSwitchSettings *)0x0) {
        pUVar6 = UPCGSwitchSettings::StaticClass();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&(this_01.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(this_01.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8
             ) == &pUVar6->_padding_)) goto LAB_1499eebb0;
      }
    }
LAB_1499eebae:
    this_01.Handle = (UObject *)0x0;
  }
  else {
    pUVar6 = UPCGSwitchSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (bVar3) {
      this_01 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      this_01.Handle = (UObject *)0x0;
    }
  }
LAB_1499eebb0:
  if (((UPCGSwitchSettings *)this_01.Handle == (UPCGSwitchSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGSwitch.cpp"
                         ,0x19c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  bVar3 = UPCGSwitchSettings::GetSelectedPinLabel((UPCGSwitchSettings *)this_01.Handle,&local_res18)
  ;
  if (bVar3) {
    pFVar9 = PCGGather::GatherDataForPin
                       (&local_48,&param_1->InputData,PCGPinConstants::DefaultInputLabel,local_res18
                       );
    FPCGDataCollection::operator=(&param_1->OutputData,pFVar9);
    if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
               local_48.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_48.TaggedData.AllocatorInstance.Data);
    }
    if (param_1->Node != (UPCGNode *)0x0) {
      iVar1 = (param_1->Node->OutputPins).ArrayNum;
      if (iVar1 < 1) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3703635292448620972>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGSwitch.cpp"
                           ,0x1ac,"NumOutputPins > 0");
        if (bVar3) {
code_r0x0001499eee1a:
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      else {
        iVar5 = UPCGSwitchSettings::GetSelectedOutputPinIndex((UPCGSwitchSettings *)this_01.Handle);
        if (iVar5 == -1) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3703635292448620975>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGSwitch.cpp"
                             ,0x1af,"SelectedPinIndex != INDEX_NONE");
          if (bVar3) goto code_r0x0001499eee1a;
        }
        else {
          (param_1->OutputData).InactiveOutputPinBitmask =
               (longlong)((1 << ((byte)iVar1 & 0x1f)) + -1) & ~(1L << ((longlong)iVar5 & 0x3fU));
        }
      }
    }
  }
  else if (1 < (byte)LogPCG._0_1_) {
    this_02 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"FPCGSwitchElement",L"ValueDoesNotExist",
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
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149a10290

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
FPCGSwitchElement::SupportsBasePointDataInputs(FPCGSwitchElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 149a102c0

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
FPCGSwitchElement::SupportsGPUResidentData(FPCGSwitchElement *this,FPCGContext *param_1)

{
  return true;
}

