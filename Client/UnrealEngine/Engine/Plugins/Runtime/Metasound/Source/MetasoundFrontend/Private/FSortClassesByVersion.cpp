// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Sort @ 14ae8a980

bool __thiscall
Metasound::FSortClassesByVersion::Sort
          (FSortClassesByVersion *this,FFrontendQueryEntry *param_1,FFrontendQueryEntry *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMetasoundFrontendVersionNumber *pFVar4;
  FMetasoundFrontendVersionNumber *pFVar5;
  
  if ((param_1->Value).TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = FMetasoundFrontendClassMetadata::GetVersion
                     ((FMetasoundFrontendClassMetadata *)&(param_1->Value)._padding_);
  if ((param_2->Value).TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar5 = FMetasoundFrontendClassMetadata::GetVersion
                     ((FMetasoundFrontendClassMetadata *)&(param_2->Value)._padding_);
  if (pFVar5->Major < pFVar4->Major) {
    return true;
  }
  if (pFVar4->Major == pFVar5->Major) {
    return pFVar5->Minor < pFVar4->Minor;
  }
  return false;
}

