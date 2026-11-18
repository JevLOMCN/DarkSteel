// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 16

// FindOrAddImpl<int_const_&,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_const_&> @ 1468e9cf0

TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo> * __thiscall
TMapBase<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>_>
::FindOrAddImpl<int_const_&,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_const_&>
          (TMapBase<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>_>
           *this,uint param_1,int *param_2,
          TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo> *param_3)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  int *local_18;
  TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo> *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0xc];
      } while (iVar1 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<int_const_&,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<int_const_&,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_const_&>
              *)(ulonglong)param_1,(bool *)&local_18);
  return (TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<TObjectKey<UWidget>_const_&> @ 1468e9db0

FSlotInfo * __thiscall
TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
::FindOrAddImpl<TObjectKey<UWidget>_const_&>
          (TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
           *this,uint param_1,TObjectKey<UWidget> *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  TObjectKey<UWidget> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x78 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == (param_2->ObjectKey).ObjectIndex) &&
           (piVar1[1] == (param_2->ObjectKey).ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (FSlotInfo *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[0x1c];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectKey<UWidget>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectKey<UWidget>_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (FSlotInfo *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x78 + 8);
}

// Find @ 146919a30

FSlotInfo * __thiscall
TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
::Find(TMapBase<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
       *this,TObjectKey<UWidget> *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FSlotInfo *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar1 = (param_1->ObjectKey).ObjectSerialNumber;
  iVar2 = (param_1->ObjectKey).ObjectIndex;
  uVar8 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
  uVar7 = (uVar1 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar9 * 0x78 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar3 == iVar2) && (piVar3[1] == uVar1)) {
          if (iVar9 == -1) {
            return (FSlotInfo *)0x0;
          }
          pFVar6 = (FSlotInfo *)0x0;
          if (piVar3 != (int *)0x0) {
            pFVar6 = (FSlotInfo *)(piVar3 + 2);
          }
          return pFVar6;
        }
        iVar9 = piVar3[0x1c];
      } while (iVar9 != -1);
    }
  }
  return (FSlotInfo *)0x0;
}

// FindChecked @ 146919c80

uchar * __thiscall
TMapBase<FName,unsigned_char,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::FindChecked(TMapBase<FName,unsigned_char,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
              *this,FName param_1)

{
  undefined1 *puVar1;
  TMapBase<FName,unsigned_char,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  FName local_res8;
  FName local_res10;
  
  local_res8 = param_1;
  local_res10 = param_1;
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  iVar6 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FName>(&this->Pairs,local_res10.Number + uVar5,&local_res8);
  if (iVar6 != -1) {
    pTVar2 = *(TMapBase<FName,unsigned_char,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
               **)&(this->Pairs).Elements.field_0xa0;
    if (pTVar2 != (TMapBase<FName,unsigned_char,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar1 = &(this->Pairs).Elements.field_0x0 + (longlong)iVar6 * 0x14;
    if (puVar1 != (undefined1 *)0x0) {
      return puVar1 + 8;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return &DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  puVar7 = (uchar *)(*pcVar3)();
  return puVar7;
}

// FindChecked @ 146919d10

uchar * __thiscall
TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::FindChecked(TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
              *this,FName param_1)

{
  undefined1 *puVar1;
  TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  FName local_res8;
  FName local_res10;
  
  local_res8 = param_1;
  local_res10 = param_1;
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  iVar6 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FName>(&this->Pairs,local_res10.Number + uVar5,&local_res8);
  if (iVar6 != -1) {
    pTVar2 = *(TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
               **)&(this->Pairs).Elements.field_0x280;
    if (pTVar2 != (TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar1 = &(this->Pairs).Elements.field_0x0 + (longlong)iVar6 * 0x14;
    if (puVar1 != (undefined1 *)0x0) {
      return puVar1 + 8;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return &DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  puVar7 = (uchar *)(*pcVar3)();
  return puVar7;
}

// Remove @ 14693aea0

int __thiscall
TMapBase<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>_>
::Remove(TMapBase<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>_>
         *this,int param_1)

{
  ForElementType<FSetElementId> *pFVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint *puVar11;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    pFVar1 = &(this->Pairs).Hash;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)pFVar1;
    }
    uVar8 = *(uint *)((longlong)FVar7 +
                     ((longlong)(this->Pairs).HashSize - 1U & (longlong)param_1) * 4);
    if (uVar8 != 0xffffffff) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar10 = (longlong)(int)uVar8 * 0x38;
        if (*(int *)(lVar10 + lVar3) == param_1) {
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Pairs).Elements.field_0x28)) {
            puVar9 = *(undefined1 **)&(this->Pairs).Elements.field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = &(this->Pairs).Elements.field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_14693af6d;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
LAB_14693af6d:
          FVar7 = (this->Pairs).Hash.SecondaryData;
          lVar10 = *(longlong *)&(this->Pairs).Elements + lVar10;
          if (FVar7 == (ForElementType<FSetElementId>)0x0) {
            FVar7 = (ForElementType<FSetElementId>)pFVar1;
          }
          puVar11 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar10 + 0x34) * 4);
          while( true ) {
            uVar2 = *puVar11;
            if ((uVar2 == 0xffffffff) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar5)) break;
            if (uVar2 == uVar8) {
              *puVar11 = *(uint *)(lVar10 + 0x30);
              TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar8,1);
              return 1;
            }
            puVar11 = (uint *)(*(longlong *)&(this->Pairs).Elements + 0x30 +
                              (longlong)(int)uVar2 * 0x38);
          }
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        uVar8 = *(uint *)(lVar10 + 0x30 + lVar3);
      } while (uVar8 != 0xffffffff);
    }
  }
  return 0;
}

