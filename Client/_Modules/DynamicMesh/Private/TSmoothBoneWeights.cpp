// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 10

// TSmoothBoneWeights<unsigned_short,float> @ 14c7b2110

TSmoothBoneWeights<unsigned_short,float> * __thiscall
UE::Geometry::TSmoothBoneWeights<unsigned_short,float>::TSmoothBoneWeights<unsigned_short,float>
          (TSmoothBoneWeights<unsigned_short,float> *this,FDynamicMesh3 *param_1,
          TBoneWeightsDataSource<unsigned_short,float> *param_2)

{
  this->SourceMesh = param_1;
  this->_padding_ = (longlong)&___7__TSmoothBoneWeights_GM_Geometry_UE__6B_;
  this->Progress = (FProgressCancel *)0x0;
  this->MinimumWeightThreshold = 0.0;
  this->DataSource = param_2;
  return this;
}

// TSmoothBoneWeights<int,float> @ 14c7b2140

TSmoothBoneWeights<int,float> * __thiscall
UE::Geometry::TSmoothBoneWeights<int,float>::TSmoothBoneWeights<int,float>
          (TSmoothBoneWeights<int,float> *this,FDynamicMesh3 *param_1,
          TBoneWeightsDataSource<int,float> *param_2)

{
  this->SourceMesh = param_1;
  this->_padding_ = (longlong)&___7__TSmoothBoneWeights_HM_Geometry_UE__6B_;
  this->Progress = (FProgressCancel *)0x0;
  this->MinimumWeightThreshold = 0.0;
  this->DataSource = param_2;
  return this;
}

// ~TSmoothBoneWeights<unsigned_short,float> @ 14c7b6b20

void __thiscall
UE::Geometry::TSmoothBoneWeights<unsigned_short,float>::~TSmoothBoneWeights<unsigned_short,float>
          (TSmoothBoneWeights<unsigned_short,float> *this)

{
  return;
}

// ~TSmoothBoneWeights<int,float> @ 14c7b6b30

void __thiscall
UE::Geometry::TSmoothBoneWeights<int,float>::~TSmoothBoneWeights<int,float>
          (TSmoothBoneWeights<int,float> *this)

{
  return;
}

// Cancelled @ 14c7e7ca0

