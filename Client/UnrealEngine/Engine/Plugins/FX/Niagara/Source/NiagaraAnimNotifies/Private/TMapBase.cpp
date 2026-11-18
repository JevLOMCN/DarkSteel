// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraAnimNotifies
// Functions: 1

// Find @ 14a0692b0

FInstanceProgressInfo * __thiscall
TMapBase<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>_>
::Find(TMapBase<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>_>
       *this,UMeshComponent *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FInstanceProgressInfo *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UMeshComponent **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FInstanceProgressInfo *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FInstanceProgressInfo *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FInstanceProgressInfo *)0x0;
}

