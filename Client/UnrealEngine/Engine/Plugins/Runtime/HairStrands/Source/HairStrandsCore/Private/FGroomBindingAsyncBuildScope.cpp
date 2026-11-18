// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FGroomBindingAsyncBuildScope @ 14dfabae0

FGroomBindingAsyncBuildScope * __thiscall
FGroomBindingAsyncBuildScope::FGroomBindingAsyncBuildScope
          (FGroomBindingAsyncBuildScope *this,UGroomBindingAsset *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar3 = (ulonglong)_tls_index;
  this->PreviousScope = (UGroomBindingAsset *)0x0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  this->PreviousScope = *(UGroomBindingAsset **)(lVar1 + 0x9c00);
  *(UGroomBindingAsset **)(lVar1 + 0x9c00) = param_1;
  return this;
}

// ~FGroomBindingAsyncBuildScope @ 14dfb0490

void __thiscall
FGroomBindingAsyncBuildScope::~FGroomBindingAsyncBuildScope(FGroomBindingAsyncBuildScope *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)_tls_index;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9c00) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Asset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(UGroomBindingAsset **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9c00)
       = this->PreviousScope;
  return;
}

// ShouldWaitOnLockedProperties @ 14dfd87d0

bool __cdecl FGroomBindingAsyncBuildScope::ShouldWaitOnLockedProperties(UGroomBindingAsset *param_1)

{
  return *(UGroomBindingAsset **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c00)
         != param_1;
}

