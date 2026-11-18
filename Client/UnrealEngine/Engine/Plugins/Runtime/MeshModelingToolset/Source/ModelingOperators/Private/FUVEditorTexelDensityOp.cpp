// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 7

// FUVEditorTexelDensityOp @ 14c947c00

FUVEditorTexelDensityOp * __thiscall
UE::Geometry::FUVEditorTexelDensityOp::FUVEditorTexelDensityOp(FUVEditorTexelDensityOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->TextureResolution = 0x400;
  this->_padding_ = (longlong)&___7FUVEditorTexelDensityOp_Geometry_UE__6B_;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->TexelDensityMode = ScaleGlobal;
  this->UVLayerIndex = 0;
  this->bMaintainOriginatingUDIM = false;
  *(undefined8 *)&(this->Selection).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x20) = 0;
  this->TargetWorldSpaceMeasurement = 100;
  this->TargetPixelCountMeasurement = 0x400;
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

// ~FUVEditorTexelDensityOp @ 14c9498e0

void __thiscall
UE::Geometry::FUVEditorTexelDensityOp::~FUVEditorTexelDensityOp(FUVEditorTexelDensityOp *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FUVEditorTexelDensityOp_Geometry_UE__6B_;
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

// CalculateResult @ 14c96bab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FUVEditorTexelDensityOp::CalculateResult
          (FUVEditorTexelDensityOp *this,FProgressCancel *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  FDynamicMesh3 *this_00;
  FDynamicMeshAttributeSet *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  FUVEditorTexelDensityOp *this_01;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  TVar7;
  FProgressCancel *pFVar8;
  TileConnectedComponents *pTVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FDynamicMesh3 *pFVar13;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar14;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar15;
  int *piVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  byte bVar22;
  FDynamicMeshAttributeSet *this_02;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  FDynamicMeshAttributeSet *this_03;
  int iVar26;
  int *piVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  ForAnyElementType FVar30;
  ulonglong uVar31;
  ForElementType<unsigned_int> FVar32;
  ulonglong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;
  undefined1 auStackY_488 [32];
  undefined1 local_447;
  undefined1 local_446;
  undefined1 local_445;
  undefined1 local_444;
  undefined1 local_443;
  undefined1 local_442;
  undefined1 local_441;
  undefined1 local_440 [8];
  TArray<UVTexelDensityOpLocals::TileConnectedComponents,TSizedDefaultAllocator<32>_> local_438;
  TArray<UVTexelDensityOpLocals::TileConnectedComponents,TSizedDefaultAllocator<32>_> local_428;
  int local_418;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_410;
  FUVEditorTexelDensityOp *local_408;
  uint local_400;
  uint local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0 [2];
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0 [2];
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0 [2];
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0 [2];
  uint local_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b0;
  undefined4 local_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  undefined4 uStack_39c;
  longlong *local_398;
  undefined8 uStack_390;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_388;
  uint uStack_380;
  uint uStack_37c;
  uint uStack_378;
  undefined4 uStack_374;
  int local_370;
  undefined4 uStack_36c;
  TArray<int,TSizedDefaultAllocator<32>_> local_368;
  FDynamicMesh3 *local_358;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  local_350;
  FVector2i_u_0_s_0 local_340;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  local_338;
  longlong local_330;
  FVector2i_u_0_s_0 local_328;
  TileConnectedComponents *local_320;
  FProgressCancel *local_318;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_308;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  undefined4 local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8 [2];
  TileConnectedComponents *local_2c0;
  undefined4 local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  longlong *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_290;
  int local_270;
  int local_26c;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  longlong *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  FDynamicMeshUVPacker local_208;
  FDynamicMeshUVPacker local_1e8;
  undefined4 local_1ac;
  undefined1 local_1a8 [32];
  ForElementType<unsigned_int> local_188;
  uint local_180;
  int local_17c;
  int local_178;
  int local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  undefined1 local_158 [32];
  ForElementType<unsigned_int> local_138;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  FScriptContainerElement local_120 [8];
  ForAnyElementType local_118;
  uint local_110;
  undefined1 local_108 [40];
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_488;
  bVar37 = -1 < CpuChannel->Enabled;
  local_408 = this;
  local_318 = param_1;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId158,"UVLayoutOp_CalculateResult",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\ParameterizationOps\\TexelDensityOp.cpp"
               ,0x9e);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId158);
  }
  if ((param_1 == (FProgressCancel *)0x0) || (bVar10 = FProgressCancel::Cancelled(param_1), !bVar10)
     ) {
    this_00 = (FDynamicMesh3 *)this->_padding_;
    pFVar13 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                        (&this->OriginalMesh);
    FDynamicMesh3::Copy(this_00,pFVar13,true,true,true,true);
    if (*(longlong *)(this->_padding_ + 0x208) == 0) {
      local_447 = 0;
      bVar10 = `UE::Geometry::FUVEditorTexelDensityOp::CalculateResult'::__l6::<lambda_1>::
               operator()(&local_447);
      if (!bVar10) {
        FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)this->_padding_);
      }
    }
    if ((param_1 == (FProgressCancel *)0x0) ||
       (bVar10 = FProgressCancel::Cancelled(param_1), !bVar10)) {
      this_03 = (FDynamicMeshAttributeSet *)0x0;
      pFVar3 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
      this_02 = this_03;
      if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
        this_02 = pFVar3;
      }
      pTVar14 = FDynamicMeshAttributeSet::GetUVLayer(this_02,this->UVLayerIndex);
      local_410 = pTVar14;
      if ((param_1 == (FProgressCancel *)0x0) ||
         (bVar10 = FProgressCancel::Cancelled(param_1), !bVar10)) {
        if (this->bMaintainOriginatingUDIM == false) {
          local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_438.ArrayNum = 0;
          local_438.ArrayMax = 0;
          pFVar3 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
          if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
            this_03 = pFVar3;
          }
          pTVar15 = FDynamicMeshAttributeSet::GetUVLayer(this_03,this->UVLayerIndex);
          UVTexelDensityOpLocals::CollectIslandComponentsPerTile
                    ((FDynamicMesh3 *)this->_padding_,pTVar15,&this->Selection,&local_438,false);
          iVar29 = 0;
          if (local_438.ArrayNum != 0) {
            local_b8.Elements._0_8_ = 0;
            local_b8.Elements._8_8_ = 0;
            local_b8.Elements._32_8_ = 0;
            local_b8.Elements._40_4_ = 0;
            local_b8.Elements._44_4_ = 0x80;
            local_b8.Elements._48_4_ = 0xffffffff;
            local_b8.Elements._52_4_ = 0;
            local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_b8.HashSize = 0;
            if ((local_438.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
                      (&local_b8,*(int *)(local_438.AllocatorInstance.Data + 8) * 3);
            if ((local_438.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar30.Data = local_438.AllocatorInstance.Data;
            piVar27 = *(int **)local_438.AllocatorInstance.Data;
            iVar29 = *(int *)(local_438.AllocatorInstance.Data + 8);
            piVar16 = piVar27 + iVar29;
            while( true ) {
              if (*(int *)(FVar30.Data + 8) != iVar29) {
                local_441 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_441);
              }
              if (piVar27 == piVar16) break;
              lVar24 = *(longlong *)&pTVar14->field_0x78;
              uVar34 = *piVar27 * 3;
              local_3e8 = *(undefined4 *)
                           (*(longlong *)(lVar24 + (ulonglong)(uVar34 >> 9) * 8) +
                           (ulonglong)(uVar34 & 0x1ff) * 4);
              local_3e4 = *(undefined4 *)
                           (*(longlong *)(lVar24 + (ulonglong)(uVar34 + 1 >> 9) * 8) +
                           (ulonglong)(uVar34 + 1 & 0x1ff) * 4);
              local_3e0[0] = *(undefined4 *)
                              (*(longlong *)(lVar24 + (ulonglong)(uVar34 + 2 >> 9) * 8) +
                              (ulonglong)(uVar34 + 2 & 0x1ff) * 4);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_b8,&local_2ac,(bool *)&local_3e8);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_b8,&local_2b0,(bool *)&local_3e4);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_b8,&local_2b4,(bool *)local_3e0);
              piVar27 = piVar27 + 1;
            }
            uVar34 = 0;
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
            if ((local_438.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar30.Data = local_438.AllocatorInstance.Data;
            pTVar21 = ::operator_new(0x10);
            local_310.Ptr = pTVar17;
            if (pTVar21 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                        (pTVar21,*(int **)FVar30.Data,*(int *)(FVar30.Data + 8),0);
              local_310.Ptr = pTVar21;
            }
            FDynamicMeshUVPacker::FDynamicMeshUVPacker(&local_1e8,pTVar14,&local_310);
            TVar7.Ptr = local_310.Ptr;
            if (local_310.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              pFVar1 = ((local_310.Ptr)->AllocatorInstance).Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              ::operator_delete(TVar7.Ptr,0x10);
            }
            local_1e8.TextureResolution = this->TextureResolution;
            if (this->TexelDensityMode == Normalize) {
              local_1e8.bScaleIslandsByWorldSpaceTexelRatio = true;
              FDynamicMeshUVPacker::StandardPack(&local_1e8);
            }
            if ((local_318 == (FProgressCancel *)0x0) ||
               (bVar10 = FProgressCancel::Cancelled(local_318), !bVar10)) {
              if (this->TexelDensityMode == ScaleGlobal) {
                iVar29 = this->TextureResolution;
                if ((local_438.ArrayNum < 1) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                ScaleMeshSubRegionByDensity
                          (this,pTVar14,
                           (TArray<int,TSizedDefaultAllocator<32>_> *)
                           local_438.AllocatorInstance.Data,&local_b8,iVar29);
              }
              if (this->TexelDensityMode == ScaleIslands) {
                while( true ) {
                  if (local_438.ArrayNum < 1) {
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar10) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                  if (*(int *)&(((TArray<int,TSizedDefaultAllocator<32>_> *)
                                (local_438.AllocatorInstance.Data + 0x20))->AllocatorInstance).Data
                      <= (int)uVar34) break;
                  if ((local_438.ArrayNum < 1) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FVar30.Data = local_438.AllocatorInstance.Data;
                  uVar36 = 0;
                  if ((int)uVar34 <
                      *(int *)&(((TArray<int,TSizedDefaultAllocator<32>_> *)
                                (local_438.AllocatorInstance.Data + 0x20))->AllocatorInstance).Data)
                  {
                    uVar36 = ~uVar34 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pTVar21 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                             ((longlong)&(pTVar17->AllocatorInstance).Data +
                             *(longlong *)(FVar30.Data + 0x18));
                  local_108._0_8_ = (FScriptContainerElement *)0x0;
                  local_108._8_8_ = 0;
                  local_108._32_8_ = (ForElementType<unsigned_int>)0x0;
                  local_e0 = 0;
                  local_dc = 0x80;
                  local_d8 = -1;
                  local_d4 = 0;
                  local_c8 = (ForElementType<FSetElementId>)0x0;
                  local_c0 = 0;
                  uVar36 = pTVar21->ArrayNum * 3;
                  if (uVar36 != 0) {
                    if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
                      Core::Private::OnInvalidSetNum((longlong)(int)uVar36);
                    }
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_108,uVar36);
                    if (uVar36 < 4) {
                      iVar29 = 1;
                    }
                    else {
                      uVar23 = (ulonglong)((uVar36 >> 1) + 7) * 2 + 1;
                      lVar24 = 0x3f;
                      if (uVar23 != 0) {
                        for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                        }
                      }
                      local_2b8 = (undefined4)lVar24;
                      iVar29 = 1 << ((byte)lVar24 & 0x1f);
                    }
                    if ((local_c0 == 0) || (local_c0 < iVar29)) {
                      local_c0 = iVar29;
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108)
                      ;
                    }
                  }
                  pTVar14 = local_410;
                  pFVar28 = (pTVar21->AllocatorInstance).Data;
                  iVar29 = pTVar21->ArrayNum;
                  pFVar1 = pFVar28 + (longlong)iVar29 * 4;
                  while( true ) {
                    if (pTVar21->ArrayNum != iVar29) {
                      local_440[0] = 0;
                      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(local_440);
                    }
                    if (pFVar28 == pFVar1) break;
                    lVar24 = *(longlong *)&pTVar14->field_0x78;
                    uVar36 = *(int *)pFVar28 * 3;
                    local_3f8 = *(undefined4 *)
                                 (*(longlong *)(lVar24 + (ulonglong)(uVar36 >> 9) * 8) +
                                 (ulonglong)(uVar36 & 0x1ff) * 4);
                    local_3f4 = *(undefined4 *)
                                 (*(longlong *)(lVar24 + (ulonglong)(uVar36 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar36 + 1 & 0x1ff) * 4);
                    local_3f0[0] = *(undefined4 *)
                                    (*(longlong *)(lVar24 + (ulonglong)(uVar36 + 2 >> 9) * 8) +
                                    (ulonglong)(uVar36 + 2 & 0x1ff) * 4);
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,
                               &local_2cc,(bool *)&local_3f8);
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,
                               &local_26c,(bool *)&local_3f4);
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,
                               local_2c8,(bool *)local_3f0);
                    pFVar28 = pFVar28 + 4;
                  }
                  ScaleMeshSubRegionByDensity
                            (local_408,pTVar14,pTVar21,
                             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,
                             local_408->TextureResolution);
                  local_c0 = 0;
                  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_c8);
                  }
                  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_108);
                  uVar34 = uVar34 + 1;
                  pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar17->ArrayNum;
                }
              }
            }
            if (local_1e8.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              pFVar1 = ((local_1e8.TidsToRepack.Ptr)->AllocatorInstance).Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              ::operator_delete(local_1e8.TidsToRepack.Ptr,0x10);
            }
            local_b8.HashSize = 0;
            if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_b8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_b8.Elements);
            iVar29 = local_438.ArrayNum;
          }
          DestructItems<UVTexelDensityOpLocals::TileConnectedComponents,int>
                    ((TileConnectedComponents *)local_438.AllocatorInstance.Data,iVar29);
          FVar30.Data = local_438.AllocatorInstance.Data;
        }
        else {
          local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_428.ArrayNum = 0;
          local_428.ArrayMax = 0;
          pFVar3 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
          if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
            this_03 = pFVar3;
          }
          pTVar15 = FDynamicMeshAttributeSet::GetUVLayer(this_03,this->UVLayerIndex);
          UVTexelDensityOpLocals::CollectIslandComponentsPerTile
                    ((FDynamicMesh3 *)this->_padding_,pTVar15,&this->Selection,&local_428,true);
          fVar6 = __real_3f800000;
          uVar23 = (ulonglong)local_428.ArrayNum;
          local_3fc = local_428.ArrayNum;
          local_2c0 = (TileConnectedComponents *)(local_428.AllocatorInstance.Data + uVar23 * 0x30);
          FVar30.Data = local_428.AllocatorInstance.Data;
          while( true ) {
            pTVar9 = local_2c0;
            local_320 = (TileConnectedComponents *)FVar30.Data;
            if (local_428.ArrayNum != (int)uVar23) {
              local_446 = 0;
              `TCheckedPointerIterator<UVTexelDensityOpLocals::TileConnectedComponents,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_446);
            }
            if ((TileConnectedComponents *)FVar30.Data == pTVar9) break;
            local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                      (&local_368,
                       (int *)(((TileConnectedComponents *)FVar30.Data)->TileTids).AllocatorInstance
                              .Data,(((TileConnectedComponents *)FVar30.Data)->TileTids).ArrayNum,0)
            ;
            local_358 = (((TileConnectedComponents *)FVar30.Data)->ConnectedComponents).Mesh;
            TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            ::
            TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                      (&local_350,
                       &(((TileConnectedComponents *)FVar30.Data)->ConnectedComponents).Components);
            local_340 = (((TileConnectedComponents *)FVar30.Data)->Tile).field0_0x0._s_0;
            iVar26 = local_340.X;
            local_328 = local_340;
            local_400 = TextureUtilitiesCommon::GetUDIMIndex(iVar26,local_340.Y);
            iVar29 = this->TextureResolution;
            if (*(int *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0xc) != -1) {
              piVar16 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        ::FindOrAddImpl<int_const_&,int_const_&>
                                  ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                    *)&this->TextureResolutionPerUDIM,local_400,(int *)&local_400,
                                   &this->TextureResolution);
              iVar29 = *piVar16;
            }
            local_1a8._0_8_ = (FScriptContainerElement *)0x0;
            local_1a8._8_8_ = 0;
            local_188 = (ForElementType<unsigned_int>)0x0;
            uVar34 = local_368.ArrayNum * 3;
            local_180 = 0;
            local_17c = 0x80;
            local_178 = -1;
            local_174 = 0;
            local_168 = (ForElementType<FSetElementId>)0x0;
            local_160 = 0;
            if (uVar34 != 0) {
              if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidSetNum((longlong)(int)uVar34);
              }
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1a8,uVar34);
              if (uVar34 < 4) {
                iVar11 = 1;
              }
              else {
                uVar23 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
                lVar24 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                local_2a8 = (undefined4)lVar24;
                iVar11 = 1 << ((byte)lVar24 & 0x1f);
              }
              if ((local_160 == 0) || (local_160 < iVar11)) {
                local_160 = iVar11;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1a8);
              }
            }
            iVar11 = local_368.ArrayNum;
            pFVar1 = local_368.AllocatorInstance.Data + (longlong)local_368.ArrayNum * 4;
            FVar30.Data = local_368.AllocatorInstance.Data;
            while( true ) {
              if (local_368.ArrayNum != iVar11) {
                local_445 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_445);
              }
              if (FVar30.Data == pFVar1) break;
              lVar24 = *(longlong *)&pTVar14->field_0x78;
              uVar34 = *(int *)FVar30.Data * 3;
              local_3c8 = *(undefined4 *)
                           (*(longlong *)(lVar24 + (ulonglong)(uVar34 >> 9) * 8) +
                           (ulonglong)(uVar34 & 0x1ff) * 4);
              local_3c4 = *(undefined4 *)
                           (*(longlong *)(lVar24 + (ulonglong)(uVar34 + 1 >> 9) * 8) +
                           (ulonglong)(uVar34 + 1 & 0x1ff) * 4);
              local_3c0[0] = *(undefined4 *)
                              (*(longlong *)(lVar24 + (ulonglong)(uVar34 + 2 >> 9) * 8) +
                              (ulonglong)(uVar34 + 2 & 0x1ff) * 4);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1a8,
                         &local_29c,(bool *)&local_3c8);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1a8,
                         &local_2e8,(bool *)&local_3c4);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1a8,
                         &local_2e4,(bool *)local_3c0);
              FVar30.Data = FVar30.Data + 4;
            }
            local_308.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
            local_308._padding_._4_4_ = 1;
            local_308._padding_._0_4_ = 0;
            local_308.UnvisitedBitMask = 0xffffffff;
            local_308.CurrentBitIndex = 0;
            local_308.BaseBitIndex = 0;
            if (local_180 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_308);
            }
            uVar36 = local_180;
            uStack_390 = CONCAT44(local_308._padding_._4_4_,(undefined4)local_308._padding_);
            local_398 = (longlong *)local_1a8;
            uStack_37c = local_308.CurrentBitIndex;
            uStack_380 = local_308.UnvisitedBitMask;
            uStack_374 = local_308._28_4_;
            uStack_378 = local_308.BaseBitIndex;
            local_370 = local_1a8._8_4_ - local_174;
            pTStack_388 = local_308.Array;
            uVar34 = local_180 & 0xffffffe0;
            iVar11 = (int)local_180 >> 5;
            bVar22 = (byte)local_180;
            uStack_240 = CONCAT44(uStack_36c,local_370);
            TStack_260.Array = local_308.Array;
            local_268 = local_398;
            TStack_260._padding_ = uStack_390;
            TStack_260._16_8_ = _uStack_380;
            TStack_260._24_8_ = _uStack_378;
            if (((int)local_180 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (uVar36 != local_180) {
              FVar32 = (ForElementType<unsigned_int>)((longlong)local_1a8 + 0x10);
              if (local_188 != (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_188;
              }
              uVar36 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar32 + (longlong)iVar11 * 4);
              while (uVar36 == 0) {
                lVar24 = (longlong)iVar11;
                uVar34 = uVar34 + 0x20;
                iVar11 = iVar11 + 1;
                uVar36 = local_180;
                if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
                goto LAB_14c96c038;
                uVar36 = ((uint *)((longlong)FVar32 + 4))[lVar24];
              }
              uVar23 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
              lVar24 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_2e0 = (int)lVar24;
              uVar36 = (uVar34 - 1) + local_2e0;
              if ((int)local_180 < (int)uVar36) {
                uVar36 = local_180;
              }
            }
LAB_14c96c038:
            iVar11 = local_328.Y;
            while( true ) {
              plVar4 = local_268;
              if ((int)local_268[1] - *(int *)((longlong)local_268 + 0x34) != (int)uStack_240) {
                local_444 = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_444);
              }
              if (((TStack_260.CurrentBitIndex == uVar36) &&
                  (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10)))
                 && (plVar4 == (longlong *)local_1a8)) break;
              uVar34 = *(uint *)(*plVar4 + (longlong)TStack_260.CurrentBitIndex * 0xc);
              uVar33 = (ulonglong)((uVar34 & 0x7fffffff) >> 8);
              uVar23 = (ulonglong)(uVar34 * 2 + 1 & 0x1ff);
              uVar31 = (ulonglong)(uVar34 * 2 & 0x1ff);
              lVar24 = *(longlong *)
                        (*(longlong *)&pTVar14->field_0x48 +
                        (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8);
              fVar2 = *(float *)(*(longlong *)(*(longlong *)&pTVar14->field_0x48 + uVar33 * 8) +
                                uVar23 * 4);
              *(float *)(lVar24 + uVar31 * 4) = *(float *)(lVar24 + uVar31 * 4) - (float)iVar26;
              TStack_260.UnvisitedBitMask =
                   TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
              *(float *)(*(longlong *)(*(longlong *)&pTVar14->field_0x48 + uVar33 * 8) + uVar23 * 4)
                   = fVar6 - ((fVar6 - fVar2) - (float)iVar11);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
            }
            pTVar17 = ::operator_new(0x10);
            iVar11 = local_368.ArrayNum;
            FVar30.Data = local_368.AllocatorInstance.Data;
            if (pTVar17 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
            }
            else {
              (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              pTVar17->ArrayNum = local_368.ArrayNum;
              if (local_368.ArrayNum == 0) {
                pTVar17->ArrayMax = 0;
              }
              else {
                Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_368.ArrayNum,0,&pTVar17->AllocatorInstance,local_368.ArrayNum,
                           &pTVar17->ArrayMax);
                memcpy((pTVar17->AllocatorInstance).Data,FVar30.Data,(longlong)iVar11 << 2);
              }
            }
            local_338.Ptr = pTVar17;
            FDynamicMeshUVPacker::FDynamicMeshUVPacker(&local_208,pTVar14,&local_338);
            TVar7.Ptr = local_338.Ptr;
            if (local_338.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              pFVar1 = ((local_338.Ptr)->AllocatorInstance).Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              ::operator_delete(TVar7.Ptr,0x10);
            }
            this_01 = local_408;
            iVar29 = (int)(float)iVar29;
            local_418 = iVar29;
            local_208.TextureResolution = iVar29;
            if (local_408->TexelDensityMode == Normalize) {
              local_208.bScaleIslandsByWorldSpaceTexelRatio = true;
              FDynamicMeshUVPacker::StandardPack(&local_208);
            }
            pFVar8 = local_318;
            if (local_318 != (FProgressCancel *)0x0) {
              if (local_318->WasCancelled == false) {
                Core::Private::Function::CheckCallable(*(void **)&local_318->CancelF);
                plVar4 = *(longlong **)&(pFVar8->CancelF).field_0x28;
                pcVar5 = *(code **)&pFVar8->CancelF;
                plVar25 = (longlong *)&(pFVar8->CancelF).field_0x10;
                if (plVar4 != (longlong *)0x0) {
                  plVar25 = plVar4;
                }
                uVar18 = (**(code **)(*plVar25 + 8))();
                bVar10 = (bool)(*pcVar5)(uVar18);
                pFVar8->WasCancelled = bVar10;
                iVar29 = local_418;
                if (bVar10 == false) goto LAB_14c96c253;
              }
              if (local_208.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                pFVar1 = ((local_208.TidsToRepack.Ptr)->AllocatorInstance).Data;
                if (pFVar1 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar1);
                }
                ::operator_delete(local_208.TidsToRepack.Ptr,0x10);
              }
              local_160 = 0;
              if (local_168 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_168);
              }
              TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_1a8);
              TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
              ::
              ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                        (&local_350);
              if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.AllocatorInstance.Data);
              }
              break;
            }
