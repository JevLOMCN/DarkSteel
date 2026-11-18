// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 10

// ~TThreadSingleton<FMultiBlendData> @ 146408480

void __thiscall
TThreadSingleton<FMultiBlendData>::~TThreadSingleton<FMultiBlendData>
          (TThreadSingleton<FMultiBlendData> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FMultiBlendData> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFMultiBlendData____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FMultiBlendData>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FMultiBlendData>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FMultiBlendData>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FSimBodiesScratch> @ 146408500

void __thiscall
TThreadSingleton<FSimBodiesScratch>::~TThreadSingleton<FSimBodiesScratch>
          (TThreadSingleton<FSimBodiesScratch> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FSimBodiesScratch> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFSimBodiesScratch____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSimBodiesScratch>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSimBodiesScratch>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSimBodiesScratch>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FSplineIKScratchArea> @ 146408580

void __thiscall
TThreadSingleton<FSplineIKScratchArea>::~TThreadSingleton<FSplineIKScratchArea>
          (TThreadSingleton<FSplineIKScratchArea> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FSplineIKScratchArea> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFSplineIKScratchArea____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSplineIKScratchArea>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSplineIKScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSplineIKScratchArea>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FExternalCurveScratchArea> @ 146408600

void __thiscall
TThreadSingleton<FExternalCurveScratchArea>::~TThreadSingleton<FExternalCurveScratchArea>
          (TThreadSingleton<FExternalCurveScratchArea> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FExternalCurveScratchArea> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFExternalCurveScratchArea____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FExternalCurveScratchArea>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FExternalCurveScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FExternalCurveScratchArea>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FProfilingTimerPerThread> @ 146408680

void __thiscall
TThreadSingleton<FProfilingTimerPerThread>::~TThreadSingleton<FProfilingTimerPerThread>
          (TThreadSingleton<FProfilingTimerPerThread> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FProfilingTimerPerThread> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFProfilingTimerPerThread____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 14640e2b0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FMultiBlendData>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x430);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0x428);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFMultiBlendData____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FMultiBlendData__6B_;
    pFVar2[0x1a] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x1b) = 0;
    *(undefined4 *)&pFVar2[0x1b].field_0x4 = 8;
    pFVar2[0x20] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x21) = 0;
    *(undefined4 *)&pFVar2[0x21].field_0x4 = 8;
    pFVar2[0x42] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x43) = 0;
    *(undefined4 *)&pFVar2[0x43].field_0x4 = 8;
    pFVar2[0x84] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x85) = 0;
    *(undefined4 *)&pFVar2[0x85].field_0x4 = 8;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 14640e370

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FSimBodiesScratch>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFSimBodiesScratch____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FSimBodiesScratch__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 14640e3f0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FSplineIKScratchArea>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x40);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFSplineIKScratchArea____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FSplineIKScratchArea__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 14640e490

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FExternalCurveScratchArea>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFExternalCurveScratchArea____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FExternalCurveScratchArea__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 14640e510

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FProfilingTimerPerThread>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFProfilingTimerPerThread____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FProfilingTimerPerThread__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

