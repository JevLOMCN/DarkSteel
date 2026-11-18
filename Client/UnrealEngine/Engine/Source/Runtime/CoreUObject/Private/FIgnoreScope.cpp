// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FIgnoreScope @ 141e84680

FIgnoreScope * __thiscall
UE::CookAssetRegistryAccessTracker::FIgnoreScope::FIgnoreScope(FIgnoreScope *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  this->bPreviousValue = *(bool *)(lVar1 + 0xc80);
  *(undefined1 *)(lVar1 + 0xc80) = 1;
  return this;
}

// ~FIgnoreScope @ 141e87a80

void __thiscall UE::CookAssetRegistryAccessTracker::FIgnoreScope::~FIgnoreScope(FIgnoreScope *this)

{
  *(bool *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc80)
       = this->bPreviousValue;
  return;
}

// ShouldIgnoreAccessTracker @ 141ebc840

bool __cdecl UE::CookAssetRegistryAccessTracker::FIgnoreScope::ShouldIgnoreAccessTracker(void)

{
  return (bool)*(undefined1 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc80);
}

