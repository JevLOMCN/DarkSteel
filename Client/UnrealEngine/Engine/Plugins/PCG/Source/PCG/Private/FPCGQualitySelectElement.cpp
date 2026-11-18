// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 1499e9790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGQualitySelectElement::ExecuteInternal(FPCGQualitySelectElement *this,FPCGContext *param_1)

{
  UPCGNode *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UClass *pUVar5;
  UPCGSettings *pUVar6;
  TObjectPtr<UPCGSettings>_u_0 TVar7;
  FPCGTaggedData *pFVar8;
  FText *pFVar9;
  FPCGDataCollection *pFVar10;
  IPCGGraphExecutionSource *pIVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  IPCGGraphExecutionSource *pIVar16;
  bool bVar17;
  undefined1 auStack_c8 [32];
  <lambda_1> local_a8;
  TObjectPtr<UPCGSettings>_u_0 local_a0 [2];
  FText local_90;
  FPCGDataCollection local_80;
  FName local_50 [6];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId132,"FPCGQualitySelectElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGQualitySelect.cpp"
               ,0x84);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId132);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar6 = UPCGNode::GetSettings(this_00), pUVar6 == (UPCGSettings *)0x0)) {
      pFVar8 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGQualitySelectSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,local_a8);
      if (pFVar8 != (FPCGTaggedData *)0x0) {
        local_a0[0].ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar8->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_a0[0].DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_a0[0].DebugPtr);
        }
        if (local_a0[0].DebugPtr != (UPCGSettings *)0x0) {
          pUVar5 = UPCGQualitySelectSettings::StaticClass();
          bVar2 = FObjectPtr::IsA(&local_a0[0].ObjectPtr,pUVar5);
          TVar7 = local_a0[0];
          if (bVar2) goto LAB_1499e98ea;
        }
      }
    }
    else {
      pUVar6 = UPCGNode::GetSettings(this_00);
      TVar7.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar6);
      if (TVar7.DebugPtr != (UPCGSettings *)0x0) {
        pUVar5 = UPCGQualitySelectSettings::StaticClass();
        iVar4 = (int)pUVar5->_padding_;
        if ((iVar4 <= *(int *)((TVar7.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar7.DebugPtr)->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar5->_padding_)) goto LAB_1499e98ea;
      }
    }
  }
  else {
    pUVar5 = UPCGQualitySelectSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar5);
    if (bVar2) {
      TVar7.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_1499e98ea;
    }
  }
  TVar7.DebugPtr = (UPCGSettings *)0x0;
LAB_1499e98ea:
  pIVar16 = (IPCGGraphExecutionSource *)0x0;
  if ((TVar7.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGQualitySelect.cpp"
                         ,0x87,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pIVar11 = pIVar16;
  if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar2)) {
    pIVar11 = (param_1->ExecutionSource).InterfaceInstance;
  }
  bVar2 = PCGHelpers::IsRuntimeGeneration(pIVar11);
  if (!bVar2) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"FPCGQualitySelectElement",L"UsedOutsideOfRuntimeGen",
                        L"Using Runtime Quality Select node in a non-RuntimeGen execution domain. Set your PCG component\'s \'Generation Trigger\' to \'Generate At Runtime\'."
                       );
    PCGLog::LogWarningOnGraph(pFVar9,param_1);
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
  }
  iVar4 = UPCGSubsystem::GetPCGQualityLevel();
  local_50[0] = PCGQualityHelpers::PinLabelDefault;
  uVar13 = 1;
  local_50[1].ComparisonIndex.Value = 0;
  local_50[1].Number = 0;
  local_50[2].ComparisonIndex.Value = 0;
  local_50[2].Number = 0;
  local_50[3].ComparisonIndex.Value = 0;
  local_50[3].Number = 0;
  local_50[4].ComparisonIndex.Value = 0;
  local_50[4].Number = 0;
  local_50[5].ComparisonIndex.Value = 0;
  local_50[5].Number = 0;
  if ((char)TVar7.DebugPtr[1]._padding_ != '\0') {
    local_50[1] = PCGQualityHelpers::PinLabelLow;
    uVar13 = 2;
    pIVar16 = (IPCGGraphExecutionSource *)(ulonglong)(iVar4 == 0);
  }
  uVar12 = uVar13;
  uVar15 = (uint)pIVar16;
  if (*(char *)((longlong)&TVar7.DebugPtr[1]._padding_ + 1) != '\0') {
    uVar12 = uVar13 + 1;
    local_50[uVar13] = PCGQualityHelpers::PinLabelMedium;
    uVar15 = uVar13;
    if (iVar4 != 1) {
      uVar15 = (uint)pIVar16;
    }
  }
  uVar13 = uVar12;
  uVar14 = uVar15;
  if (*(char *)((longlong)&TVar7.DebugPtr[1]._padding_ + 2) != '\0') {
    uVar13 = uVar12 + 1;
    local_50[uVar12] = PCGQualityHelpers::PinLabelHigh;
    uVar14 = uVar12;
    if (iVar4 != 2) {
      uVar14 = uVar15;
    }
  }
  uVar12 = uVar13;
  uVar15 = uVar14;
  if (*(char *)((longlong)&TVar7.DebugPtr[1]._padding_ + 3) != '\0') {
    uVar12 = uVar13 + 1;
    local_50[uVar13] = PCGQualityHelpers::PinLabelEpic;
    uVar15 = uVar13;
    if (iVar4 != 3) {
      uVar15 = uVar14;
    }
  }
  uVar13 = uVar15;
  if (*(char *)((longlong)&TVar7.DebugPtr[1]._padding_ + 4) != '\0') {
    uVar13 = uVar12;
    if (iVar4 != 4) {
      uVar13 = uVar15;
    }
    local_50[uVar12] = PCGQualityHelpers::PinLabelCinematic;
  }
  pFVar10 = PCGGather::GatherDataForPin
                      (&local_80,&param_1->InputData,local_50[(int)uVar13],
                       PCGPinConstants::DefaultOutputLabel);
  FPCGDataCollection::operator=(&param_1->OutputData,pFVar10);
  if (local_80.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_80.TaggedData.AllocatorInstance.Data,
             local_80.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_80.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_80.TaggedData.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetDependenciesCrc @ 1499f5680

void __thiscall
FPCGQualitySelectElement::GetDependenciesCrc
          (FPCGQualitySelectElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  FPCGCrc FVar1;
  int iVar2;
  FPCGCrc local_res18 [2];
  
  local_res18[0].Value = 0;
  local_res18[0]._4_4_ = local_res18[0]._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,local_res18);
  iVar2 = UPCGSubsystem::GetPCGQualityLevel();
  FVar1.bValid = local_res18[0].bValid;
  FVar1._5_3_ = local_res18[0]._5_3_;
  FVar1.Value = local_res18[0].Value ^
                (local_res18[0].Value >> 2) + 0x9e3779b9 + iVar2 + local_res18[0].Value * 0x40;
  *param_2 = FVar1;
  return;
}

// SupportsBasePointDataInputs @ 149a10260

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
FPCGQualitySelectElement::SupportsBasePointDataInputs
          (FPCGQualitySelectElement *this,FPCGContext *param_1)

{
  return true;
}

