// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 38

// FindOrAddImpl<UObject_*_const_&> @ 1465be8d0

TArray<FProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UObject_*_const_&>
          (TMapBase<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UObject **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UObject **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UObject_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UObject_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&,FMovieSceneAudioTriggerChannel> @ 1465be980

FMovieSceneAudioTriggerChannel * __thiscall
TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
::FindOrAddImpl<FName_const_&,FMovieSceneAudioTriggerChannel>
          (TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
           *this,uint param_1,FName *param_2,FMovieSceneAudioTriggerChannel *param_3)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FName *local_18;
  FMovieSceneAudioTriggerChannel *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x120 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FMovieSceneAudioTriggerChannel *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x23].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FMovieSceneAudioTriggerChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FMovieSceneAudioTriggerChannel_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,FMovieSceneAudioTriggerChannel_&&> *)(ulonglong)param_1
             ,(bool *)&local_18);
  return (FMovieSceneAudioTriggerChannel *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x120);
}

// FindOrAddImpl<FName_const_&,FMovieSceneBoolChannel> @ 1465bea50

FMovieSceneBoolChannel * __thiscall
TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
::FindOrAddImpl<FName_const_&,FMovieSceneBoolChannel>
          (TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
           *this,uint param_1,FName *param_2,FMovieSceneBoolChannel *param_3)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FName *local_18;
  FMovieSceneBoolChannel *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x130 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FMovieSceneBoolChannel *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x25].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FMovieSceneBoolChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FMovieSceneBoolChannel_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,FMovieSceneBoolChannel_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (FMovieSceneBoolChannel *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x130 + 8);
}

// FindOrAddImpl<FName_const_&,FMovieSceneFloatChannel> @ 1465beb10

FMovieSceneFloatChannel * __thiscall
TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
::FindOrAddImpl<FName_const_&,FMovieSceneFloatChannel>
          (TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
           *this,uint param_1,FName *param_2,FMovieSceneFloatChannel *param_3)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FName *local_18;
  FMovieSceneFloatChannel *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x138 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FMovieSceneFloatChannel *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x26].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FMovieSceneFloatChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FMovieSceneFloatChannel_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,FMovieSceneFloatChannel_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (FMovieSceneFloatChannel *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x138 + 8);
}

// FindOrAddImpl<FName_const_&,FMovieSceneIntegerChannel> @ 1465bebd0

FMovieSceneIntegerChannel * __thiscall
TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
::FindOrAddImpl<FName_const_&,FMovieSceneIntegerChannel>
          (TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
           *this,uint param_1,FName *param_2,FMovieSceneIntegerChannel *param_3)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FName *local_18;
  FMovieSceneIntegerChannel *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x130 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FMovieSceneIntegerChannel *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x25].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FMovieSceneIntegerChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FMovieSceneIntegerChannel_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,FMovieSceneIntegerChannel_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (FMovieSceneIntegerChannel *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x130 + 8);
}

// FindOrAddImpl<FName_const_&,FMovieSceneStringChannel> @ 1465bec90

FMovieSceneStringChannel * __thiscall
TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
::FindOrAddImpl<FName_const_&,FMovieSceneStringChannel>
          (TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
           *this,uint param_1,FName *param_2,FMovieSceneStringChannel *param_3)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FName *local_18;
  FMovieSceneStringChannel *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x138 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FMovieSceneStringChannel *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x26].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FMovieSceneStringChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FMovieSceneStringChannel_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,FMovieSceneStringChannel_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (FMovieSceneStringChannel *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x138 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 1465d3660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
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
  TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
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
  if (uVar12 == 0) goto LAB_1465d3916;
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
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_1465d3916;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_1465d3775;
      }
    }
    else {
LAB_1465d3775:
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
        goto LAB_1465d3872;
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
LAB_1465d3872:
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
LAB_1465d3916:
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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1465d39be;
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
LAB_1465d39be:
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
                ((longlong)TStack_140.CurrentBitIndex * 0x120 + *(longlong *)&(this->Pairs).Elements
                );
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
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_1465d3b3e;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0x120 + *(longlong *)&(this->Pairs).Elements);
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
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x120 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_1465d3b3e:
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

