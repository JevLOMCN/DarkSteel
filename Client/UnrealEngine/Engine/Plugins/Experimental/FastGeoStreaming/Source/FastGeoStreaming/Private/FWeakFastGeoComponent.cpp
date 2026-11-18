// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// FWeakFastGeoComponent @ 14da1a5f0

FWeakFastGeoComponent * __thiscall
FWeakFastGeoComponent::FWeakFastGeoComponent(FWeakFastGeoComponent *this,FFastGeoComponent *param_1)

{
  FFastGeoComponentCluster *pFVar1;
  code *pcVar2;
  bool bVar3;
  FWeakFastGeoComponent *pFVar4;
  UFastGeoContainer *local_res8;
  FWeakObjectPtr local_18;
  undefined8 uStack_10;
  
  (this->ComponentClusterWeak).ContainerWeak.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ComponentClusterWeak).ComponentClusterTypeID = 0xffffffff;
  (this->ComponentClusterWeak).ComponentClusterIndex = -1;
  this->ComponentTypeID = 0xffffffff;
  this->ComponentIndex = -1;
  if (param_1 != (FFastGeoComponent *)0x0) {
    pFVar1 = param_1->Owner;
    if (pFVar1 != (FFastGeoComponentCluster *)0x0) {
      local_res8 = pFVar1->Owner;
      local_18.ObjectIndex = 0;
      local_18.ObjectSerialNumber = 0;
      uStack_10 = 0xffffffffffffffff;
      if (local_res8 != (UFastGeoContainer *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_res8);
        uStack_10 = CONCAT44(pFVar1->ComponentClusterIndex,(int)pFVar1->_padding_);
      }
      (this->ComponentClusterWeak).ContainerWeak.WeakPtr = local_18;
      (this->ComponentClusterWeak).ComponentClusterTypeID = (undefined4)uStack_10;
      (this->ComponentClusterWeak).ComponentClusterIndex = uStack_10._4_4_;
      this->ComponentTypeID = (uint)param_1->_padding_;
      this->ComponentIndex = param_1->ComponentIndex;
      return this;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5507789167590899779>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoWeakElement.h"
                       ,0x43,"!InComponent");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWeakFastGeoComponent *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

