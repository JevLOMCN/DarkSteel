// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGExternalDataInterop
// Functions: 1

// GetInputSettings<UPCGLoadAlembicSettings> @ 14cefb280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGLoadAlembicSettings * __thiscall
FPCGContext::GetInputSettings<UPCGLoadAlembicSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGLoadAlembicSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGLoadAlembicSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGLoadAlembicSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGLoadAlembicSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGLoadAlembicSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGLoadAlembicSettings *)local_res8.Handle == (UPCGLoadAlembicSettings *)0x0) {
          return (UPCGLoadAlembicSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGLoadAlembicSettings *)local_res8.Handle != (UPCGLoadAlembicSettings *)0x0) {
        pUVar3 = UPCGLoadAlembicSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGLoadAlembicSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGLoadAlembicSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGLoadAlembicSettings *)0x0) {
      pUVar3 = UPCGLoadAlembicSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGLoadAlembicSettings *)0x0;
}