bool __thiscall
UE::Geometry::TSmoothBoneWeights<unsigned_short,float>::Cancelled
          (TSmoothBoneWeights<unsigned_short,float> *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

// Cancelled @ 14c7e7d10

bool __thiscall
UE::Geometry::TSmoothBoneWeights<int,float>::Cancelled(TSmoothBoneWeights<int,float> *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

// SmoothWeightsAtVertex @ 14c8327c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TSmoothBoneWeights<unsigned_short,float>::SmoothWeightsAtVertex
          (TSmoothBoneWeights<unsigned_short,float> *this,int param_1,float param_2,
          TMap<unsigned_short,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>_>
          *param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
  *this_00;
  TSmoothBoneWeights<unsigned_short,float> *pTVar8;
  TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
  *pTVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  byte bVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ushort *puVar20;
  longlong lVar21;
  ForElementType<FSetElementId> FVar22;
  ForElementType<float> *pFVar23;
  ForElementType<float> *pFVar24;
  float *pfVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  undefined1 *puVar30;
  ForAnyElementType FVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_3c8 [32];
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376 [6];
  ForAnyElementType local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_35c [12];
  int local_350 [2];
  int local_348;
  float local_344;
  int local_340;
  TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
  *local_338;
  TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
  *local_330;
  int iStack_328;
  uint uStack_324;
  TBitArray<FDefaultBitArrayAllocator> *local_320;
  undefined4 uStack_318;
  uint uStack_314;
  int local_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  int local_2f0;
  int local_2ec;
  TPairInitializer<unsigned_short_const_&,float_&&> local_2e8;
  TSmoothBoneWeights<unsigned_short,float> *local_2d8;
  int local_2d0;
  longlong *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
  *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  longlong local_268;
  float *local_260;
  TFunction<int___cdecl(int)> local_258;
  TFunction<int___cdecl(int)> local_228;
  undefined4 local_1dc;
  undefined4 local_1bc;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  undefined1 local_180 [8];
  ForElementType<FSetElementId> local_178;
  int local_170;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368 = 0;
  local_1b8._0_8_ = 0;
  local_1b8._8_8_ = 0;
  local_198 = (uint *)0x0;
  local_190 = 0;
  local_184 = 0;
  local_178 = (ForElementType<FSetElementId>)0x0;
  local_170 = 0;
  local_18c = 0x80;
  local_188 = 0xffffffff;
  local_340 = param_1;
  local_338 = (TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
               *)param_3;
  local_2d8 = this;
  iVar14 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_370,(int *)((longlong)&local_368 + 4));
  local_368 = CONCAT44(local_368._4_4_,iVar14 + 1);
  *(int *)(local_370.Data + (longlong)iVar14 * 4) = param_1;
  FDynamicMesh3::VtxVerticesItr(this->SourceMesh,(MappedValueEnumerable *)local_168,param_1);
  uVar4 = local_168._8_4_;
  uVar10 = local_168._0_8_;
  local_258._0_8_ = local_168._16_8_;
  local_258._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar18 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar18)(plVar18,&local_258.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_128,(FSmallListSet *)uVar10,uVar4,false,&local_258);
  local_228._0_8_ = local_168._16_8_;
  local_228._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar18 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar18)(plVar18,&local_228.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_c8,(FSmallListSet *)local_168._0_8_,local_168._8_4_,true,
             &local_228);
  while ((((local_128._0_8_ != local_c8._0_8_ || (local_128._8_4_ != local_c8._8_4_)) ||
          (local_128._24_4_ != local_c8._24_4_)) || (local_128._28_4_ != local_c8._28_4_))) {
    local_350[0] = local_128._32_4_;
    Core::Private::Function::CheckCallable((void *)local_128._48_8_);
    uVar10 = local_128._48_8_;
    plVar18 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar18 = local_d0;
    }
    uVar16 = (**(code **)(*plVar18 + 8))();
    local_360 = (*(code *)uVar10)(uVar16,local_350);
    if (((local_370.Data <= (FScriptContainerElement *)&local_360) &&
        ((FScriptContainerElement *)&local_360 < local_370.Data + (longlong)local_368._4_4_ * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    iVar14 = (int)local_368;
    if ((int)local_368 == local_368._4_4_) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_370,(int *)((longlong)&local_368 + 4));
    }
    local_368 = CONCAT44(local_368._4_4_,iVar14 + 1);
    *(undefined4 *)(local_370.Data + (longlong)iVar14 * 4) = local_360;
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_128);
  }
  if (local_c8._48_8_ != 0) {
    plVar18 = (longlong *)(local_c8 + 0x40);
    if ((longlong *)local_c8._88_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_c8._88_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if ((code *)local_128._48_8_ != (code *)0x0) {
    plVar18 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar18 = local_d0;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_168._16_8_ != 0) {
    plVar18 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_168._56_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  iVar14 = (int)local_368;
  uVar19 = (ulonglong)(int)local_368;
  pFVar2 = local_370.Data + uVar19 * 4;
  FVar31.Data = local_370.Data;
  while( true ) {
    if ((int)uVar19 != iVar14) {
      local_378 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_378);
    }
    if (FVar31.Data == pFVar2) break;
    iVar27 = 0;
    uVar4 = *(undefined4 *)FVar31.Data;
    iVar15 = (**(code **)((longlong)*this->DataSource + 8))(this->DataSource,uVar4);
    if (0 < iVar15) {
      do {
        local_35c._0_4_ = (**(code **)((longlong)*this->DataSource + 0x18))(this->DataSource,uVar4);
        if (this->MinimumWeightThreshold <= (float)local_35c._0_4_ &&
            (float)local_35c._0_4_ != this->MinimumWeightThreshold) {
          local_35c._6_2_ =
               (**(code **)((longlong)*this->DataSource + 0x10))(this->DataSource,uVar4,iVar27);
          if (local_1b8._8_4_ != local_184) {
            FVar22 = (ForElementType<FSetElementId>)local_180;
            if (local_178 != (ForElementType<FSetElementId>)0x0) {
              FVar22 = local_178;
            }
            iVar15 = *(int *)((longlong)FVar22 +
                             ((ulonglong)(local_170 - 1) & (ulonglong)(ushort)local_35c._6_2_) * 4);
            while (iVar15 != -1) {
              puVar20 = (ushort *)((longlong)iVar15 * 0x40 + local_1b8._0_8_);
              if (*puVar20 == local_35c._6_2_) {
                if (puVar20 != (ushort *)0x0) goto LAB_14c832c34;
                break;
              }
              iVar15 = *(int *)(puVar20 + 0x1c);
            }
          }
          local_2e8.Value = (float *)(local_35c + 6);
          TSet<TTuple<unsigned_short,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_short,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<unsigned_short_&&>_>
                    ((TSet<TTuple<unsigned_short,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_short,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)local_1b8,(uint)&local_348,
                     (TKeyInitializer<unsigned_short_&&> *)(ulonglong)(ushort)local_35c._6_2_,
                     (bool *)&local_2e8.Value);
          puVar20 = (ushort *)((longlong)local_348 * 0x40 + local_1b8._0_8_);
LAB_14c832c34:
          pFVar24 = (ForElementType<float> *)(puVar20 + 4);
          pFVar23 = *(ForElementType<float> **)(puVar20 + 0x14);
          if (*(ForElementType<float> **)(puVar20 + 0x14) == (ForElementType<float> *)0x0) {
            pFVar23 = pFVar24;
          }
          if (((pFVar23 <= (ForElementType<float> *)local_35c) &&
              (local_35c < pFVar23->InlineData + (longlong)*(int *)(puVar20 + 0x1a) * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          iVar15 = *(int *)(puVar20 + 0x18);
          if (iVar15 == *(int *)(puVar20 + 0x1a)) {
            iVar15 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                               (0x404,pFVar24,(int *)(puVar20 + 0x1a));
          }
          *(int *)(puVar20 + 0x18) = iVar15 + 1;
          if (*(ForElementType<float> **)(puVar20 + 0x14) != (ForElementType<float> *)0x0) {
            pFVar24 = *(ForElementType<float> **)(puVar20 + 0x14);
          }
          *(undefined4 *)(pFVar24->InlineData + (longlong)iVar15 * 4) = local_35c._0_4_;
        }
        iVar27 = iVar27 + 1;
        iVar15 = (**(code **)((longlong)*this->DataSource + 8))(this->DataSource,uVar4);
      } while (iVar27 < iVar15);
    }
    uVar19 = local_368 & 0xffffffff;
    FVar31.Data = FVar31.Data + 4;
  }
  TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
  ::Reset(local_338);
  uVar28 = local_190;
  iStack_328 = 0;
  local_300 = 1;
  local_310 = 0;
  uStack_324 = 1;
  uStack_314 = 0;
  if (local_190 != 0) {
    puVar29 = (uint *)(local_1b8 + 0x10);
    if (local_198 != (uint *)0x0) {
      puVar29 = local_198;
    }
    uStack_324 = *puVar29;
    while (uStack_324 == 0) {
      lVar21 = (longlong)iStack_328;
      local_310 = local_310 + 0x20;
      iStack_328 = iStack_328 + 1;
      uStack_324 = 1;
      uStack_314 = local_190;
      if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_328)
      goto LAB_14c832da0;
      uStack_324 = puVar29[lVar21 + 1];
    }
    uStack_324 = -uStack_324 & uStack_324;
    uVar19 = (ulonglong)uStack_324 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_2f0 = (int)lVar21;
    uStack_314 = local_310 + -1 + local_2f0;
    if ((int)local_190 < (int)uStack_314) {
      uStack_314 = local_190;
    }
  }
LAB_14c832da0:
  local_330 = (TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
               *)local_1b8;
  uStack_30c = local_1dc;
  local_320 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
  iStack_308 = local_1b8._8_4_ - local_184;
  uVar26 = local_190 & 0xffffffe0;
  TStack_2c0._padding_ = CONCAT44(uStack_324,iStack_328);
  uStack_318 = 0xffffffff;
  TStack_2c0.CurrentBitIndex = uStack_314;
  TStack_2c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_190 >> 5;
  TStack_2c0._28_4_ = local_1dc;
  TStack_2c0.BaseBitIndex = local_310;
  uStack_2a0 = CONCAT44(uStack_304,iStack_308);
  bVar17 = (byte)local_190;
  local_2c8 = (longlong *)local_330;
  TStack_2c0.Array = local_320;
  if (((int)local_190 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  this_00 = local_338;
  if (uVar28 != local_190) {
    puVar29 = (uint *)(local_1b8 + 0x10);
    if (local_198 != (uint *)0x0) {
      puVar29 = local_198;
    }
    uVar28 = -1 << (bVar17 & 0x1f) & puVar29[iVar14];
    while (uVar28 == 0) {
      lVar21 = (longlong)iVar14;
      uVar26 = uVar26 + 0x20;
      iVar14 = iVar14 + 1;
      uVar28 = local_190;
      if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14c832ed0;
      uVar28 = puVar29[lVar21 + 1];
    }
    uVar19 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_2ec = (int)lVar21;
    uVar28 = (uVar26 - 1) + local_2ec;
    if ((int)local_190 < (int)uVar28) {
      uVar28 = local_190;
    }
  }
LAB_14c832ed0:
  while( true ) {
    plVar18 = local_2c8;
    if ((int)local_2c8[1] - *(int *)((longlong)local_2c8 + 0x34) != (int)uStack_2a0) {
      local_377 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_short,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_377);
    }
    if (((TStack_2c0.CurrentBitIndex == uVar28) &&
        (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) &&
       (plVar18 == (longlong *)local_1b8)) break;
    fVar33 = 0.0;
    lVar21 = (longlong)TStack_2c0.CurrentBitIndex * 0x40 + *plVar18;
    pfVar25 = (float *)(lVar21 + 8);
    iVar14 = *(int *)(lVar21 + 0x30);
    if (*(float **)(lVar21 + 0x28) != (float *)0x0) {
      pfVar25 = *(float **)(lVar21 + 0x28);
    }
    pfVar3 = pfVar25 + iVar14;
    while( true ) {
      if (*(int *)(lVar21 + 0x30) != iVar14) {
        local_376[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_376);
      }
      if (pfVar25 == pfVar3) break;
      fVar33 = fVar33 + *pfVar25;
      pfVar25 = pfVar25 + 1;
    }
    local_260 = &local_344;
    local_344 = fVar33 / (float)*(int *)(lVar21 + 0x30);
    local_268 = lVar21;
    TSet<TTuple<unsigned_short,float>,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,float_&&>_>
              (this_00,&local_2e8,(bool *)&local_268);
    TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
  }
  SmoothBoneWeightsLocals::NormalizeWeights<unsigned_short,float>
            ((TMap<unsigned_short,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>_>
              *)this_00);
  iVar14 = *(int *)&(this_00->Elements).field_0x28;
  puVar1 = &(this_00->Elements).field_0x10;
  iStack_328 = 0;
  local_310 = 0;
  uStack_314 = 0;
  if (iVar14 == 0) {
LAB_14c833050:
    uStack_324 = (uint)local_300;
  }
  else {
    puVar29 = *(uint **)&(this_00->Elements).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)puVar1;
    }
    uStack_324 = *puVar29;
    while (uStack_324 == 0) {
      lVar21 = (longlong)iStack_328;
      local_310 = local_310 + 0x20;
      iStack_328 = iStack_328 + 1;
      uStack_314 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_328) goto LAB_14c833050;
      uStack_324 = puVar29[lVar21 + 1];
    }
    uStack_324 = -uStack_324 & uStack_324;
    uVar19 = (ulonglong)uStack_324 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_2d0 = (int)lVar21;
    uStack_314 = local_2d0 + -1 + local_310;
    if (iVar14 < (int)uStack_314) {
      uStack_314 = iVar14;
    }
  }
  uVar28 = *(uint *)&(this_00->Elements).field_0x28;
  uStack_30c = local_1bc;
  uVar26 = uVar28 & 0xffffffe0;
  iStack_308 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
  uStack_318 = 0xffffffff;
  local_330 = this_00;
  TStack_290._padding_ = CONCAT44(uStack_324,iStack_328);
  TStack_290.CurrentBitIndex = uStack_314;
  TStack_290.UnvisitedBitMask = 0xffffffff;
  local_298 = this_00;
  iVar15 = (int)uVar28 >> 5;
  TStack_290._28_4_ = local_1bc;
  TStack_290.BaseBitIndex = local_310;
  uStack_270 = CONCAT44(uStack_304,iStack_308);
  local_320 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_290.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar28 < 0) || (iVar14 < (int)uVar28)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  pTVar8 = local_2d8;
  iVar14 = local_340;
  uVar5 = *(uint *)&(this_00->Elements).field_0x28;
  if (uVar28 != uVar5) {
    puVar30 = *(undefined1 **)&(this_00->Elements).field_0x20;
    if (puVar30 == (undefined1 *)0x0) {
      puVar30 = puVar1;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar15 * 4);
    while (uVar28 == 0) {
      lVar21 = (longlong)iVar15;
      uVar26 = uVar26 + 0x20;
      iVar15 = iVar15 + 1;
      uVar28 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c833160;
      uVar28 = *(uint *)(puVar30 + lVar21 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar28 = (uVar26 - 1) + (int)lVar21;
    if ((int)uVar5 < (int)uVar28) {
      uVar28 = uVar5;
    }
  }
LAB_14c833160:
  while( true ) {
    pTVar9 = local_298;
    if (*(int *)&(local_298->Elements).field_0x8 - *(int *)&(local_298->Elements).field_0x34 !=
        (int)uStack_270) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_short,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_35c + 4);
    }
    lVar21 = (longlong)TStack_290.CurrentBitIndex;
    if (((TStack_290.CurrentBitIndex == uVar28) &&
        (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00)
       ) break;
    lVar6 = *(longlong *)&pTVar9->Elements;
    fVar33 = *(float *)(lVar6 + 4 + lVar21 * 0x10);
    fVar32 = (float)(**(code **)((longlong)*pTVar8->DataSource + 0x20))
                              (pTVar8->DataSource,iVar14,*(undefined2 *)(lVar6 + lVar21 * 0x10));
    TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
    *(float *)(lVar6 + 4 + lVar21 * 0x10) = (fVar33 - fVar32) * param_2 + fVar32;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
  }
  SmoothBoneWeightsLocals::NormalizeWeights<unsigned_short,float>
            ((TMap<unsigned_short,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>_>
              *)this_00);
  cVar13 = (**(code **)(pTVar8->_padding_ + 0x18))(pTVar8);
  local_170 = 0;
  if (local_178 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1b8);
  if (local_370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data);
  }
  return cVar13 == '\0';
}

// SmoothWeightsAtVertex @ 14c833260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TSmoothBoneWeights<int,float>::SmoothWeightsAtVertex
          (TSmoothBoneWeights<int,float> *this,int param_1,float param_2,
          TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *this_00;
  TSmoothBoneWeights<int,float> *pTVar8;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *pTVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined8 uVar17;
  byte bVar18;
  longlong *plVar19;
  ulonglong uVar20;
  float *pfVar21;
  longlong lVar22;
  ForElementType<FSetElementId> FVar23;
  ForElementType<float> *pFVar24;
  ForElementType<float> *pFVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  undefined1 *puVar30;
  ForAnyElementType FVar31;
  float fVar32;
  undefined1 auStackY_3c8 [32];
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376 [6];
  ForAnyElementType local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_35c [20];
  float local_348;
  int local_344;
  float local_340;
  int local_33c;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *local_338;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *local_330;
  int iStack_328;
  uint uStack_324;
  TBitArray<FDefaultBitArrayAllocator> *local_320;
  undefined4 uStack_318;
  uint uStack_314;
  int local_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  int local_2f0;
  int local_2ec;
  TPairInitializer<int_const_&,float_&&> local_2e8;
  TSmoothBoneWeights<int,float> *local_2d8;
  int local_2d0;
  longlong *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  longlong local_268;
  float *local_260;
  TFunction<int___cdecl(int)> local_258;
  TFunction<int___cdecl(int)> local_228;
  undefined4 local_1dc;
  undefined4 local_1bc;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  undefined1 local_180 [8];
  ForElementType<FSetElementId> local_178;
  int local_170;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368 = 0;
  local_1b8._0_8_ = 0;
  local_1b8._8_8_ = 0;
  local_198 = (uint *)0x0;
  local_190 = 0;
  local_184 = 0;
  local_178 = (ForElementType<FSetElementId>)0x0;
  local_170 = 0;
  local_18c = 0x80;
  local_188 = 0xffffffff;
  local_33c = param_1;
  local_338 = (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
               *)param_3;
  local_2d8 = this;
  iVar14 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_370,(int *)((longlong)&local_368 + 4));
  local_368 = CONCAT44(local_368._4_4_,iVar14 + 1);
  *(int *)(local_370.Data + (longlong)iVar14 * 4) = param_1;
  FDynamicMesh3::VtxVerticesItr(this->SourceMesh,(MappedValueEnumerable *)local_168,param_1);
  uVar4 = local_168._8_4_;
  uVar10 = local_168._0_8_;
  local_258._0_8_ = local_168._16_8_;
  local_258._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar19 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar19)(plVar19,&local_258.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_128,(FSmallListSet *)uVar10,uVar4,false,&local_258);
  local_228._0_8_ = local_168._16_8_;
  local_228._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar19 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar19)(plVar19,&local_228.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_c8,(FSmallListSet *)local_168._0_8_,local_168._8_4_,true,
             &local_228);
  while ((((local_128._0_8_ != local_c8._0_8_ || (local_128._8_4_ != local_c8._8_4_)) ||
          (local_128._24_4_ != local_c8._24_4_)) || (local_128._28_4_ != local_c8._28_4_))) {
    local_35c._12_4_ = local_128._32_4_;
    Core::Private::Function::CheckCallable((void *)local_128._48_8_);
    uVar10 = local_128._48_8_;
    plVar19 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar19 = local_d0;
    }
    uVar17 = (**(code **)(*plVar19 + 8))();
    local_360 = (*(code *)uVar10)(uVar17,local_35c + 0xc);
    if (((local_370.Data <= (FScriptContainerElement *)&local_360) &&
        ((FScriptContainerElement *)&local_360 < local_370.Data + (longlong)local_368._4_4_ * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    iVar14 = (int)local_368;
    if ((int)local_368 == local_368._4_4_) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_370,(int *)((longlong)&local_368 + 4));
    }
    local_368 = CONCAT44(local_368._4_4_,iVar14 + 1);
    *(undefined4 *)(local_370.Data + (longlong)iVar14 * 4) = local_360;
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_128);
  }
  if (local_c8._48_8_ != 0) {
    plVar19 = (longlong *)(local_c8 + 0x40);
    if ((longlong *)local_c8._88_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_c8._88_8_;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if ((code *)local_128._48_8_ != (code *)0x0) {
    plVar19 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar19 = local_d0;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_168._16_8_ != 0) {
    plVar19 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_168._56_8_;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  iVar14 = (int)local_368;
  uVar20 = (ulonglong)(int)local_368;
  pFVar2 = local_370.Data + uVar20 * 4;
  FVar31.Data = local_370.Data;
  while( true ) {
    if ((int)uVar20 != iVar14) {
      local_378 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_378);
    }
    if (FVar31.Data == pFVar2) break;
    iVar27 = 0;
    uVar4 = *(undefined4 *)FVar31.Data;
    iVar15 = (**(code **)((longlong)*this->DataSource + 8))(this->DataSource,uVar4);
    if (0 < iVar15) {
      do {
        local_35c._0_4_ = (**(code **)((longlong)*this->DataSource + 0x18))(this->DataSource,uVar4);
        if (this->MinimumWeightThreshold <= (float)local_35c._0_4_ &&
            (float)local_35c._0_4_ != this->MinimumWeightThreshold) {
          local_348 = (float)(**(code **)((longlong)*this->DataSource + 0x10))
                                       (this->DataSource,uVar4,iVar27);
          if (local_1b8._8_4_ != local_184) {
            FVar23 = (ForElementType<FSetElementId>)local_180;
            if (local_178 != (ForElementType<FSetElementId>)0x0) {
              FVar23 = local_178;
            }
            fVar16 = *(float *)((longlong)FVar23 + (ulonglong)(local_170 - 1U & (uint)local_348) * 4
                               );
            while (fVar16 != -NAN) {
              pfVar21 = (float *)((longlong)(int)fVar16 * 0x40 + local_1b8._0_8_);
              if (*pfVar21 == local_348) {
                if (pfVar21 != (float *)0x0) goto LAB_14c8336d2;
                break;
              }
              fVar16 = pfVar21[0xe];
            }
          }
          local_2e8.Value = &local_348;
          TSet<TTuple<int,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<int_&&>_>
                    ((TSet<TTuple<int,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)local_1b8,(uint)&local_344,
                     (TKeyInitializer<int_&&> *)(ulonglong)(uint)local_348,(bool *)&local_2e8.Value)
          ;
          pfVar21 = (float *)((longlong)local_344 * 0x40 + local_1b8._0_8_);
LAB_14c8336d2:
          pFVar25 = (ForElementType<float> *)(pfVar21 + 2);
          pFVar24 = *(ForElementType<float> **)(pfVar21 + 10);
          if (*(ForElementType<float> **)(pfVar21 + 10) == (ForElementType<float> *)0x0) {
            pFVar24 = pFVar25;
          }
          if (((pFVar24 <= (ForElementType<float> *)local_35c) &&
              (local_35c < pFVar24->InlineData + (longlong)(int)pfVar21[0xd] * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          fVar16 = pfVar21[0xc];
          if (fVar16 == pfVar21[0xd]) {
            fVar16 = (float)Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                                      (0x404,pFVar25,(int *)(pfVar21 + 0xd));
          }
          pfVar21[0xc] = (float)((int)fVar16 + 1);
          if (*(ForElementType<float> **)(pfVar21 + 10) != (ForElementType<float> *)0x0) {
            pFVar25 = *(ForElementType<float> **)(pfVar21 + 10);
          }
          *(undefined4 *)(pFVar25->InlineData + (longlong)(int)fVar16 * 4) = local_35c._0_4_;
        }
        iVar27 = iVar27 + 1;
        iVar15 = (**(code **)((longlong)*this->DataSource + 8))(this->DataSource,uVar4);
      } while (iVar27 < iVar15);
    }
    uVar20 = local_368 & 0xffffffff;
    FVar31.Data = FVar31.Data + 4;
  }
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::Reset
            (local_338);
  uVar28 = local_190;
  iStack_328 = 0;
  local_300 = 1;
  local_310 = 0;
  uStack_324 = 1;
  uStack_314 = 0;
  if (local_190 != 0) {
    puVar29 = (uint *)(local_1b8 + 0x10);
    if (local_198 != (uint *)0x0) {
      puVar29 = local_198;
    }
    uStack_324 = *puVar29;
    while (uStack_324 == 0) {
      lVar22 = (longlong)iStack_328;
      local_310 = local_310 + 0x20;
      iStack_328 = iStack_328 + 1;
      uStack_324 = 1;
      uStack_314 = local_190;
      if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_328)
      goto LAB_14c833840;
      uStack_324 = puVar29[lVar22 + 1];
    }
    uStack_324 = -uStack_324 & uStack_324;
    uVar20 = (ulonglong)uStack_324 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_2f0 = (int)lVar22;
    uStack_314 = local_310 + -1 + local_2f0;
    if ((int)local_190 < (int)uStack_314) {
      uStack_314 = local_190;
    }
  }
LAB_14c833840:
  local_330 = (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
               *)local_1b8;
  uStack_30c = local_1dc;
  local_320 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
  iStack_308 = local_1b8._8_4_ - local_184;
  uVar26 = local_190 & 0xffffffe0;
  TStack_2c0._padding_ = CONCAT44(uStack_324,iStack_328);
  uStack_318 = 0xffffffff;
  TStack_2c0.CurrentBitIndex = uStack_314;
  TStack_2c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_190 >> 5;
  TStack_2c0._28_4_ = local_1dc;
  TStack_2c0.BaseBitIndex = local_310;
  uStack_2a0 = CONCAT44(uStack_304,iStack_308);
  bVar18 = (byte)local_190;
  local_2c8 = (longlong *)local_330;
  TStack_2c0.Array = local_320;
  if (((int)local_190 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  this_00 = local_338;
  if (uVar28 != local_190) {
    puVar29 = (uint *)(local_1b8 + 0x10);
    if (local_198 != (uint *)0x0) {
      puVar29 = local_198;
    }
    uVar28 = -1 << (bVar18 & 0x1f) & puVar29[iVar14];
    while (uVar28 == 0) {
      lVar22 = (longlong)iVar14;
      uVar26 = uVar26 + 0x20;
      iVar14 = iVar14 + 1;
      uVar28 = local_190;
      if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14c833970;
      uVar28 = puVar29[lVar22 + 1];
    }
    uVar20 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_2ec = (int)lVar22;
    uVar28 = (uVar26 - 1) + local_2ec;
    if ((int)local_190 < (int)uVar28) {
      uVar28 = local_190;
    }
  }
LAB_14c833970:
  while( true ) {
    plVar19 = local_2c8;
    if ((int)local_2c8[1] - *(int *)((longlong)local_2c8 + 0x34) != (int)uStack_2a0) {
      local_377 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_377);
    }
    if (((TStack_2c0.CurrentBitIndex == uVar28) &&
        (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) &&
       (plVar19 == (longlong *)local_1b8)) break;
    fVar16 = 0.0;
    lVar22 = (longlong)TStack_2c0.CurrentBitIndex * 0x40 + *plVar19;
    pfVar21 = (float *)(lVar22 + 8);
    iVar14 = *(int *)(lVar22 + 0x30);
    if (*(float **)(lVar22 + 0x28) != (float *)0x0) {
      pfVar21 = *(float **)(lVar22 + 0x28);
    }
    pfVar3 = pfVar21 + iVar14;
    while( true ) {
      if (*(int *)(lVar22 + 0x30) != iVar14) {
        local_376[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_376);
      }
      if (pfVar21 == pfVar3) break;
      fVar16 = fVar16 + *pfVar21;
      pfVar21 = pfVar21 + 1;
    }
    local_260 = &local_340;
    local_340 = fVar16 / (float)*(int *)(lVar22 + 0x30);
    local_268 = lVar22;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,float_&&>_>(this_00,&local_2e8,(bool *)&local_268);
    TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
  }
  SmoothBoneWeightsLocals::NormalizeWeights<int,float>
            ((TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
             this_00);
  iVar14 = *(int *)&(this_00->Elements).field_0x28;
  puVar1 = &(this_00->Elements).field_0x10;
  iStack_328 = 0;
  local_310 = 0;
  uStack_314 = 0;
  if (iVar14 == 0) {
LAB_14c833af0:
    uStack_324 = (uint)local_300;
  }
  else {
    puVar29 = *(uint **)&(this_00->Elements).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)puVar1;
    }
    uStack_324 = *puVar29;
    while (uStack_324 == 0) {
      lVar22 = (longlong)iStack_328;
      local_310 = local_310 + 0x20;
      iStack_328 = iStack_328 + 1;
      uStack_314 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_328) goto LAB_14c833af0;
      uStack_324 = puVar29[lVar22 + 1];
    }
    uStack_324 = -uStack_324 & uStack_324;
    uVar20 = (ulonglong)uStack_324 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_2d0 = (int)lVar22;
    uStack_314 = local_2d0 + -1 + local_310;
    if (iVar14 < (int)uStack_314) {
      uStack_314 = iVar14;
    }
  }
  uVar28 = *(uint *)&(this_00->Elements).field_0x28;
  uStack_30c = local_1bc;
  uVar26 = uVar28 & 0xffffffe0;
  iStack_308 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
  uStack_318 = 0xffffffff;
  local_330 = this_00;
  TStack_290._padding_ = CONCAT44(uStack_324,iStack_328);
  TStack_290.CurrentBitIndex = uStack_314;
  TStack_290.UnvisitedBitMask = 0xffffffff;
  local_298 = this_00;
  iVar15 = (int)uVar28 >> 5;
  TStack_290._28_4_ = local_1bc;
  TStack_290.BaseBitIndex = local_310;
  uStack_270 = CONCAT44(uStack_304,iStack_308);
  local_320 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_290.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar28 < 0) || (iVar14 < (int)uVar28)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  pTVar8 = local_2d8;
  iVar14 = local_33c;
  uVar5 = *(uint *)&(this_00->Elements).field_0x28;
  if (uVar28 != uVar5) {
    puVar30 = *(undefined1 **)&(this_00->Elements).field_0x20;
    if (puVar30 == (undefined1 *)0x0) {
      puVar30 = puVar1;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar15 * 4);
    while (uVar28 == 0) {
      lVar22 = (longlong)iVar15;
      uVar26 = uVar26 + 0x20;
      iVar15 = iVar15 + 1;
      uVar28 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c833c00;
      uVar28 = *(uint *)(puVar30 + lVar22 * 4 + 4);
    }
    uVar20 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    uVar28 = (uVar26 - 1) + (int)lVar22;
    if ((int)uVar5 < (int)uVar28) {
      uVar28 = uVar5;
    }
  }
LAB_14c833c00:
  while( true ) {
    pTVar9 = local_298;
    if (*(int *)&(local_298->Elements).field_0x8 - *(int *)&(local_298->Elements).field_0x34 !=
        (int)uStack_270) {
      `TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_35c + 4);
    }
    lVar22 = (longlong)TStack_290.CurrentBitIndex;
    if (((TStack_290.CurrentBitIndex == uVar28) &&
        (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00)
       ) break;
    lVar6 = *(longlong *)&pTVar9->Elements;
    fVar16 = *(float *)(lVar6 + 4 + lVar22 * 0x10);
    fVar32 = (float)(**(code **)((longlong)*pTVar8->DataSource + 0x20))
                              (pTVar8->DataSource,iVar14,*(undefined4 *)(lVar6 + lVar22 * 0x10));
    TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
    *(float *)(lVar6 + 4 + lVar22 * 0x10) = (fVar16 - fVar32) * param_2 + fVar32;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
  }
  SmoothBoneWeightsLocals::NormalizeWeights<int,float>
            ((TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
             this_00);
  cVar13 = (**(code **)(pTVar8->_padding_ + 0x18))(pTVar8);
  local_170 = 0;
  if (local_178 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1b8);
  if (local_370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data);
  }
  return cVar13 == '\0';
}

// Validate @ 14c8511c0

EOperationValidationResult __thiscall
UE::Geometry::TSmoothBoneWeights<unsigned_short,float>::Validate
          (TSmoothBoneWeights<unsigned_short,float> *this)

{
  if (this->SourceMesh != (FDynamicMesh3 *)0x0) {
    return (EOperationValidationResult)
           (this->DataSource == (TBoneWeightsDataSource<unsigned_short,float> *)0x0);
  }
  return Failed_UnknownReason;
}

// Validate @ 14c8511e0

EOperationValidationResult __thiscall
UE::Geometry::TSmoothBoneWeights<int,float>::Validate(TSmoothBoneWeights<int,float> *this)

{
  if (this->SourceMesh != (FDynamicMesh3 *)0x0) {
    return (EOperationValidationResult)
           (this->DataSource == (TBoneWeightsDataSource<int,float> *)0x0);
  }
  return Failed_UnknownReason;
}

