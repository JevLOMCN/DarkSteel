// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// ~TThreadSingleton<FTransientUniformBufferAllocator> @ 1459ab520

void __thiscall
TThreadSingleton<FTransientUniformBufferAllocator>::
~TThreadSingleton<FTransientUniformBufferAllocator>
          (TThreadSingleton<FTransientUniformBufferAllocator> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FTransientUniformBufferAllocator> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFTransientUniformBufferAllocator____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FTransientUniformBufferAllocator>::GetTlsSlot(void)'
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
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FTransientUniformBufferAllocator>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FTransientUniformBufferAllocator>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