LAB_14c96c253:
            if (this_01->TexelDensityMode == ScaleGlobal) {
              ScaleMeshSubRegionByDensity
                        (this_01,pTVar14,&local_368,
                         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1a8,iVar29);
            }
            if ((this_01->TexelDensityMode == ScaleIslands) &&
               (uVar34 = 0, 0 < local_350.Array.ArrayNum)) {
              local_330 = 0;
              do {
                lVar24 = local_330;
                uVar23 = 0;
                uVar36 = 0;
                if ((int)uVar34 < local_350.Array.ArrayNum) {
                  uVar36 = ~uVar34 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pTVar17 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                           (local_350.Array.AllocatorInstance.Data + lVar24);
                local_158._0_8_ = (FScriptContainerElement *)0x0;
                local_158._8_8_ = 0;
                local_138 = (ForElementType<unsigned_int>)0x0;
                local_130 = 0;
                local_12c = 0x80;
                local_128 = -1;
                local_124 = 0;
                local_118.Data = (FScriptContainerElement *)0x0;
                local_110 = 0;
                uVar36 = pTVar17->ArrayNum * 3;
                if (uVar36 != 0) {
                  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
                    Core::Private::OnInvalidSetNum((longlong)(int)uVar36);
                  }
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_158,uVar36);
                  if (uVar36 < 4) {
                    uVar36 = 1;
                  }
                  else {
                    uVar31 = (ulonglong)((uVar36 >> 1) + 7) * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar31 != 0) {
                      for (; uVar31 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    local_2dc = (undefined4)lVar24;
                    uVar36 = 1 << ((byte)lVar24 & 0x1f);
                  }
                  if ((local_110 == 0) || ((int)local_110 < (int)uVar36)) {
                    local_110 = uVar36;
                    if (local_118.Data != (FScriptContainerElement *)0x0) {
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_118,0,0,4);
                    }
                    if (uVar36 != 0) {
                      uVar12 = uVar36;
                      if (uVar36 < 2) {
                        if (local_118.Data != (FScriptContainerElement *)0x0) {
                          uVar12 = 0;
                          goto LAB_14c96c3e2;
                        }
                      }
                      else {
LAB_14c96c3e2:
                        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                  (&local_118,0,uVar12,4);
                      }
                      if (0 < (int)uVar36) {
                        uVar33 = (ulonglong)uVar36;
                        uVar31 = uVar23;
                        do {
                          FVar30.Data = local_120;
                          if (local_118.Data != (FScriptContainerElement *)0x0) {
                            FVar30.Data = local_118.Data;
                          }
                          uVar19 = (longlong)(int)uVar36 - 1U & uVar31;
                          uVar31 = uVar31 + 1;
                          *(undefined4 *)(FVar30.Data + uVar19 * 4) = 0xffffffff;
                          uVar33 = uVar33 - 1;
                        } while (uVar33 != 0);
                      }
                    }
                    if (local_110 != 0) {
                      pTStack_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10);
                      local_3b8 = 0;
                      uStack_3b4 = 1;
                      uStack_3a4 = 0;
                      uStack_3a0 = 0;
                      if (local_130 != 0) {
                        FVar32 = (ForElementType<unsigned_int>)((longlong)local_158 + 0x10);
                        if (local_138 != (ForElementType<unsigned_int>)0x0) {
                          FVar32 = local_138;
                        }
                        uVar36 = *(uint *)FVar32;
                        uVar31 = uVar23;
                        while (uVar36 == 0) {
                          uStack_3a0 = (int)uVar31 + 0x20;
                          uVar31 = (ulonglong)uStack_3a0;
                          iVar29 = (int)uVar23;
                          local_3b8 = iVar29 + 1;
                          uVar23 = (ulonglong)local_3b8;
                          if ((int)((local_130 - 1) + ((int)(local_130 - 1) >> 0x1f & 0x1fU)) >> 5 <
                              (int)local_3b8) goto LAB_14c96c501;
                          uVar36 = ((uint *)((longlong)FVar32 + 4))[iVar29];
                        }
                        uStack_3b4 = -uVar36 & uVar36;
                        uVar23 = (ulonglong)uStack_3b4 * 2 + 1;
                        lVar24 = 0x3f;
                        if (uVar23 != 0) {
                          for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                          }
                        }
                        local_2d8 = (int)lVar24;
                        uStack_3a4 = local_2d8 + -1 + uStack_3a0;
                        uVar23 = (ulonglong)uStack_3a4;
                        if ((int)local_130 < (int)uStack_3a4) {
LAB_14c96c501:
                          uVar23 = (ulonglong)local_130;
                          uStack_3a4 = local_130;
                        }
                      }
                      local_3a8 = 0xffffffff;
                      local_298 = (longlong *)local_158;
                      local_290._padding_ = CONCAT44(uStack_3b4,local_3b8);
                      local_290.CurrentBitIndex = uStack_3a4;
                      local_290.UnvisitedBitMask = 0xffffffff;
                      local_290._28_4_ = uStack_39c;
                      local_290.BaseBitIndex = uStack_3a0;
                      local_290.Array = pTStack_3b0;
                      if ((int)uVar23 < (int)local_130) {
                        do {
                          lVar24 = *local_298;
                          lVar20 = (longlong)(int)uVar23;
                          uVar36 = local_110 - 1 & *(uint *)(lVar24 + lVar20 * 0xc);
                          *(uint *)(lVar24 + 8 + lVar20 * 0xc) = uVar36;
                          FVar30.Data = local_120;
                          if (local_118.Data != (FScriptContainerElement *)0x0) {
                            FVar30.Data = local_118.Data;
                          }
                          uVar31 = (longlong)(int)local_110 - 1U & (longlong)(int)uVar36;
                          *(undefined4 *)(lVar24 + 4 + lVar20 * 0xc) =
                               *(undefined4 *)(FVar30.Data + uVar31 * 4);
                          *(int *)(FVar30.Data + uVar31 * 4) = (int)uVar23;
                          local_290.UnvisitedBitMask =
                               local_290.UnvisitedBitMask & ~local_290._padding_._4_4_;
                          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                    (&local_290);
                          uVar23 = (ulonglong)(uint)local_290.CurrentBitIndex;
                        } while (local_290.CurrentBitIndex < (local_290.Array)->NumBits);
                      }
                    }
                  }
                }
                pTVar14 = local_410;
                pFVar28 = (pTVar17->AllocatorInstance).Data;
                iVar29 = pTVar17->ArrayNum;
                pFVar1 = pFVar28 + (longlong)iVar29 * 4;
                while( true ) {
                  if (pTVar17->ArrayNum != iVar29) {
                    local_443 = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_443);
                  }
                  if (pFVar28 == pFVar1) break;
                  lVar24 = *(longlong *)&pTVar14->field_0x78;
                  uVar36 = *(int *)pFVar28 * 3;
                  local_3d8 = *(undefined4 *)
                               (*(longlong *)(lVar24 + (ulonglong)(uVar36 >> 9) * 8) +
                               (ulonglong)(uVar36 & 0x1ff) * 4);
                  local_3d4 = *(undefined4 *)
                               (*(longlong *)(lVar24 + (ulonglong)(uVar36 + 1 >> 9) * 8) +
                               (ulonglong)(uVar36 + 1 & 0x1ff) * 4);
                  local_3d0[0] = *(undefined4 *)
                                  (*(longlong *)(lVar24 + (ulonglong)(uVar36 + 2 >> 9) * 8) +
                                  (ulonglong)(uVar36 + 2 & 0x1ff) * 4);
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158,
                             &local_2d4,(bool *)&local_3d8);
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158,
                             &local_2d0,(bool *)&local_3d4);
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158,
                             &local_2a0,(bool *)local_3d0);
                  pFVar28 = pFVar28 + 4;
                }
                ScaleMeshSubRegionByDensity
                          (local_408,pTVar14,pTVar17,
                           (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158,
                           local_418);
                local_110 = 0;
                if (local_118.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_118.Data);
                }
                TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_158);
                uVar34 = uVar34 + 1;
                local_330 = local_330 + 8;
              } while ((int)uVar34 < local_350.Array.ArrayNum);
            }
            uVar36 = local_180;
            uVar34 = 0;
            uVar12 = 1;
            uStack_37c = uVar34;
            uStack_378 = uVar34;
            if (local_180 != 0) {
              FVar32 = (ForElementType<unsigned_int>)((longlong)local_1a8 + 0x10);
              if (local_188 != (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_188;
              }
              uVar35 = *(uint *)FVar32;
              while (uVar35 == 0) {
                lVar24 = (longlong)(int)uVar34;
                uStack_378 = uStack_378 + 0x20;
                uVar34 = uVar34 + 1;
                uStack_37c = local_180;
                if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)uVar34) goto LAB_14c96c7a3;
                uVar35 = ((uint *)((longlong)FVar32 + 4))[lVar24];
              }
              uVar12 = -uVar35 & uVar35;
              uVar23 = (ulonglong)uVar12 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_2a4 = (int)lVar24;
              uStack_37c = (uStack_378 - 1) + local_2a4;
              if ((int)local_180 < (int)uStack_37c) {
                uStack_37c = local_180;
              }
            }
