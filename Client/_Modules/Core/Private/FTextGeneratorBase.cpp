// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetTypeID @ 1417621b0

FName __thiscall FTextGeneratorBase::GetTypeID(FTextGeneratorBase *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// Serialize @ 14177a370

void __thiscall
FTextGeneratorBase::Serialize(FTextGeneratorBase *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextGeneratorBase.cpp"
                     ,0x11,L"Serialization is not supported for this text generator type");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

