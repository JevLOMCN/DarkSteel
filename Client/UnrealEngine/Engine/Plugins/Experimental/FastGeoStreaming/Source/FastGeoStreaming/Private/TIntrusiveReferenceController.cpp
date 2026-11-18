// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 2

// DestroyObject @ 14da26ae0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FastGeo::FAsyncTaskWithAssetRefs,1>::
DestroyObject(TIntrusiveReferenceController<FastGeo::FAsyncTaskWithAssetRefs,1> *this)

{
  FastGeo::FAsyncTaskWithAssetRefs::~FAsyncTaskWithAssetRefs
            ((FAsyncTaskWithAssetRefs *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14da26af0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInstanceDataManager,1>::DestroyObject
          (TIntrusiveReferenceController<FInstanceDataManager,1> *this)

{
  FInstanceDataManager::~FInstanceDataManager((FInstanceDataManager *)&this->ObjectStorage);
  return;
}