LAB_14c96c7a3:
            local_398 = (longlong *)local_1a8;
            pTStack_388 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
            uVar35 = local_180 & 0xffffffe0;
            local_370 = local_1a8._8_4_ - local_174;
            uStack_390 = CONCAT44(uVar12,uVar34);
            uStack_380 = 0xffffffff;
            uStack_374 = local_1ac;
            TStack_230._padding_ = uStack_390;
            iVar29 = (int)local_180 >> 5;
            uStack_210 = CONCAT44(uStack_36c,local_370);
            bVar22 = (byte)local_180;
            TStack_230.UnvisitedBitMask = 0xffffffff;
            TStack_230.CurrentBitIndex = uStack_37c;
            TStack_230.BaseBitIndex = uStack_378;
            TStack_230._28_4_ = local_1ac;
            local_238 = local_398;
            TStack_230.Array = pTStack_388;
            if (((int)local_180 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar14 = local_410;
            if (uVar36 != local_180) {
              FVar32 = (ForElementType<unsigned_int>)((longlong)local_1a8 + 0x10);
              if (local_188 != (ForElementType<unsigned_int>)0x0) {
                FVar32 = local_188;
              }
              uVar34 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar32 + (longlong)iVar29 * 4);
              while (uVar34 == 0) {
                lVar24 = (longlong)iVar29;
                uVar35 = uVar35 + 0x20;
                iVar29 = iVar29 + 1;
                uVar36 = local_180;
                if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
                goto LAB_14c96c8d8;
                uVar34 = ((uint *)((longlong)FVar32 + 4))[lVar24];
              }
              uVar23 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
              lVar24 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_270 = (int)lVar24;
              uVar36 = (uVar35 - 1) + local_270;
              if ((int)local_180 < (int)uVar36) {
                uVar36 = local_180;
              }
            }
LAB_14c96c8d8:
            iVar29 = local_328.Y;
            while( true ) {
              plVar4 = local_238;
              if ((int)local_238[1] - *(int *)((longlong)local_238 + 0x34) != (int)uStack_210) {
                local_442 = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_442);
              }
              TVar7.Ptr = local_208.TidsToRepack.Ptr;
              if (((TStack_230.CurrentBitIndex == uVar36) &&
                  (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10)))
                 && (plVar4 == (longlong *)local_1a8)) break;
              uVar34 = *(uint *)(*plVar4 + (longlong)TStack_230.CurrentBitIndex * 0xc);
              uVar33 = (ulonglong)((uVar34 & 0x7fffffff) >> 8);
              uVar23 = (ulonglong)(uVar34 * 2 + 1 & 0x1ff);
              uVar31 = (ulonglong)(uVar34 * 2 & 0x1ff);
              lVar24 = *(longlong *)
                        (*(longlong *)&pTVar14->field_0x48 +
                        (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8);
              fVar2 = *(float *)(*(longlong *)(*(longlong *)&pTVar14->field_0x48 + uVar33 * 8) +
                                uVar23 * 4);
              *(float *)(lVar24 + uVar31 * 4) = (float)iVar26 + *(float *)(lVar24 + uVar31 * 4);
              TStack_230.UnvisitedBitMask =
                   TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
              *(float *)(*(longlong *)(*(longlong *)&pTVar14->field_0x48 + uVar33 * 8) + uVar23 * 4)
                   = fVar6 - ((fVar6 - fVar2) + (float)iVar29);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
            }
            if (local_208.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              pFVar1 = ((local_208.TidsToRepack.Ptr)->AllocatorInstance).Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              ::operator_delete(TVar7.Ptr,0x10);
            }
            local_160 = 0;
            if (local_168 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_168);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_1a8);
            TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            ::
            ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                      (&local_350);
            if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.AllocatorInstance.Data);
            }
            FVar30.Data = (FScriptContainerElement *)(local_320 + 1);
            uVar23 = (ulonglong)local_3fc;
            this = local_408;
          }
          DestructItems<UVTexelDensityOpLocals::TileConnectedComponents,int>
                    ((TileConnectedComponents *)local_428.AllocatorInstance.Data,local_428.ArrayNum)
          ;
          FVar30.Data = local_428.AllocatorInstance.Data;
        }
        if ((TileConnectedComponents *)FVar30.Data != (TileConnectedComponents *)0x0) {
          FMemory::Free(FVar30.Data);
        }
      }
    }
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecutePacker @ 14c97c3e0

