// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FMemberUnpacked @ 142011110

FMemberUnpacked * __thiscall
UE::GC::Private::FMemberUnpacked::FMemberUnpacked(FMemberUnpacked *this,FMemberPacked param_1)

{
  code *pcVar1;
  bool bVar2;
  FMemberUnpacked *pFVar3;
  EMemberType EVar4;
  
  EVar4 = param_1.Type;
  this->Type = EVar4;
  this->WordOffset = param_1.WordOffset;
  if (MemberARO < EVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type < EMemberType::Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                       ,0x1c7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMemberUnpacked *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

