// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// Find @ 14711e890

FTypeInfo * __thiscall
TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
::Find(TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
       *this,FTypeHandle *param_1)

{
  int iVar1;
  bool bVar2;
  FTypeInfo *pFVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = (param_1->TypeKey).ObjectKey.ObjectSerialNumber;
  uVar8 = (param_1->TypeKey).ObjectKey.ObjectIndex - uVar7 ^ uVar7 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar7 ^ uVar8 << 8;
  uVar9 = (uVar7 - uVar6) - uVar8 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 0xc;
  uVar7 = (uVar6 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar7) - uVar8 ^ uVar7 >> 5;
  uVar6 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xf)) * 4);
    while (iVar1 != -1) {
      bVar2 = UE::Mass::FTypeHandle::operator==
                        ((FTypeHandle *)
                         (*(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0xf0),param_1);
      lVar5 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0xf0;
      if (bVar2) {
        pFVar3 = (FTypeInfo *)0x0;
        if (lVar5 != 0) {
          pFVar3 = (FTypeInfo *)(lVar5 + 0x10);
        }
        return pFVar3;
      }
      iVar1 = *(int *)(lVar5 + 0xe0);
    }
  }
  return (FTypeInfo *)0x0;
}