void __thiscall
UE::Geometry::FUVEditorTexelDensityOp::ExecutePacker
          (FUVEditorTexelDensityOp *this,FDynamicMeshUVPacker *param_1)

{
  if (this->TexelDensityMode == Normalize) {
    param_1->bScaleIslandsByWorldSpaceTexelRatio = true;
    FDynamicMeshUVPacker::StandardPack(param_1);
    return;
  }
  return;
}

// ScaleMeshSubRegionByDensity @ 14c984ce0

void __thiscall
UE::Geometry::FUVEditorTexelDensityOp::ScaleMeshSubRegionByDensity
          (FUVEditorTexelDensityOp *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,int param_4)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  FScriptContainerElement *pFVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  int iVar23;
  ulonglong uVar24;
  double dVar25;
  float fVar26;
  undefined1 local_res8 [8];
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res20;
  undefined1 local_108 [4];
  uint local_104;
  int local_100;
  FScriptContainerElement *local_f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  
  pFVar18 = (param_2->AllocatorInstance).Data;
  local_104 = param_2->ArrayNum;
  uVar12 = (ulonglong)(int)local_104;
  uVar16 = 0;
  uVar14 = 0;
  dVar5 = 0.0;
  local_f8 = pFVar18 + uVar12 * 4;
  uVar20 = uVar16;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    pFVar8 = local_f8;
    if (local_res18->ArrayNum != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    pTVar7 = local_res20;
    iVar23 = (int)uVar20;
    if (pFVar18 == pFVar8) break;
    iVar3 = this->UVLayerIndex;
    iVar15 = *(int *)pFVar18;
    uVar12 = *(ulonglong *)(this->_padding_ + 0x208);
    uVar24 = uVar16;
    if (uVar12 != 0) {
      uVar24 = uVar12;
    }
    uVar12 = uVar16;
    if ((iVar3 < *(int *)(uVar24 + 0x28)) && (-1 < iVar3)) {
      if ((iVar3 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = *(ulonglong *)(*(longlong *)(uVar24 + 0x20) + (longlong)iVar3 * 8);
    }
    uVar19 = iVar15 * 3;
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(uVar12 + 0x78) + (ulonglong)(uVar19 >> 9) * 8) +
                     (ulonglong)(uVar19 & 0x1ff) * 4)) {
      dVar25 = FUVMetrics::TexelDensity
                         ((FDynamicMesh3 *)this->_padding_,this->UVLayerIndex,iVar15,param_4);
      dVar5 = dVar5 + dVar25;
      uVar20 = (ulonglong)(iVar23 + 1);
    }
    pFVar18 = pFVar18 + 4;
    uVar12 = (ulonglong)local_104;
  }
  if (iVar23 != 0) {
    dVar5 = dVar5 / (double)iVar23;
  }
  iVar23 = this->TargetWorldSpaceMeasurement;
  uStack_e4 = 1;
  iVar3 = this->TargetPixelCountMeasurement;
  local_d0 = 0;
  uVar19 = *(uint *)&(local_res20->Elements).field_0x28;
  puVar1 = &(local_res20->Elements).field_0x10;
  uStack_d4 = uVar14;
  if (uVar19 != 0) {
    puVar22 = *(uint **)&(local_res20->Elements).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar11 = *puVar22;
    uVar20 = uVar16;
    local_d0 = 0;
    uVar14 = 0;
    while (uVar11 == 0) {
      iVar15 = (int)uVar16;
      local_d0 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)local_d0;
      uVar14 = iVar15 + 1;
      uVar16 = (ulonglong)uVar14;
      uStack_d4 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14c984ece;
      uVar11 = puVar22[(longlong)iVar15 + 1];
    }
    uStack_e4 = -uVar11 & uVar11;
    uVar16 = (ulonglong)uStack_e4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_100 = (int)lVar13;
    uStack_d4 = local_100 + -1 + local_d0;
    if ((int)uVar19 < (int)uStack_d4) {
      uStack_d4 = uVar19;
    }
  }
