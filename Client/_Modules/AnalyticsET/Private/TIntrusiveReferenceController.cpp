// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 6

// DestroyObject @ 143198330

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHttpRetrySystem::FRetryDomains,1>::
DestroyObject(TIntrusiveReferenceController<FHttpRetrySystem::FRetryDomains,1> *this)

{
  void *pvVar1;
  
  DestructItems<FString,int>
            (*(FString **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 143198370

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsPropertyStore,1>::DestroyObject
          (TIntrusiveReferenceController<FAnalyticsPropertyStore,1> *this)

{
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore((FAnalyticsPropertyStore *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 143198380

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsProviderET,1>::DestroyObject
          (TIntrusiveReferenceController<FAnalyticsProviderET,1> *this)

{
  FAnalyticsProviderET::~FAnalyticsProviderET((FAnalyticsProviderET *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 143198390

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsProviderETEventCache,1>::
DestroyObject(TIntrusiveReferenceController<FAnalyticsProviderETEventCache,1> *this)

{
  FAnalyticsProviderETEventCache::~FAnalyticsProviderETEventCache
            ((FAnalyticsProviderETEventCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1431983a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDummyAnalyticsSummarySender,1>::DestroyObject
          (TIntrusiveReferenceController<FDummyAnalyticsSummarySender,1> *this)

{
  FDummyAnalyticsSummarySender::~FDummyAnalyticsSummarySender
            ((FDummyAnalyticsSummarySender *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1431983b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHttpRetrySystem::FManager,1>::DestroyObject
          (TIntrusiveReferenceController<FHttpRetrySystem::FManager,1> *this)

{
  FHttpRetrySystem::FManager::~FManager((FManager *)&this->ObjectStorage);
  return;
}

