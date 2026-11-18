// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// FindChecked @ 14cbec1c0

int * __thiscall
TMapBase<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
::FindChecked(TMapBase<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
              *this,UMaterialInterface *param_1)

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
        if (*(UMaterialInterface **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
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

// FindChecked @ 14cc57970

FName * __thiscall
TMapBase<UInteractiveToolActivity_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>_>
::FindChecked(TMapBase<UInteractiveToolActivity_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>_>
              *this,UInteractiveToolActivity *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
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
        if (*(UInteractiveToolActivity **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FName *)(lVar1 + 8);
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
    return (FName *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FName *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14cc57a40

FText * __thiscall
TMapBase<UInteractiveToolActivity_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>_>
::FindChecked(TMapBase<UInteractiveToolActivity_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>_>
              *this,UInteractiveToolActivity *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FText *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UInteractiveToolActivity *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FText *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FText *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FText *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<int_const_&> @ 14ccaf7a0

FColor * __thiscall
TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>::
FindOrAddImpl<int_const_&>
          (TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FColor *)(piVar2 + 1);
          }
          break;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FColor>,TDefaultMapHashableKeyFuncs<int,FColor,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FColor *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