LAB_14c984ece:
  uVar11 = *(uint *)&(local_res20->Elements).field_0x28;
  uStack_cc = local_74;
  uVar17 = uVar11 & 0xffffffe0;
  iStack_c8 = *(int *)&(local_res20->Elements).field_0x8 -
              *(int *)&(local_res20->Elements).field_0x34;
  uStack_d8 = 0xffffffff;
  local_f0 = local_res20;
  TStack_b8._padding_ = CONCAT44(uStack_e4,uVar14);
  TStack_b8.CurrentBitIndex = uStack_d4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  local_c0 = local_res20;
  iVar15 = (int)uVar11 >> 5;
  TStack_b8._28_4_ = local_74;
  TStack_b8.BaseBitIndex = local_d0;
  uStack_98 = CONCAT44(uStack_c4,iStack_c8);
  uStack_e8 = uVar14;
  local_e0 = puVar1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || ((int)uVar19 < (int)uVar11)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar6 = __real_3f800000;
  uVar14 = *(uint *)&(pTVar7->Elements).field_0x28;
  if (uVar11 != uVar14) {
    puVar21 = *(undefined1 **)&(pTVar7->Elements).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar11 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14c984fd1;
      uVar19 = *(uint *)(puVar21 + lVar13 * 4 + 4);
    }
    uVar16 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar11 = (int)lVar13 + -1 + uVar17;
    if ((int)uVar14 < (int)uVar11) {
      uVar11 = uVar14;
    }
  }
