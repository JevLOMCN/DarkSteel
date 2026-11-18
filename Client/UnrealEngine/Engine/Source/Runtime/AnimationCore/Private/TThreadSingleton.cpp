// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 2

// ~TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea> @ 14237e910

void __thiscall
TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::
~TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>
          (TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TThreadSingleton_UFSplineIKSolverScratchArea_AnimationCore____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::GetTlsSlot(void)'
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
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 14237ef20

FTlsAutoCleanup * __thiscall
`TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::Get'::__l2::<lambda_1>::operator()
          (void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)
              &___7__TThreadSingleton_UFSplineIKSolverScratchArea_AnimationCore____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FSplineIKSolverScratchArea_AnimationCore__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

