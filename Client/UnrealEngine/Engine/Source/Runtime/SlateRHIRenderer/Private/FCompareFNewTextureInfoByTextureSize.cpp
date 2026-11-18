// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 1

// operator() @ 145feceb0

bool __thiscall
FCompareFNewTextureInfoByTextureSize::operator()
          (FCompareFNewTextureInfoByTextureSize *this,FNewTextureInfo *param_1,
          FNewTextureInfo *param_2)

{
  uint uVar1;
  uint uVar2;
  FSlateTextureData *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  if ((param_2->TextureData).Object == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar3 = (param_2->TextureData).Object;
  if (pFVar3 == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar1 = ((param_2->TextureData).Object)->Height;
  uVar2 = pFVar3->Width;
  if ((param_1->TextureData).Object == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar3 = (param_1->TextureData).Object;
  if (pFVar3 == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return uVar1 + uVar2 < ((param_1->TextureData).Object)->Height + pFVar3->Width;
}

