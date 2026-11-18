// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// FSubdivideMeshOp @ 14cc1bdf0

FSubdivideMeshOp * __thiscall
DisplaceMeshToolLocals::FSubdivideMeshOp::FSubdivideMeshOp
          (FSubdivideMeshOp *this,FDynamicMesh3 *param_1,FSubdivideParameters *param_2,
          EDisplaceMeshToolSubdivisionType param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FSubdivideMeshOp *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  TIndexedWeightMap<float> *pTVar11;
  TVector2<float>_u_0 local_38 [2];
  
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  uVar10 = 0;
  this->_padding_ = (longlong)&___7FSubdivideMeshOp_DisplaceMeshToolLocals__6B_;
  (this->VerticesToDisplace).Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  FSubdivideParameters::FSubdivideParameters(&this->Parameters,param_2);
  this->SubdivisionType = param_3;
  UE::Geometry::FDynamicMesh3::Copy((FDynamicMesh3 *)this->_padding_,param_1,true,true,true,true);
  local_38[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  UE::Geometry::FDynamicMesh3::EnableVertexUVs
            ((FDynamicMesh3 *)this->_padding_,(TVector2<float> *)&local_38[0]._s_0);
  lVar2 = this->_padding_;
  uVar8 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  if ((this->Parameters).WeightMap.Object == (TIndexedWeightMap<float> *)0x0) {
    if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
      uVar10 = 1;
      uVar9 = 1;
      if ((int)uVar8 < 2) goto joined_r0x00014cc1c057;
      do {
        uVar7 = (ulonglong)((uint)uVar10 & 0x1ff);
        lVar3 = (*(undefined8 **)(lVar2 + 0x28))[uVar10 >> 9];
        if ((*(short *)(lVar3 + uVar7 * 2) != 0) && (*(short *)(lVar3 + uVar7 * 2) != -1)) break;
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar8);
    }
    uVar9 = (uint)uVar10;
joined_r0x00014cc1c057:
    do {
      if (uVar9 == uVar8) {
        return this;
      }
      while( true ) {
        if (*(char *)(this->_padding_ + 0xb0) != '\0') {
          ((TVector2<float>_u_0 *)
          (*(longlong *)(*(longlong *)(this->_padding_ + 0xa0) + (uVar10 >> 9) * 8) +
          (ulonglong)((uint)uVar10 & 0x1ff) * 8))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
        }
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        if ((int)uVar8 <= (int)uVar9) break;
        while( true ) {
          sVar1 = *(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + (uVar10 >> 9) * 8) +
                            (ulonglong)((uint)uVar10 & 0x1ff) * 2);
          if ((sVar1 != 0) && (sVar1 != -1)) break;
          uVar9 = (uint)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          if ((int)uVar8 <= (int)uVar9) goto joined_r0x00014cc1c057;
        }
      }
    } while( true );
  }
  if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    uVar10 = 1;
    uVar9 = 1;
    if ((int)uVar8 < 2) goto joined_r0x00014cc1bee7;
    do {
      uVar7 = (ulonglong)((uint)uVar10 & 0x1ff);
      lVar3 = (*(undefined8 **)(lVar2 + 0x28))[uVar10 >> 9];
      if ((*(short *)(lVar3 + uVar7 * 2) != 0) && (*(short *)(lVar3 + uVar7 * 2) != -1)) break;
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar8);
  }
  uVar9 = (uint)uVar10;
joined_r0x00014cc1bee7:
  do {
    if (uVar9 == uVar8) {
      return this;
    }
    while( true ) {
      lVar3 = this->_padding_;
      if (((this->Parameters).WeightMap.Object == (TIndexedWeightMap<float> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FSubdivideMeshOp *)(*pcVar4)();
        return pFVar6;
      }
      pTVar11 = (this->Parameters).WeightMap.Object;
      uVar9 = (uint)uVar10;
      if ((-1 < (int)uVar9) && ((int)uVar9 < (pTVar11->Values).ArrayNum)) {
        if (((int)uVar9 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FSubdivideMeshOp *)(*pcVar4)();
          return pFVar6;
        }
        pTVar11 = (TIndexedWeightMap<float> *)
                  ((pTVar11->Values).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      }
      if (*(char *)(lVar3 + 0xb0) != '\0') {
        *(ulonglong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0xa0) + (uVar10 >> 9) * 8) +
         (ulonglong)(uVar9 & 0x1ff) * 8) = (ulonglong)(uint)pTVar11->DefaultValue;
      }
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar8 <= (int)uVar9) break;
      while( true ) {
        sVar1 = *(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + (uVar10 >> 9) * 8) +
                          (ulonglong)((uint)uVar10 & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        if ((int)uVar8 <= (int)uVar9) goto joined_r0x00014cc1bee7;
      }
    }
  } while( true );
}

