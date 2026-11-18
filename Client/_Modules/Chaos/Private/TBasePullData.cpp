// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// SetProxy @ 1440f1970

void __thiscall
Chaos::TBasePullData<Chaos::FClusterUnionPhysicsProxy,FClusterUnionProxyTimestamp>::SetProxy
          (TBasePullData<Chaos::FClusterUnionPhysicsProxy,FClusterUnionProxyTimestamp> *this,
          FClusterUnionPhysicsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProxyTimestampBase *local_18;
  FSharedReferencer<1> local_10;
  
  if ((this->Timestamp).Object != (FProxyTimestampBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9196663456307085286>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PullPhysicsDataImp.h"
                       ,0x1a,"Timestamp.Get() == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10.ReferenceController = (TReferenceControllerBase<1> *)param_1->_padding_;
  local_18 = (FProxyTimestampBase *)param_1->_padding_;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Timestamp != (TSharedPtr<FProxyTimestampBase,1> *)&local_18) {
    (this->Timestamp).Object = local_18;
    local_18 = (FProxyTimestampBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Timestamp).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  this->Proxy = param_1;
  return;
}

// SetProxy @ 1440f1a20

void __thiscall
Chaos::TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp>::SetProxy
          (TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp> *this,
          FSingleParticlePhysicsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProxyTimestampBase *local_18;
  FSharedReferencer<1> local_10;
  
  if ((this->Timestamp).Object != (FProxyTimestampBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9196663456307085286>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PullPhysicsDataImp.h"
                       ,0x1a,"Timestamp.Get() == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10.ReferenceController = (TReferenceControllerBase<1> *)param_1->_padding_;
  local_18 = (FProxyTimestampBase *)param_1->_padding_;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Timestamp != (TSharedPtr<FProxyTimestampBase,1> *)&local_18) {
    (this->Timestamp).Object = local_18;
    local_18 = (FProxyTimestampBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Timestamp).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  this->Proxy = param_1;
  return;
}

