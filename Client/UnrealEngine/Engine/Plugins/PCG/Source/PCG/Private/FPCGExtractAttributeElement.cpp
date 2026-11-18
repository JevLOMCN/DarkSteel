// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 1499e6e00

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
FPCGExtractAttributeElement::ExecuteInternal(FPCGExtractAttributeElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UPCGSettings *pUVar6;
  TObjectPtr<UPCGSettings>_u_0 TVar7;
  FPCGTaggedData *pFVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  <lambda_1> local_98;
  TObjectPtr<UPCGSettings>_u_0 local_90;
  undefined1 local_88 [104];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId135,"FPCGExtractAttributeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGExtractAttribute.cpp"
               ,0x87);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId135);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGExtractAttribute.cpp"
                         ,0x89,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar5 = UPCGExtractAttributeSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar5);
    if (bVar3) {
      TVar7.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar7.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_1499e6f36;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar6 = UPCGNode::GetSettings(this_00), pUVar6 == (UPCGSettings *)0x0)) {
    pFVar8 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGExtractAttributeSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,local_98);
    if (pFVar8 != (FPCGTaggedData *)0x0) {
      local_90.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar8->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_90.DebugPtr == (UPCGSettings *)0x0) goto LAB_1499e6f2c;
        UE::GC::MarkAsReachable((UObject *)local_90.DebugPtr);
      }
      if (local_90.DebugPtr != (UPCGSettings *)0x0) {
        pUVar5 = UPCGExtractAttributeSettings::StaticClass();
        bVar3 = FObjectPtr::IsA(&local_90.ObjectPtr,pUVar5);
        TVar7 = local_90;
        if (bVar3) goto LAB_1499e6f36;
      }
    }
  }
  else {
    pUVar6 = UPCGNode::GetSettings(this_00);
    TVar7.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar6);
    if (TVar7.DebugPtr != (UPCGSettings *)0x0) {
      pUVar5 = UPCGExtractAttributeSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)((TVar7.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar7.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8)
          == &pUVar5->_padding_)) goto LAB_1499e6f36;
    }
  }
LAB_1499e6f2c:
  TVar7.DebugPtr = (UPCGSettings *)0x0;
LAB_1499e6f36:
  if ((TVar7.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGExtractAttribute.cpp"
                         ,0x8c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_88._8_8_ = TVar7.DebugPtr + 1;
  local_88._16_4_ = (undefined4)TVar7.DebugPtr[1]._padding_;
  local_88._24_8_ = &TVar7.DebugPtr[1]._padding_;
  local_88._48_4_ = PCGPinConstants::DefaultInputLabel.ComparisonIndex.Value;
  local_88._52_4_ = PCGPinConstants::DefaultInputLabel.Number;
  local_88._56_4_ = PCGPinConstants::DefaultOutputLabel.ComparisonIndex.Value;
  local_88._60_4_ = PCGPinConstants::DefaultOutputLabel.Number;
  local_88[0x28] = false;
  local_88._64_8_ = 0;
  local_20 = (longlong *)0x0;
  local_88._0_8_ = param_1;
  PCGExtractAttribute::ExtractAttribute((FExtractAttributeParams *)local_88);
  if (local_88._64_8_ != 0) {
    plVar9 = (longlong *)(local_88 + 0x50);
    if (local_20 != (longlong *)0x0) {
      plVar9 = local_20;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 1499f1a60

EPCGElementExecutionLoopMode __thiscall
FPCGExtractAttributeElement::ExecutionLoopMode
          (FPCGExtractAttributeElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149a10230

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
FPCGExtractAttributeElement::SupportsBasePointDataInputs
          (FPCGExtractAttributeElement *this,FPCGContext *param_1)

{
  return true;
}