// CalculateResult @ 14cc45540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult
          (FSubdivideMeshOp *this,FProgressCancel *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  TVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 auStack_798 [32];
  TArray<int,TSizedDefaultAllocator<32>_> *local_778;
  undefined1 local_768;
  undefined1 local_767;
  undefined1 local_766;
  undefined1 local_765;
  undefined1 local_764 [4];
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  local_760;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  local_758;
  undefined1 local_750 [8];
  undefined1 local_748 [16];
  undefined1 local_738 [24];
  ForAnyElementType local_720;
  undefined1 local_718;
  ForAnyElementType local_710;
  ForAnyElementType local_708;
  TArray<int,TSizedDefaultAllocator<32>_> *local_700;
  ForAnyElementType local_6f8;
  ForAnyElementType local_6f0;
  char local_6e8;
  FSelectiveTessellate local_6d8;
  FPNTriangles local_688;
  FDynamicMesh3 local_668;
  FDynamicMesh3 local_438;
  undefined1 local_208 [48];
  undefined1 local_1d8 [64];
  void *local_198;
  undefined4 local_190;
  undefined1 local_188 [64];
  void *local_148;
  undefined4 local_140;
  FDynamicMesh3 *local_138;
  bool local_130;
  undefined1 local_128 [48];
  undefined1 local_f8 [64];
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  FDynamicMesh3 *local_58;
  bool local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_798;
  local_688.Mesh = (FDynamicMesh3 *)this->_padding_;
  uVar1 = (this->Parameters).SubdivisionsCount;
  iVar6 = (this->Parameters).SelectedTriangles.ArrayNum;
  iVar2 = ((local_688.Mesh)->TriangleRefCounts).UsedCount;
  local_760.Ptr._0_4_ = iVar6;
  if (this->SubdivisionType == Flat) {
    if ((this->Parameters).SelectionType.bIsSet == false) {
      local_128[0x14] = true;
      local_128[0x15] = false;
      local_128._0_8_ = &___7FUniformTessellate_Geometry_UE__6B_;
      local_128._32_8_ = (FScriptContainerElement *)0x0;
      local_128._40_4_ = 0;
      local_128._44_4_ = 0;
      local_f8._0_8_ = 0;
      local_f8._8_8_ = 0;
      local_f8._32_8_ = 0;
      local_f8._40_4_ = 0;
      local_f8._44_4_ = 0x80;
      local_f8._48_4_ = 0xffffffff;
      local_f8._52_4_ = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      local_a8._32_8_ = 0;
      local_a8._40_4_ = 0;
      local_a8._44_4_ = 0x80;
      local_a8._48_4_ = 0xffffffff;
      local_a8._52_4_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = (FDynamicMesh3 *)0x0;
      local_50 = true;
      local_128._8_8_ = param_1;
      local_128._16_4_ = uVar1;
      local_128._24_8_ = local_688.Mesh;
      if (((-1 < (int)uVar1) && (local_688.Mesh != (FDynamicMesh3 *)0x0)) ||
         (bVar5 = `DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l40::<lambda_4>::
                  operator()(&local_765), bVar5)) {
        UE::Geometry::FUniformTessellate::Compute((FUniformTessellate *)local_128);
      }
      local_128._0_8_ = &___7FUniformTessellate_Geometry_UE__6B_;
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      local_b0 = 0;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_f8);
      if ((FScriptContainerElement *)local_128._32_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_128._32_8_);
      }
    }
    else {
      if ((((this->Parameters).SelectionType.TypedValue == Material) &&
          ((this->Parameters).ActiveMaterialID.bIsSet != false)) &&
         (piVar7 = TOptional<int>::GetValue(&(this->Parameters).ActiveMaterialID), *piVar7 != -1)) {
        pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        puVar8 = (uint *)TOptional<int>::GetValue(&(this->Parameters).ActiveMaterialID);
        iVar6 = (int)this->_padding_;
        pTVar13 = pTVar12;
        if ((int)local_760.Ptr == iVar2) {
          TVar9 = UE::Geometry::FSelectiveTessellate::CreateConcentricRingsPatternFromMaterial
                            ((FDynamicMesh3 *)local_738,iVar6,uVar1);
          if ((FTessellationPattern *)(local_748 + 8) != TVar9.Ptr) {
            pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(TVar9.Ptr)->_padding_;
            (TVar9.Ptr)->_padding_ = 0;
          }
        }
        else {
          local_778 = &(this->Parameters).SelectedTriangles;
          TVar9 = UE::Geometry::FSelectiveTessellate::
                  CreateConcentricRingsPatternFromSelectionAndMaterial
                            ((FDynamicMesh3 *)local_748,iVar6,uVar1,
                             (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)*puVar8);
          local_738._0_8_ = local_748._0_8_;
          if ((FTessellationPattern *)(local_748 + 8) != TVar9.Ptr) {
            pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(TVar9.Ptr)->_padding_;
            (TVar9.Ptr)->_padding_ = 0;
          }
        }
        if ((FScriptContainerElement *)local_738._0_8_ != (FScriptContainerElement *)0x0) {
          (*(code *)**(undefined8 **)local_738._0_8_)(local_738._0_8_,1);
        }
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_668);
        local_708.Data = (FScriptContainerElement *)&local_668;
        local_718 = 1;
        local_6f0.Data = (FScriptContainerElement *)this->_padding_;
        local_738._16_8_ = &___7FSelectiveTessellate_Geometry_UE__6B_;
        local_6f8.Data = (FScriptContainerElement *)0x0;
        local_6e8 = '\0';
        local_720.Data = (FScriptContainerElement *)param_1;
        local_710.Data = (FScriptContainerElement *)pTVar13;
        pTVar10 = ::operator_new(0x10);
        if (pTVar10 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar10->ArrayNum = 0;
          pTVar10->ArrayMax = 0;
          pTVar12 = pTVar10;
        }
        local_760.Ptr = pTVar12;
        TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
        ::operator=(&this->VerticesToDisplace,&local_760);
        TVar4.Ptr = local_760.Ptr;
        if (local_760.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar11 = ((local_760.Ptr)->AllocatorInstance).Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          ::operator_delete(TVar4.Ptr,0x10);
        }
        local_700 = (this->VerticesToDisplace).Ptr;
        if ((((((local_6e8 != '\0') ||
               (((local_6f0.Data != (FScriptContainerElement *)0x0 &&
                 ((FDynamicMesh3 *)local_708.Data != (FDynamicMesh3 *)0x0)) &&
                (local_710.Data != (FScriptContainerElement *)0x0)))) &&
              ((local_6e8 != '\x01' ||
               (((FDynamicMesh3 *)local_708.Data != (FDynamicMesh3 *)0x0 &&
                (local_710.Data != (FScriptContainerElement *)0x0)))))) &&
             ((local_710.Data != (FScriptContainerElement *)0x0 &&
              (iVar6 = (**(code **)(*(longlong *)local_710.Data + 8))(), iVar6 == 0)))) ||
            (bVar5 = `DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l17::<lambda_1>
                     ::operator()(&local_768), bVar5)) &&
           (bVar5 = UE::Geometry::FSelectiveTessellate::Compute
                              ((FSelectiveTessellate *)(local_738 + 0x10)), bVar5)) {
          UE::Geometry::FDynamicMesh3::operator=((FDynamicMesh3 *)this->_padding_,&local_668);
        }
        local_738._16_8_ = &___7FSelectiveTessellate_Geometry_UE__6B_;
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_668);
        if (pTVar13 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          return;
        }
        pFVar11 = (pTVar13->AllocatorInstance).Data;
        local_750 = (undefined1  [8])pTVar13;
      }
      else {
        local_208._24_8_ = this->_padding_;
        if (iVar6 == iVar2) {
          local_208[0x14] = true;
          local_208[0x15] = false;
          local_208._0_8_ = &___7FUniformTessellate_Geometry_UE__6B_;
          local_208._32_8_ = (FScriptContainerElement *)0x0;
          local_208._40_4_ = 0;
          local_208._44_4_ = 0;
          local_1d8._0_8_ = 0;
          local_1d8._8_8_ = 0;
          local_1d8._32_8_ = 0;
          local_1d8._40_4_ = 0;
          local_1d8._44_4_ = 0x80;
          local_1d8._48_4_ = 0xffffffff;
          local_1d8._52_4_ = 0;
          local_198 = (void *)0x0;
          local_190 = 0;
          local_188._0_8_ = 0;
          local_188._8_8_ = 0;
          local_188._32_8_ = 0;
          local_188._40_4_ = 0;
          local_188._44_4_ = 0x80;
          local_188._48_4_ = 0xffffffff;
          local_188._52_4_ = 0;
          local_148 = (void *)0x0;
          local_140 = 0;
          local_138 = (FDynamicMesh3 *)0x0;
          local_130 = true;
          local_208._8_8_ = param_1;
          local_208._16_4_ = uVar1;
          if (((-1 < (int)uVar1) && ((FDynamicMesh3 *)local_208._24_8_ != (FDynamicMesh3 *)0x0)) ||
             (bVar5 = `DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l35::<lambda_3>
                      ::operator()(&local_766), bVar5)) {
            UE::Geometry::FUniformTessellate::Compute((FUniformTessellate *)local_208);
          }
          local_208._0_8_ = &___7FUniformTessellate_Geometry_UE__6B_;
          local_140 = 0;
          if (local_148 != (void *)0x0) {
            FMemory::Free(local_148);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_188);
          local_190 = 0;
          if (local_198 != (void *)0x0) {
            FMemory::Free(local_198);
          }
          TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1d8);
          if ((FScriptContainerElement *)local_208._32_8_ == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free((void *)local_208._32_8_);
          return;
        }
        UE::Geometry::FSelectiveTessellate::CreateConcentricRingsTessellationPattern
                  ((FDynamicMesh3 *)local_750,(int)local_208._24_8_,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar1);
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_438);
        local_6d8.ResultMesh = &local_438;
        local_6d8.bUseParallel = true;
        local_6d8.Mesh = (FDynamicMesh3 *)this->_padding_;
        pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        local_6d8.Pattern = (FTessellationPattern *)local_750;
        local_6d8._padding_ = (longlong)&___7FSelectiveTessellate_Geometry_UE__6B_;
        local_6d8.TessInfo.TriangleIDToNewTriangleIDs =
             (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *)0x0;
        local_6d8.bInPlace = false;
        local_6d8.Progress = param_1;
        pTVar12 = ::operator_new(0x10);
        if (pTVar12 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar12->ArrayNum = 0;
          pTVar12->ArrayMax = 0;
          pTVar13 = pTVar12;
        }
        local_758.Ptr = pTVar13;
        TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
        ::operator=(&this->VerticesToDisplace,&local_758);
        TVar4.Ptr = local_758.Ptr;
        if (local_758.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar11 = ((local_758.Ptr)->AllocatorInstance).Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          ::operator_delete(TVar4.Ptr,0x10);
        }
        local_6d8.TessInfo.SelectedVertices = (this->VerticesToDisplace).Ptr;
        if (((((local_6d8.bInPlace != false) ||
              (((local_6d8.Mesh != (FDynamicMesh3 *)0x0 &&
                (local_6d8.ResultMesh != (FDynamicMesh3 *)0x0)) &&
               ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6d8.Pattern !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)))) &&
             ((((local_6d8.bInPlace != true ||
                ((local_6d8.ResultMesh != (FDynamicMesh3 *)0x0 &&
                 ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6d8.Pattern !=
                  (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)))) &&
               ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6d8.Pattern !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) &&
              (iVar6 = (**(code **)(((ForAnyElementType *)&(local_6d8.Pattern)->_padding_)->Data + 8
                                   ))(), iVar6 == 0)))) ||
            (bVar5 = `DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l27::<lambda_2>
                     ::operator()(&local_767), bVar5)) &&
           (bVar5 = UE::Geometry::FSelectiveTessellate::Compute(&local_6d8), bVar5)) {
          UE::Geometry::FDynamicMesh3::operator=((FDynamicMesh3 *)this->_padding_,&local_438);
        }
        local_6d8._padding_ = (longlong)&___7FSelectiveTessellate_Geometry_UE__6B_;
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_438);
        if (local_750 == (undefined1  [8])0x0) {
          return;
        }
        pFVar11 = ((ForAnyElementType *)local_750)->Data;
      }
      (**(code **)pFVar11)(local_750,1);
    }
  }
  else if (this->SubdivisionType == PNTriangles) {
    local_688._padding_ = (longlong)&___7FPNTriangles_Geometry_UE__6B_;
    local_688.bRecalculateNormals = false;
    local_688.Progress = param_1;
    local_688.TessellationLevel = uVar1;
    if (((-1 < (int)uVar1) && (local_688.Mesh != (FDynamicMesh3 *)0x0)) ||
       (bVar5 = `DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l47::<lambda_5>::
                operator()(local_764), bVar5)) {
      UE::Geometry::FPNTriangles::Compute(&local_688);
    }
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DisplaceMeshTool.cpp"
                       ,0x1d5,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// operator() @ 150577150

bool __thiscall
`DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l17::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7921024024405082513>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7921024024405082513>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505771d0

bool __thiscall
`DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l27::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7921024024405082533>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7921024024405082533>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150577250

bool __thiscall
`DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l35::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7921024024405082549>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7921024024405082549>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150577290

bool __thiscall
`DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l40::<lambda_4>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7921024024405082561>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7921024024405082561>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505772d0

bool __thiscall
`DisplaceMeshToolLocals::FSubdivideMeshOp::CalculateResult'::__l47::<lambda_5>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7921024024405082573>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7921024024405082573>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

