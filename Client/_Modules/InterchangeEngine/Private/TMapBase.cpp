// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 11

// FindOrAddImpl<int_const_&> @ 14e4d2970

TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
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
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<UInterchangeFactoryBaseNode_const_*_const_&> @ 14e4d2a20

FFactoryNodeData * __thiscall
TMapBase<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>_>
::FindOrAddImpl<UInterchangeFactoryBaseNode_const_*_const_&>
          (TMapBase<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>_>
           *this,uint param_1,UInterchangeFactoryBaseNode **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  UInterchangeFactoryBaseNode **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x48;
        if (*(UInterchangeFactoryBaseNode **)(lVar1 + (longlong)iVar2 * 0x48) == *param_2) {
          if (lVar3 != 0) goto LAB_14e4d2ab2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x40);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UInterchangeFactoryBaseNode_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UInterchangeFactoryBaseNode_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
LAB_14e4d2ab2:
  return (FFactoryNodeData *)(lVar3 + 8);
}

// FindOrAddImpl<FString_const_&> @ 14e4d2ad0

FTaskParsingRenameInfo * __thiscall
TMapBase<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo>,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x48, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo>,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
  }
  return (FTaskParsingRenameInfo *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14e4d2b50

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindOrAddImpl<UClass_*> @ 14e4d2bd0

bool * __thiscall
TMapBase<UClass_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>_>::
FindOrAddImpl<UClass_*>
          (TMapBase<UClass_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>_>
           *this,uint param_1,UClass **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  UClass **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(UClass **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14e4d2c62;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_*,bool>,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<UClass_*_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UClass_*_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14e4d2c62:
  return (bool *)(lVar3 + 8);
}

// FindOrAddImpl<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>_> @ 14e4d2c80

FString * __thiscall
TMapBase<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,0>_>
::FindOrAddImpl<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,0>_>
           *this,uint param_1,TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UInterchangeTranslatorBase_const_,FWeakObjectPtr>::
              UEOpEquals<UInterchangeTranslatorBase,bool>
                        ((TWeakObjectPtr<UInterchangeTranslatorBase_const_,FWeakObjectPtr> *)
                         &local_res20,
                         (TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x20;
      if (bVar2) {
        if (lVar3 != 0) {
          return (FString *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x18);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>,FString,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr>_&&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (FString *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x20 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14e4d2e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FInterchangePipelineStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelineStack,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FInterchangePipelineStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelineStack,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
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
  TMapBase<FName,FInterchangePipelineStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelineStack,0>_>
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
  uVar9 = 0;
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
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar12 == 0) goto LAB_14e4d30d6;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (undefined4)lVar10;
    uVar13 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_14e4d30d6;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14e4d2f35;
      }
    }
    else {
LAB_14e4d2f35:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
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
      uVar12 = *(uint *)FVar18;
      uVar11 = uVar9;
      while (uVar12 == 0) {
        uStack_150 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_150;
        iVar17 = (int)uVar9;
        local_168 = iVar17 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14e4d3032;
        uVar12 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_11c = (int)lVar10;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14e4d3032:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar3 = *puVar15;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar12;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar11 * 4);
        *(int *)(FVar8.Data + uVar11 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14e4d30d6:
  iVar17 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14e4d317e;
      uVar12 = puVar19[lVar10 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_118 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_14e4d317e:
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
  if (iStack_cc < iVar2) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar10 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x30)
      ;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar8.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar10 >> 0x20) + uVar12)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_14e4d32fe;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0x30 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar17 = (*pcVar5)();
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
           *(undefined8 *)pFVar14;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x30 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14e4d32fe:
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

// Find @ 14e4f39f0

UPackage ** __thiscall
TMapBase<FString,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>_>
::Find(TMapBase<FString,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  UPackage **ppUVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppUVar6 = (UPackage **)0x0;
    if (lVar4 != 0) {
      ppUVar6 = (UPackage **)(lVar4 + 0x10);
    }
    return ppUVar6;
  }
  return (UPackage **)0x0;
}

// Find @ 14e4f3a80

TObjectPtr<UInterchangeFactoryBase> * __thiscall
TMapBase<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
::Find(TMapBase<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TObjectPtr<UInterchangeFactoryBase> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TObjectPtr<UInterchangeFactoryBase> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TObjectPtr<UInterchangeFactoryBase> *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TObjectPtr<UInterchangeFactoryBase> *)0x0;
}

// Find @ 14e4f3b10

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x68 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
}

// FindChecked @ 14e4f3d60

TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
                    *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
            *)(*pcVar1)();
  return pTVar4;
}

