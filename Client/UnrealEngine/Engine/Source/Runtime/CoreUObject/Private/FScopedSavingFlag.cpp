// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FScopedSavingFlag @ 1421ff7d0

FScopedSavingFlag * __thiscall
FScopedSavingFlag::FScopedSavingFlag(FScopedSavingFlag *this,bool param_1,UPackage *param_2)

{
  FThreadSafeCounter *pFVar1;
  FSharedMutex *pFVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  UPackage *pUVar5;
  code *pcVar6;
  bool bVar7;
  FScopedSavingFlag *pFVar8;
  FGCCSyncObject *pFVar9;
  bool bVar10;
  FGCCSyncObject *local_res8 [2];
  code *local_48;
  FGCCSyncObject **local_40;
  
  this->bSavingConcurrent = param_1;
  this->SavedPackage = param_2;
  if ((GIsGarbageCollecting != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsGarbageCollecting()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SavePackageUtilities.cpp"
                         ,0x4cc,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FScopedSavingFlag *)(*pcVar6)();
    return pFVar8;
  }
  bVar7 = IsInGameThread();
  if (bVar7) {
    pFVar9 = FGCCSyncObject::Get();
    LOCK();
    pFVar9->GCWantsToRunCounter = (TAtomic<int>)((int)pFVar9->GCWantsToRunCounter + 1);
    UNLOCK();
    bVar7 = false;
    do {
      local_40 = local_res8;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FGCCSyncObject::GCLock'::__l4::<lambda_1>,bool>::Call;
      local_res8[0] = pFVar9;
      FGenericPlatformProcess::ConditionalSleep((TFunctionRef<bool___cdecl(void)> *)&local_48,0.0);
      LOCK();
      bVar10 = (pFVar9->SharedMutex).State == (atomic<unsigned_int>)0x0;
      if (bVar10) {
        (pFVar9->SharedMutex).State = (atomic<unsigned_int>)0x1;
      }
      UNLOCK();
      if (!bVar10) {
        UE::FSharedMutex::LockSlow(&pFVar9->SharedMutex);
      }
      if ((pFVar9->AsyncCounter).Counter == 0) {
        (**(code **)(pFVar9->GCUnlockedEvent->_padding_ + 0x18))();
        LOCK();
        pFVar1 = &pFVar9->GCCounter;
        iVar3 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + 1;
        UNLOCK();
        if ((iVar3 != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GCCounterValue == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GCScopeLock.h"
                               ,0x81,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar8 = (FScopedSavingFlag *)(*pcVar6)();
          return pFVar8;
        }
        bVar7 = true;
        LOCK();
        pFVar9->GCWantsToRunCounter = (TAtomic<int>)0x0;
        UNLOCK();
      }
      LOCK();
      pFVar2 = &pFVar9->SharedMutex;
      aVar4 = pFVar2->State;
      pFVar2->State = (atomic<unsigned_int>)((int)pFVar2->State + -1);
      UNLOCK();
      if (((uint)aVar4 & 6) != 0) {
        UE::FSharedMutex::WakeWaitingThreads(&pFVar9->SharedMutex,(uint)aVar4);
      }
    } while (!bVar7);
  }
  else {
    pFVar9 = FGCCSyncObject::Get();
    bVar7 = IsInGameThread();
    if (!bVar7) {
      bVar7 = false;
      do {
        if (0 < (pFVar9->GCCounter).Counter) {
          (**(code **)(pFVar9->GCUnlockedEvent->_padding_ + 0x20))
                    (pFVar9->GCUnlockedEvent,0xffffffff,0);
        }
        aVar4 = (pFVar9->SharedMutex).State;
        if (((uint)aVar4 & 3) == 0) {
          LOCK();
          bVar10 = aVar4 == (pFVar9->SharedMutex).State;
          if (bVar10) {
            (pFVar9->SharedMutex).State = (atomic<unsigned_int>)((int)aVar4 + 8);
          }
          UNLOCK();
          if (!bVar10) goto LAB_1421ff95b;
        }
        else {
LAB_1421ff95b:
          UE::FSharedMutex::LockSharedSlow(&pFVar9->SharedMutex);
        }
        if ((pFVar9->GCCounter).Counter == 0) {
          LOCK();
          (pFVar9->AsyncCounter).Counter = (pFVar9->AsyncCounter).Counter + 1;
          UNLOCK();
          bVar7 = true;
        }
        LOCK();
        pFVar2 = &pFVar9->SharedMutex;
        aVar4 = pFVar2->State;
        pFVar2->State = (atomic<unsigned_int>)((int)pFVar2->State + -8);
        UNLOCK();
        if (((uint)aVar4 & 0xfffffffb) == 10) {
          UE::FSharedMutex::WakeWaitingThread(&pFVar9->SharedMutex);
        }
      } while (!bVar7);
    }
  }
  if (this->bSavingConcurrent == false) {
    GIsSavingPackage = true;
  }
  pUVar5 = this->SavedPackage;
  if ((pUVar5 != (UPackage *)0x0) &&
     ((atomic<unsigned_int>)((uint)pUVar5->PackageFlagsPrivate | 0x8000) !=
      pUVar5->PackageFlagsPrivate)) {
    LOCK();
    pUVar5->PackageFlagsPrivate = (atomic<unsigned_int>)((uint)pUVar5->PackageFlagsPrivate | 0x8000)
    ;
    UNLOCK();
    return this;
  }
  return this;
}

// ~FScopedSavingFlag @ 142201140

void __thiscall FScopedSavingFlag::~FScopedSavingFlag(FScopedSavingFlag *this)

{
  UPackage *pUVar1;
  bool bVar2;
  FGCCSyncObject *pFVar3;
  
  if (this->bSavingConcurrent == false) {
    GIsSavingPackage = false;
  }
  bVar2 = IsInGameThread();
  if (bVar2) {
    pFVar3 = FGCCSyncObject::Get();
    (**(code **)(pFVar3->GCUnlockedEvent->_padding_ + 0x10))();
    LOCK();
    (pFVar3->GCCounter).Counter = (pFVar3->GCCounter).Counter + -1;
    UNLOCK();
  }
  else {
    pFVar3 = FGCCSyncObject::Get();
    bVar2 = IsInGameThread();
    if (!bVar2) {
      LOCK();
      (pFVar3->AsyncCounter).Counter = (pFVar3->AsyncCounter).Counter + -1;
      UNLOCK();
    }
  }
  pUVar1 = this->SavedPackage;
  if ((pUVar1 != (UPackage *)0x0) &&
     ((atomic<unsigned_int>)((uint)pUVar1->PackageFlagsPrivate & 0xffff7fff) !=
      pUVar1->PackageFlagsPrivate)) {
    LOCK();
    pUVar1->PackageFlagsPrivate =
         (atomic<unsigned_int>)((uint)pUVar1->PackageFlagsPrivate & 0xffff7fff);
    UNLOCK();
  }
  return;
}