// Remove @ 14693b010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

int __thiscall
TMapBase<UUserWidget_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>_>
::Remove(TMapBase<UUserWidget_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>_>
         *this,UUserWidget *param_1)

{
  int iVar1;
  uint uVar2;
  UUserWidget *local_res8 [4];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<UUserWidget_const_*>(&this->Pairs,uVar2 >> 0x10 ^ uVar2,local_res8);
    return iVar1;
  }
  return 0;
}

// Find @ 1469c85d0

FSparseItemInfo * __thiscall
TMapBase<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
::Find(TMapBase<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
       *this,UObject *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FSparseItemInfo *pFVar5;
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
        if (*(UObject **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FSparseItemInfo *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FSparseItemInfo *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FSparseItemInfo *)0x0;
}

// Find @ 1469c8680

TSharedRef<ITableRow,1> * __thiscall
TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<ITableRow,1> *pTVar4;
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
        if ((UObject *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<ITableRow,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<ITableRow,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 1469c8720

TObjectPtr<UObject> * __thiscall
TMapBase<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
::Find(TMapBase<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
       *this,ITableRow *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  TObjectPtr<UObject> *pTVar5;
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
        if (*(ITableRow **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pTVar5 = (TObjectPtr<UObject> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UObject> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TObjectPtr<UObject> *)0x0;
}

// Find @ 1469c87d0

FName * __thiscall
TMapBase<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
::Find(TMapBase<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
       *this,ITableRow *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FName *pFVar5;
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
        if (*(ITableRow **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FName *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FName *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FName *)0x0;
}

// Find @ 1469c8880

TSharedRef<ITableRow,1> * __thiscall
TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<ITableRow,1> *pTVar4;
  
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
          pTVar4 = (TSharedRef<ITableRow,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedRef<ITableRow,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedRef<ITableRow,1> *)0x0;
}

// FindOrAddImpl<FObjectKey> @ 146a50dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FComponentEntry * __thiscall
TMapBase<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>_>
::FindOrAddImpl<FObjectKey>
          (TMapBase<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FObjectKey *local_res20;
  
  iVar1 = TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FObjectKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FComponentEntry *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FComponentEntry *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 146a513e0

void __thiscall
TMapBase<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>::
GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>
           *this,TArray<UWidget_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146a514b3;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_146a514b3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 146a71ab0

FObjectPropertyBase ** __thiscall
TMapBase<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
::Find(TMapBase<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FObjectPropertyBase **ppFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppFVar5 = (FObjectPropertyBase **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FObjectPropertyBase **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FObjectPropertyBase **)0x0;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 146aacae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar10 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_146aacd96;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_146aacd96;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_146aacbf5;
      }
    }
    else {
LAB_146aacbf5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = uVar10;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar13 = *(uint *)FVar18;
      uVar12 = uVar10;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_150;
        iVar17 = (int)uVar10;
        local_168 = iVar17 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_146aaccf2;
        uVar13 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_146aaccf2:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar4 = *puVar15;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar13 = local_50 - 1 & uVar13 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar13;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar12 * 4);
        *(int *)(FVar9.Data + uVar12 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_146aacd96:
  iVar17 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_146aace3e;
      uVar13 = puVar19[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar3 < iStack_cc) {
      iStack_cc = iVar3;
    }
  }
LAB_146aace3e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar3) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar11 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x18)
      ;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar9.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar11 >> 0x20) + uVar13)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar11) goto LAB_146aacfbe;
        }
      }
      pFVar2 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x18);
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar17 = (*pcVar6)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar2;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x18));
LAB_146aacfbe:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

