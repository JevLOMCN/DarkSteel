// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// FindChecked @ 14cf4f230

FARSharedWorldReplicationState * __thiscall
TMapBase<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>_>
::FindChecked(TMapBase<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState,0>_>
              *this,AARSharedWorldPlayerController *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FARSharedWorldReplicationState *pFVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(AARSharedWorldPlayerController **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FARSharedWorldReplicationState *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FARSharedWorldReplicationState *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FARSharedWorldReplicationState *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14cf4f300

float * __thiscall
TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
::FindChecked(void *this,EARFaceBlendShape param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  float *pfVar4;
  EARFaceBlendShape *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EARFaceBlendShape *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EARFaceBlendShape *)0x0) {
            return (float *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (float *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar1)();
  return pfVar4;
}

