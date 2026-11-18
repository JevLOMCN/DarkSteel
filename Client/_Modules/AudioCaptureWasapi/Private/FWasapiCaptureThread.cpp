// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 4

// FWasapiCaptureThread @ 14d0bd500

FWasapiCaptureThread * __thiscall
Audio::FWasapiCaptureThread::FWasapiCaptureThread
          (FWasapiCaptureThread *this,TSharedPtr<Audio::FWasapiInputStream,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FWasapiInputStream *pFVar2;
  FWasapiCaptureRunnable *pFVar3;
  atomic<int> *paVar4;
  
  (this->CaptureThread).Ptr = (FRunnableThread *)0x0;
  pFVar3 = ::operator_new(0x28);
  if (pFVar3 == (FWasapiCaptureRunnable *)0x0) {
    pFVar3 = (FWasapiCaptureRunnable *)0x0;
  }
  else {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar4 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar4 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    pFVar3->_padding_ = (longlong)&___7FWasapiCaptureRunnable_Audio__6B_;
    pFVar3->bIsRunning = (atomic<bool>)0x0;
    pFVar3->InputStreamTimeoutsDetected = 0;
    pFVar3->InputStreamDeviceErrorsDetected = 0;
    (pFVar3->InputStream).Object = pFVar2;
    (pFVar3->InputStream).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  (this->CaptureRunnable).Ptr = pFVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// Abort @ 14d0be4f0

void __thiscall Audio::FWasapiCaptureThread::Abort(FWasapiCaptureThread *this)

{
  FRunnableThread *pFVar1;
  bool bVar2;
  
  if ((this->CaptureThread).Ptr != (FRunnableThread *)0x0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId89,"Audio::FWasapiCaptureThread::Abort",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiCaptureThread.cpp"
                 ,0x59);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId89);
    }
    pFVar1 = (this->CaptureThread).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = (this->CaptureThread).Ptr;
    (this->CaptureThread).Ptr = (FRunnableThread *)0x0;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// Start @ 14d0c1b10

bool __thiscall Audio::FWasapiCaptureThread::Start(FWasapiCaptureThread *this)

{
  FRunnableThread *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRunnableThread *pFVar5;
  longlong lVar6;
  FWasapiCaptureThread local_18;
  
  if ((this->CaptureThread).Ptr != (FRunnableThread *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CaptureThread == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiCaptureThread.cpp"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar5 = FRunnableThread::Create
                     ((FRunnable *)(this->CaptureRunnable).Ptr,L"Audio Capture Thread",0,
                      TPri_TimeCritical,0xffffffffffffffff,None);
  if (this == &local_18) {
    if (pFVar5 == (FRunnableThread *)0x0) goto LAB_14d0c1b9c;
    lVar6 = pFVar5->_padding_;
  }
  else {
    pFVar1 = (this->CaptureThread).Ptr;
    (this->CaptureThread).Ptr = pFVar5;
    if (pFVar1 == (FRunnableThread *)0x0) goto LAB_14d0c1b9c;
    lVar6 = pFVar1->_padding_;
    pFVar5 = pFVar1;
  }
  (**(code **)(lVar6 + 0x30))(pFVar5,1);
LAB_14d0c1b9c:
  return (this->CaptureThread).Ptr != (FRunnableThread *)0x0;
}

// Stop @ 14d0c1f60

void __thiscall Audio::FWasapiCaptureThread::Stop(FWasapiCaptureThread *this)

{
  FRunnableThread *pFVar1;
  bool bVar2;
  
  if ((this->CaptureThread).Ptr != (FRunnableThread *)0x0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId77,"Audio::FWasapiCaptureThread::Stop",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiCaptureThread.cpp"
                 ,0x4d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId77);
    }
    pFVar1 = (this->CaptureThread).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = (this->CaptureThread).Ptr;
    (this->CaptureThread).Ptr = (FRunnableThread *)0x0;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

