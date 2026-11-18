// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// AllowMoveCursor @ 1426b15d0

bool __thiscall FGenericPlatformTextField::AllowMoveCursor(FGenericPlatformTextField *this)

{
  return true;
}

// ShowVirtualKeyboard @ 1426df140

void __thiscall
FGenericPlatformTextField::ShowVirtualKeyboard
          (FGenericPlatformTextField *this,bool param_1,int param_2,
          TSharedPtr<IVirtualKeyboardEntry,1> *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

