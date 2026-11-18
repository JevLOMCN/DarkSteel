// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 6

// FUVLayoutOp @ 14c947d10

FUVLayoutOp * __thiscall UE::Geometry::FUVLayoutOp::FUVLayoutOp(FUVLayoutOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->UVLayoutMode = RepackToUnitRect;
  this->UVLayerIndex = 0;
  this->_padding_ = (longlong)&___7FUVLayoutOp_Geometry_UE__6B_;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bMaintainOriginatingUDIM = false;
  *(undefined8 *)&(this->Selection).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x20) = 0;
  this->TextureResolution = 0x80;
  this->bPreserveScale = false;
  this->bPreserveRotation = false;
  this->bAllowFlips = false;
  this->bAlwaysSplitBowties = true;
  this->UVScaleFactor = 1.0;
  this->GutterSize = 1.0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x34) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x40) = 0;
  (this->Selection).field0_0x0.TypedValue.HashSize = 0;
  *(undefined8 *)&(this->TextureResolutionPerUDIM).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x34) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x48) = 0;
  (this->UVTranslation).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return this;
}

// ~FUVLayoutOp @ 14c949980

void __thiscall UE::Geometry::FUVLayoutOp::~FUVLayoutOp(FUVLayoutOp *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FUVLayoutOp_Geometry_UE__6B_;
  if (*(int *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->TextureResolutionPerUDIM);
  }
  if (*(int *)((longlong)&(this->Selection).field0_0x0 + 0xc) != -1) {
    (this->Selection).field0_0x0.TypedValue.HashSize = 0;
    pvVar1 = *(void **)((longlong)&(this->Selection).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->Selection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// CalculateResult @ 14c96d1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FUVLayoutOp::CalculateResult(FUVLayoutOp *this,FProgressCancel *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  EUVLayoutOpLayoutModes EVar6;
  FVector2i_u_0 FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  code *pcVar11;
  uint uVar12;
  float fVar13;
  FProgressCancel *pFVar14;
  undefined4 uVar15;
  TVector2<float>_u_0 TVar16;
  FVector2i_u_0 *pFVar17;
  bool bVar18;
  FDynamicMesh3 *pFVar19;
  TDynamicMeshOverlay<float,2> *pTVar20;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar21;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 *pTVar22;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  TVar26;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int *piVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined8 uVar30;
  FDynamicMeshAttributeSet *pFVar31;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  TVar32;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar33;
  FDynamicMesh3 *pFVar34;
  byte bVar35;
  FDynamicMeshAttributeSet *this_01;
  ForAnyElementType FVar36;
  longlong *plVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  int iVar42;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar43;
  ForElementType<unsigned_int> FVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  FScriptContainerElement *pFVar47;
  bool bVar48;
  undefined1 auStackY_408 [32];
  undefined1 local_3b7;
  undefined1 local_3b6;
  undefined1 local_3b5;
  undefined1 local_3b4 [4];
  int local_3b0 [2];
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  local_3a8;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  local_3a0;
  uint local_398 [2];
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_390;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_378;
  int iStack_358;
  undefined4 uStack_354;
  uint local_350;
  TDynamicMeshOverlay<float,2> *local_348;
  FProgressCancel *local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330 [2];
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_328;
  FDynamicMeshUVPacker local_318;
  FDynamicMeshUVPacker local_2f8;
  FVector2i_u_0 local_2d8;
  FVector2i_u_0 *local_2d0;
  FUVLayoutOp *local_2c8;
  undefined8 local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_298;
  undefined4 local_278;
  int local_274;
  int local_270 [2];
  FVector2i_u_0 *local_268;
  int local_260;
  int local_25c;
  longlong *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_230;
  int iStack_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *local_220;
  undefined4 uStack_218;
  uint uStack_214;
  int local_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  int local_200 [2];
  undefined1 local_1f8 [12];
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b8;
  TRangedForIterator local_1a8;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> local_178 [2];
  undefined4 local_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  undefined1 local_128 [32];
  ForElementType<unsigned_int> local_108;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  undefined1 local_d8 [88];
  void *local_80;
  undefined4 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_408;
  bVar48 = -1 < CpuChannel->Enabled;
  local_340 = param_1;
  local_2c8 = this;
  if (bVar48) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId39,"UVLayoutOp_CalculateResult",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\ParameterizationOps\\UVLayoutOp.cpp"
               ,0x27);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId39);
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar18 = FProgressCancel::Cancelled(param_1), bVar18))
  goto LAB_14c96e332;
  pFVar34 = (FDynamicMesh3 *)this->_padding_;
  pFVar19 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                      (&this->OriginalMesh);
  FDynamicMesh3::Copy(pFVar34,pFVar19,true,true,true,true);
  if (*(longlong *)(this->_padding_ + 0x208) == 0) {
    local_3b7 = 0;
    bVar18 = `UE::Geometry::FUVLayoutOp::CalculateResult'::__l6::<lambda_1>::operator()(&local_3b7);
    if (!bVar18) {
      FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)this->_padding_);
    }
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar18 = FProgressCancel::Cancelled(param_1), bVar18))
  goto LAB_14c96e332;
  TVar32.Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar31 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
  this_01 = (FDynamicMeshAttributeSet *)TVar32.Ptr;
  if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
    this_01 = pFVar31;
  }
  pTVar20 = (TDynamicMeshOverlay<float,2> *)
            FDynamicMeshAttributeSet::GetUVLayer(this_01,this->UVLayerIndex);
  local_348 = pTVar20;
  if ((this->UVLayoutMode != TransformOnly) || (this->bAlwaysSplitBowties != false)) {
    TDynamicMeshOverlay<float,2>::SplitBowties(pTVar20,true);
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar18 = FProgressCancel::Cancelled(param_1), bVar18))
  goto LAB_14c96e332;
  fVar13 = __real_3f800000;
  iVar42 = *(int *)((longlong)&(this->Selection).field0_0x0 + 0xc);
  if (this->bMaintainOriginatingUDIM != false) {
    local_390.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_390.TypedValue.ArrayNum = 0;
    local_390.TypedValue.ArrayMax = -1;
    if (iVar42 != -1) {
      pTVar21 = TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::GetValue
                          (&this->Selection);
      pTVar22 = (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 *)
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(pTVar21,&local_1c8);
      if (pTVar22 != &local_390) {
        local_390.TypedValue.AllocatorInstance.Data =
             (ForAnyElementType)(pTVar22->TypedValue).AllocatorInstance.Data;
        (pTVar22->TypedValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_390.TypedValue.ArrayNum = (pTVar22->TypedValue).ArrayNum;
        local_390.TypedValue.ArrayMax = (pTVar22->TypedValue).ArrayMax;
        *(int *)((longlong)pTVar22 + 8) = 0;
        *(int *)((longlong)pTVar22 + 0xc) = 0;
        if ((local_390.TypedValue.ArrayMax == -1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
    }
    pTVar23 = TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::
              TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (local_178,
                         (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)
                         &local_390.TypedValue);
    FDynamicMeshUDIMClassifier::FDynamicMeshUDIMClassifier
              ((FDynamicMeshUDIMClassifier *)local_d8,
               (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pTVar20,pTVar23);
    FDynamicMeshUDIMClassifier::ActiveTiles((FDynamicMeshUDIMClassifier *)local_d8,&local_328);
    local_350 = local_328.ArrayNum;
    uVar40 = (ulonglong)(int)local_350;
    local_268 = (FVector2i_u_0 *)(local_328.AllocatorInstance.Data + uVar40 * 8);
    FVar36.Data = local_328.AllocatorInstance.Data;
    do {
      pFVar17 = local_268;
      pTVar43 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_2d0 = (FVector2i_u_0 *)FVar36.Data;
      if (local_328.ArrayNum != (int)uVar40) {
        local_3b6 = 0;
        `TCheckedPointerIterator<UE::Geometry::FVector2i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_3b6);
      }
      if ((FVector2i_u_0 *)FVar36.Data == pFVar17) {
        if ((FVector2i_u_0 *)local_328.AllocatorInstance.Data != (FVector2i_u_0 *)0x0) {
          FMemory::Free(local_328.AllocatorInstance.Data);
        }
        local_78 = 0;
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_d8 + 0x18));
        if ((local_d8._20_4_ != -1) &&
           ((FScriptContainerElement *)local_d8._8_8_ != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_d8._8_8_);
        }
        if ((local_390.TypedValue.ArrayMax != -1) &&
           (local_390.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_390.TypedValue.AllocatorInstance.Data);
        }
        goto LAB_14c96e1c3;
      }
      FVar7 = (FVector2i_u_0)*(FVector2i_u_0 *)FVar36.Data;
      local_3a8.Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_2d8 = FVar7;
      pTVar24 = FDynamicMeshUDIMClassifier::TidsForTile
                          ((FDynamicMeshUDIMClassifier *)local_d8,&local_1b8,(FVector2i)FVar7);
      pTVar25 = ::operator_new(0x10);
      TVar32.Ptr = local_3a8.Ptr;
      TVar26.Ptr = pTVar43;
      if (pTVar25 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        (pTVar25->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pTVar25->AllocatorInstance).Data = (pTVar24->AllocatorInstance).Data;
        (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar25->ArrayNum = pTVar24->ArrayNum;
        pTVar25->ArrayMax = pTVar24->ArrayMax;
        pTVar24->ArrayNum = 0;
        pTVar24->ArrayMax = 0;
        TVar26.Ptr = pTVar25;
      }
      if (local_3a8.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar8 = ((local_3a8.Ptr)->AllocatorInstance).Data;
        local_3a8.Ptr = TVar26.Ptr;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        ::operator_delete(TVar32.Ptr,0x10);
        TVar26.Ptr = local_3a8.Ptr;
      }
      local_3a8.Ptr = TVar26.Ptr;
      if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
      local_398[0] = TextureUtilitiesCommon::GetUDIMIndex(FVar7._0_4_,local_2d8._4_4_);
      iVar42 = this->TextureResolution;
      if (*(int *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0xc) != -1) {
        this_00 = TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
                  ::GetValue(&this->TextureResolutionPerUDIM);
        piVar27 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                  FindOrAddImpl<int_const_&,int_const_&>
                            ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)this_00,local_398[0],(int *)local_398,&this->TextureResolution);
        iVar42 = *piVar27;
      }
      local_128._0_8_ = (FScriptContainerElement *)0x0;
      local_128._8_8_ = 0;
      local_108 = (ForElementType<unsigned_int>)0x0;
      local_100 = 0;
      local_fc = 0x80;
      local_f8 = -1;
      local_f4 = 0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = 0;
      uVar39 = (local_3a8.Ptr)->ArrayNum * 3;
      if (uVar39 != 0) {
        if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidSetNum((longlong)(int)uVar39);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_128,uVar39);
        uVar41 = 1;
        if (3 < uVar39) {
          uVar40 = (ulonglong)((uVar39 >> 1) + 7) * 2 + 1;
          lVar38 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar38 == 0; lVar38 = lVar38 + -1) {
            }
          }
          local_278 = (undefined4)lVar38;
          uVar41 = 1 << ((byte)lVar38 & 0x1f);
        }
        if ((local_e0 == 0) || ((int)local_e0 < (int)uVar41)) {
          local_e0 = uVar41;
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
          }
          if (uVar41 != 0) {
            uVar39 = uVar41;
            if (uVar41 < 2) {
              if (local_e8.Data != (FScriptContainerElement *)0x0) {
                uVar39 = 0;
                goto LAB_14c96d64f;
              }
            }
            else {
LAB_14c96d64f:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_e8,0,uVar39,4);
            }
            if (0 < (int)uVar41) {
              uVar40 = (ulonglong)uVar41;
              do {
                FVar36.Data = local_f0;
                if (local_e8.Data != (FScriptContainerElement *)0x0) {
                  FVar36.Data = local_e8.Data;
                }
                uVar28 = (longlong)(int)uVar41 - 1U & (ulonglong)pTVar43;
                pTVar43 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                          ((longlong)&(pTVar43->AllocatorInstance).Data + 1);
                *(undefined4 *)(FVar36.Data + uVar28 * 4) = 0xffffffff;
                uVar40 = uVar40 - 1;
              } while (uVar40 != 0);
            }
          }
          if (local_e0 != 0) {
            local_2b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
            local_2b8._padding_._0_4_ = 0;
            local_2b8._padding_._4_4_ = 1;
            local_2b8.UnvisitedBitMask = 0xffffffff;
            local_2b8.CurrentBitIndex = 0;
            local_2b8.BaseBitIndex = 0;
            if (local_100 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2b8);
            }
            local_258 = (longlong *)local_128;
            local_250._padding_ =
                 CONCAT44(local_2b8._padding_._4_4_,(undefined4)local_2b8._padding_);
            local_250.Array = local_2b8.Array;
            local_250.UnvisitedBitMask = local_2b8.UnvisitedBitMask;
            local_250.CurrentBitIndex = local_2b8.CurrentBitIndex;
            local_250.BaseBitIndex = local_2b8.BaseBitIndex;
            local_250._28_4_ = local_2b8._28_4_;
            if (local_2b8.CurrentBitIndex < (local_2b8.Array)->NumBits) {
              do {
                lVar38 = *local_258;
                lVar29 = (longlong)local_250.CurrentBitIndex;
                uVar39 = local_e0 - 1 & *(uint *)(lVar38 + lVar29 * 0xc);
                *(uint *)(lVar38 + 8 + lVar29 * 0xc) = uVar39;
                FVar36.Data = local_f0;
                if (local_e8.Data != (FScriptContainerElement *)0x0) {
                  FVar36.Data = local_e8.Data;
                }
                uVar40 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar39;
                *(undefined4 *)(lVar38 + 4 + lVar29 * 0xc) =
                     *(undefined4 *)(FVar36.Data + uVar40 * 4);
                *(int *)(FVar36.Data + uVar40 * 4) = local_250.CurrentBitIndex;
                local_250.UnvisitedBitMask = local_250.UnvisitedBitMask & ~local_250._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_250);
              } while (local_250.CurrentBitIndex < (local_250.Array)->NumBits);
            }
          }
        }
      }
      pTVar20 = local_348;
      TVar32.Ptr = local_3a8.Ptr;
      pFVar47 = ((local_3a8.Ptr)->AllocatorInstance).Data;
      iVar5 = (local_3a8.Ptr)->ArrayNum;
      pFVar8 = pFVar47 + (longlong)iVar5 * 4;
      while( true ) {
        if ((TVar32.Ptr)->ArrayNum != iVar5) {
          local_3b5 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3b5)
          ;
        }
        if (pFVar47 == pFVar8) break;
        pFVar9 = (pTVar20->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar39 = *(int *)pFVar47 * 3;
        local_338 = *(undefined4 *)
                     (*(longlong *)(pFVar9 + (ulonglong)(uVar39 >> 9) * 8) +
                     (ulonglong)(uVar39 & 0x1ff) * 4);
        local_334 = *(undefined4 *)
                     (*(longlong *)(pFVar9 + (ulonglong)(uVar39 + 1 >> 9) * 8) +
                     (ulonglong)(uVar39 + 1 & 0x1ff) * 4);
        local_330[0] = *(undefined4 *)
                        (*(longlong *)(pFVar9 + (ulonglong)(uVar39 + 2 >> 9) * 8) +
                        (ulonglong)(uVar39 + 2 & 0x1ff) * 4);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,&local_274,
                   (bool *)&local_338);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,local_270,
                   (bool *)&local_334);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,local_200,
                   (bool *)local_330);
        pFVar47 = pFVar47 + 4;
      }
      FDynamicMeshUVPacker::FDynamicMeshUVPacker
                (&local_318,(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pTVar20
                 ,&local_3a8);
      local_318.TextureResolution = (int)(float)iVar42;
      local_318.GutterSize = local_2c8->GutterSize;
      local_318.bAllowFlips = local_2c8->bAllowFlips;
      local_318.bPreserveScale = local_2c8->bPreserveScale;
      local_318.bPreserveRotation = local_2c8->bPreserveRotation;
      EVar6 = local_2c8->UVLayoutMode;
      if (EVar6 == RepackToUnitRect) {
        FDynamicMeshUVPacker::StandardPack(&local_318);
      }
      else if (EVar6 == StackInUnitRect) {
        FDynamicMeshUVPacker::StackPack(&local_318);
      }
      else if (EVar6 == Normalize) {
        local_318.bScaleIslandsByWorldSpaceTexelRatio = true;
        FDynamicMeshUVPacker::StandardPack(&local_318);
      }
      pFVar14 = local_340;
      if (local_340 != (FProgressCancel *)0x0) {
        if (local_340->WasCancelled == false) {
          Core::Private::Function::CheckCallable(*(void **)&local_340->CancelF);
          plVar10 = *(longlong **)&(pFVar14->CancelF).field_0x28;
          pcVar11 = *(code **)&pFVar14->CancelF;
          plVar37 = (longlong *)&(pFVar14->CancelF).field_0x10;
          if (plVar10 != (longlong *)0x0) {
            plVar37 = plVar10;
          }
          uVar30 = (**(code **)(*plVar37 + 8))();
          bVar18 = (bool)(*pcVar11)(uVar30);
          pFVar14->WasCancelled = bVar18;
          if (bVar18 == false) goto LAB_14c96d96a;
        }
        if (local_318.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar8 = ((local_318.TidsToRepack.Ptr)->AllocatorInstance).Data;
          if (pFVar8 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar8);
          }
          ::operator_delete(local_318.TidsToRepack.Ptr,0x10);
        }
        local_e0 = 0;
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_128);
        TVar32.Ptr = local_3a8.Ptr;
        if (local_3a8.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar8 = ((local_3a8.Ptr)->AllocatorInstance).Data;
          if (pFVar8 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar8);
          }
          ::operator_delete(TVar32.Ptr,0x10);
        }
        if ((FVector2i_u_0 *)local_328.AllocatorInstance.Data != (FVector2i_u_0 *)0x0) {
          FMemory::Free(local_328.AllocatorInstance.Data);
        }
        local_78 = 0;
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_d8 + 0x18));
        if ((local_d8._20_4_ != -1) &&
           ((FScriptContainerElement *)local_d8._8_8_ != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_d8._8_8_);
        }
        if ((local_390.TypedValue.ArrayMax != -1) &&
           (local_390.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_390.TypedValue.AllocatorInstance.Data);
        }
        goto LAB_14c96e332;
      }
