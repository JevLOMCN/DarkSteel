// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 1

// GetValue @ 14ea7ffa0

ESceneCaptureSource * __thiscall TOptional<enum_ESceneCaptureSource>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  ESceneCaptureSource *pEVar3;
  
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (ESceneCaptureSource *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

