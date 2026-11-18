// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FAddPackageDependenciesScope @ 141e83260

FAddPackageDependenciesScope * __thiscall
UE::CookAssetRegistryAccessTracker::FAddPackageDependenciesScope::FAddPackageDependenciesScope
          (FAddPackageDependenciesScope *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  this->bPreviousValue = *(bool *)(lVar1 + 0xc81);
  *(undefined1 *)(lVar1 + 0xc81) = 1;
  return this;
}

// ~FAddPackageDependenciesScope @ 141e87830

void __thiscall
UE::CookAssetRegistryAccessTracker::FAddPackageDependenciesScope::~FAddPackageDependenciesScope
          (FAddPackageDependenciesScope *this)

{
  *(bool *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc81)
       = this->bPreviousValue;
  return;
}

// GetAddPackageDependenciesEnabled @ 141e9f1b0

bool __cdecl
UE::CookAssetRegistryAccessTracker::FAddPackageDependenciesScope::GetAddPackageDependenciesEnabled
          (void)

{
  return (bool)*(undefined1 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc81);
}

