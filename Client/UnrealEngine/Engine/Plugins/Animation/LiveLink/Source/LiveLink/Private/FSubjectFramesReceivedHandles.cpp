// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// FSubjectFramesReceivedHandles @ 14d012a40

FSubjectFramesReceivedHandles * __thiscall
FLiveLinkClient::FSubjectFramesReceivedHandles::FSubjectFramesReceivedHandles
          (FSubjectFramesReceivedHandles *this,FSubjectFramesReceivedHandles *param_1)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&(this->OnStaticDataReceived).field_0x38 = 2;
  *(undefined8 *)&(this->OnStaticDataReceived).field_0x28 = 0;
  *(undefined8 *)&(this->OnStaticDataReceived).field_0x30 = 0;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,
             (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)param_1);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnFrameDataReceived,4000);
  *(undefined8 *)&(this->OnFrameDataReceived).field_0x28 = 0;
  *(undefined8 *)&(this->OnFrameDataReceived).field_0x30 = 0;
  *(undefined8 *)&(this->OnFrameDataReceived).field_0x38 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&this->OnFrameDataReceived,
             (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&param_1->OnFrameDataReceived);
  return this;
}

