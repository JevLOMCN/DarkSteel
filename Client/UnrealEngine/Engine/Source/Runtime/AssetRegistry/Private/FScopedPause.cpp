// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FScopedPause @ 142ad7490

FScopedPause * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FScopedPause::FScopedPause
          (FScopedPause *this,FAssetDataDiscovery *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FAssetDataDiscovery *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  FScopedPause *pFVar8;
  
  this->Owner = param_1;
  fVar3 = __real_3a83126f;
  if (param_1->Thread != (FRunnableThread *)0x0) {
    LOCK();
    param_1->IsPaused = (atomic<unsigned_int>)((int)param_1->IsPaused + 1);
    UNLOCK();
    fVar3 = __real_3a83126f;
  }
  while( true ) {
    pFVar1 = this->Owner;
    lpCriticalSection = &pFVar1->TreeLock;
    if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SynchObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x53,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FScopedPause *)(*pcVar2)();
      return pFVar8;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
    (pFVar1->TreeLock).OwnerThreadId = aVar6;
    bVar4 = (pFVar1->TickOwner).bHasOwner == false;
    if (bVar4) {
      (pFVar1->TickOwner).bHasOwner = true;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      (pFVar1->TickOwner).OwnerThreadId = aVar6;
    }
    aVar6 = (pFVar1->TreeLock).OwnerThreadId;
    aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar6 != aVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x2b,L""), bVar5)) break;
    (pFVar1->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar4) {
      return this;
    }
    aVar6 = (this->Owner->TickOwner).OwnerThreadId;
    aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar6 == aVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Owner.TickOwner.IsOwnedByCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x6ad,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FScopedPause *)(*pcVar2)();
      return pFVar8;
    }
    FWindowsPlatformProcess::Sleep(fVar3);
  }
  pcVar2 = (code *)swi(3);
  pFVar8 = (FScopedPause *)(*pcVar2)();
  return pFVar8;
}

// ~FScopedPause @ 142adaeb0

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FScopedPause::~FScopedPause(FScopedPause *this)

{
  atomic<unsigned_int> *paVar1;
  code *pcVar2;
  bool bVar3;
  
  FThreadOwnerSection::ReleaseOwnershipChecked(&this->Owner->TickOwner,&this->Owner->TreeLock);
  if (this->Owner->Thread != (FRunnableThread *)0x0) {
    if (this->Owner->IsPaused == (atomic<unsigned_int>)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner.IsPaused > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x6b8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    paVar1 = &this->Owner->IsPaused;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  return;
}

