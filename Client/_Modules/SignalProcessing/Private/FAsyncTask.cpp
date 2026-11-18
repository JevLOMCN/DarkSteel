// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 4

// FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker><TSharedRef<Audio::FSpectrumAnalyzer,1>_&,bool_&> @ 1444e8d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> * __thiscall
FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker>::
FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker><TSharedRef<Audio::FSpectrumAnalyzer,1>_&,bool_&>
          (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *this,
          TSharedRef<Audio::FSpectrumAnalyzer,1> *param_1,bool *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSpectrumAnalyzer *pFVar5;
  FName *pFVar6;
  TStatIdData *pTVar7;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFSpectrumAnalysisAsyncWorker_Audio____6B_;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar5 = param_1->Object;
  bVar3 = *param_2;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    (this->Task).AnalyzerWeakPtr.Object = pFVar5;
    (this->Task).AnalyzerWeakPtr.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->Task).bUseLatestAudio = bVar3;
    (this->Task).bIsAbandoned = false;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&(this->Task).NonAbandonableSection,4000);
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    (this->Task).AnalyzerWeakPtr.Object = pFVar5;
    (this->Task).AnalyzerWeakPtr.WeakReferenceCount.ReferenceController = pTVar4;
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    (this->Task).bUseLatestAudio = bVar3;
    (this->Task).bIsAbandoned = false;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&(this->Task).NonAbandonableSection,4000);
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_Audio::FSpectrumAnalysisAsyncWorker::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_Audio::FSpectrumAnalysisAsyncWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_Audio::FSpectrumAnalysisAsyncWorker::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FSpectrumAnalysisAsyncWorker = (TStatIdData *)0x0;
    pFVar6 = ::FName::FName(&local_res8,"FSpectrumAnalysisAsyncWorker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_Audio::FSpectrumAnalysisAsyncWorker::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FSpectrumAnalysisAsyncWorker,*pFVar6,L"FSpectrumAnalysisAsyncWorker"
               ,"STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_Audio::FSpectrumAnalysisAsyncWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar7 = _StatPtr_FSpectrumAnalysisAsyncWorker;
  if (_StatPtr_FSpectrumAnalysisAsyncWorker == (TStatIdData *)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"FSpectrumAnalysisAsyncWorker");
    pTVar7 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_Audio::FSpectrumAnalysisAsyncWorker::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FSpectrumAnalysisAsyncWorker,*pFVar6,
                        L"FSpectrumAnalysisAsyncWorker","STATGROUP_ThreadPoolAsyncTasks",
                        "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar7;
  return this;
}

// DoTaskWork @ 1444fa1d0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker>::DoTaskWork
          (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSpectrumAnalyzer *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  lpCriticalSection = &(this->Task).NonAbandonableSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Task).bIsAbandoned == false) {
    pTVar3 = (this->Task).AnalyzerWeakPtr.WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = pTVar3->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pTVar3 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1444fa220;
        }
        LOCK();
        aVar2 = pTVar3->SharedReferenceCount;
        bVar4 = aVar1 == aVar2;
        if (bVar4) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
          aVar2 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar2;
      } while (!bVar4);
      this_00 = (this->Task).AnalyzerWeakPtr.Object;
      if (this_00 != (FSpectrumAnalyzer *)0x0) {
        Audio::FSpectrumAnalyzer::PerformAnalysisIfPossible(this_00,(this->Task).bUseLatestAudio);
      }
    }
LAB_1444fa220:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001444fa23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// MarkAsCanceled @ 144509a40

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker>::MarkAsCanceled
          (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *this)

{
  return;
}

// TryAbandonTask @ 14451ef70

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker>::TryAbandonTask
          (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &(this->Task).NonAbandonableSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Task).bIsAbandoned = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

