// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// UpdatePriorityDistance @ 145fa7ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FLandscapeGrassMapsBuilder::FPendingComponent::UpdatePriorityDistance
          (FPendingComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  ULandscapeComponent *pUVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  TBoxSphereBounds<double,double> local_58;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId414,
               "FLandscapeGrassMapsBuilder::FPendingComponent::UpdatePriorityDistance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x19e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId414);
  }
  pUVar1 = this->State->Component;
  (**(code **)(pUVar1->_padding_ + 0x598))(pUVar1,&local_58,&pUVar1->_padding_);
  dVar3 = UE::Landscape::CalculateMinDistanceToCamerasSquared(param_1,&local_58);
  dVar4 = (double)param_2 * (pUVar1->GrassTypeSummary).MaxInstanceDiscardDistance;
  this->PriorityKey = dVar3 - dVar4 * dVar4;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

