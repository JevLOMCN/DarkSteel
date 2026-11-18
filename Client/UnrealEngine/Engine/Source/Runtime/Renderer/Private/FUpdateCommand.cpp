// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetPayloadOffset<FUpdateLightColorParameters> @ 1453f0220

int __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FUpdateCommand
::GetPayloadOffset<FUpdateLightColorParameters>(void *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((*(ulonglong *)((longlong)this + 8) & 4) == 0) {
    return -1;
  }
  uVar5 = (uint)*(ulonglong *)((longlong)this + 8) & 3;
  uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (*(int *)((longlong)this + 0x48) <= (int)(uint)(byte)(uVar6 >> 0x38)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  lVar4 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar4 = (longlong)this + 0x20;
  }
  return *(int *)(lVar4 + (uVar6 >> 0x38) * 4);
}

// GetPayloadOffset<FUpdateLightTransformParameters> @ 1453f0300

int __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FUpdateCommand
::GetPayloadOffset<FUpdateLightTransformParameters>(void *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((*(ulonglong *)((longlong)this + 8) & 2) == 0) {
    return -1;
  }
  uVar5 = (ulonglong)((uint)*(ulonglong *)((longlong)this + 8) & 1) * 0x101010101010101;
  if (*(int *)((longlong)this + 0x48) <= (int)(uint)(byte)(uVar5 >> 0x38)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  lVar4 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar4 = (longlong)this + 0x20;
  }
  return *(int *)(lVar4 + (uVar5 >> 0x38) * 4);
}

