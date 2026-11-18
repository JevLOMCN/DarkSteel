// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 2

// Find @ 14a033560

FWN_AmbientSoundInfo * __thiscall
TMapBase<int,FWN_AmbientSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_AmbientSoundInfo,0>_>
::Find(TMapBase<int,FWN_AmbientSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_AmbientSoundInfo,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FWN_AmbientSoundInfo *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pFVar3 = (FWN_AmbientSoundInfo *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar3 = (FWN_AmbientSoundInfo *)(piVar2 + 2);
          }
          return pFVar3;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  return (FWN_AmbientSoundInfo *)0x0;
}

// Find @ 14a0335d0

FWN_BGMSoundInfo * __thiscall
TMapBase<int,FWN_BGMSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_BGMSoundInfo,0>_>
::Find(TMapBase<int,FWN_BGMSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_BGMSoundInfo,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FWN_BGMSoundInfo *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pFVar3 = (FWN_BGMSoundInfo *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar3 = (FWN_BGMSoundInfo *)(piVar2 + 2);
          }
          return pFVar3;
        }
        iVar1 = piVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  return (FWN_BGMSoundInfo *)0x0;
}

