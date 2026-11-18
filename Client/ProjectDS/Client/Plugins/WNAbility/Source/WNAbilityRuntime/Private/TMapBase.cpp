// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 3

// Find @ 148db9620

TObjectPtr<UWN_Ability> * __thiscall
TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
::Find(TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
       *this,FWN_AbilityInstanceHandle *param_1)

{
  FWN_AbilityInstanceHandleImpl *pFVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  TObjectPtr<UWN_Ability> *pTVar6;
  
  pFVar1 = (param_1->HandleImpl).Object;
  uVar4 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FWN_AbilityInstanceHandleImpl *)*puVar3 == pFVar1) {
          pTVar6 = (TObjectPtr<UWN_Ability> *)0x0;
          if (puVar3 != (ulonglong *)0x0) {
            pTVar6 = (TObjectPtr<UWN_Ability> *)(puVar3 + 2);
          }
          return pTVar6;
        }
        iVar2 = (int)puVar3[3];
      } while (iVar2 != -1);
    }
  }
  return (TObjectPtr<UWN_Ability> *)0x0;
}

// FindChecked @ 148db96c0

int * __thiscall
TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
::FindChecked(TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
              *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
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
        if (*(UClass **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
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
    return (int *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  piVar6 = (int *)(*pcVar3)();
  return piVar6;
}

// FindChecked @ 148db9790

int * __thiscall
TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::
FindChecked(TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
            *this,FGameplayTag *param_1)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  
  FVar1 = param_1->TagName;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar9 = lVar2 + (longlong)iVar6 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x14) == param_1->TagName) {
          if (lVar9 != 0) goto LAB_148db9830;
          goto LAB_148db980a;
        }
        iVar6 = *(int *)(lVar9 + 0xc);
      } while (iVar6 != -1);
    }
  }
  lVar9 = 0;
LAB_148db980a:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    piVar7 = (int *)(*pcVar3)();
    return piVar7;
  }
LAB_148db9830:
  return (int *)(lVar9 + 8);
}

