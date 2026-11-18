// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FGCScopeGuard @ 142010f40

FGCScopeGuard * __thiscall FGCScopeGuard::FGCScopeGuard(FGCScopeGuard *this)

{
  FSharedMutex *pFVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  FGCCSyncObject *pFVar4;
  bool bVar5;
  FGCScopeGuard *pFVar6;
  bool bVar7;
  
  pFVar4 = GGCSingleton;
  if ((GGCSingleton == (FGCCSyncObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xbc,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGCScopeGuard *)(*pcVar3)();
    return pFVar6;
  }
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = false;
    do {
      if (0 < (pFVar4->GCCounter).Counter) {
        (**(code **)(pFVar4->GCUnlockedEvent->_padding_ + 0x20))
                  (pFVar4->GCUnlockedEvent,0xffffffff,0);
      }
      aVar2 = (pFVar4->SharedMutex).State;
      if (((uint)aVar2 & 3) == 0) {
        LOCK();
        bVar7 = aVar2 == (pFVar4->SharedMutex).State;
        if (bVar7) {
          (pFVar4->SharedMutex).State = (atomic<unsigned_int>)((int)aVar2 + 8);
        }
        UNLOCK();
        if (!bVar7) goto LAB_142010fc0;
      }
      else {
LAB_142010fc0:
        UE::FSharedMutex::LockSharedSlow(&pFVar4->SharedMutex);
      }
      if ((pFVar4->GCCounter).Counter == 0) {
        LOCK();
        (pFVar4->AsyncCounter).Counter = (pFVar4->AsyncCounter).Counter + 1;
        UNLOCK();
        bVar5 = true;
      }
      LOCK();
      pFVar1 = &pFVar4->SharedMutex;
      aVar2 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_int>)((int)pFVar1->State + -8);
      UNLOCK();
      if (((uint)aVar2 & 0xfffffffb) == 10) {
        UE::FSharedMutex::WakeWaitingThread(&pFVar4->SharedMutex);
      }
    } while (!bVar5);
  }
  return this;
}

// ~FGCScopeGuard @ 142013250

void __thiscall FGCScopeGuard::~FGCScopeGuard(FGCScopeGuard *this)

{
  code *pcVar1;
  FGCCSyncObject *pFVar2;
  bool bVar3;
  
  pFVar2 = GGCSingleton;
  if (GGCSingleton == (FGCCSyncObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xbc,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = IsInGameThread();
  if (!bVar3) {
    LOCK();
    (pFVar2->AsyncCounter).Counter = (pFVar2->AsyncCounter).Counter + -1;
    UNLOCK();
  }
  return;
}

