// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FArchiveStackTraceDisabledScope @ 141ed1f10

FArchiveStackTraceDisabledScope * __thiscall
FArchiveStackTraceDisabledScope::FArchiveStackTraceDisabledScope
          (FArchiveStackTraceDisabledScope *this)

{
  GIgnoreDiffManager.DisabledCount = GIgnoreDiffManager.DisabledCount + 1;
  return this;
}

// ~FArchiveStackTraceDisabledScope @ 141ed5090

void __thiscall
FArchiveStackTraceDisabledScope::~FArchiveStackTraceDisabledScope
          (FArchiveStackTraceDisabledScope *this)

{
  code *pcVar1;
  bool bVar2;
  
  GIgnoreDiffManager.DisabledCount = GIgnoreDiffManager.DisabledCount + -1;
  if (GIgnoreDiffManager.DisabledCount < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DisabledCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