// GetKeys<TSizedDefaultAllocator<32>_> @ 1465d3bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
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
  TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
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
  if (uVar12 == 0) goto LAB_1465d3e86;
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
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_1465d3e86;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_1465d3ce5;
      }
    }
    else {
LAB_1465d3ce5:
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
        goto LAB_1465d3de2;
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
LAB_1465d3de2:
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
LAB_1465d3e86:
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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1465d3f2e;
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
LAB_1465d3f2e:
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
                ((longlong)TStack_140.CurrentBitIndex * 0x130 + *(longlong *)&(this->Pairs).Elements
                );
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
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_1465d40ac;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0x130 + *(longlong *)&(this->Pairs).Elements);
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
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x130 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_1465d40ac:
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

// GetKeys<TSizedDefaultAllocator<32>_> @ 1465d4140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
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
  TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
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
  if (uVar12 == 0) goto LAB_1465d43f6;
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
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_1465d43f6;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_1465d4255;
      }
    }
    else {
LAB_1465d4255:
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
        goto LAB_1465d4352;
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
LAB_1465d4352:
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
LAB_1465d43f6:
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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1465d449e;
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
LAB_1465d449e:
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
                ((longlong)TStack_140.CurrentBitIndex * 0x138 + *(longlong *)&(this->Pairs).Elements
                );
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
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_1465d461c;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0x138 + *(longlong *)&(this->Pairs).Elements);
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
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x138 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_1465d461c:
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

// GetKeys<TSizedDefaultAllocator<32>_> @ 1465d46b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
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
  TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
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
  if (uVar12 == 0) goto LAB_1465d4966;
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
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_1465d4966;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_1465d47c5;
      }
    }
    else {
LAB_1465d47c5:
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
        goto LAB_1465d48c2;
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
LAB_1465d48c2:
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
LAB_1465d4966:
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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1465d4a0e;
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
LAB_1465d4a0e:
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
                ((longlong)TStack_140.CurrentBitIndex * 0x130 + *(longlong *)&(this->Pairs).Elements
                );
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
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_1465d4b8c;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0x130 + *(longlong *)&(this->Pairs).Elements);
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
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x130 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_1465d4b8c:
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

// GetKeys<TSizedDefaultAllocator<32>_> @ 1465d4c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
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
  TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
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
  if (uVar12 == 0) goto LAB_1465d4ed6;
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
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_1465d4ed6;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_1465d4d35;
      }
    }
    else {
LAB_1465d4d35:
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
        goto LAB_1465d4e32;
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
LAB_1465d4e32:
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
LAB_1465d4ed6:
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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1465d4f7e;
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
LAB_1465d4f7e:
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
                ((longlong)TStack_140.CurrentBitIndex * 0x138 + *(longlong *)&(this->Pairs).Elements
                );
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
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_1465d50fc;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0x138 + *(longlong *)&(this->Pairs).Elements);
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
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x138 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_1465d50fc:
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

// Find @ 1466710c0

ushort * __thiscall
TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,0>_>
::Find(TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,0>_>
       *this,TOverlappingEntityInput<UE::MovieScene::FInterrogationKey> *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  ushort *puVar5;
  int iVar6;
  
  uVar2 = *(uint *)&(param_1->Key).field_0x4;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (*(uint *)&param_1->Key ^ uVar2)) * 4)
    ;
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar6 * 0x14;
        if ((*(uint *)(lVar3 + (longlong)iVar6 * 0x14) == *(uint *)&param_1->Key) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar6 == -1) {
            return (ushort *)0x0;
          }
          puVar5 = (ushort *)0x0;
          if (lVar1 != 0) {
            puVar5 = (ushort *)(lVar1 + 8);
          }
          return puVar5;
        }
        iVar6 = *(int *)(lVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  return (ushort *)0x0;
}

