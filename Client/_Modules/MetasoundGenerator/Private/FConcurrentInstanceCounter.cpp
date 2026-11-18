// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 5

// FConcurrentInstanceCounter @ 14b2a6260

FConcurrentInstanceCounter * __thiscall
Metasound::FConcurrentInstanceCounter::FConcurrentInstanceCounter
          (FConcurrentInstanceCounter *this,FTopLevelAssetPath *param_1,
          TSharedPtr<Metasound::FConcurrentInstanceCounterManager,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FConcurrentInstanceCounter *pFVar5;
  
  this->_padding_ = (longlong)&___7FConcurrentInstanceCounter_Metasound__6B_;
  FVar3 = param_1->AssetName;
  (this->InstancePath).PackageName = param_1->PackageName;
  (this->InstancePath).AssetName = FVar3;
  (this->ManagerPtr).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ManagerPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->ManagerPtr).Object == (FConcurrentInstanceCounterManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                       ,0x7a,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FConcurrentInstanceCounter *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((this->ManagerPtr).Object == (FConcurrentInstanceCounterManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                       ,0x8c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FConcurrentInstanceCounter *)(*pcVar2)();
      return pFVar5;
    }
    if ((this->ManagerPtr).Object == (FConcurrentInstanceCounterManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FConcurrentInstanceCounter *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  FConcurrentInstanceCounterManager::Increment((this->ManagerPtr).Object,&this->InstancePath);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FConcurrentInstanceCounter @ 14b2a6360

FConcurrentInstanceCounter * __thiscall
Metasound::FConcurrentInstanceCounter::FConcurrentInstanceCounter
          (FConcurrentInstanceCounter *this,
          TSharedPtr<Metasound::FConcurrentInstanceCounterManager,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FConcurrentInstanceCounter *pFVar4;
  
  this->_padding_ = (longlong)&___7FConcurrentInstanceCounter_Metasound__6B_;
  (this->InstancePath).PackageName.ComparisonIndex = 0;
  (this->InstancePath).PackageName.Number = 0;
  (this->InstancePath).AssetName.ComparisonIndex = 0;
  (this->InstancePath).AssetName.Number = 0;
  (this->ManagerPtr).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ManagerPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->ManagerPtr).Object == (FConcurrentInstanceCounterManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                       ,0x73,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FConcurrentInstanceCounter *)(*pcVar2)();
      return pFVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FConcurrentInstanceCounter @ 14b2a7d60

void __thiscall
Metasound::FConcurrentInstanceCounter::~FConcurrentInstanceCounter(FConcurrentInstanceCounter *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TCounter<__int64,0,__int64,0> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FConcurrentInstanceCounterManager *this_00;
  FStats *pFVar5;
  atomic<unsigned_int> aVar6;
  
  this->_padding_ = (longlong)&___7FConcurrentInstanceCounter_Metasound__6B_;
  this_00 = GetManagerChecked(this);
  lpCriticalSection = &this_00->MapCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = FConcurrentInstanceCounterManager::GetOrAddStats(this_00,&this->InstancePath);
  if (((pFVar5->TraceCounter).Ptr == (TCounter<__int64,0,__int64,0> *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1382814220445286324>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                         ,0x4c,"TraceCounter"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = (pFVar5->TraceCounter).Ptr;
  pTVar1->Value = pTVar1->Value + -1;
  if (-1 < CountersChannel->Enabled) {
    if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (pTVar1->CounterName,TraceCounterType_Int,pTVar1->CounterFlags & 0xf);
      LOCK();
      if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
        aVar6._2_2_ = 0;
        aVar6._0_2_ = uVar4;
        pTVar1->CounterId = aVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(SUB42(pTVar1->CounterId,0),pTVar1->Value);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ManagerPtr).SharedReferenceCount.ReferenceController);
  return;
}

// GetManagerChecked @ 14b2b1160

FConcurrentInstanceCounterManager * __thiscall
Metasound::FConcurrentInstanceCounter::GetManagerChecked(FConcurrentInstanceCounter *this)

{
  code *pcVar1;
  bool bVar2;
  FConcurrentInstanceCounterManager *pFVar3;
  
  if ((this->ManagerPtr).Object == (FConcurrentInstanceCounterManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConcurrentInstanceCounterManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->ManagerPtr).Object == (FConcurrentInstanceCounterManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConcurrentInstanceCounterManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (this->ManagerPtr).Object;
}

// Init @ 14b2b19e0

void __thiscall
Metasound::FConcurrentInstanceCounter::Init
          (FConcurrentInstanceCounter *this,FTopLevelAssetPath *param_1)

{
  FName FVar1;
  FConcurrentInstanceCounterManager *this_00;
  
  FVar1 = param_1->AssetName;
  (this->InstancePath).PackageName = param_1->PackageName;
  (this->InstancePath).AssetName = FVar1;
  this_00 = GetManagerChecked(this);
  FConcurrentInstanceCounterManager::Increment(this_00,&this->InstancePath);
  return;
}

