// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Get @ 1474d5c20

IPoseSearchProvider * __cdecl UE::Anim::IPoseSearchProvider::Get(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  IPoseSearchProvider *pIVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::FeatureName,L"AnimPoseSearch");
    _Init_thread_footer(&::_TSS0);
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,::FeatureName);
  if (iVar1 < 1) {
    pIVar4 = (IPoseSearchProvider *)0x0;
  }
  else {
    pIVar2 = IModularFeatures::Get();
    if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::FeatureName,L"AnimPoseSearch");
      _Init_thread_footer(&::_TSS0);
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,::FeatureName,0);
    pIVar4 = (IPoseSearchProvider *)(lVar3 + -8);
    if (lVar3 == 0) {
      pIVar4 = (IPoseSearchProvider *)0x0;
    }
  }
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  return pIVar4;
}

// GetModularFeatureName @ 1474dba80

FName __cdecl UE::Anim::IPoseSearchProvider::GetModularFeatureName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FeatureName,L"AnimPoseSearch");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::FeatureName;
  return in_RCX;
}

// IsAvailable @ 1474e9c10

bool __cdecl UE::Anim::IPoseSearchProvider::IsAvailable(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  pIVar2 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FeatureName,L"AnimPoseSearch");
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,::FeatureName);
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  return 0 < iVar1;
}

