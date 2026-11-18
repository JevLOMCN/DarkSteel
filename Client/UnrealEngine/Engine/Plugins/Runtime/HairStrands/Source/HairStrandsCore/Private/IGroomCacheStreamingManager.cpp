// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// ~IGroomCacheStreamingManager @ 14dff2cd0

void __thiscall
IGroomCacheStreamingManager::~IGroomCacheStreamingManager(IGroomCacheStreamingManager *this)

{
  *(undefined ***)this = &___7IStreamingManager__6B_;
  return;
}

// Get @ 14e0131f0

IGroomCacheStreamingManager * __cdecl IGroomCacheStreamingManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Instance.CriticalSection,4000);
      atexit(`IGroomCacheStreamingManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return (IGroomCacheStreamingManager *)&::Instance;
    }
  }
  return (IGroomCacheStreamingManager *)&::Instance;
}

// Register @ 14e023770

void __cdecl IGroomCacheStreamingManager::Register(void)

{
  FStreamingManagerCollection *this;
  IStreamingManager *pIVar1;
  
  this = IStreamingManager::Get();
  pIVar1 = (IStreamingManager *)Get();
  FStreamingManagerCollection::AddStreamingManager(this,pIVar1);
  return;
}

// Unregister @ 14e02b3b0

void __cdecl IGroomCacheStreamingManager::Unregister(void)

{
  FStreamingManagerCollection *this;
  IStreamingManager *pIVar1;
  IGroomCacheStreamingManager *pIVar2;
  
  this = IStreamingManager::Get();
  pIVar1 = (IStreamingManager *)Get();
  FStreamingManagerCollection::RemoveStreamingManager(this,pIVar1);
  pIVar2 = Get();
                    /* WARNING: Could not recover jumptable at 0x00014e02b3e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar2 + 0xc0))(pIVar2,*(code **)(*(longlong *)pIVar2 + 0xc0));
  return;
}

