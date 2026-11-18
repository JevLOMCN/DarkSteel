// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// Abandon @ 1444f5b10

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FSpectrumAnalysisAsyncWorker::Abandon(FSpectrumAnalysisAsyncWorker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->NonAbandonableSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->bIsAbandoned = true;
                    /* WARNING: Could not recover jumptable at 0x0001444f5b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DoWork @ 1444fa270

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FSpectrumAnalysisAsyncWorker::DoWork(FSpectrumAnalysisAsyncWorker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSpectrumAnalyzer *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  lpCriticalSection = &this->NonAbandonableSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bIsAbandoned == false) {
    pTVar3 = (this->AnalyzerWeakPtr).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = pTVar3->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pTVar3 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1444fa2c0;
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
      this_00 = (this->AnalyzerWeakPtr).Object;
      if (this_00 != (FSpectrumAnalyzer *)0x0) {
        FSpectrumAnalyzer::PerformAnalysisIfPossible(this_00,this->bUseLatestAudio);
      }
    }
LAB_1444fa2c0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001444fa2da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

