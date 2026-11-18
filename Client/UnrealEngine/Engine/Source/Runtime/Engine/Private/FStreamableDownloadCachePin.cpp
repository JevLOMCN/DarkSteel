// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FStreamableDownloadCachePin @ 14877cdd0

FStreamableDownloadCachePin * __thiscall
FStreamableDownloadCachePin::FStreamableDownloadCachePin(FStreamableDownloadCachePin *this)

{
  UE::IoStore::FOnDemandContentHandle::FOnDemandContentHandle(&this->ContentHandle);
  return this;
}

// ~FStreamableDownloadCachePin @ 14877fca0

void __thiscall
FStreamableDownloadCachePin::~FStreamableDownloadCachePin(FStreamableDownloadCachePin *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentHandle).Handle.SharedReferenceCount.ReferenceController);
  return;
}

// operator== @ 148781520

bool __thiscall
FStreamableDownloadCachePin::operator==
          (FStreamableDownloadCachePin *this,FStreamableDownloadCachePin *param_1)

{
  return (this->ContentHandle).Handle.Object == (param_1->ContentHandle).Handle.Object;
}

// GetDebugName @ 14879d660

FString * __thiscall
FStreamableDownloadCachePin::GetDebugName
          (FStreamableDownloadCachePin *this,FString *__return_storage_ptr__)

{
  UE::IoStore::LexToString(__return_storage_ptr__,&this->ContentHandle);
  return __return_storage_ptr__;
}

// IsValid @ 1487af7c0

bool __thiscall FStreamableDownloadCachePin::IsValid(FStreamableDownloadCachePin *this)

{
  return (this->ContentHandle).Handle.Object != (FOnDemandInternalContentHandle *)0x0;
}

// Release @ 1487b6ec0

void __thiscall FStreamableDownloadCachePin::Release(FStreamableDownloadCachePin *this)

{
  FStreamableDownloadCachePin local_18;
  
  local_18.ContentHandle.Handle.Object = (FOnDemandInternalContentHandle *)0x0;
  local_18.ContentHandle.Handle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    (this->ContentHandle).Handle.Object = (FOnDemandInternalContentHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ContentHandle).Handle.SharedReferenceCount,
               &local_18.ContentHandle.Handle.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ContentHandle.Handle.SharedReferenceCount.ReferenceController);
  return;
}

