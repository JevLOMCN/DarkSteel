// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 10

// DestroyObject @ 144593c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandIoStore,1>::
DestroyObject(TIntrusiveReferenceController<UE::IoStore::FOnDemandIoStore,1> *this)

{
  UE::IoStore::FOnDemandIoStore::~FOnDemandIoStore((FOnDemandIoStore *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1445c8130

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FIASHostGroup::FImpl,1>::
DestroyObject(TIntrusiveReferenceController<UE::IoStore::FIASHostGroup::FImpl,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UE::IoStore::FOnDemandHostGroup::~FOnDemandHostGroup((FOnDemandHostGroup *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1445c8170

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIoContainerHeader,1>::DestroyObject
          (TIntrusiveReferenceController<FIoContainerHeader,1> *this)

{
  FIoContainerHeader::~FIoContainerHeader((FIoContainerHeader *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1445c8180

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::IoStore::FOnDemandIoStore::FMountRequest,1>::DestroyObject
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x60) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x88);
    puVar2 = (this->ObjectStorage).Pad + 0x70;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  UE::IoStore::FOnDemandMountArgs::~FOnDemandMountArgs((FOnDemandMountArgs *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1445c81c0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandContainer,1>::
DestroyObject(TIntrusiveReferenceController<UE::IoStore::FOnDemandContainer,1> *this)

{
  UE::IoStore::FOnDemandContainer::~FOnDemandContainer((FOnDemandContainer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1445c81d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::IoStore::HttpIoDispatcher::FCancelationToken,1>::DestroyObject
          (TIntrusiveReferenceController<UE::IoStore::HttpIoDispatcher::FCancelationToken,1> *this)

{
  UE::IoStore::FMultiEndpointHttpClient::CancelRequest
            (*(FMultiEndpointHttpClient **)(this->ObjectStorage).Pad,
             *(uint *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 1445c81f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::IoStore::HttpIoDispatcher::FHttpDispatcher,1>::DestroyObject
          (TIntrusiveReferenceController<UE::IoStore::HttpIoDispatcher::FHttpDispatcher,1> *this)

{
  UE::IoStore::HttpIoDispatcher::FHttpDispatcher::~FHttpDispatcher
            ((FHttpDispatcher *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1445c8200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandInstallCache,1>::
DestroyObject(TIntrusiveReferenceController<UE::IoStore::FOnDemandInstallCache,1> *this)

{
  UE::IoStore::FOnDemandInstallCache::~FOnDemandInstallCache
            ((FOnDemandInstallCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1445c8210

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::IoStore::FOnDemandInternalInstallRequest,1>::DestroyObject
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandInternalInstallRequest,1> *this)

{
  return;
}

// DestroyObject @ 1445c8220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandPackageStoreBackend,1>::
DestroyObject(TIntrusiveReferenceController<UE::IoStore::FOnDemandPackageStoreBackend,1> *this)

{
  UE::IoStore::FOnDemandPackageStoreBackend::~FOnDemandPackageStoreBackend
            ((FOnDemandPackageStoreBackend *)&this->ObjectStorage);
  return;
}