// FindChecked @ 146671ec0

FMovieSceneAudioTriggerChannel * __thiscall
TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
::FindChecked(TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneAudioTriggerChannel *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x120 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FMovieSceneAudioTriggerChannel *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[0x23].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FMovieSceneAudioTriggerChannel *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FMovieSceneAudioTriggerChannel *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 146671f80

FMovieSceneBoolChannel * __thiscall
TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
::FindChecked(TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneBoolChannel *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x130 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FMovieSceneBoolChannel *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[0x25].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FMovieSceneBoolChannel *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FMovieSceneBoolChannel *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 146672040

FMovieSceneFloatChannel * __thiscall
TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
::FindChecked(TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneFloatChannel *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x138 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FMovieSceneFloatChannel *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[0x26].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FMovieSceneFloatChannel *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FMovieSceneFloatChannel *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 146672100

FMovieSceneIntegerChannel * __thiscall
TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
::FindChecked(TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneIntegerChannel *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x130 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FMovieSceneIntegerChannel *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[0x25].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FMovieSceneIntegerChannel *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FMovieSceneIntegerChannel *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 1466721c0

FMovieSceneStringChannel * __thiscall
TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
::FindChecked(TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneStringChannel *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x138 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FMovieSceneStringChannel *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[0x26].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FMovieSceneStringChannel *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FMovieSceneStringChannel *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 1466d3680

int __thiscall
TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
::Remove(TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
         *this,TTuple<FObjectKey,FName> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar1 = *(undefined8 *)&param_1->field_0x8;
    uVar4 = *(uint *)&param_1->field_0x4;
    uVar6 = *(int *)param_1 - uVar4 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
    uVar5 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xd;
    uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar4 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 0x10;
    uVar3 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar5 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 10;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xf;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    iVar2 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
            ::RemoveImpl<TTuple<FObjectKey,FName>_>
                      (&this->Pairs,
                       uVar3 * 0x40 + (int)((ulonglong)uVar1 >> 0x20) + (uVar3 >> 2) +
                       uVar4 + 0x9e3779b9 ^ uVar3,param_1);
    return iVar2;
  }
  return 0;
}

// FindOrAddImpl<int_const_&,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_const_&> @ 1467422b0

TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo> * __thiscall
TMapBase<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>_>
::FindOrAddImpl<int_const_&,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_const_&>
          (TMapBase<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>_>
           *this,uint param_1,int *param_2,
          TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo> *param_3)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  int *local_18;
  TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo> *local_10;
  
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
            return (TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0xc];
      } while (iVar1 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<int_const_&,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<int_const_&,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_const_&>
              *)(ulonglong)param_1,(bool *)&local_18);
  return (TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<int_const_&,TTuple<FObjectKey,FName>_const_&> @ 146742370

TTuple<FObjectKey,FName> * __thiscall
TMapBase<int,TTuple<FObjectKey,FName>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>_>
::FindOrAddImpl<int_const_&,TTuple<FObjectKey,FName>_const_&>
          (TMapBase<int,TTuple<FObjectKey,FName>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>_>
           *this,uint param_1,int *param_2,TTuple<FObjectKey,FName> *param_3)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  int *local_18;
  TTuple<FObjectKey,FName> *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TTuple<FObjectKey,FName> *)(piVar2 + 1);
          }
          break;
        }
        iVar1 = piVar2[5];
      } while (iVar1 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<int,TTuple<FObjectKey,FName>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<int_const_&,TTuple<FObjectKey,FName>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<int_const_&,TTuple<FObjectKey,FName>_const_&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (TTuple<FObjectKey,FName> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x1c + 4);
}

