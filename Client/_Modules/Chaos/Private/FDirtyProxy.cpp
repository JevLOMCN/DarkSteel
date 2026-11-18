// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Clear @ 1438a8240

void __thiscall
Chaos::FDirtyProxy::Clear
          (FDirtyProxy *this,FDirtyPropertiesManager *param_1,int param_2,FShapeDirtyData *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  byte bStack_2f;
  undefined6 uStack_2e;
  
  FDirtyChaosProperties::Clear(&this->PropertyData,param_1,param_2);
  pFVar8 = (this->ShapeDataIndices).AllocatorInstance.Data;
  iVar2 = (this->ShapeDataIndices).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  do {
    if ((this->ShapeDataIndices).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    uVar3 = *(uint *)pFVar8;
    lVar9 = (longlong)(int)uVar3;
    if ((param_3[lVar9].Flags.Bits & 1) != 0) {
      uVar7 = 0;
      if ((int)uVar3 < (param_1->CollisionDataShapePool).Elements.ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_1->CollisionDataShapePool).Elements.AllocatorInstance.Data;
      *(undefined8 *)(pFVar4 + lVar9 * 0x30) = 0;
      *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 8) = 0;
      *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x10) = 0;
      *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x10 + 8) = 0;
      *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x20) = 0;
      *(ulonglong *)(pFVar4 + lVar9 * 0x30 + 0x20 + 8) =
           (ulonglong)(CONCAT61(uStack_2e,bStack_2f) & 0xfffffffffffffb) << 8 | 0x300;
      bStack_2f = bStack_2f & 0xfb | 3;
    }
    if ((param_3[lVar9].Flags.Bits & 2) != 0) {
      TDirtyElementPool<Chaos::FMaterialData>::Reset(&param_1->MaterialsShapePool,uVar3);
    }
    param_3[lVar9].Flags.Bits = 0;
    pFVar8 = pFVar8 + 4;
  } while( true );
}

