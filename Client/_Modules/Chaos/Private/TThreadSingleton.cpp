// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// ~TThreadSingleton<ChaosDD::Private::FChaosDDContext> @ 1436f70f0

void __thiscall
TThreadSingleton<ChaosDD::Private::FChaosDDContext>::
~TThreadSingleton<ChaosDD::Private::FChaosDDContext>
          (TThreadSingleton<ChaosDD::Private::FChaosDDContext> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<ChaosDD::Private::FChaosDDContext> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFChaosDDContext_Private_ChaosDD____6B_;
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

// ~TThreadSingleton<Chaos::FPhysicsThreadContext> @ 1436f7170

void __thiscall
TThreadSingleton<Chaos::FPhysicsThreadContext>::~TThreadSingleton<Chaos::FPhysicsThreadContext>
          (TThreadSingleton<Chaos::FPhysicsThreadContext> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  TThreadSingleton<Chaos::FPhysicsThreadContext> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFPhysicsThreadContext_Chaos____6B_;
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

// operator() @ 1436f7710

FTlsAutoCleanup * __thiscall
`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFPhysicsThreadContext_Chaos____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FPhysicsThreadContext_Chaos__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    *(undefined1 *)(pFVar2 + 3) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// GetTlsSlot @ 143700270

uint * __cdecl TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot(void)

{
  return &::TlsSlot;
}

// GetTlsSlot @ 143700280

uint * __cdecl TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot(void)

{
  return &::TlsSlot;
}

// ~TThreadSingleton<FChaosVDThreadContext> @ 14373e8d0

void __thiscall
TThreadSingleton<FChaosVDThreadContext>::~TThreadSingleton<FChaosVDThreadContext>
          (TThreadSingleton<FChaosVDThreadContext> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  TThreadSingleton<FChaosVDThreadContext> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFChaosVDThreadContext____6B_;
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

// operator() @ 14374a520

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x240);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0x238);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFChaosVDThreadContext____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FChaosVDThreadContext__6B_;
    pFVar2[0x42] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x43) = 0;
    *(undefined4 *)&pFVar2[0x43].field_0x4 = 0x10;
    pFVar2[0x44] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x45) = 0;
    pFVar2[0x46] = (FTlsAutoCleanup)0x0;
    pFVar2[0x47] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// GetTlsSlot @ 143fb3680

uint * __cdecl TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot(void)

{
  return &::TlsSlot;
}