LAB_14c984fd1:
  while( true ) {
    pTVar9 = local_c0;
    if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
        (int)uStack_98) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_b8.CurrentBitIndex == uVar11) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar7))
    break;
    fVar26 = (float)((double)iVar3 / ((double)iVar23 * dVar5));
    uVar14 = *(uint *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_b8.CurrentBitIndex * 0xc);
    uVar12 = (ulonglong)((uVar14 & 0x7fffffff) >> 8);
    uVar16 = (ulonglong)(uVar14 * 2 + 1 & 0x1ff);
    uVar20 = (ulonglong)(uVar14 * 2 & 0x1ff);
    lVar13 = *(longlong *)
              (*(longlong *)&local_res10->field_0x48 + (ulonglong)((uVar14 & 0x7fffffff) >> 8) * 8);
    fVar2 = *(float *)(*(longlong *)(*(longlong *)&local_res10->field_0x48 + uVar12 * 8) +
                      uVar16 * 4);
    *(float *)(lVar13 + uVar20 * 4) = fVar26 * *(float *)(lVar13 + uVar20 * 4);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    *(float *)(*(longlong *)(*(longlong *)&local_res10->field_0x48 + uVar12 * 8) + uVar16 * 4) =
         fVar6 - (fVar6 - fVar2) * fVar26;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  return;
}

// SetTransform @ 14c985a20

void __thiscall
UE::Geometry::FUVEditorTexelDensityOp::SetTransform
          (FUVEditorTexelDensityOp *this,TTransformSRT3<double> *param_1)

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

// operator() @ 150574db0

bool __thiscall
`UE::Geometry::FUVEditorTexelDensityOp::CalculateResult'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7629649315580870822>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7629649315580870822>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

