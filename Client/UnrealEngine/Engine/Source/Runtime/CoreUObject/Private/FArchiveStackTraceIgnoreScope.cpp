// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FArchiveStackTraceIgnoreScope @ 141ed1f20

FArchiveStackTraceIgnoreScope * __thiscall
FArchiveStackTraceIgnoreScope::FArchiveStackTraceIgnoreScope
          (FArchiveStackTraceIgnoreScope *this,bool param_1)

{
  this->bIgnore = param_1;
  if (param_1) {
    GIgnoreDiffManager.IgnoreCount = GIgnoreDiffManager.IgnoreCount + 1;
  }
  return this;
}

// ~FArchiveStackTraceIgnoreScope @ 141ed50d0

void __thiscall
FArchiveStackTraceIgnoreScope::~FArchiveStackTraceIgnoreScope(FArchiveStackTraceIgnoreScope *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->bIgnore != false) &&
     (GIgnoreDiffManager.IgnoreCount = GIgnoreDiffManager.IgnoreCount + -1,
     GIgnoreDiffManager.IgnoreCount < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IgnoreCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

