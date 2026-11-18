// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 3

// FSubjectFramesAddedHandles @ 14d012870

FSubjectFramesAddedHandles * __thiscall
FLiveLinkClient::FSubjectFramesAddedHandles::FSubjectFramesAddedHandles
          (FSubjectFramesAddedHandles *this,FSubjectFramesAddedHandles *param_1)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&(this->OnStaticDataAdded).field_0x38 = 2;
  *(undefined8 *)&(this->OnStaticDataAdded).field_0x28 = 0;
  *(undefined8 *)&(this->OnStaticDataAdded).field_0x30 = 0;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,
             (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)param_1);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnFrameDataAdded,4000);
  *(undefined8 *)&(this->OnFrameDataAdded).field_0x28 = 0;
  *(undefined8 *)&(this->OnFrameDataAdded).field_0x30 = 0;
  *(undefined8 *)&(this->OnFrameDataAdded).field_0x38 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&this->OnFrameDataAdded,
             (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&param_1->OnFrameDataAdded);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnUnmappedStaticDataAdded,4000);
  *(undefined8 *)&(this->OnUnmappedStaticDataAdded).field_0x28 = 0;
  *(undefined8 *)&(this->OnUnmappedStaticDataAdded).field_0x30 = 0;
  *(undefined8 *)&(this->OnUnmappedStaticDataAdded).field_0x38 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &this->OnUnmappedStaticDataAdded,
             (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &param_1->OnUnmappedStaticDataAdded);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnUnmappedFrameDataAdded,4000);
  *(undefined8 *)&(this->OnUnmappedFrameDataAdded).field_0x28 = 0;
  *(undefined8 *)&(this->OnUnmappedFrameDataAdded).field_0x30 = 0;
  *(undefined8 *)&(this->OnUnmappedFrameDataAdded).field_0x38 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&this->OnUnmappedFrameDataAdded
             ,(TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              &param_1->OnUnmappedFrameDataAdded);
  return this;
}

// FSubjectFramesAddedHandles @ 14d012980

FSubjectFramesAddedHandles * __thiscall
FLiveLinkClient::FSubjectFramesAddedHandles::FSubjectFramesAddedHandles
          (FSubjectFramesAddedHandles *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&(this->OnStaticDataAdded).field_0x38 = 2;
  *(undefined8 *)&(this->OnStaticDataAdded).field_0x28 = 0;
  *(undefined8 *)&(this->OnStaticDataAdded).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnFrameDataAdded,4000);
  *(undefined8 *)&(this->OnFrameDataAdded).field_0x28 = 0;
  *(undefined8 *)&(this->OnFrameDataAdded).field_0x30 = 0;
  *(undefined8 *)&(this->OnFrameDataAdded).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnUnmappedStaticDataAdded,4000);
  *(undefined8 *)&(this->OnUnmappedStaticDataAdded).field_0x28 = 0;
  *(undefined8 *)&(this->OnUnmappedStaticDataAdded).field_0x30 = 0;
  *(undefined8 *)&(this->OnUnmappedStaticDataAdded).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnUnmappedFrameDataAdded,4000);
  *(undefined8 *)&(this->OnUnmappedFrameDataAdded).field_0x28 = 0;
  *(undefined8 *)&(this->OnUnmappedFrameDataAdded).field_0x30 = 0;
  *(undefined8 *)&(this->OnUnmappedFrameDataAdded).field_0x38 = 2;
  return this;
}

// ~FSubjectFramesAddedHandles @ 14d0168d0

void __thiscall
FLiveLinkClient::FSubjectFramesAddedHandles::~FSubjectFramesAddedHandles
          (FSubjectFramesAddedHandles *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUnmappedFrameDataAdded).field_0x28,
             *(int *)&(this->OnUnmappedFrameDataAdded).field_0x30);
  pvVar1 = *(void **)&(this->OnUnmappedFrameDataAdded).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnUnmappedFrameDataAdded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUnmappedStaticDataAdded).field_0x28,
             *(int *)&(this->OnUnmappedStaticDataAdded).field_0x30);
  pvVar1 = *(void **)&(this->OnUnmappedStaticDataAdded).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnUnmappedStaticDataAdded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFrameDataAdded).field_0x28,*(int *)&(this->OnFrameDataAdded).field_0x30);
  pvVar1 = *(void **)&(this->OnFrameDataAdded).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnFrameDataAdded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStaticDataAdded).field_0x28,*(int *)&(this->OnStaticDataAdded).field_0x30);
  pvVar1 = *(void **)&(this->OnStaticDataAdded).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d016988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

