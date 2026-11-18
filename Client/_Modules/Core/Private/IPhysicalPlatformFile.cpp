// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Initialize @ 141648b30

bool __thiscall
IPhysicalPlatformFile::Initialize
          (IPhysicalPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (IPlatformFile *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                       ,0x48b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return true;
}

// GetLowerLevel @ 141aaaf80

IPlatformFile * __thiscall IPhysicalPlatformFile::GetLowerLevel(IPhysicalPlatformFile *this)

{
  return (IPlatformFile *)0x0;
}

// GetName @ 141aab580

wchar_t * __thiscall IPhysicalPlatformFile::GetName(IPhysicalPlatformFile *this)

{
  return L"PhysicalFile";
}

// SetLowerLevel @ 141ac07c0

void __thiscall
IPhysicalPlatformFile::SetLowerLevel(IPhysicalPlatformFile *this,IPlatformFile *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformFile.h"
                     ,0x3f1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ShouldBeUsed @ 141ac19b0

bool __thiscall
IPhysicalPlatformFile::ShouldBeUsed
          (IPhysicalPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  return true;
}

