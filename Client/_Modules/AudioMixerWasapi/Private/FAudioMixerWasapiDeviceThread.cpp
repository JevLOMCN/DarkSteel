// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 5

// FAudioMixerWasapiDeviceThread @ 148d42940

FAudioMixerWasapiDeviceThread * __thiscall
Audio::FAudioMixerWasapiDeviceThread::FAudioMixerWasapiDeviceThread
          (FAudioMixerWasapiDeviceThread *this,TFunction<void___cdecl(void)> *param_1,void **param_2
          )

{
  FAudioMixerWasapiRunnable *pFVar1;
  
  (this->DeviceRenderThread).Ptr = (FRunnableThread *)0x0;
  pFVar1 = ::operator_new(0x60);
  if (pFVar1 != (FAudioMixerWasapiRunnable *)0x0) {
    pFVar1 = FAudioMixerWasapiRunnable::FAudioMixerWasapiRunnable(pFVar1,param_1,param_2);
    (this->DeviceRenderRunnable).Ptr = pFVar1;
    return this;
  }
  (this->DeviceRenderRunnable).Ptr = (FAudioMixerWasapiRunnable *)0x0;
  return this;
}

// FAudioMixerWasapiDeviceThread @ 148d429c0

FAudioMixerWasapiDeviceThread * __thiscall
Audio::FAudioMixerWasapiDeviceThread::FAudioMixerWasapiDeviceThread
          (FAudioMixerWasapiDeviceThread *this,TFunction<void___cdecl(void)> *param_1,
          TArray<void_*,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  FAudioMixerWasapiRunnable *pFVar1;
  
  (this->DeviceRenderThread).Ptr = (FRunnableThread *)0x0;
  pFVar1 = ::operator_new(0x60);
  if (pFVar1 == (FAudioMixerWasapiRunnable *)0x0) {
    (this->DeviceRenderRunnable).Ptr = (FAudioMixerWasapiRunnable *)0x0;
  }
  else {
    pFVar1 = FAudioMixerWasapiRunnable::FAudioMixerWasapiRunnable(pFVar1,param_1,param_2,param_3);
    (this->DeviceRenderRunnable).Ptr = pFVar1;
  }
  return this;
}

// Abort @ 148d43ea0

void __thiscall Audio::FAudioMixerWasapiDeviceThread::Abort(FAudioMixerWasapiDeviceThread *this)

{
  FRunnableThread *pFVar1;
  bool bVar2;
  
  if ((this->DeviceRenderThread).Ptr != (FRunnableThread *)0x0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId131,"Audio::FAudioMixerWasapiDeviceThread::Abort",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiDeviceThread.cpp"
                 ,0x83);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId131);
    }
    pFVar1 = (this->DeviceRenderThread).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = (this->DeviceRenderThread).Ptr;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (this->DeviceRenderThread).Ptr = (FRunnableThread *)0x0;
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// Start @ 148d4a730

bool __thiscall Audio::FAudioMixerWasapiDeviceThread::Start(FAudioMixerWasapiDeviceThread *this)

{
  FRunnableThread *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRunnableThread *pFVar5;
  longlong lVar6;
  FAudioMixerWasapiRunnable *pFVar7;
  bool bVar8;
  undefined1 local_28 [16];
  int local_18;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId108,"Audio::FAudioMixerWasapiDeviceThread::Start",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiDeviceThread.cpp"
               ,0x6c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId108);
  }
  if (((this->DeviceRenderThread).Ptr != (FRunnableThread *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeviceRenderThread == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiDeviceThread.cpp"
                         ,0x6d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  LOCK();
  AudioDeviceThreadCounter = (atomic<unsigned_int>)((int)AudioDeviceThreadCounter + 1);
  UNLOCK();
  ::FString::PrintfImpl((FString *)(local_28 + 8),L"AudioDeviceThread(%d)");
  pFVar7 = (FAudioMixerWasapiRunnable *)L"";
  if (local_18 != 0) {
    pFVar7 = (FAudioMixerWasapiRunnable *)local_28._8_8_;
  }
  pFVar5 = FRunnableThread::Create
                     ((FRunnable *)(this->DeviceRenderRunnable).Ptr,(wchar_t *)pFVar7,0,
                      TPri_TimeCritical,0xffffffffffffffff,None);
  if (this == (FAudioMixerWasapiDeviceThread *)local_28) {
    if (pFVar5 == (FRunnableThread *)0x0) goto LAB_148d4a834;
    lVar6 = pFVar5->_padding_;
  }
  else {
    pFVar1 = (this->DeviceRenderThread).Ptr;
    (this->DeviceRenderThread).Ptr = pFVar5;
    if (pFVar1 == (FRunnableThread *)0x0) goto LAB_148d4a834;
    lVar6 = pFVar1->_padding_;
    pFVar5 = pFVar1;
  }
  (**(code **)(lVar6 + 0x30))(pFVar5,1);
LAB_148d4a834:
  if ((FAudioMixerWasapiRunnable *)local_28._8_8_ != (FAudioMixerWasapiRunnable *)0x0) {
    FMemory::Free((void *)local_28._8_8_);
  }
  pFVar5 = (this->DeviceRenderThread).Ptr;
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar5 != (FRunnableThread *)0x0;
}

// Stop @ 148d4aca0

void __thiscall Audio::FAudioMixerWasapiDeviceThread::Stop(FAudioMixerWasapiDeviceThread *this)

{
  FRunnableThread *pFVar1;
  bool bVar2;
  
  if ((this->DeviceRenderThread).Ptr != (FRunnableThread *)0x0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId119,"Audio::FAudioMixerWasapiDeviceThread::Stop",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiDeviceThread.cpp"
                 ,0x77);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId119);
    }
    pFVar1 = (this->DeviceRenderThread).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = (this->DeviceRenderThread).Ptr;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (this->DeviceRenderThread).Ptr = (FRunnableThread *)0x0;
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

