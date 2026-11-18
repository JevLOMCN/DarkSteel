// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 1

// Read @ 14462f270

FUtf8String * __thiscall Verse::FNativeString::FCopyOnWrite::Read(FCopyOnWrite *this)

{
  code *pcVar1;
  bool bVar2;
  FUtf8String *pFVar3;
  
  SetIfNull(this);
  if ((this->Payload).Object == (FCopyOnWriteContents *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUtf8String *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->Payload).Object)->String;
}