LAB_14c96d96a:
      uVar39 = local_100;
      iStack_228 = 0;
      uStack_224 = 1;
      local_210 = 0;
      uStack_214 = 0;
      if (local_100 != 0) {
        FVar44 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
        if (local_108 != (ForElementType<unsigned_int>)0x0) {
          FVar44 = local_108;
        }
        uVar41 = *(uint *)FVar44;
        while (uVar41 == 0) {
          lVar38 = (longlong)iStack_228;
          local_210 = local_210 + 0x20;
          iStack_228 = iStack_228 + 1;
          uStack_214 = local_100;
          if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_228)
          goto LAB_14c96d9f3;
          uVar41 = ((uint *)((longlong)FVar44 + 4))[lVar38];
        }
        uStack_224 = -uVar41 & uVar41;
        uVar40 = (ulonglong)uStack_224 * 2 + 1;
        lVar38 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar38 == 0; lVar38 = lVar38 + -1) {
          }
        }
        local_25c = (int)lVar38;
        uStack_214 = local_210 + -1 + local_25c;
        if ((int)local_100 < (int)uStack_214) {
          uStack_214 = local_100;
        }
      }
LAB_14c96d9f3:
      local_380 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128;
      uStack_20c = local_14c;
      TStack_378.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
      uVar41 = local_100 & 0xffffffe0;
      iStack_208 = local_128._8_4_ - local_f4;
      TStack_378._padding_ = CONCAT44(uStack_224,iStack_228);
      uStack_218 = 0xffffffff;
      TStack_378._16_8_ = CONCAT44(uStack_214,0xffffffff);
      iVar42 = (int)local_100 >> 5;
      TStack_378._24_8_ = CONCAT44(local_14c,local_210);
      uStack_354 = uStack_204;
      iStack_358 = iStack_208;
      bVar35 = (byte)local_100;
      local_230 = local_380;
      local_220 = TStack_378.Array;
      if (((int)local_100 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar20 = local_348;
      if (uVar39 != local_100) {
        FVar44 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
        if (local_108 != (ForElementType<unsigned_int>)0x0) {
          FVar44 = local_108;
        }
        uVar39 = -1 << (bVar35 & 0x1f) & *(uint *)((longlong)FVar44 + (longlong)iVar42 * 4);
        while (uVar39 == 0) {
          lVar38 = (longlong)iVar42;
          uVar41 = uVar41 + 0x20;
          iVar42 = iVar42 + 1;
          uVar39 = local_100;
          if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar42)
          goto LAB_14c96db37;
          uVar39 = ((uint *)((longlong)FVar44 + 4))[lVar38];
        }
        uVar40 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
        lVar38 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar38 == 0; lVar38 = lVar38 + -1) {
          }
        }
        local_260 = (int)lVar38;
        uVar39 = local_260 + -1 + uVar41;
        if ((int)local_100 < (int)uVar39) {
          uVar39 = local_100;
        }
      }
