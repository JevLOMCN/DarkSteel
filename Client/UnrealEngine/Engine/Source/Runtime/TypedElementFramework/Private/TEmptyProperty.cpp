// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// Get @ 142cacc20

FText * __thiscall
UE::Editor::DataStorage::Private::TEmptyProperty<FText>::Get
          (TEmptyProperty<FText> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementAttributeBindingProperty.h"
                     ,0x85,L"Empty properties shouldn\'t be accessed.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  return (FText *)0x0;
}

