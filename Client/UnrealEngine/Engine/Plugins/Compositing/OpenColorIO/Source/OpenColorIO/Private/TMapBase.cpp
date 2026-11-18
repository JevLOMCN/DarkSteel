// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 1

// Find @ 14d76fba0

TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,ITargetPlatform *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITargetPlatform *)*plVar2 == param_1) {
          pTVar4 = (TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_> *)
                     (plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_> *)0x0;
}

