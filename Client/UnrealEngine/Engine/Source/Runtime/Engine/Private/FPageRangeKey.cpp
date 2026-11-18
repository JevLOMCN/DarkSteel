// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// RemoveRootPages @ 148487380

bool __thiscall Nanite::FPageRangeKey::RemoveRootPages(FPageRangeKey *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = this->Value;
  if ((((uVar5 & 0x1f) != 0) && (-1 < (int)uVar5)) &&
     (uVar6 = uVar5 >> 5 & 0x1ffffff, uVar6 < param_1)) {
    uVar4 = 0;
    uVar6 = ((uVar5 & 0x1f) - param_1) + uVar6;
    uVar5 = uVar4;
    if (0 < (int)uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      if (0x1fffffe < param_1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex <= (((1u << 25u) - 1u) - 1u)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResources.h"
                           ,0xe3,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (0x1f < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count <= (((1u << (5)) - 1u))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResources.h"
                           ,0xe4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      uVar4 = (param_1 | 0x2000000) << 5 | uVar5;
    }
    this->Value = uVar4;
    return true;
  }
  return false;
}

