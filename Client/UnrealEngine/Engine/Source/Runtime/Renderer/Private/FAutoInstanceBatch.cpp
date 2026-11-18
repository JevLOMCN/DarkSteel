// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Add @ 145308670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
RayTracing::FAutoInstanceBatch::Add(FAutoInstanceBatch *this,FRayTracingScene *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  ulong64 uVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uStack_1c;
  
  uVar2 = (this->InstanceSceneDataOffsets).ArrayNum;
  puVar1 = &this->Cursor;
  uVar3 = *puVar1;
  if (uVar3 == uVar2) {
    iVar10 = 1;
    if (1 < (int)(uVar2 * 2)) {
      iVar10 = uVar2 * 2;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar10;
    uVar8 = SUB168(ZEXT816(4) * auVar5,0);
    if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    puVar9 = FMemStackBase::Alloc(&param_1->Allocator,uVar8,0x10);
    if ((iVar10 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (uVar2 != 0) {
      memcpy(puVar9,(this->InstanceSceneDataOffsets).DataPtr,
             (longlong)(this->InstanceSceneDataOffsets).ArrayNum << 2);
    }
    (this->InstanceSceneDataOffsets).DataPtr = puVar9;
    *(ulonglong *)&(this->InstanceSceneDataOffsets).ArrayNum = CONCAT44(uStack_1c,iVar10);
  }
  puVar9 = TArrayView<unsigned_int,int>::operator[](&this->InstanceSceneDataOffsets,*puVar1);
  *puVar9 = param_2;
  *puVar1 = *puVar1 + 1;
  return uVar3 == uVar2;
}