// FindOrAddImpl<UCameraComponent_*_const_&> @ 146742430

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FAccumulatedShake * __thiscall
TMapBase<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
::FindOrAddImpl<UCameraComponent_*_const_&>
          (TMapBase<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
           *this,uint param_1,UCameraComponent **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UCameraComponent **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xfc0 + *(longlong *)&(this->Pairs).Elements);
        if ((UCameraComponent *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FAccumulatedShake *)(plVar2 + 2);
          }
          break;
        }
        iVar1 = (int)plVar2[0x1f6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UCameraComponent_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UCameraComponent_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20)
  ;
  return (FAccumulatedShake *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xfc0 + 0x10);
}

// Find @ 14678fc10

ushort * __thiscall
TMapBase<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>_>
::Find(TMapBase<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>_>
       *this,TOverlappingEntityInput<FObjectKey> *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = *(uint *)&(param_1->Key).field_0x4;
  uVar8 = *(int *)&param_1->Key - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
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
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x14;
        if ((*(int *)(lVar3 + (longlong)iVar9 * 0x14) == *(int *)&param_1->Key) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (ushort *)0x0;
          }
          puVar6 = (ushort *)0x0;
          if (lVar1 != 0) {
            puVar6 = (ushort *)(lVar1 + 8);
          }
          return puVar6;
        }
        iVar9 = *(int *)(lVar1 + 0xc);
      } while (iVar9 != -1);
    }
  }
  return (ushort *)0x0;
}

// Find @ 14678fd20

FAudioComponentEvaluationData * __thiscall
TMapBase<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
::Find(TMapBase<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
       *this,TTuple<UE::MovieScene::FInstanceHandle,FObjectKey> *param_1)

{
  ushort uVar1;
  int iVar2;
  FAudioComponentEvaluationData *pFVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *(uint *)&param_1->field_0x8;
  uVar1 = *(ushort *)param_1;
  uVar7 = *(int *)&param_1->field_0x4 - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - uVar6 ^ uVar7 << 8;
  uVar8 = (uVar6 - uVar7) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 >> 0xc;
  uVar6 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 0x10;
  uVar8 = (uVar8 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar5 = (uVar7 - uVar8) - uVar6 ^ uVar8 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 10;
  iVar2 = TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_>
                    (&this->Pairs,
                     (uVar1 >> 2) + 0x9e3779b9 +
                     ((uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xf) + (uint)uVar1 * 0x40 ^ (uint)uVar1,
                     param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x50 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FAudioComponentEvaluationData *)0x0;
    if (lVar4 != 0) {
      pFVar3 = (FAudioComponentEvaluationData *)(lVar4 + 0x10);
    }
    return pFVar3;
  }
  return (FAudioComponentEvaluationData *)0x0;
}

// Find @ 14678fe30

FMovieSceneScalingAnchor * __thiscall
TMapBase<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
::Find(TMapBase<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
       *this,FGuid *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  FMovieSceneScalingAnchor *pFVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar5 +
                     ((ulonglong)((this->Pairs).HashSize - 1) & uVar2 & 0xffffffff) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (((param_1->D == puVar4[3] && param_1->C == puVar4[2]) && param_1->B == puVar4[1]) &&
            param_1->A == *puVar4) {
          pFVar3 = (FMovieSceneScalingAnchor *)0x0;
          if (puVar4 != (uint *)0x0) {
            pFVar3 = (FMovieSceneScalingAnchor *)(puVar4 + 4);
          }
          return pFVar3;
        }
        uVar1 = puVar4[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FMovieSceneScalingAnchor *)0x0;
}

// Find @ 14678fef0

TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
* __thiscall
TMapBase<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
::Find(TMapBase<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
       *this,FObjectKey *param_1)

{
  int iVar1;
  TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
  *pTVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_1->ObjectSerialNumber;
  uVar6 = param_1->ObjectIndex - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  iVar1 = TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FObjectKey>(&this->Pairs,(uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf,param_1)
  ;
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements;
    pTVar2 = (TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
              *)0x0;
    if (lVar3 != 0) {
      pTVar2 = (TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
                *)(lVar3 + 8);
    }
    return pTVar2;
  }
  return (TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
          *)0x0;
}

// Remove @ 1467b7d40

int __thiscall
TMapBase<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>_>
::Remove(TMapBase<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>_>
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
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_1467b7e0d;
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
LAB_1467b7e0d:
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

// Remove @ 1467b7eb0

int __thiscall
TMapBase<int,TTuple<FObjectKey,FName>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>_>
::Remove(TMapBase<int,TTuple<FObjectKey,FName>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>_>
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
        lVar10 = (longlong)(int)uVar8 * 0x1c;
        if (*(int *)(lVar10 + lVar3) == param_1) {
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Pairs).Elements.field_0x28)) {
            puVar9 = *(undefined1 **)&(this->Pairs).Elements.field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = &(this->Pairs).Elements.field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_1467b7f7d;
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
LAB_1467b7f7d:
          FVar7 = (this->Pairs).Hash.SecondaryData;
          lVar10 = *(longlong *)&(this->Pairs).Elements + lVar10;
          if (FVar7 == (ForElementType<FSetElementId>)0x0) {
            FVar7 = (ForElementType<FSetElementId>)pFVar1;
          }
          puVar11 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar10 + 0x18) * 4);
          while( true ) {
            uVar2 = *puVar11;
            if ((uVar2 == 0xffffffff) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar5)) break;
            if (uVar2 == uVar8) {
              *puVar11 = *(uint *)(lVar10 + 0x14);
              TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar8,1);
              return 1;
            }
            puVar11 = (uint *)(*(longlong *)&(this->Pairs).Elements + 0x14 +
                              (longlong)(int)uVar2 * 0x1c);
          }
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        uVar8 = *(uint *)(lVar10 + 0x14 + lVar3);
      } while (uVar8 != 0xffffffff);
    }
  }
  return 0;
}

