// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Get @ 141fcd930

FCoreNetContext * __cdecl UE::Net::Private::FCoreNetContext::Get(void)

{
  if (InstancePtr == (FCoreNetContext *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UE::Net::Private::FCoreNetContext::Get'::__l5::
               _dynamic_atexit_destructor_for__Instance__);
        _Init_thread_footer(&::_TSS0);
        InstancePtr = &::Instance;
        return &::Instance;
      }
    }
    InstancePtr = &::Instance;
  }
  return InstancePtr;
}

// GetCurrentRemoteFunctionMode @ 141fcee70

ERemoteFunctionMode __thiscall
UE::Net::Private::FCoreNetContext::GetCurrentRemoteFunctionMode(FCoreNetContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ERemoteFunctionMode EVar4;
  uint uVar5;
  
  iVar1 = (this->RemoteFunctionStack).ArrayNum;
  if (iVar1 == 0) {
    return None;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return *(ERemoteFunctionMode *)
          (this->RemoteFunctionStack).AllocatorInstance.InlineData
          [(longlong)(this->RemoteFunctionStack).ArrayNum + -1].Pad;
}

