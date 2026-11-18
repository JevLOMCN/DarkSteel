// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 1499e9420

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
FPCGQualityBranchElement::ExecuteInternal(FPCGQualityBranchElement *this,FPCGContext *param_1)

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
  int iVar12;
  int iVar13;
  IPCGGraphExecutionSource *pIVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  <lambda_1> local_b8;
  TObjectPtr<UPCGSettings>_u_0 local_b0 [2];
  FText local_a0;
  FPCGDataCollection local_90;
  FName local_60 [6];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId156,"FPCGQualityBranchElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGQualityBranch.cpp"
               ,0x9c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId156);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar6 = UPCGNode::GetSettings(this_00), pUVar6 == (UPCGSettings *)0x0)) {
      pFVar8 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGQualityBranchSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,local_b8);
      if (pFVar8 != (FPCGTaggedData *)0x0) {
        local_b0[0].ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar8->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_b0[0].DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_b0[0].DebugPtr);
        }
        if (local_b0[0].DebugPtr != (UPCGSettings *)0x0) {
          pUVar5 = UPCGQualityBranchSettings::StaticClass();
          bVar2 = FObjectPtr::IsA(&local_b0[0].ObjectPtr,pUVar5);
          TVar7 = local_b0[0];
          if (bVar2) goto LAB_1499e9578;
        }
      }
    }
    else {
      pUVar6 = UPCGNode::GetSettings(this_00);
      TVar7.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar6);
      if (TVar7.DebugPtr != (UPCGSettings *)0x0) {
        pUVar5 = UPCGQualityBranchSettings::StaticClass();
        iVar4 = (int)pUVar5->_padding_;
        if ((iVar4 <= *(int *)((TVar7.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar7.DebugPtr)->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar5->_padding_)) goto LAB_1499e9578;
      }
    }
  }
  else {
    pUVar5 = UPCGQualityBranchSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar5);
    if (bVar2) {
      TVar7.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_1499e9578;
    }
  }
  TVar7.DebugPtr = (UPCGSettings *)0x0;
LAB_1499e9578:
  pIVar14 = (IPCGGraphExecutionSource *)0x0;
  if ((TVar7.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGQualityBranch.cpp"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pIVar11 = pIVar14;
  if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar2)) {
    pIVar11 = (param_1->ExecutionSource).InterfaceInstance;
  }
  bVar2 = PCGHelpers::IsRuntimeGeneration(pIVar11);
  if (!bVar2) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_a0,L"FPCGQualityBranchElement",L"UsedOutsideOfRuntimeGen",
                        L"Using Runtime Quality Branch node in a non-RuntimeGen execution domain. Set your PCG component\'s \'Generation Trigger\' to \'Generate At Runtime\'."
                       );
    PCGLog::LogWarningOnGraph(pFVar9,param_1);
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
  }
  iVar4 = UPCGSubsystem::GetPCGQualityLevel();
  local_60[0] = PCGQualityHelpers::PinLabelDefault;
  local_60[1].ComparisonIndex.Value = 0;
  local_60[1].Number = 0;
  uVar15 = 1;
  local_60[2].ComparisonIndex.Value = 0;
  local_60[2].Number = 0;
  local_60[3].ComparisonIndex.Value = 0;
  local_60[3].Number = 0;
  local_60[4].ComparisonIndex.Value = 0;
  local_60[4].Number = 0;
  local_60[5].ComparisonIndex.Value = 0;
  local_60[5].Number = 0;
  if ((char)TVar7.DebugPtr[1]._padding_ != '\0') {
    local_60[1] = PCGQualityHelpers::PinLabelLow;
    uVar15 = 2;
    pIVar14 = (IPCGGraphExecutionSource *)(ulonglong)(iVar4 == 0);
  }
  uVar16 = uVar15;
  iVar12 = (int)pIVar14;
  if (*(char *)((longlong)&TVar7.DebugPtr[1]._padding_ + 1) != '\0') {
    uVar16 = (ulonglong)((int)uVar15 + 1);
    local_60[uVar15] = PCGQualityHelpers::PinLabelMedium;
    iVar12 = (int)uVar15;
    if (iVar4 != 1) {
      iVar12 = (int)pIVar14;
    }
  }
  uVar15 = uVar16;
  iVar13 = iVar12;
  if (*(char *)((longlong)&TVar7.DebugPtr[1]._padding_ + 2) != '\0') {
    uVar15 = (ulonglong)((int)uVar16 + 1);
    local_60[uVar16] = PCGQualityHelpers::PinLabelHigh;
    iVar13 = (int)uVar16;
    if (iVar4 != 2) {
      iVar13 = iVar12;
    }
  }
  uVar16 = uVar15;
  iVar12 = iVar13;
  if (*(char *)((longlong)&TVar7.DebugPtr[1]._padding_ + 3) != '\0') {
    uVar16 = (ulonglong)((int)uVar15 + 1);
    local_60[uVar15] = PCGQualityHelpers::PinLabelEpic;
    iVar12 = (int)uVar15;
    if (iVar4 != 3) {
      iVar12 = iVar13;
    }
  }
  uVar15 = uVar16;
  iVar13 = iVar12;
  if (*(char *)((longlong)&TVar7.DebugPtr[1]._padding_ + 4) != '\0') {
    uVar15 = (ulonglong)((int)uVar16 + 1);
    local_60[uVar16] = PCGQualityHelpers::PinLabelCinematic;
    iVar13 = (int)uVar16;
    if (iVar4 != 4) {
      iVar13 = iVar12;
    }
  }
  pFVar10 = PCGGather::GatherDataForPin
                      (&local_90,&param_1->InputData,PCGPinConstants::DefaultInputLabel,
                       local_60[iVar13]);
  FPCGDataCollection::operator=(&param_1->OutputData,pFVar10);
  if (local_90.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_90.TaggedData.AllocatorInstance.Data,
             local_90.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_90.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_90.TaggedData.AllocatorInstance.Data);
  }
  (param_1->OutputData).InactiveOutputPinBitmask =
       (1L << (sbyte)uVar15) - 1U & ~(1L << (longlong)iVar13);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetDependenciesCrc @ 1499f5620

void __thiscall
FPCGQualityBranchElement::GetDependenciesCrc
          (FPCGQualityBranchElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

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

