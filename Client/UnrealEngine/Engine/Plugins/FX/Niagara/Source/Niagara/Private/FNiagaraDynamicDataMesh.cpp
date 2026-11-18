// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ApplyMaterialOverride @ 14933c300

void __thiscall
FNiagaraDynamicDataMesh::ApplyMaterialOverride
          (FNiagaraDynamicDataMesh *this,int param_1,UMaterialInterface *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  ForElementType<FMaterialRenderProxy_*> FVar5;
  
  if (((-1 < param_1) && (param_1 < (this->Materials).ArrayNum)) &&
     (param_2 != (UMaterialInterface *)0x0)) {
    uVar3 = (**(code **)(param_2->_padding_ + 0x310))();
    uVar4 = 0;
    if (param_1 < (this->Materials).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar5 = (this->Materials).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FMaterialRenderProxy_*>)0x0) {
      FVar5 = (ForElementType<FMaterialRenderProxy_*>)&this->Materials;
    }
    *(undefined8 *)((longlong)FVar5 + (longlong)param_1 * 8) = uVar3;
  }
  return;
}