// Remove @ 1467b8020

int __thiscall
TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
::Remove(TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
         *this,FMovieSceneEntityID *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(this->Pairs).HashSize - 1U & (ulonglong)param_1->Value) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) != param_1->Value) {
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Remove @ 1467b80a0

int __thiscall
TMapBase<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
::Remove(TMapBase<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
         *this,FObjectKey *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar3 = param_1->ObjectSerialNumber;
    uVar5 = param_1->ObjectIndex - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
    uVar4 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
    uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    iVar1 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
            ::RemoveImpl<FObjectKey>(&this->Pairs,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,param_1);
    return iVar1;
  }
  return 0;
}

// FindOrAddImpl<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>_> @ 1467e2d90

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::
FindOrAddImpl<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>_>
          (TMapBase<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,
          TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>
          *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>
  *local_res20;
  
  iVar1 = TSet<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>_>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x18);
  }
  local_res20 = param_2;
  TSet<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TKeyInitializer<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>_&&>
              *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_> @ 1467e2e30

FBoundObjectActiveSkeletalAnimations * __thiscall
TMapBase<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>_>
::FindOrAddImpl<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>_>
           *this,uint param_1,TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *param_2)

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
                     ((longlong)iVar1 * 0x420 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr>::
              UEOpEquals<USkeletalMeshComponent,bool>
                        ((TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr> *)
                         &local_res20,
                         (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x420;
      if (bVar2) {
        if (lVar3 != 0) {
          return (FBoundObjectActiveSkeletalAnimations *)(lVar3 + 0x10);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x410);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_&&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (FBoundObjectActiveSkeletalAnimations *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x420 + 0x10);
}

// FindOrAddImpl<FObjectKey> @ 1467e2f20

FMontagePlayerPerSectionData * __thiscall
TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
::FindOrAddImpl<FObjectKey>
          (TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FObjectKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == param_2->ObjectIndex) && (piVar1[1] == param_2->ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (FMontagePlayerPerSectionData *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[5];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMontagePlayerPerSectionData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x1c + 8);
}

// Find @ 14682d390

ushort * __thiscall
TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>_>
::Find(TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>_>
       *this,TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
             *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  
  uVar1 = UE::MovieScene::GetTypeHash((FObjectComponent *)param_1);
  uVar2 = ::GetTypeHash((FMaterialParameterInfo *)&(param_1->Key).field_0x10);
  iVar3 = TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_>
                    (&this->Pairs,uVar1 * 0x40 + (uVar1 >> 2) + uVar2 + 0x9e3779b9 ^ uVar1,param_1);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    puVar4 = (ushort *)0x0;
    if (lVar5 != 0) {
      puVar4 = (ushort *)(lVar5 + 0x20);
    }
    return puVar4;
  }
  return (ushort *)0x0;
}

// Find @ 14682d420

FMontagePlayerPerSectionData * __thiscall
TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
::Find(TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
       *this,FObjectKey *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  FMontagePlayerPerSectionData *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = param_1->ObjectSerialNumber;
  uVar7 = param_1->ObjectIndex - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar1 ^ uVar7 << 8;
  uVar6 = (uVar1 - uVar7) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf)) * 4);
    if (iVar8 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar8 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar2 == param_1->ObjectIndex) && (piVar2[1] == uVar1)) {
          if (iVar8 == -1) {
            return (FMontagePlayerPerSectionData *)0x0;
          }
          pFVar5 = (FMontagePlayerPerSectionData *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar5 = (FMontagePlayerPerSectionData *)(piVar2 + 2);
          }
          return pFVar5;
        }
        iVar8 = piVar2[5];
      } while (iVar8 != -1);
    }
  }
  return (FMontagePlayerPerSectionData *)0x0;
}

