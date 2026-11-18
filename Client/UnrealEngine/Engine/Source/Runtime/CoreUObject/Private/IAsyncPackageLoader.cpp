// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ~IAsyncPackageLoader @ 141ed5d20

void __thiscall IAsyncPackageLoader::~IAsyncPackageLoader(IAsyncPackageLoader *this)

{
  *this = (IAsyncPackageLoader)&___7IAsyncPackageLoader__6B_;
  return;
}

// LoadPackage @ 141efeb60

int __thiscall
IAsyncPackageLoader::LoadPackage
          (IAsyncPackageLoader *this,FPackagePath *param_1,FLoadPackageAsyncOptionalParams *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncPackageLoader.h"
                     ,0x8a,L"Not Implemented");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ProgressDelegate).SharedReferenceCount.ReferenceController);
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(param_2->CompletionDelegate).Ptr;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this_00);
    ::operator_delete(this_00,0x18);
  }
  return -1;
}

// NotifyScriptVersePackage @ 141f00d20

void __thiscall
IAsyncPackageLoader::NotifyScriptVersePackage(IAsyncPackageLoader *this,VPackage *param_1)

{
  return;
}

// GetNextRequestId @ 141f34e50

int __cdecl IAsyncPackageLoader::GetNextRequestId(void)

{
  FThreadSafeCounter FVar1;
  
  FVar1.Counter = NextPackageRequestId.Counter;
  LOCK();
  NextPackageRequestId.Counter = NextPackageRequestId.Counter + 1;
  UNLOCK();
  return FVar1.Counter + 1;
}

