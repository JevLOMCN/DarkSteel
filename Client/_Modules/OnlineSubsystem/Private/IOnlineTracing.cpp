// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 3

// EndContext @ 14ebf0d60

void __cdecl IOnlineTracing::EndContext(FName param_1)

{
  IOnlineTracing *pIVar1;
  
  pIVar1 = GetTracingHelper();
  if (pIVar1 != (IOnlineTracing *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ebf0d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x18));
    return;
  }
  return;
}

// GetTracingHelper @ 14ec03380

IOnlineTracing * __cdecl IOnlineTracing::GetTracingHelper(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  IOnlineTracing *pIVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `GetModularFeatureName'::`2'::_TSS0) {
    _Init_thread_header(&`GetModularFeatureName'::`2'::_TSS0);
    if (`GetModularFeatureName'::`2'::_TSS0 == -1) {
      ::FName::FName(&`GetModularFeatureName'::`2'::FeatureName,L"OnlineTracing");
      _Init_thread_footer(&`GetModularFeatureName'::`2'::_TSS0);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,`GetModularFeatureName'::`2'::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `GetModularFeatureName'::`2'::_TSS0) {
      _Init_thread_header(&`GetModularFeatureName'::`2'::_TSS0);
      if (`GetModularFeatureName'::`2'::_TSS0 == -1) {
        ::FName::FName(&`GetModularFeatureName'::`2'::FeatureName,L"OnlineTracing");
        _Init_thread_footer(&`GetModularFeatureName'::`2'::_TSS0);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`GetModularFeatureName'::`2'::FeatureName,0);
    pIVar4 = (IOnlineTracing *)(lVar3 + -8);
    if (lVar3 == 0) {
      pIVar4 = (IOnlineTracing *)0x0;
    }
    return pIVar4;
  }
  return (IOnlineTracing *)0x0;
}

// StartContext @ 14ec12ca0

void __cdecl IOnlineTracing::StartContext(FName param_1)

{
  IOnlineTracing *pIVar1;
  
  pIVar1 = GetTracingHelper();
  if (pIVar1 != (IOnlineTracing *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ec12cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x10));
    return;
  }
  return;
}

