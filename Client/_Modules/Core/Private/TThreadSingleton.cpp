// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ~TThreadSingleton<FMemStack> @ 141480c10

void __thiscall
TThreadSingleton<FMemStack>::~TThreadSingleton<FMemStack>(TThreadSingleton<FMemStack> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  TThreadSingleton<FMemStack> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFMemStack____6B_;
  puVar3 = GetTlsSlot();
  if (*puVar3 == 0xffffffff) {
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
  puVar3 = GetTlsSlot();
  pTVar4 = TlsGetValue(*puVar3);
  if (pTVar4 == this) {
    puVar3 = GetTlsSlot();
    TlsSetValue(*puVar3,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<UE::Stats::FThreadIdleStats> @ 141620530

void __thiscall
TThreadSingleton<UE::Stats::FThreadIdleStats>::~TThreadSingleton<UE::Stats::FThreadIdleStats>
          (TThreadSingleton<UE::Stats::FThreadIdleStats> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  TThreadSingleton<UE::Stats::FThreadIdleStats> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFThreadIdleStats_Stats_UE____6B_;
  puVar3 = GetTlsSlot();
  if (*puVar3 == 0xffffffff) {
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
  puVar3 = GetTlsSlot();
  pTVar4 = TlsGetValue(*puVar3);
  if (pTVar4 == this) {
    puVar3 = GetTlsSlot();
    TlsSetValue(*puVar3,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FScriptExceptionHandler> @ 141856f40

void __thiscall
TThreadSingleton<FScriptExceptionHandler>::~TThreadSingleton<FScriptExceptionHandler>
          (TThreadSingleton<FScriptExceptionHandler> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FScriptExceptionHandler> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFScriptExceptionHandler____6B_;
  if (::TlsSlot == 0xffffffff) {
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
  pTVar3 = TlsGetValue(::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 14185a340

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FScriptExceptionHandler>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0xf0);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0xe8);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFScriptExceptionHandler____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FScriptExceptionHandler__6B_;
    pFVar2[0x1a] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x1c) = 0;
    *(undefined4 *)&pFVar2[0x1c].field_0x4 = 4;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// GetTlsSlot @ 141877250

uint * __cdecl TThreadSingleton<FScriptExceptionHandler>::GetTlsSlot(void)

{
  return &::TlsSlot;
}

// GetTlsSlot @ 1418e1b40

uint * __cdecl TThreadSingleton<FMemStack>::GetTlsSlot(void)

{
  return &::TlsSlot;
}

// ~TThreadSingleton<FVTunePerThreadHandleMap> @ 141987a20

void __thiscall
TThreadSingleton<FVTunePerThreadHandleMap>::~TThreadSingleton<FVTunePerThreadHandleMap>
          (TThreadSingleton<FVTunePerThreadHandleMap> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FVTunePerThreadHandleMap> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFVTunePerThreadHandleMap____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FVTunePerThreadHandleMap>::GetTlsSlot(void)'
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
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FVTunePerThreadHandleMap>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FVTunePerThreadHandleMap>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 141988920

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FVTunePerThreadHandleMap>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x60);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFVTunePerThreadHandleMap____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FVTunePerThreadHandleMap__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 7) = 0;
    *(undefined4 *)&pFVar2[7].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[8].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 8) = 0xffffffff;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xb) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// GetTlsSlot @ 141a82a00

uint * __cdecl TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot(void)

{
  return &::TlsSlot;
}