// FindChecked @ 14682dc60

EMovieSceneViewportParams * __thiscall
TMapBase<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
::FindChecked(TMapBase<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
              *this,FViewportClient *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EMovieSceneViewportParams *pEVar6;
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
        lVar1 = lVar2 + (longlong)iVar5 * 0x48;
        if (*(FViewportClient **)(lVar2 + (longlong)iVar5 * 0x48) == param_1) {
          if (lVar1 != 0) {
            return (EMovieSceneViewportParams *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x40);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (EMovieSceneViewportParams *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pEVar6 = (EMovieSceneViewportParams *)(*pcVar3)();
  return pEVar6;
}

// FindRef @ 14682e030

FPreAnimatedStorageIndex __thiscall
TMapBase<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
::FindRef(TMapBase<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
          *this,FMaterialParameterKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FMaterialParameterKey *in_R8;
  
  uVar2 = UE::MovieScene::GetTypeHash(in_R8);
  iVar3 = TSet<TTuple<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FMaterialParameterKey>(&this->Pairs,uVar2,in_R8);
  if ((iVar3 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x24, lVar1 != 0)) {
    (param_1->BoundMaterial).ObjectIndex = *(int *)(lVar1 + 0x18);
    return (FPreAnimatedStorageIndex)(int)param_1;
  }
  (param_1->BoundMaterial).ObjectIndex = -1;
  return (FPreAnimatedStorageIndex)(int)param_1;
}

// Remove @ 14685da10

int __thiscall
TMapBase<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
::Remove(TMapBase<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
         *this,TObjectKey<UDataLayerInstance> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar3 = (param_1->ObjectKey).ObjectSerialNumber;
    uVar5 = (param_1->ObjectKey).ObjectIndex - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
    uVar4 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
    uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    iVar1 = TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
            ::RemoveImpl<TObjectKey<UDataLayerInstance>_>
                      (&this->Pairs,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,param_1);
    return iVar1;
  }
  return 0;
}

// FindRef @ 1468b4850

FPreAnimatedStorageIndex __thiscall
TMapBase<FString,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
::FindRef(TMapBase<FString,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
          *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FString *in_R8;
  
  iVar1 = (in_R8->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(in_R8->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FString,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,in_R8);
  if ((iVar3 != -1) &&
     (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar4 != 0)) {
    *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = *(undefined4 *)(lVar4 + 0x10);
    return (FPreAnimatedStorageIndex)(int)param_1;
  }
  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = 0xffffffff;
  return (FPreAnimatedStorageIndex)(int)param_1;
}

