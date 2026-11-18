// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 3

// Find @ 145ac86e0

FCustomBrushLoadingGroup * __thiscall
TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
::Find(TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FName *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = pFVar2 + 1;
          }
          return (FCustomBrushLoadingGroup *)pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FCustomBrushLoadingGroup *)0x0;
}

// Find @ 145ac8780

FScreenGroupingBase * __thiscall
TMapBase<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
::Find(TMapBase<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FScreenGroupingBase *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FScreenGroupingBase *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FScreenGroupingBase *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FScreenGroupingBase *)0x0;
}

// Find @ 145ac8820

FScreenOrderByLoadingGroup * __thiscall
TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
::Find(TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FName *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = pFVar2 + 1;
          }
          return (FScreenOrderByLoadingGroup *)pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FScreenOrderByLoadingGroup *)0x0;
}

