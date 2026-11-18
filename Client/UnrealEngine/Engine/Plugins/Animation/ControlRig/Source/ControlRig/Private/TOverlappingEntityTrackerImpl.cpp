// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// Destroy<UE::MovieScene::FOverlappingControlRigParameterHandler> @ 14a391af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
::Destroy<UE::MovieScene::FOverlappingControlRigParameterHandler>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
           *this,FOverlappingControlRigParameterHandler *param_1)

{
  undefined1 *puVar1;
  TMap<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UMovieScenePiecewiseDoubleBlenderSystem *this_01;
  code *pcVar5;
  FOverlappingControlRigParameterHandler *pFVar6;
  bool bVar7;
  FBuiltInComponentTypes *pFVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FOverlappingControlRigParameterHandler *local_res10;
  undefined4 local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  uStack_94 = 1;
  puVar1 = &(this->Outputs).field_0x10;
  local_98 = 0;
  iVar3 = *(int *)&(this->Outputs).field_0x28;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Outputs).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar10 = *puVar12;
    iStack_80 = 0;
    while (uVar10 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar9 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14a391baa;
      uVar10 = puVar12[lVar9 + 1];
    }
    uStack_94 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar3 < iStack_84) {
LAB_14a391baa:
      iStack_84 = iVar3;
    }
  }
  uVar10 = *(uint *)&(this->Outputs).field_0x28;
  local_50 = *(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar13 = (int)uVar10 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar14 = uVar10 & 0xffffffe0;
  local_res10 = param_1;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Outputs).field_0x28;
  if (uVar10 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Outputs).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a391cb0;
      uVar10 = *(uint *)(puVar11 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14a391cb0:
  while( true ) {
    if (*(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34 != local_50) {
      `TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar10) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)&this->Outputs + (longlong)local_70.CurrentBitIndex * 0x2c;
    if (*(short *)(lVar9 + 0x20) != -1) {
      pFVar8 = FBuiltInComponentTypes::Get();
      pFVar6 = local_res10;
      FEntityManager::AddComponent
                (&local_res10->Linker->EntityManager,(FMovieSceneEntityID)*(ushort *)(lVar9 + 0x20),
                 (FComponentTypeID)(pFVar8->Tags).NeedsUnlink.Value);
      *(undefined2 *)(lVar9 + 0x20) = 0xffff;
      this_01 = (pFVar6->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
      if (this_01 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
        UMovieSceneBlenderSystem::ReleaseBlendChannel
                  ((UMovieSceneBlenderSystem *)this_01,*(FMovieSceneBlendChannelID *)(lVar9 + 0x22))
        ;
      }
      local_res18 = CONCAT31(local_res18._1_3_,0xff);
      local_res18 = CONCAT22(0xffff,(undefined2)local_res18);
      *(undefined4 *)(lVar9 + 0x22) = local_res18;
    }
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  bVar7 = 1 < *(int *)&(this->EntityToOutput).field_0x48;
  if (!bVar7) {
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar1 = &(this->EntityToOutput).field_0xc;
  *(undefined4 *)&(this->EntityToOutput).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EntityToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityToOutput).field_0x34 = 0;
  iVar3 = *(int *)&(this->EntityToOutput).field_0x2c;
  *(undefined4 *)&(this->EntityToOutput).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->EntityToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityToOutput).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->EntityToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
              *)this);
  }
  bVar7 = 1 < *(int *)&(this->OutputToEntity).field_0x48;
  if (!bVar7) {
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                      *)&this->OutputToEntity);
  }
  puVar1 = &(this->OutputToEntity).field_0xc;
  *(undefined4 *)&(this->OutputToEntity).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->OutputToEntity,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->OutputToEntity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputToEntity).field_0x34 = 0;
  iVar3 = *(int *)&(this->OutputToEntity).field_0x2c;
  *(undefined4 *)&(this->OutputToEntity).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->OutputToEntity).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OutputToEntity).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->OutputToEntity).field_0x48 = 1;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              *)&this->OutputToEntity);
  }
  this_00 = &this->KeyToOutput;
  bVar7 = 1 < *(int *)&(this->KeyToOutput).field_0x48;
  if (!bVar7) {
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->KeyToOutput).field_0xc;
  *(undefined4 *)&(this->KeyToOutput).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->KeyToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyToOutput).field_0x34 = 0;
  iVar3 = *(int *)&(this->KeyToOutput).field_0x2c;
  *(undefined4 *)&(this->KeyToOutput).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->KeyToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyToOutput).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->KeyToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>,FDefaultSetAllocator>
              *)this_00);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
  ::DestroyElements(&this->Outputs,0,*(int *)&(this->Outputs).field_0x8);
  puVar1 = &(this->Outputs).field_0xc;
  *(undefined4 *)&(this->Outputs).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0,(ForAnyElementType *)&this->Outputs,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Outputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Outputs).field_0x34 = 0;
  iVar3 = *(int *)&(this->Outputs).field_0x2c;
  *(undefined4 *)&(this->Outputs).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Outputs).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Outputs).field_0x10,0);
  }
  iVar3 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar3 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// ProcessInvalidatedOutputs<UE::MovieScene::FOverlappingControlRigParameterHandler_&> @ 14a3a71e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
::ProcessInvalidatedOutputs<UE::MovieScene::FOverlappingControlRigParameterHandler_&>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
           *this,UMovieSceneEntitySystemLinker *param_1,
          FOverlappingControlRigParameterHandler *param_2)

{
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar1;
  FMovieSceneEntityID *pFVar2;
  FEntityOutputAggregate FVar3;
  ushort uVar4;
  UMovieScenePiecewiseDoubleBlenderSystem *this_00;
  code *pcVar5;
  byte bVar6;
  FOverlappingControlRigParameterHandler *pFVar7;
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
  *pTVar8;
  UMovieSceneEntitySystemLinker *pUVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  FBuiltInComponentTypes *pFVar13;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar23;
  ForElementType<unsigned_int> FVar24;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  FComponentTypeID FVar28;
  ForElementType<unsigned_int> FVar29;
  TOverlappingEntityInput<UE::MovieScene::FEntityGroupID> *pTVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
  *this_01;
  undefined1 auStackY_188 [32];
  uint local_138;
  undefined1 local_134 [4];
  uint local_130;
  ushort local_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_118;
  short sStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  FOverlappingControlRigParameterHandler *local_100;
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
  *local_f8;
  ulonglong local_f0;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_e8;
  short sStack_e0;
  undefined2 uStack_de;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  UMovieSceneEntitySystemLinker *local_d0;
  int local_c8;
  int local_c4;
  TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
  *local_c0;
  FEntityGroupID local_b8;
  FEntityGroupID local_a8;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_98;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_88;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_78;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_68;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_100 = param_2;
  local_d0 = param_1;
  local_c0 = this;
  local_118 = (TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
               *)CONCAT44(local_118._4_4_,local_118._0_4_);
  if ((this->InvalidatedOutputs).NumBits != 0) {
    local_58.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 8;
    pFVar13 = FBuiltInComponentTypes::Get();
    FVar28.Value = (pFVar13->Tags).RestoreState.Value;
    local_12c = FVar28.Value;
    if ((0xfffe < (this->InvalidatedOutputs).NumBits) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InvalidatedOutputs.Num() < NO_OUTPUT",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                            ,0xf2,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar25 = (TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
               *)CONCAT44(local_118._4_4_,local_118._0_4_);
    uVar33 = 0;
    local_f0 = CONCAT44(local_f0._4_4_,1);
    local_128 = 0;
    uVar16 = (this->InvalidatedOutputs).NumBits;
    local_138 = 0;
    local_130 = 0;
    uVar22 = uVar33;
    if (uVar16 != 0) {
      FVar29 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      uVar22 = (ulonglong)uVar16;
      if (FVar29 == (ForElementType<unsigned_int>)0x0) {
        FVar29 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
      }
      uVar15 = *(uint *)FVar29;
      uVar32 = uVar33;
      while (uVar15 == 0) {
        local_130 = (int)uVar32 + 0x20;
        uVar32 = (ulonglong)local_130;
        iVar21 = (int)uVar33;
        local_128 = iVar21 + 1;
        uVar33 = (ulonglong)local_128;
        local_138 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_128)
        goto LAB_14a3a733f;
        uVar15 = *(uint *)((uchar *)((longlong)FVar29 + 4) + (longlong)iVar21 * 4);
      }
      local_f0 = (ulonglong)(-uVar15 & uVar15);
      uVar22 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_c8 = (int)lVar17;
      local_138 = (local_130 - 1) + local_c8;
      if ((int)uVar16 < (int)local_138) {
        local_138 = uVar16;
      }
      uVar22 = (ulonglong)local_138;
    }
LAB_14a3a733f:
    if ((int)uVar22 < (int)uVar16) {
      this_01 = &this->Outputs;
      local_124 = 0xffffffff;
      local_f8 = this_01;
      local_118 = pTVar25;
      do {
        pTVar25 = &this->OutputToEntity;
        local_58.ArrayNum = 0;
        if (local_58.ArrayMax < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                    (2,2,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
        }
        pUVar9 = local_d0;
        iVar21 = *(int *)&(this->OutputToEntity).field_0x48;
        sStack_e0 = (short)uVar22;
        iStack_dc = -1;
        if (iVar21 == 0) {
          local_d8 = -1;
        }
        else {
          puVar27 = *(undefined1 **)&(this->OutputToEntity).field_0x40;
          puVar18 = &(this->OutputToEntity).field_0x38;
          if (puVar27 != (undefined1 *)0x0) {
            puVar18 = puVar27;
          }
          local_d8 = *(int *)(puVar18 + ((longlong)iVar21 - 1U & uVar22 & 0xffff) * 4);
          iStack_dc = local_d8;
          if (local_d8 != -1) {
            do {
              local_d8 = *(int *)(*(longlong *)pTVar25 + 4 + (longlong)iStack_dc * 0xc);
              if (*(short *)(*(longlong *)pTVar25 + (longlong)iStack_dc * 0xc) == (short)uVar22)
              break;
              iStack_dc = local_d8;
            } while (local_d8 != -1);
          }
        }
        uStack_104 = uStack_d4;
        local_108 = local_d8;
        _sStack_110 = _sStack_e0;
        iStack_10c = iStack_dc;
        iVar21 = iStack_dc;
        local_e8 = pTVar25;
        if (iStack_dc != -1) {
          do {
            uVar4 = *(ushort *)(*(longlong *)pTVar25 + 2 + (longlong)iVar21 * 0xc);
            iStack_10c = iVar21;
            if ((uVar4 == 0xffff) ||
               (uVar16 = (uint)uVar4,
               *(int *)&(pUVar9->EntityManager).EntityLocations.field_0x28 <= (int)uVar16)) {
LAB_14a3a75a0:
              local_118 = pTVar25;
              bVar10 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1936009250870394630>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                                  ,0xfa,"Linker->EntityManager.IsAllocated(Inputs.Value())");
              if (bVar10) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar2 = (FMovieSceneEntityID *)(*(longlong *)local_118 + 2 + (longlong)iVar21 * 0xc);
              if (*(int *)&(this->EntityToOutput).field_0x8 !=
                  *(int *)&(this->EntityToOutput).field_0x34) {
                TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>
                          ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                            *)this,(uint)pFVar2->Value,pFVar2);
              }
              TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_118);
              pTVar25 = local_118;
            }
            else {
              if (*(int *)&(pUVar9->EntityManager).EntityLocations.field_0x28 <= (int)uVar16) {
                local_118 = pTVar25;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L"");
                pTVar25 = local_118;
                if (bVar10) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              puVar27 = *(undefined1 **)&(pUVar9->EntityManager).EntityLocations.field_0x20;
              puVar18 = &(pUVar9->EntityManager).EntityLocations.field_0x10;
              if (puVar27 != (undefined1 *)0x0) {
                puVar18 = puVar27;
              }
              if ((*(uint *)(puVar18 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar16 & 0x1f) & 1) == 0)
              goto LAB_14a3a75a0;
              FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_58;
              if (local_58.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar23 = local_58.AllocatorInstance.SecondaryData;
              }
              FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                      (*(longlong *)pTVar25 + 2 + (longlong)iVar21 * 0xc);
              local_118 = pTVar25;
              if ((ulonglong)FVar23 <= (ulonglong)FVar1) {
                FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_58;
                if (local_58.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                  FVar23 = local_58.AllocatorInstance.SecondaryData;
                }
                if ((ulonglong)FVar1 <
                    (ulonglong)((longlong)FVar23 + (longlong)local_58.ArrayMax * 2)) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar10) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
              }
              if (local_58.ArrayNum == local_58.ArrayMax) {
                local_58.ArrayNum =
                     Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                               (0x202,&local_58.AllocatorInstance,&local_58.ArrayMax);
              }
              lVar17 = (longlong)local_58.ArrayNum;
              FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_58;
              if (local_58.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar23 = local_58.AllocatorInstance.SecondaryData;
              }
              local_58.ArrayNum = local_58.ArrayNum + 1;
              *(ushort *)((longlong)FVar23 + lVar17 * 2) = *(ushort *)FVar1;
              pTVar25 = local_118;
            }
            iStack_10c = local_108;
            if (local_108 == -1) break;
            do {
              iVar21 = *(int *)(*(longlong *)pTVar25 + 4 + (longlong)iStack_10c * 0xc);
              local_108 = iVar21;
              if (*(short *)(*(longlong *)pTVar25 + (longlong)iStack_10c * 0xc) == sStack_110)
              break;
              iStack_10c = iVar21;
            } while (iVar21 != -1);
            iVar21 = iStack_10c;
          } while (iStack_10c != -1);
          this_01 = &this->Outputs;
          uVar33 = (ulonglong)local_128;
          uVar22 = (ulonglong)local_138;
          FVar28.Value = local_12c;
        }
        iVar21 = local_58.ArrayNum;
        puVar26 = (undefined8 *)((uVar22 & 0xffff) * 0x2c + *(longlong *)this_01);
        local_118 = pTVar25;
        if (local_58.ArrayNum < 1) {
          if (*(short *)(puVar26 + 4) != -1) {
            pFVar13 = FBuiltInComponentTypes::Get();
            pFVar7 = local_100;
            FEntityManager::AddComponent
                      (&local_100->Linker->EntityManager,
                       (FMovieSceneEntityID)*(ushort *)(puVar26 + 4),
                       (FComponentTypeID)(pFVar13->Tags).NeedsUnlink.Value);
            *(undefined2 *)(puVar26 + 4) = 0xffff;
            this_00 = (pFVar7->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
            pTVar25 = local_118;
            if (this_00 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
              UMovieSceneBlenderSystem::ReleaseBlendChannel
                        ((UMovieSceneBlenderSystem *)this_00,
                         *(FMovieSceneBlendChannelID *)((longlong)puVar26 + 0x22));
              pTVar25 = local_118;
            }
            local_120 = CONCAT31(local_120._1_3_,0xff);
            local_120 = CONCAT22(0xffff,(undefined2)local_120);
            *(undefined4 *)((longlong)puVar26 + 0x22) = local_120;
          }
        }
        else {
          FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_58;
          if (local_58.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
            FVar23 = local_58.AllocatorInstance.SecondaryData;
          }
          FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                  ((longlong)FVar23 + (longlong)local_58.ArrayNum * 2);
          while( true ) {
            if (local_58.ArrayNum != iVar21) {
              local_134[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_134);
            }
            if (FVar23 == FVar1) {
              uVar11 = 0;
              goto LAB_14a3a76de;
            }
            bVar10 = FEntityManager::HasComponent
                               (&local_d0->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar23,
                                FVar28);
            if (bVar10) break;
            FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)((longlong)FVar23 + 2);
          }
          uVar11 = 1;
LAB_14a3a76de:
          *(undefined1 *)(puVar26 + 5) = uVar11;
          if ((int)(local_138 & 0xffff) < (this->NewOutputs).NumBits) {
            if ((this->NewOutputs).NumBits <= (int)(local_138 & 0xffff)) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L"");
              if (bVar10) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            FVar29 = (this->NewOutputs).AllocatorInstance.SecondaryData;
            FVar24 = (ForElementType<unsigned_int>)&this->NewOutputs;
            if (FVar29 != (ForElementType<unsigned_int>)0x0) {
              FVar24 = FVar29;
            }
            if ((*(uint *)((longlong)FVar24 + (ulonglong)((ushort)local_138 >> 5) * 4) >>
                 (local_138 & 0x1f) & 1) != 0) {
              FVar3.bNeedsRestoration = *(bool *)(puVar26 + 5);
              pTVar14 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                        TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                  (&local_78,&local_58);
              local_b8._0_8_ = *puVar26;
              local_98.DataPtr = pTVar14->DataPtr;
              local_98.ArrayNum = pTVar14->ArrayNum;
              local_98._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
              local_b8._8_4_ = *(undefined4 *)(puVar26 + 1);
              FOverlappingControlRigParameterHandler::UpdateOutput
                        (local_100,&local_b8,&local_98,
                         (FAnimatedControlRigParameterInfo *)((longlong)puVar26 + 0xc),FVar3);
              uVar22 = (ulonglong)local_138;
              this_01 = &this->Outputs;
              pTVar25 = local_118;
              goto LAB_14a3a7848;
            }
          }
          FVar3.bNeedsRestoration = *(bool *)(puVar26 + 5);
          pTVar14 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                    TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                              (&local_68,&local_58);
          local_a8._0_8_ = *puVar26;
          local_88.DataPtr = pTVar14->DataPtr;
          local_88.ArrayNum = pTVar14->ArrayNum;
          local_88._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
          local_a8._8_4_ = *(undefined4 *)(puVar26 + 1);
          FOverlappingControlRigParameterHandler::UpdateOutput
                    (local_100,&local_a8,&local_88,
                     (FAnimatedControlRigParameterInfo *)((longlong)puVar26 + 0xc),FVar3);
          uVar22 = (ulonglong)local_138;
          this_01 = &this->Outputs;
          pTVar25 = local_118;
        }
LAB_14a3a7848:
        if (local_58.ArrayNum == 0) {
          pTVar30 = (TOverlappingEntityInput<UE::MovieScene::FEntityGroupID> *)
                    ((uVar22 & 0xffff) * 0x2c + *(longlong *)this_01);
          local_118 = pTVar25;
          if (*(int *)&(this->KeyToOutput).field_0x8 != *(int *)&(this->KeyToOutput).field_0x34) {
            uVar16 = *(uint *)&(pTVar30->Key).field_0x4;
            uVar31 = *(int *)&pTVar30->Key - uVar16 ^ uVar16 >> 0xd;
            uVar15 = (-0x61c88647 - uVar31) - uVar16 ^ uVar31 << 8;
            uVar20 = (uVar16 - uVar15) - uVar31 ^ uVar15 >> 0xd;
            uVar31 = (uVar31 - uVar20) - uVar15 ^ uVar20 >> 0xc;
            uVar16 = (uVar15 - uVar31) - uVar20 ^ uVar31 << 0x10;
            uVar15 = (uVar20 - uVar16) - uVar31 ^ uVar16 >> 5;
            uVar20 = (uVar31 - uVar15) - uVar16 ^ uVar15 >> 3;
            uVar16 = (uVar16 - uVar20) - uVar15 ^ uVar20 << 10;
            TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>,FDefaultSetAllocator>
            ::RemoveImpl<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>_>
                      ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>,FDefaultSetAllocator>
                        *)&this->KeyToOutput,(uVar15 - uVar16) - uVar20 ^ uVar16 >> 0xf,pTVar30);
          }
          uVar22 = uVar22 & 0xffff;
          iVar21 = (int)uVar22;
          TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
          ::DestroyElements(this_01,iVar21,1);
          pTVar8 = local_f8;
          lVar17 = *(longlong *)this_01;
          puVar27 = &local_f8->field_0x10;
          bVar6 = (byte)uVar22 & 0x1f;
          uVar16 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          if (*(int *)&local_f8->field_0x28 <= iVar21) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L"");
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          puVar18 = puVar27;
          if (*(undefined1 **)&pTVar8->field_0x20 != (undefined1 *)0x0) {
            puVar18 = *(undefined1 **)&pTVar8->field_0x20;
          }
          if ((*(uint *)(puVar18 + (uVar22 >> 5) * 4) & uVar16) == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L"");
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          this_01 = local_f8;
          if (*(int *)&local_f8->field_0x34 != 0) {
            *(int *)((longlong)*(int *)&local_f8->field_0x30 * 0x2c + lVar17) = iVar21;
          }
          puVar19 = (undefined4 *)((longlong)iVar21 * 0x2c + lVar17);
          *puVar19 = 0xffffffff;
          if (*(int *)&local_f8->field_0x34 < 1) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = *(undefined4 *)&local_f8->field_0x30;
          }
          puVar19[1] = uVar12;
          *(int *)&local_f8->field_0x34 = *(int *)&local_f8->field_0x34 + 1;
          *(int *)&local_f8->field_0x30 = iVar21;
          pTVar25 = local_118;
          if (*(int *)&pTVar8->field_0x28 <= iVar21) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L"");
            pTVar25 = local_118;
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(undefined1 **)&pTVar8->field_0x20 != (undefined1 *)0x0) {
            puVar27 = *(undefined1 **)&pTVar8->field_0x20;
          }
          *(uint *)(puVar27 + (uVar22 >> 5) * 4) = *(uint *)(puVar27 + (uVar22 >> 5) * 4) & ~uVar16;
          this = local_c0;
        }
        FVar29 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
        uVar16 = (this->InvalidatedOutputs).NumBits;
        local_124 = ~(uint)local_f0 & local_124;
        FVar24 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
        if (FVar29 != (ForElementType<unsigned_int>)0x0) {
          FVar24 = FVar29;
        }
        uVar15 = local_124 & *(uint *)((longlong)FVar24 + (longlong)(int)uVar33 * 4);
        while (uVar15 == 0) {
          local_130 = local_130 + 0x20;
          iVar21 = (int)uVar33;
          local_128 = iVar21 + 1;
          uVar33 = (ulonglong)local_128;
          local_138 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_128)
          goto LAB_14a3a7ac3;
          uVar15 = *(uint *)((longlong)FVar24 + 4 + (longlong)iVar21 * 4);
          local_124 = 0xffffffff;
        }
        local_f0 = CONCAT44(local_f0._4_4_,-uVar15 & uVar15);
        uVar22 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_c4 = (int)lVar17;
        local_138 = (local_130 - 1) + local_c4;
        if ((int)uVar16 < (int)local_138) {
          local_138 = uVar16;
        }
LAB_14a3a7ac3:
        uVar22 = (ulonglong)local_138;
        local_118 = pTVar25;
      } while ((int)local_138 < (this->InvalidatedOutputs).NumBits);
    }
    local_118 = pTVar25;
    if (local_58.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
    }
  }
  iVar21 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar21 < 0) || (0x80 < iVar21)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar21 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar21 < 0) || (0x80 < iVar21)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// VisitActiveAllocationImpl<UE::MovieScene::FEntityGroupID> @ 14a3b4160

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
::VisitActiveAllocationImpl<UE::MovieScene::FEntityGroupID>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
           *this,FEntityAllocation *param_1,
          TComponentPtr<UE::MovieScene::FEntityGroupID_const_> param_2)

{
  FMovieSceneEntityID *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FBuiltInComponentTypes *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  ulonglong uVar10;
  TOverlappingEntityInput<UE::MovieScene::FEntityGroupID> local_38;
  TOverlappingEntityInput<UE::MovieScene::FEntityGroupID> local_2c;
  
  if ((this->bIsInitialized == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = (ulonglong)param_1->Size;
  pFVar1 = param_1->EntityIDs;
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = param_1->ComponentHeaders;
  pFVar9 = (FComponentHeader *)0x0;
  pFVar8 = pFVar6 + param_1->NumComponents;
  for (; (pFVar7 = pFVar9, pFVar6 != pFVar8 &&
         (pFVar7 = pFVar6, (pFVar6->ComponentType).Value != (pFVar5->Tags).NeedsLink.Value));
      pFVar6 = pFVar6 + 1) {
  }
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = param_1->ComponentHeaders;
  pFVar8 = pFVar6 + param_1->NumComponents;
  do {
    if (pFVar6 == pFVar8) {
LAB_14a3b4233:
      if (uVar10 != 0) {
        do {
          local_2c.Key._0_4_ = (param_2.ComponentPtr)->PolicyKey;
          local_2c.Key._4_4_ = (param_2.ComponentPtr)->GroupIndex;
          local_2c.Key._8_1_ = (param_2.ComponentPtr)->Flags;
          local_2c.Key._9_3_ = *(undefined3 *)&(param_2.ComponentPtr)->field_0x9;
          MakeOutput(this,(FMovieSceneEntityID)pFVar1[(longlong)pFVar9].Value,&local_2c,
                     pFVar7 != (FComponentHeader *)0x0);
          pFVar9 = (FComponentHeader *)((longlong)&pFVar9->_padding_ + 1);
          param_2.ComponentPtr = param_2.ComponentPtr + 1;
        } while ((longlong)pFVar9 < (longlong)uVar10);
      }
      return;
    }
    if ((pFVar6->ComponentType).Value == (pFVar5->Tags).RestoreState.Value) {
      if (pFVar6 != (FComponentHeader *)0x0) {
        if (uVar10 == 0) {
          return;
        }
        do {
          local_38.Key._0_4_ = (param_2.ComponentPtr)->PolicyKey;
          local_38.Key._4_4_ = (param_2.ComponentPtr)->GroupIndex;
          local_38.Key._8_1_ = (param_2.ComponentPtr)->Flags;
          local_38.Key._9_3_ = *(undefined3 *)&(param_2.ComponentPtr)->field_0x9;
          uVar4 = MakeOutput(this,(FMovieSceneEntityID)pFVar1[(longlong)pFVar9].Value,&local_38,
                             pFVar7 != (FComponentHeader *)0x0);
          param_2.ComponentPtr = param_2.ComponentPtr + 1;
          pFVar9 = (FComponentHeader *)((longlong)&pFVar9->_padding_ + 1);
          *(undefined1 *)((ulonglong)uVar4 * 0x2c + 0x28 + *(longlong *)&this->Outputs) = 1;
        } while ((longlong)pFVar9 < (longlong)uVar10);
        return;
      }
      goto LAB_14a3b4233;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// ~TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID> @ 14a3bb790

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
::
~TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
           *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  FVar1 = (this->NewOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
            (&this->Outputs);
  *(undefined4 *)&(this->KeyToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->KeyToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToOutput);
  *(undefined4 *)&(this->OutputToEntity).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OutputToEntity).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputToEntity);
  *(undefined4 *)&(this->EntityToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EntityToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// CreateOutputByKey @ 14a400ec0

ushort __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
::CreateOutputByKey(TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
                    *this,TOverlappingEntityInput<UE::MovieScene::FEntityGroupID> *param_1)

{
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>::FOutput,FDefaultSparseArrayAllocator>
  *this_00;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ushort local_res8 [4];
  TPairInitializer<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>_const_&,unsigned_short_const_&>
  local_res18;
  FSparseArrayAllocationInfo local_88;
  TOverlappingEntityInput<UE::MovieScene::FEntityGroupID> *local_78;
  ushort *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined2 uStack_44;
  undefined2 uStack_42;
  uint local_40;
  
  puVar8 = TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>_>
           ::Find((TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>_>
                   *)&this->KeyToOutput,param_1);
  if ((puVar8 == (ushort *)0x0) || (local_res8[0] = *puVar8, local_res8[0] == 0xffff)) {
    local_68 = *(undefined8 *)&param_1->Key;
    uStack_60 = *(undefined4 *)&(param_1->Key).field_0x8;
    this_00 = &this->Outputs;
    iVar6 = *(int *)&(this->Outputs).field_0x34;
    uStack_4c = 0;
    local_48 = 0xffff;
    uStack_46 = 0xff;
    uStack_44 = 0xffff;
    local_40 = local_40 & 0xffffff00;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    if (iVar6 == 0) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x2c,4,1,(ForAnyElementType *)this_00,(int *)&(this->Outputs).field_0x8,
                         (int *)&(this->Outputs).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Outputs).field_0x10,false);
    }
    else {
      iVar7 = *(int *)&(this->Outputs).field_0x30;
      iVar6 = iVar6 + -1;
      iVar2 = *(int *)((longlong)iVar7 * 0x2c + 4 + *(longlong *)&this_00->field_0x0);
      *(int *)&(this->Outputs).field_0x30 = iVar2;
      *(int *)&(this->Outputs).field_0x34 = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)((longlong)iVar2 * 0x2c + *(longlong *)&this_00->field_0x0) = 0xffffffff;
      }
    }
    TSparseArrayBase<44,4,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<44,4,FDefaultSparseArrayAllocator> *)this_00,&local_88,iVar7);
    if (local_88.Pointer != (undefined8 *)0x0) {
      *(undefined8 *)local_88.Pointer = local_68;
      *(ulonglong *)((longlong)local_88.Pointer + 8) = CONCAT44(uStack_5c,uStack_60);
      *(ulonglong *)((longlong)local_88.Pointer + 0x10) = CONCAT44(uStack_54,uStack_58);
      *(ulonglong *)((longlong)local_88.Pointer + 0x18) = CONCAT44(uStack_4c,uStack_50);
      *(ulonglong *)((longlong)local_88.Pointer + 0x20) =
           CONCAT26(uStack_42,CONCAT24(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,local_48))));
      *(uint *)((longlong)local_88.Pointer + 0x28) = local_40;
    }
    if (0xfffe < local_88.Index) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NO_OUTPUT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x1d6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    uVar9 = local_88.Index & 0xffff;
    this_01 = &this->NewOutputs;
    local_res8[0] = (ushort)local_88.Index;
    iVar6 = (uVar9 - (this->NewOutputs).NumBits) + 1;
    if (0 < iVar6) {
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_01,iVar6);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_01,iVar7,iVar6,false);
      uVar9 = (uint)local_res8[0];
    }
    if ((this->NewOutputs).NumBits <= (int)uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    FVar10 = (this->NewOutputs).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)this_01;
    }
    puVar1 = (uint *)((longlong)FVar10 + (ulonglong)(uVar9 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    local_70 = local_res8;
    local_78 = param_1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>,FDefaultSetAllocator>
                *)&this->KeyToOutput,&local_res18,(bool *)&local_78);
  }
  return local_res8[0];
}

// MakeOutput @ 14a42b1f0

ushort __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
::MakeOutput(TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
             *this,FMovieSceneEntityID param_1,
            TOverlappingEntityInput<UE::MovieScene::FEntityGroupID> *param_2,bool param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong lVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ForElementType<unsigned_int> FVar9;
  int iVar10;
  undefined1 *puVar11;
  ushort local_res8 [4];
  FMovieSceneEntityID local_res10 [4];
  undefined1 local_58 [8];
  FMovieSceneEntityID *local_50;
  ushort *local_48;
  ushort *local_40;
  FMovieSceneEntityID *local_38;
  
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar11 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->EntityToOutput).field_0x38;
    }
    iVar10 = *(int *)(puVar11 +
                     ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                     (ulonglong)param_1.Value) * 4);
    if (iVar10 != -1) {
      do {
        lVar2 = *(longlong *)&this->EntityToOutput + (longlong)iVar10 * 0xc;
        if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar10 * 0xc) ==
            param_1.Value) {
          puVar8 = (ushort *)(lVar2 + 2);
          if (lVar2 == 0) {
            puVar8 = (ushort *)0x0;
          }
          if (puVar8 != (ushort *)0x0) {
            uVar6 = *puVar8;
            goto LAB_14a42b25f;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 4);
      } while (iVar10 != -1);
    }
  }
  uVar6 = 0xffff;
LAB_14a42b25f:
  local_res10[0].Value = param_1.Value;
  local_res8[0] = CreateOutputByKey(this,param_2);
  if (uVar6 == local_res8[0]) {
    if (param_3) {
      pTVar1 = &this->InvalidatedOutputs;
      iVar10 = ((uint)local_res8[0] - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar10) {
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar10);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar7,iVar10,false);
      }
      uVar6 = local_res8[0];
      if ((this->InvalidatedOutputs).NumBits <= (int)(uint)local_res8[0]) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
      FVar9 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar3 = (uint *)((longlong)FVar9 + (ulonglong)(uVar6 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
      return local_res8[0];
    }
  }
  else {
    if (uVar6 != 0xffff) {
      pTVar1 = &this->InvalidatedOutputs;
      iVar10 = ((uint)uVar6 - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar10) {
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar10);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar7,iVar10,false);
      }
      if ((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar6) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
      FVar9 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar3 = (uint *)((longlong)FVar9 + (ulonglong)(uVar6 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
      TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
      ::Remove(&this->OutputToEntity,uVar6,local_res10);
      if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
        TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>
                  ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                    *)this,(uint)local_res10[0].Value,local_res10);
      }
    }
    pTVar1 = &this->InvalidatedOutputs;
    iVar10 = ((uint)local_res8[0] - (this->InvalidatedOutputs).NumBits) + 1;
    if (0 < iVar10) {
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar10);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar7,iVar10,false);
    }
    uVar6 = local_res8[0];
    if ((this->InvalidatedOutputs).NumBits <= (int)(uint)local_res8[0]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    FVar9 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    puVar3 = (uint *)((longlong)FVar9 + (ulonglong)(uVar6 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
    local_50 = local_res10;
    local_48 = local_res8;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>
                        *)local_58,(bool *)&local_50);
    local_40 = local_res8;
    local_38 = local_res10;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
              ((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                *)&this->OutputToEntity,
               (TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                *)(local_58 + 4),(bool *)&local_40);
  }
  return local_res8[0];
}

// VisitUnlinkedAllocationImpl @ 14a4678a0

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
::VisitUnlinkedAllocationImpl
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
           *this,FEntityAllocation *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  FMovieSceneEntityID *pFVar6;
  undefined1 *puVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ushort *puVar12;
  undefined1 *puVar13;
  ForElementType<unsigned_int> this_00;
  int iVar14;
  ushort *puVar15;
  FMovieSceneEntityID local_res8 [4];
  
  if ((this->bIsInitialized == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                          ,0x19c,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar3 = param_1->Size;
  pFVar6 = param_1->EntityIDs;
  if ((ulonglong)uVar3 != 0) {
    puVar15 = (ushort *)0x0;
    do {
      uVar4 = pFVar6[(longlong)puVar15].Value;
      if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
        puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
        puVar13 = &(this->EntityToOutput).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar13 = puVar7;
        }
        iVar14 = *(int *)(puVar13 +
                         ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                         (ulonglong)uVar4) * 4);
        if (iVar14 != -1) {
          do {
            lVar1 = *(longlong *)&this->EntityToOutput + (longlong)iVar14 * 0xc;
            if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar14 * 0xc) == uVar4) {
              puVar12 = (ushort *)(lVar1 + 2);
              if (lVar1 == 0) {
                puVar12 = (ushort *)0x0;
              }
              if ((puVar12 != (ushort *)0x0) && (uVar5 = *puVar12, uVar5 != 0xffff)) {
                local_res8[0].Value = uVar4;
                TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
                ::Remove(&this->OutputToEntity,uVar5,local_res8);
                if (*(int *)&(this->EntityToOutput).field_0x8 !=
                    *(int *)&(this->EntityToOutput).field_0x34) {
                  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                  ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>
                            ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                              *)this,(uint)uVar4,local_res8);
                }
                this_00 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
                iVar14 = ((uint)uVar5 - (this->InvalidatedOutputs).NumBits) + 1;
                if (0 < iVar14) {
                  iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                     ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar14);
                  TBitArray<FDefaultBitArrayAllocator>::SetRange
                            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar11,iVar14,false);
                }
                if (((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar5) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar8 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
                if (FVar8 != (ForElementType<unsigned_int>)0x0) {
                  this_00 = FVar8;
                }
                puVar2 = (uint *)((longlong)this_00 + (ulonglong)(uVar5 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
              }
              break;
            }
            iVar14 = *(int *)(lVar1 + 4);
          } while (iVar14 != -1);
        }
      }
      puVar15 = (ushort *)((longlong)puVar15 + 1);
    } while ((longlong)puVar15 < (longlong)(ulonglong)uVar3);
  }
  return;
}

