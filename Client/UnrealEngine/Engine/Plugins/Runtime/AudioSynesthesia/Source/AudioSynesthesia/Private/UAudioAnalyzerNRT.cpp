// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 4

// GetResult<Audio::FConstantQNRTResult> @ 14d816830

TSharedPtr<Audio::FConstantQNRTResult_const_,1> * __thiscall
UAudioAnalyzerNRT::GetResult<Audio::FConstantQNRTResult>
          (UAudioAnalyzerNRT *this,
          TSharedPtr<Audio::FConstantQNRTResult_const_,1> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FConstantQNRTResult_const_,1> local_18;
  
  lpCriticalSection = &this->ResultCriticalSection;
  __return_storage_ptr__->Object = (FConstantQNRTResult *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.SharedReferenceCount.ReferenceController =
         (this->Result).SharedReferenceCount.ReferenceController;
    local_18.Object = (FConstantQNRTResult *)(this->Result).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_18) {
      __return_storage_ptr__->Object = local_18.Object;
      local_18.Object = (FConstantQNRTResult *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetResult<Audio::FLKFSNRTResult> @ 14d8168f0

TSharedPtr<Audio::FLKFSNRTResult_const_,1> * __thiscall
UAudioAnalyzerNRT::GetResult<Audio::FLKFSNRTResult>
          (UAudioAnalyzerNRT *this,
          TSharedPtr<Audio::FLKFSNRTResult_const_,1> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FLKFSNRTResult_const_,1> local_18;
  
  lpCriticalSection = &this->ResultCriticalSection;
  __return_storage_ptr__->Object = (FLKFSNRTResult *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.SharedReferenceCount.ReferenceController =
         (this->Result).SharedReferenceCount.ReferenceController;
    local_18.Object = (FLKFSNRTResult *)(this->Result).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_18) {
      __return_storage_ptr__->Object = local_18.Object;
      local_18.Object = (FLKFSNRTResult *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetResult<Audio::FLoudnessNRTResult> @ 14d8169b0

TSharedPtr<Audio::FLoudnessNRTResult_const_,1> * __thiscall
UAudioAnalyzerNRT::GetResult<Audio::FLoudnessNRTResult>
          (UAudioAnalyzerNRT *this,
          TSharedPtr<Audio::FLoudnessNRTResult_const_,1> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FLoudnessNRTResult_const_,1> local_18;
  
  lpCriticalSection = &this->ResultCriticalSection;
  __return_storage_ptr__->Object = (FLoudnessNRTResult *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.SharedReferenceCount.ReferenceController =
         (this->Result).SharedReferenceCount.ReferenceController;
    local_18.Object = (FLoudnessNRTResult *)(this->Result).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_18) {
      __return_storage_ptr__->Object = local_18.Object;
      local_18.Object = (FLoudnessNRTResult *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetResult<Audio::FOnsetNRTResult> @ 14d816a70

TSharedPtr<Audio::FOnsetNRTResult_const_,1> * __thiscall
UAudioAnalyzerNRT::GetResult<Audio::FOnsetNRTResult>
          (UAudioAnalyzerNRT *this,
          TSharedPtr<Audio::FOnsetNRTResult_const_,1> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FOnsetNRTResult_const_,1> local_18;
  
  lpCriticalSection = &this->ResultCriticalSection;
  __return_storage_ptr__->Object = (FOnsetNRTResult *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.SharedReferenceCount.ReferenceController =
         (this->Result).SharedReferenceCount.ReferenceController;
    local_18.Object = (FOnsetNRTResult *)(this->Result).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_18) {
      __return_storage_ptr__->Object = local_18.Object;
      local_18.Object = (FOnsetNRTResult *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

