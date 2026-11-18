// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149b04ba0

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
FPCGAttributeFilterRangeElement::ExecuteInternal
          (FPCGAttributeFilterRangeElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  FObjectPtr_u_0 FVar8;
  FPCGTaggedData *pFVar9;
  bool bVar10;
  FObjectPtr_u_0 local_res10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId937,"FPCGAttributeFilterRangeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
               ,0x3a9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId937);
  }
  if ((param_1->Node == (UPCGNode *)0x0) ||
     (bVar3 = UPCGNode::IsOutputPinConnected(param_1->Node,&PCGPinConstants::DefaultInFilterLabel),
     !bVar3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((param_1->Node == (UPCGNode *)0x0) ||
     (bVar4 = UPCGNode::IsOutputPinConnected(param_1->Node,&PCGPinConstants::DefaultOutFilterLabel),
     !bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar3) && (!bVar4)) {
    bVar3 = true;
    goto LAB_149b04d70;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
      pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeFilteringRangeSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
      if (pFVar9 != (FPCGTaggedData *)0x0) {
        local_res10 = (FObjectPtr_u_0)(pFVar9->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_149b04cea;
          UE::GC::MarkAsReachable(local_res10.Handle);
        }
        if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
          pUVar6 = UPCGAttributeFilteringRangeSettings::StaticClass();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar6);
          FVar8 = local_res10;
          if (bVar3) goto LAB_149b04cf4;
        }
      }
    }
    else {
      pUVar7 = UPCGNode::GetSettings(this_00);
      FVar8.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
      if ((UPCGSettings *)FVar8.Handle != (UPCGSettings *)0x0) {
        pUVar6 = UPCGAttributeFilteringRangeSettings::StaticClass();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&(FVar8.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(FVar8.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8)
            == &pUVar6->_padding_)) goto LAB_149b04cf4;
      }
    }
LAB_149b04cea:
    FVar8.Handle = (UObject *)0x0;
  }
  else {
    pUVar6 = UPCGAttributeFilteringRangeSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (bVar3) {
      FVar8 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar8.Handle = (UObject *)0x0;
    }
  }
LAB_149b04cf4:
  if (((UPCGSettings *)FVar8.Handle == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                         ,0x3b7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  bVar3 = FPCGAttributeFilterElementBase::DoFiltering
                    ((FPCGAttributeFilterElementBase *)this,param_1,InRange,
                     (FPCGAttributePropertyInputSelector *)(FVar8.Handle + 5),
                     *(bool *)((longlong)
                               &(((UPCGSettings *)(FVar8.Handle + 0x19))->CachedOverridableParams).
                                ArrayNum + 2),
                     SUB41((((UPCGSettings *)(FVar8.Handle + 0x19))->CachedOverridableParams).
                           ArrayNum,0),
                     *(bool *)((longlong)
                               &(((UPCGSettings *)(FVar8.Handle + 0x19))->CachedOverridableParams).
                                ArrayNum + 1),
                     (FPCGAttributeFilterThresholdSettings *)
                     &((UPCGSettings *)(FVar8.Handle + 5))->_padding_,
                     (FPCGAttributeFilterThresholdSettings *)
                     &((UPCGSettings *)(FVar8.Handle + 0xf))->CacheLock);
LAB_149b04d70:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

