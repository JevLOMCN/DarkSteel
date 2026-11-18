// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// GetListenerName @ 14d7ab290

FString * __thiscall
FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(FSubmixBufferListenerProxy *this)

{
  ISubmixBufferListener *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FString *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->SubmixBufferListenerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d7ab2c0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pIVar1 = (this->SubmixBufferListenerWeak).Object;
    if (pIVar1 != (ISubmixBufferListener *)0x0) {
      pFVar4 = (FString *)(**(code **)(*(longlong *)pIVar1 + 0x18))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return pFVar4;
    }
  }
LAB_14d7ab2c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
                        ::__l2::ListenerName,L"MediaIO AudioCapture Listener Bridge");
    atexit(`FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName'::__l2::
           _dynamic_atexit_destructor_for__ListenerName__);
    _Init_thread_footer(&`public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return &`public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
            ::__l2::ListenerName;
  }
  return &`public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
          ::__l2::ListenerName;
}

// OnNewSubmixBuffer @ 14d7b32b0

void __thiscall
FMediaIOAudioCapture::FSubmixBufferListenerProxy::OnNewSubmixBuffer
          (FSubmixBufferListenerProxy *this,USoundSubmix *param_1,float *param_2,int param_3,
          int param_4,int param_5,double param_6)

{
  ISubmixBufferListener *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->SubmixBufferListenerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d7b32e0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pIVar1 = (this->SubmixBufferListenerWeak).Object;
    if (pIVar1 != (ISubmixBufferListener *)0x0) {
      (**(code **)(*(longlong *)pIVar1 + 8))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_14d7b32e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

