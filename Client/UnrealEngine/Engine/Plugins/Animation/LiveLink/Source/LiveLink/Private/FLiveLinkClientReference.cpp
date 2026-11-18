// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// GetClient @ 14d04a110

ILiveLinkClient * __thiscall FLiveLinkClientReference::GetClient(FLiveLinkClientReference *this)

{
  IModularFeatures *pIVar1;
  longlong lVar2;
  ILiveLinkClient *pIVar3;
  bool local_res10 [24];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res10[0] = false;
      FConfigCacheIni::GetBool
                (GConfig,L"LiveLink",L"bUseModularClientReference",local_res10,&GEngineIni);
      bUseModularClientReference = local_res10[0];
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (bUseModularClientReference != false) {
    pIVar1 = IModularFeatures::Get();
    lVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,ILiveLinkClient::ModularFeatureName,0);
    pIVar3 = (ILiveLinkClient *)(lVar2 + -8);
    if (lVar2 == 0) {
      pIVar3 = (ILiveLinkClient *)0x0;
    }
    return pIVar3;
  }
  return (ILiveLinkClient *)FLiveLinkModule::LiveLinkClient_AnyThread;
}

