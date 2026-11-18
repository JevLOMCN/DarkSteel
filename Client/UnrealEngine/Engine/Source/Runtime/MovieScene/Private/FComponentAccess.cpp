// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// PreLockComponentData @ 146149d70

void __thiscall
UE::MovieScene::FComponentAccess::PreLockComponentData
          (FComponentAccess *this,FEntityAllocation *param_1,
          TRelativePtr<void,unsigned_int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  ulonglong uVar5;
  
  pFVar4 = param_1->ComponentHeaders;
  pFVar3 = pFVar4 + param_1->NumComponents;
  for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 1) {
    if ((pFVar4->ComponentType).Value == (this->ComponentType).Value) goto LAB_146149dd8;
  }
  pFVar4 = (FComponentHeader *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146149dd8:
  if (pFVar4->Components < param_1->ComponentData) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                       ,0x46,
                       L"Attempting to assign a negative offset to an unsigned relative pointer!!");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = (longlong)pFVar4->Components - (longlong)param_1->ComponentData;
  if ((0xfffffffe < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                         ,0x3a,
                         L"Attempting to create a relative pointer outside the bounds of its capacity."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_2->Offset = (uint)uVar5;
  return;
}

