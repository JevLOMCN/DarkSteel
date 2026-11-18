// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// ~TThreadSingleton<FCompressionScratchBuffersStack> @ 142a55b00

void __thiscall
TThreadSingleton<FCompressionScratchBuffersStack>::
~TThreadSingleton<FCompressionScratchBuffersStack>
          (TThreadSingleton<FCompressionScratchBuffersStack> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FCompressionScratchBuffersStack> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFCompressionScratchBuffersStack____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FCompressionScratchBuffersStack>::GetTlsSlot(void)'
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
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FCompressionScratchBuffersStack>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FCompressionScratchBuffersStack>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 142a58e10

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FCompressionScratchBuffersStack>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x68);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFCompressionScratchBuffersStack____6B_;
    DVar1 = GetCurrentThreadId();
    *(undefined1 *)(pFVar2 + 2) = 0;
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FCompressionScratchBuffersStack__6B_;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0xffffffffffffffff;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 10) = 0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)&pFVar2[10].field_0x4 = 0xffffffff;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