LAB_14c96db37:
      uVar15 = local_2d8._4_4_;
      while( true ) {
        pTVar21 = local_380;
        if (*(int *)&(local_380->Elements).field_0x8 - *(int *)&(local_380->Elements).field_0x34 !=
            iStack_358) {
          local_3b4[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3b4);
        }
        TVar32.Ptr = local_318.TidsToRepack.Ptr;
        if (((TStack_378.CurrentBitIndex == uVar39) &&
            (TStack_378.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
           (pTVar21 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128)) break;
        uVar41 = *(uint *)(*(longlong *)&pTVar21->Elements +
                          (longlong)TStack_378.CurrentBitIndex * 0xc);
        pFVar8 = (pTVar20->Elements).Blocks.AllocatorInstance.Data;
        uVar46 = (ulonglong)((uVar41 & 0x7fffffff) >> 8);
        uVar40 = (ulonglong)(uVar41 * 2 + 1 & 0x1ff);
        uVar28 = (ulonglong)(uVar41 * 2 & 0x1ff);
        lVar38 = *(longlong *)(pFVar8 + (ulonglong)((uVar41 & 0x7fffffff) >> 8) * 8);
        fVar2 = *(float *)(*(longlong *)(pFVar8 + uVar46 * 8) + uVar40 * 4);
        *(float *)(lVar38 + uVar28 * 4) = (float)FVar7._0_4_ + *(float *)(lVar38 + uVar28 * 4);
        TStack_378.UnvisitedBitMask = TStack_378.UnvisitedBitMask & ~TStack_378._padding_._4_4_;
        *(float *)(*(longlong *)((pTVar20->Elements).Blocks.AllocatorInstance.Data + uVar46 * 8) +
                  uVar40 * 4) = fVar13 - ((fVar13 - fVar2) + (float)(int)uVar15);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_378);
      }
      if (local_318.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar8 = ((local_318.TidsToRepack.Ptr)->AllocatorInstance).Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        ::operator_delete(TVar32.Ptr,0x10);
      }
      local_e0 = 0;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_128);
      TVar32.Ptr = local_3a8.Ptr;
      if (local_3a8.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar8 = ((local_3a8.Ptr)->AllocatorInstance).Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        ::operator_delete(TVar32.Ptr,0x10);
      }
      FVar36.Data = (FScriptContainerElement *)(local_2d0 + 1);
      uVar40 = (ulonglong)local_350;
      this = local_2c8;
    } while( true );
  }
  local_3a0.Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  if (iVar42 != -1) {
    pFVar31 = ::operator_new(0x10);
    TVar26.Ptr = local_3a0.Ptr;
    if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar31->_padding_ = 0;
      pFVar31->_padding_ = 0;
      TVar32.Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar31;
    }
    if ((FDynamicMeshAttributeSet *)local_3a0.Ptr != (FDynamicMeshAttributeSet *)0x0) {
      pFVar8 = ((local_3a0.Ptr)->AllocatorInstance).Data;
      local_3a0.Ptr = TVar32.Ptr;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      ::operator_delete(TVar26.Ptr,0x10);
      TVar32.Ptr = local_3a0.Ptr;
    }
    local_3a0.Ptr = TVar32.Ptr;
    pTVar21 = TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::GetValue
                        (&this->Selection);
    uVar39 = *(int *)&(pTVar21->Elements).field_0x8 - *(int *)&(pTVar21->Elements).field_0x34;
    if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
    }
    if ((local_3a0.Ptr)->ArrayMax < (int)uVar39) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar39,&(local_3a0.Ptr)->AllocatorInstance,
                 (int)*(longlong *)&(local_3a0.Ptr)->ArrayNum,&(local_3a0.Ptr)->ArrayMax);
    }
    puVar1 = &(pTVar21->Elements).field_0x10;
    local_298._padding_._0_4_ = 0;
    local_298._padding_._4_4_ = 1;
    local_298.UnvisitedBitMask = 0xffffffff;
    local_298.CurrentBitIndex = 0;
    local_298.BaseBitIndex = 0;
    local_298.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(pTVar21->Elements).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_298);
    }
    TStack_378._padding_ = CONCAT44(local_298._padding_._4_4_,(undefined4)local_298._padding_);
    TStack_378._16_8_ = CONCAT44(local_298.CurrentBitIndex,local_298.UnvisitedBitMask);
    TStack_378._24_8_ = CONCAT44(local_298._28_4_,local_298.BaseBitIndex);
    iStack_358 = *(int *)&(pTVar21->Elements).field_0x8 - *(int *)&(pTVar21->Elements).field_0x34;
    TStack_378.Array = local_298.Array;
    local_1e8 = local_298.Array;
    iStack_1d0 = iStack_358;
    uStack_1cc = uStack_354;
    local_380 = pTVar21;
    local_1f8._0_8_ = pTVar21;
    unique0x10001a25 = TStack_378._padding_;
    uStack_1e0 = TStack_378._16_8_;
    local_1d8 = TStack_378._24_8_;
    pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_148,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(pTVar21->Elements).field_0x28);
    TStack_378._padding_ = pTVar33->_padding_;
    TStack_378.Array = pTVar33->Array;
    TStack_378.UnvisitedBitMask = pTVar33->UnvisitedBitMask;
    TStack_378.CurrentBitIndex = pTVar33->CurrentBitIndex;
    TStack_378._24_8_ = *(undefined8 *)&pTVar33->BaseBitIndex;
    local_1a8.InitialNum =
         *(int *)&(pTVar21->Elements).field_0x8 - *(int *)&(pTVar21->Elements).field_0x34;
    iStack_358 = local_1a8.InitialNum;
    local_1a8._44_4_ = uStack_354;
    local_380 = pTVar21;
    local_1a8._padding_ = (longlong)pTVar21;
    local_1a8._padding_ = TStack_378._padding_;
    local_1a8._padding_ = (longlong)TStack_378.Array;
    local_1a8._padding_ = TStack_378._16_8_;
    local_1a8._padding_ = TStack_378._24_8_;
    bVar18 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_1f8,&local_1a8);
    param_1 = local_340;
    if (bVar18) {
      do {
        local_3b0[0] = *(int *)(*(longlong *)
                                 (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)local_1f8._0_8_ + (longlong)uStack_1e0._4_4_ * 0xc);
        pFVar34 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->(&this->OriginalMesh);
        bVar18 = FDynamicMesh3::IsTriangle(pFVar34,local_3b0[0]);
        TVar32.Ptr = local_3a0.Ptr;
        if (bVar18) {
          pFVar8 = ((local_3a0.Ptr)->AllocatorInstance).Data;
          if (((pFVar8 <= (FScriptContainerElement *)local_3b0) &&
              ((FScriptContainerElement *)local_3b0 <
               pFVar8 + (longlong)(local_3a0.Ptr)->ArrayMax * 4)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar42 = (int)*(longlong *)&(TVar32.Ptr)->ArrayNum;
          if (iVar42 == (TVar32.Ptr)->ArrayMax) {
            iVar42 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(TVar32.Ptr)->AllocatorInstance,&(TVar32.Ptr)->ArrayMax);
          }
          (TVar32.Ptr)->ArrayNum = iVar42 + 1;
          *(int *)(((TVar32.Ptr)->AllocatorInstance).Data + (longlong)iVar42 * 4) = local_3b0[0];
        }
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(uint)uStack_1e0 & ~uStack_1ec);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1f8 + 8));
        bVar18 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_1f8,&local_1a8);
        param_1 = local_340;
      } while (bVar18);
    }
  }
  FDynamicMeshUVPacker::FDynamicMeshUVPacker
            (&local_2f8,(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pTVar20,
             &local_3a0);
  local_2f8.TextureResolution = this->TextureResolution;
  local_2f8.GutterSize = this->GutterSize;
  local_2f8.bAllowFlips = this->bAllowFlips;
  local_2f8.bPreserveScale = this->bPreserveScale;
  local_2f8.bPreserveRotation = this->bPreserveRotation;
  EVar6 = this->UVLayoutMode;
  if (EVar6 == RepackToUnitRect) {
    FDynamicMeshUVPacker::StandardPack(&local_2f8);
  }
  else if (EVar6 == StackInUnitRect) {
    FDynamicMeshUVPacker::StackPack(&local_2f8);
  }
  else if (EVar6 == Normalize) {
    local_2f8.bScaleIslandsByWorldSpaceTexelRatio = true;
    FDynamicMeshUVPacker::StandardPack(&local_2f8);
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar18 = FProgressCancel::Cancelled(param_1), bVar18))
  {
    if (local_2f8.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar8 = ((local_2f8.TidsToRepack.Ptr)->AllocatorInstance).Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      ::operator_delete(local_2f8.TidsToRepack.Ptr,0x10);
    }
    TVar32.Ptr = local_3a0.Ptr;
    if ((FDynamicMeshAttributeSet *)local_3a0.Ptr != (FDynamicMeshAttributeSet *)0x0) {
      pFVar8 = ((local_3a0.Ptr)->AllocatorInstance).Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      ::operator_delete(TVar32.Ptr,0x10);
    }
    goto LAB_14c96e332;
  }
  if (local_2f8.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar8 = ((local_2f8.TidsToRepack.Ptr)->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    ::operator_delete(local_2f8.TidsToRepack.Ptr,0x10);
  }
  TVar32.Ptr = local_3a0.Ptr;
  if ((FDynamicMeshAttributeSet *)local_3a0.Ptr != (FDynamicMeshAttributeSet *)0x0) {
    pFVar8 = ((local_3a0.Ptr)->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    ::operator_delete(TVar32.Ptr,0x10);
  }
LAB_14c96e1c3:
  uVar40 = 0;
  if (fVar13 == this->UVScaleFactor) {
    local_2c0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    TVar16._s_0 = local_2c0;
    local_2c0._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    bVar18 = (float)local_2c0 == (this->UVTranslation).field0_0x0._s_0.X;
    local_2c0 = TVar16._s_0;
    if ((bVar18) &&
       (local_2c0._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_,
       bVar18 = local_2c0._4_4_ == (this->UVTranslation).field0_0x0._s_0.Y, bVar18))
    goto LAB_14c96e332;
  }
  uVar39 = (pTVar20->ElementsRefCounts).RefCounts.CurBlockUsed +
           (pTVar20->ElementsRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar39 == 0) ||
     (pFVar8 = (pTVar20->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar8 - 1U) < 0xfffe)) {
LAB_14c96e269:
    uVar41 = (uint)uVar40;
  }
  else {
    uVar40 = 1;
    uVar41 = 1;
    if (1 < (int)uVar39) {
      do {
        uVar28 = (ulonglong)((uint)uVar40 & 0x1ff);
        lVar38 = *(longlong *)(pFVar8 + (uVar40 >> 9) * 8);
        if ((*(short *)(lVar38 + uVar28 * 2) != 0) && (*(short *)(lVar38 + uVar28 * 2) != -1))
        break;
        uVar41 = (uint)uVar40 + 1;
        uVar40 = (ulonglong)uVar41;
      } while ((int)uVar41 < (int)uVar39);
      goto LAB_14c96e269;
    }
  }
  while (uVar41 != uVar39) {
    pFVar8 = (pTVar20->Elements).Blocks.AllocatorInstance.Data;
    uVar12 = (uint)uVar40;
    fVar2 = this->UVScaleFactor;
    uVar45 = (ulonglong)(uVar12 * 2 & 0x1ff);
    uVar28 = (ulonglong)((uVar12 & 0x7fffffff) >> 8);
    uVar41 = uVar12 + 1;
    uVar40 = (ulonglong)uVar41;
    uVar46 = (ulonglong)(uVar12 * 2 + 1 & 0x1ff);
    lVar38 = *(longlong *)(pFVar8 + (ulonglong)((uVar12 & 0x7fffffff) >> 8) * 8);
    fVar3 = *(float *)(*(longlong *)(pFVar8 + uVar28 * 8) + uVar46 * 4);
    fVar4 = (this->UVTranslation).field0_0x0._s_0.Y;
    *(float *)(lVar38 + uVar45 * 4) =
         fVar2 * *(float *)(lVar38 + uVar45 * 4) + (this->UVTranslation).field0_0x0._s_0.X;
    *(float *)(*(longlong *)((pTVar20->Elements).Blocks.AllocatorInstance.Data + uVar28 * 8) +
              uVar46 * 4) = fVar13 - ((fVar13 - fVar3) * fVar2 + fVar4);
    if ((int)uVar41 < (int)uVar39) {
      do {
        uVar28 = (ulonglong)((uint)uVar40 & 0x1ff);
        lVar38 = *(longlong *)
                  ((pTVar20->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar40 >> 9) * 8);
        if ((*(short *)(lVar38 + uVar28 * 2) != 0) && (*(short *)(lVar38 + uVar28 * 2) != -1))
        break;
        uVar41 = (uint)uVar40 + 1;
        uVar40 = (ulonglong)uVar41;
      } while ((int)uVar41 < (int)uVar39);
      uVar41 = (uint)uVar40;
    }
  }
LAB_14c96e332:
  if (bVar48) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecutePacker @ 14c97c400

void __thiscall
UE::Geometry::FUVLayoutOp::ExecutePacker(FUVLayoutOp *this,FDynamicMeshUVPacker *param_1)

{
  EUVLayoutOpLayoutModes EVar1;
  
  param_1->GutterSize = this->GutterSize;
  param_1->bAllowFlips = this->bAllowFlips;
  param_1->bPreserveScale = this->bPreserveScale;
  param_1->bPreserveRotation = this->bPreserveRotation;
  EVar1 = this->UVLayoutMode;
  if (EVar1 == RepackToUnitRect) {
    FDynamicMeshUVPacker::StandardPack(param_1);
    return;
  }
  if (EVar1 == StackInUnitRect) {
    FDynamicMeshUVPacker::StackPack(param_1);
    return;
  }
  if (EVar1 == Normalize) {
    param_1->bScaleIslandsByWorldSpaceTexelRatio = true;
    FDynamicMeshUVPacker::StandardPack(param_1);
    return;
  }
  return;
}

// SetTransform @ 14c985a50

void __thiscall
UE::Geometry::FUVLayoutOp::SetTransform(FUVLayoutOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

// operator() @ 150574df0

bool __thiscall
`UE::Geometry::FUVLayoutOp::CalculateResult'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5754341417325428783>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5754341417325428783>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

