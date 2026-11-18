// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGExternalDataInterop
// Functions: 1

// GetSettings<UPCGLoadAlembicSettings> @ 14cefb480

UPCGLoadAlembicSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGLoadAlembicSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGLoadAlembicSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGLoadAlembicSettings *)local_res8[0].Handle == (UPCGLoadAlembicSettings *)0x0) {
        return (UPCGLoadAlembicSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGLoadAlembicSettings *)local_res8[0].Handle != (UPCGLoadAlembicSettings *)0x0) {
      pUVar3 = UPCGLoadAlembicSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGLoadAlembicSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGLoadAlembicSettings *)0x0;
}

