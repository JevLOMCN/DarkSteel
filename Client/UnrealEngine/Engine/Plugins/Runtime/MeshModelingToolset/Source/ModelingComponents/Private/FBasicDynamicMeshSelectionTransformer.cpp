// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 13

// FBasicDynamicMeshSelectionTransformer @ 14cb60f60

FBasicDynamicMeshSelectionTransformer * __thiscall
FBasicDynamicMeshSelectionTransformer::FBasicDynamicMeshSelectionTransformer
          (FBasicDynamicMeshSelectionTransformer *this)

{
  this->bEnableSelectionTransformDrawing = false;
  this->_padding_ = (longlong)&___7FBasicDynamicMeshSelectionTransformer__6B_;
  *(undefined8 *)&this->OnEndTransformFunc = 0;
  *(undefined8 *)&(this->OnEndTransformFunc).field_0x28 = 0;
  (this->MeshVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshVertices).ArrayNum = 0;
  (this->MeshVertices).ArrayMax = 0;
  (this->InitialPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialPositions).ArrayNum = 0;
  (this->InitialPositions).ArrayMax = 0;
  *(undefined8 *)&(this->TriangleROI).Elements = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x30 = 0xffffffff;
  (this->TriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROI).HashSize = 0;
  *(undefined8 *)&(this->OverlayNormalsSet).Elements = 0;
  *(undefined8 *)&(this->OverlayNormalsSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OverlayNormalsSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OverlayNormalsSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OverlayNormalsSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OverlayNormalsSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->OverlayNormalsSet).Elements.field_0x30 = 0xffffffff;
  (this->OverlayNormalsSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OverlayNormalsSet).HashSize = 0;
  (this->OverlayNormalsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlayNormalsArray).ArrayNum = 0;
  (this->OverlayNormalsArray).ArrayMax = 0;
  (this->UpdatedPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdatedPositions).ArrayNum = 0;
  (this->UpdatedPositions).ArrayMax = 0;
  (this->ActiveVertexChange).Ptr = (FMeshVertexChangeBuilder *)0x0;
  (this->ActiveSelectionEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveSelectionEdges).ArrayNum = 0;
  (this->ActiveSelectionEdges).ArrayMax = 0;
  (this->ActiveSelectionVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveSelectionVertices).ArrayNum = 0;
  (this->ActiveSelectionVertices).ArrayMax = 0;
  (this->ActiveROIEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveROIEdges).ArrayNum = 0;
  (this->ActiveROIEdges).ArrayMax = 0;
  return this;
}

// ~FBasicDynamicMeshSelectionTransformer @ 14cb64450

void __thiscall
FBasicDynamicMeshSelectionTransformer::~FBasicDynamicMeshSelectionTransformer
          (FBasicDynamicMeshSelectionTransformer *this)

{
  FScriptContainerElement *pFVar1;
  FMeshVertexChangeBuilder *pFVar2;
  ForElementType<FSetElementId> FVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  pFVar1 = (this->ActiveROIEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveSelectionVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveSelectionEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->ActiveVertexChange).Ptr;
  if (pFVar2 != (FMeshVertexChangeBuilder *)0x0) {
    (**(code **)&pFVar2[-1].OnNewVertexSaved.field_0x20)(&pFVar2[-1].OnNewVertexSaved.field_0x20);
  }
  pFVar1 = (this->UpdatedPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverlayNormalsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->OverlayNormalsSet).HashSize = 0;
  FVar3 = (this->OverlayNormalsSet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OverlayNormalsSet).Elements);
  (this->TriangleROI).HashSize = 0;
  FVar3 = (this->TriangleROI).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TriangleROI).Elements);
  pFVar1 = (this->InitialPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->OnEndTransformFunc != 0) {
    plVar4 = *(longlong **)&(this->OnEndTransformFunc).field_0x28;
    plVar5 = (longlong *)&(this->OnEndTransformFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGeometrySelectionTransformer__6B_;
  return;
}

// operator() @ 14cb67390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  FGeometrySelection *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FDynamicMeshAttributeSet *pFVar8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar9;
  code *pcVar10;
  longlong *plVar11;
  bool bVar12;
  int iVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  int iVar19;
  ForAnyElementType *pFVar20;
  uint uVar21;
  uint uVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  uint *puVar24;
  int iVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276 [2];
  undefined8 local_274;
  int local_26c;
  undefined8 local_268;
  uint local_260 [2];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  int local_240;
  int local_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong *local_220;
  longlong *local_218;
  int iStack_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  code *local_1b8;
  undefined8 *local_1b0;
  code *local_1a8;
  undefined8 *local_1a0;
  int *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  code *local_188;
  undefined1 *local_180;
  code *local_178;
  undefined8 *local_170;
  code *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  FDynamicMesh3 *local_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_148;
  TArray<int,TSizedDefaultAllocator<32>_> local_140;
  TArrayView<int_const_,int> local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_108;
  undefined4 local_9c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar5 = *(FGeometrySelection **)this;
  if (pFVar5->TopologyType == Polygroup) {
    local_1b0 = &local_238;
    local_1b8 = UE::Core::Private::Function::
                TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
                ::Call;
    local_238 = *(undefined8 *)((longlong)this + 0x10);
    UE::Geometry::EnumeratePolygroupSelectionVertices
              (pFVar5,param_1,(FGroupTopology *)**(undefined8 **)((longlong)this + 8),
               &UE::Math::TTransform<double>::Identity,
               (TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *)
               &local_1b8);
  }
  else {
    local_1a0 = &local_230;
    local_1a8 = UE::Core::Private::Function::
                TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
                ::Call;
    local_230 = *(undefined8 *)((longlong)this + 0x10);
    UE::Geometry::EnumerateTriangleSelectionVertices
              (pFVar5,param_1,(TTransform<double> *)0x0,
               (TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *)
               &local_1a8);
  }
  pTVar14 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                      (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                        ((longlong)this + 0x10),&local_140);
  lVar17 = *(longlong *)((longlong)this + 0x18);
  pTVar23 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar17 + 0x48);
  if (pTVar23 != pTVar14) {
    pFVar6 = (pTVar23->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar23->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar17 + 0x50) = pTVar14->ArrayNum;
    *(int *)(lVar17 + 0x54) = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  lVar17 = *(longlong *)((longlong)this + 0x18);
  uVar22 = *(uint *)(lVar17 + 0x50);
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if (*(int *)(lVar17 + 100) < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar22,(ForAnyElementType *)(lVar17 + 0x58),*(int *)(lVar17 + 0x60),
               (int *)(lVar17 + 100));
  }
  lVar17 = *(longlong *)((longlong)this + 0x18);
  puVar24 = *(uint **)(lVar17 + 0x48);
  iVar25 = *(int *)(lVar17 + 0x50);
  puVar2 = puVar24 + iVar25;
  while( true ) {
    if (*(int *)(lVar17 + 0x50) != iVar25) {
      local_278 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_278);
    }
    if (puVar24 == puVar2) break;
    lVar16 = *(longlong *)((longlong)this + 0x18);
    uVar15 = (ulonglong)(*puVar24 & 0x1ff);
    lVar7 = *(longlong *)
             ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(*puVar24 >> 9) * 8);
    puVar3 = (undefined8 *)(lVar7 + uVar15 * 0x18);
    local_258 = *puVar3;
    uStack_250 = puVar3[1];
    local_248 = *(undefined8 *)(lVar7 + 0x10 + uVar15 * 0x18);
    if (((*(undefined8 **)(lVar16 + 0x58) <= &local_258) &&
        (&local_258 < *(undefined8 **)(lVar16 + 0x58) + (longlong)*(int *)(lVar16 + 100) * 3)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = *(int *)(lVar16 + 0x60);
    if (iVar13 == *(int *)(lVar16 + 100)) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)(lVar16 + 0x58),(int *)(lVar16 + 100));
    }
    puVar24 = puVar24 + 1;
    *(int *)(lVar16 + 0x60) = iVar13 + 1;
    lVar16 = *(longlong *)(lVar16 + 0x58);
    puVar3 = (undefined8 *)(lVar16 + (longlong)iVar13 * 0x18);
    *puVar3 = local_258;
    puVar3[1] = uStack_250;
    *(undefined8 *)(lVar16 + 0x10 + (longlong)iVar13 * 0x18) = local_248;
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x18) + 0x118),
             *(int *)(*(longlong *)((longlong)this + 0x18) + 0x50),Default);
  lVar17 = *(longlong *)((longlong)this + 0x18);
  local_198 = *(int **)(lVar17 + 0x48);
  iStack_190 = *(int *)(lVar17 + 0x50);
  if ((iStack_190 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_128._12_4_ = uStack_18c;
  local_128.ArrayNum = iStack_190;
  local_128.DataPtr = local_198;
  UE::Geometry::VertexToTriangleOneRing
            (param_1,&local_128,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar17 + 0x68));
  lVar17 = *(longlong *)((longlong)this + 0x18);
  iVar25 = 0;
  *(undefined4 *)(lVar17 + 0x110) = 0;
  if (*(int *)(lVar17 + 0x114) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(lVar17 + 0x108),0,(int *)(lVar17 + 0x114));
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)((longlong)this + 0x18) + 0xb8));
  pFVar8 = (param_1->AttributeSet).Ptr;
  if (((pFVar8 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar8->NormalLayers).Array.ArrayNum))
     && (pFVar6 = (pFVar8->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar6 != 0)) {
    lVar17 = *(longlong *)((longlong)this + 0x18);
    pTVar9 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar6;
    local_108.Elements._0_8_ = 0;
    local_108.Elements._8_8_ = 0;
    local_108.Elements._32_8_ = 0;
    local_108.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_108.Elements._48_8_ = _UNK_150631d98;
    local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_108.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_108,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar17 + 0x68));
    UE::Geometry::
    TrianglesToOverlayElements<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (pTVar9,&local_108,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar17 + 0xb8));
    pTVar14 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         (*(longlong *)((longlong)this + 0x18) + 0xb8),&local_118);
    lVar17 = *(longlong *)((longlong)this + 0x18);
    pTVar23 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar17 + 0x108);
    if (pTVar23 != pTVar14) {
      pFVar6 = (pTVar23->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar23->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar17 + 0x110) = pTVar14->ArrayNum;
      *(int *)(lVar17 + 0x114) = pTVar14->ArrayMax;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  lVar17 = *(longlong *)((longlong)this + 0x18);
  *(undefined4 *)(lVar17 + 0x138) = 0;
  if (*(int *)(lVar17 + 0x13c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(lVar17 + 0x130),0,(int *)(lVar17 + 0x13c));
  }
  lVar17 = *(longlong *)((longlong)this + 0x18);
  *(undefined4 *)(lVar17 + 0x148) = 0;
  if (*(int *)(lVar17 + 0x14c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(lVar17 + 0x140),0,(int *)(lVar17 + 0x14c));
  }
  local_180 = &local_277;
  local_148 = &local_98;
  local_188 = UE::Core::Private::Function::
              TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_5>,void,int,UE::Geometry::TTriangle3<double>_const_&>
              ::Call;
  local_170 = &local_158;
  local_228 = *(undefined8 *)((longlong)this + 0x18);
  local_160 = &local_228;
  local_178 = UE::Core::Private::Function::
              TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void,int,UE::Geometry::TSegment3<double>_const_&>
              ::Call;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void,int,UE::Math::TVector<double>_const_&>
              ::Call;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_277 = 0;
  local_158 = local_228;
  local_150 = param_1;
  UE::Geometry::EnumerateTriangleSelectionElements
            (*(FGeometrySelection **)this,param_1,
             (TFunctionRef<void___cdecl(int,UE::Math::TVector<double>_const_&)> *)&local_168,
             (TFunctionRef<void___cdecl(int,UE::Geometry::TSegment3<double>_const_&)> *)&local_178,
             (TFunctionRef<void___cdecl(int,UE::Geometry::TTriangle3<double>_const_&)> *)&local_188,
             (TTransform<double> *)0x0,true);
  lVar17 = *(longlong *)((longlong)this + 0x18);
  *(undefined4 *)(lVar17 + 0x158) = 0;
  if (*(int *)(lVar17 + 0x15c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(lVar17 + 0x150),0,(int *)(lVar17 + 0x15c));
  }
  lVar17 = *(longlong *)((longlong)this + 0x18);
  local_1f8 = 0;
  uStack_20c = 1;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar17 + 0x78);
  iVar13 = *(int *)(lVar17 + 0x90);
  local_220 = (longlong *)(lVar17 + 0x68);
  iStack_1fc = iVar25;
  if (iVar13 != 0) {
    pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x88);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x88) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar26 = pTVar1;
    }
    uVar22 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
    iVar25 = 0;
    while (uVar22 == 0) {
      lVar16 = (longlong)iVar25;
      local_1f8 = local_1f8 + 0x20;
      iVar25 = iVar25 + 1;
      iStack_1fc = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14cb6797e;
      uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uStack_20c = -uVar22 & uVar22;
    uVar15 = (ulonglong)uStack_20c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_240 = (int)lVar16;
    iStack_1fc = local_1f8 + -1 + local_240;
    if (iVar13 < iStack_1fc) {
      iStack_1fc = iVar13;
    }
  }
LAB_14cb6797e:
  uStack_1f4 = local_9c;
  iStack_1f0 = *(int *)(lVar17 + 0x70) - *(int *)(lVar17 + 0x9c);
  uVar22 = *(uint *)(lVar17 + 0x90);
  uStack_200 = 0xffffffff;
  TStack_1e0._padding_ = CONCAT44(uStack_20c,iVar25);
  uVar21 = uVar22 & 0xffffffe0;
  TStack_1e0.CurrentBitIndex = iStack_1fc;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar22 >> 5;
  TStack_1e0._28_4_ = local_9c;
  TStack_1e0.BaseBitIndex = local_1f8;
  uStack_1c0 = CONCAT44(uStack_1ec,iStack_1f0);
  local_218 = local_220;
  iStack_210 = iVar25;
  local_208 = pTVar1;
  local_1e8 = local_220;
  TStack_1e0.Array = pTVar1;
  if ((((int)uVar22 < 0) || (iVar13 < (int)uVar22)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar4 = *(uint *)(lVar17 + 0x90);
  if (uVar22 != uVar4) {
    pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x88);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x88) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar26 = pTVar1;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) &
             *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
    while (uVar22 == 0) {
      lVar17 = (longlong)iVar19;
      uVar21 = uVar21 + 0x20;
      iVar19 = iVar19 + 1;
      uVar22 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14cb67a80;
      uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar17 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_23c = (int)lVar17;
    uVar22 = (uVar21 - 1) + local_23c;
    if ((int)uVar4 < (int)uVar22) {
      uVar22 = uVar4;
    }
  }
LAB_14cb67a80:
  do {
    plVar11 = local_1e8;
    if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
      local_276[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_276);
    }
    if (((TStack_1e0.CurrentBitIndex == uVar22) && (TStack_1e0.Array == pTVar1)) &&
       (plVar11 == local_220)) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    uVar21 = *(uint *)(*plVar11 + (longlong)TStack_1e0.CurrentBitIndex * 0xc);
    uVar15 = (ulonglong)(uVar21 & 0x1ff);
    lVar17 = *(longlong *)
              ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8
              );
    local_268 = *(undefined8 *)(lVar17 + uVar15 * 0xc);
    uVar21 = *(uint *)(lVar17 + 8 + uVar15 * 0xc);
    local_260[0] = uVar21;
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_98.Hash.SecondaryData;
      }
      for (iVar25 = *(int *)((longlong)FVar18 +
                            (ulonglong)(local_98.HashSize - 1U & (uint)local_268) * 4); iVar25 != -1
          ; iVar25 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar25 * 0xc)) {
        if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar25 * 0xc) == (uint)local_268)
        goto LAB_14cb67c66;
      }
    }
    lVar17 = *(longlong *)((longlong)this + 0x18);
    pFVar20 = (ForAnyElementType *)(lVar17 + 0x150);
    local_274 = *(undefined8 *)
                 (*(longlong *)
                   ((param_1->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)local_268 >> 9) * 8) +
                 (ulonglong)((uint)local_268 & 0x1ff) * 0x10);
    if (((pFVar20->Data <= (FScriptContainerElement *)&local_274) &&
        ((FScriptContainerElement *)&local_274 <
         pFVar20->Data + (longlong)*(int *)(lVar17 + 0x15c) * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = *(int *)(lVar17 + 0x158);
    if (iVar25 == *(int *)(lVar17 + 0x15c)) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,pFVar20,(int *)(lVar17 + 0x15c));
    }
    *(int *)(lVar17 + 0x158) = iVar25 + 1;
    *(undefined8 *)(pFVar20->Data + (longlong)iVar25 * 8) = local_274;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_98,&local_26c,(bool *)&local_268);
LAB_14cb67c66:
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_98.Hash.SecondaryData;
      }
      for (iVar25 = *(int *)((longlong)FVar18 +
                            (ulonglong)(local_98.HashSize - 1U & local_268._4_4_) * 4); iVar25 != -1
          ; iVar25 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar25 * 0xc)) {
        iVar13 = local_98.Elements._8_4_;
        if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar25 * 0xc) == local_268._4_4_)
        goto LAB_14cb67db4;
      }
    }
    lVar17 = *(longlong *)((longlong)this + 0x18);
    pFVar20 = (ForAnyElementType *)(lVar17 + 0x150);
    local_274 = *(undefined8 *)
                 (*(longlong *)
                   ((param_1->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(local_268._4_4_ >> 9) * 8) +
                 (ulonglong)(local_268._4_4_ & 0x1ff) * 0x10);
    if (((pFVar20->Data <= (FScriptContainerElement *)&local_274) &&
        ((FScriptContainerElement *)&local_274 <
         pFVar20->Data + (longlong)*(int *)(lVar17 + 0x15c) * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = *(int *)(lVar17 + 0x158);
    if (iVar25 == *(int *)(lVar17 + 0x15c)) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,pFVar20,(int *)(lVar17 + 0x15c));
    }
    *(int *)(lVar17 + 0x158) = iVar25 + 1;
    *(undefined8 *)(pFVar20->Data + (longlong)iVar25 * 8) = local_274;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_98,&local_26c,(bool *)((longlong)&local_268 + 4));
    iVar13 = local_98.Elements._8_4_;
LAB_14cb67db4:
    if (iVar13 != local_98.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_98.Hash.SecondaryData;
      }
      for (iVar25 = *(int *)((longlong)FVar18 + (ulonglong)(local_98.HashSize - 1U & uVar21) * 4);
          iVar25 != -1; iVar25 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar25 * 0xc)) {
        if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar25 * 0xc) == uVar21)
        goto LAB_14cb67ee0;
      }
    }
    lVar17 = *(longlong *)((longlong)this + 0x18);
    pFVar20 = (ForAnyElementType *)(lVar17 + 0x150);
    local_274 = *(undefined8 *)
                 (*(longlong *)
                   ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8) +
                 (ulonglong)(local_260[0] & 0x1ff) * 0x10);
    if (((pFVar20->Data <= (FScriptContainerElement *)&local_274) &&
        ((FScriptContainerElement *)&local_274 <
         pFVar20->Data + (longlong)*(int *)(lVar17 + 0x15c) * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = *(int *)(lVar17 + 0x158);
    if (iVar25 == *(int *)(lVar17 + 0x15c)) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,pFVar20,(int *)(lVar17 + 0x15c));
    }
    *(int *)(lVar17 + 0x158) = iVar25 + 1;
    *(undefined8 *)(pFVar20->Data + (longlong)iVar25 * 8) = local_274;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_98,&local_26c,(bool *)local_260);
LAB_14cb67ee0:
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  } while( true );
}

// operator() @ 14cb69f00

void __thiscall
`FBasicDynamicMeshSelectionTransformer::PreviewRender'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  double *pdVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint *puVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 local_res8 [8];
  undefined1 local_b8 [16];
  double local_a8;
  undefined1 local_98 [16];
  double local_88;
  
  lVar5 = *(longlong *)this;
  *(undefined4 *)(lVar5 + 0x28) = 0;
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e99999a;
  *(undefined4 *)(lVar5 + 0x30) = 0x3f733333;
  *(undefined4 *)(lVar5 + 0x34) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x38) = 0x40a00000;
  lVar5 = *(longlong *)((longlong)this + 8);
  puVar26 = *(uint **)(lVar5 + 0x140);
  iVar4 = *(int *)(lVar5 + 0x148);
  puVar1 = puVar26 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0x148) != iVar4) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar26 == puVar1) break;
    plVar6 = *(longlong **)this;
    uVar24 = (ulonglong)(*puVar26 & 0x1ff);
    auVar57 = *(undefined1 (*) [16])(plVar6 + 0x1c);
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    lVar7 = *(longlong *)
             ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(*puVar26 >> 9) * 8);
    dVar15 = (double)plVar6[0x1d];
    pdVar2 = (double *)(lVar7 + uVar24 * 0x18);
    dVar18 = *(double *)(lVar7 + 0x10 + uVar24 * 0x18) * (double)plVar6[0x24];
    dVar21 = (double)plVar6[0x25] * 0.0;
    dVar13 = (double)plVar6[0x22] * *pdVar2;
    dVar14 = (double)plVar6[0x23] * pdVar2[1];
    uVar66 = (undefined4)((ulonglong)dVar14 >> 0x20);
    local_98 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar43 = blendpd(local_98,auVar57,2);
    auVar67._8_4_ = SUB84(dVar14,0);
    auVar67._0_8_ = dVar13;
    auVar67._12_4_ = uVar66;
    dVar11 = auVar57._0_8_;
    auVar68._0_8_ = auVar67._8_8_ * local_98._0_8_ - local_98._8_8_ * dVar13;
    auVar68._8_8_ = dVar18 * local_98._8_8_ - dVar11 * dVar14;
    auVar29._8_4_ = SUB84(dVar14,0);
    auVar29._0_8_ = dVar13;
    auVar29._12_4_ = uVar66;
    auVar16._8_4_ = SUB84(dVar21,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    auVar30 = blendpd(auVar29,auVar16,2);
    auVar31._0_8_ = auVar30._0_8_ * dVar11 - auVar43._0_8_ * dVar18;
    auVar31._8_8_ = auVar30._8_8_ * auVar57._8_8_ - auVar43._8_8_ * dVar21;
    auVar30 = blendpd(auVar68,auVar31,2);
    dVar21 = auVar68._8_8_ + auVar68._8_8_;
    dVar10 = auVar31._0_8_ + auVar31._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar69._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar69._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    auVar55._8_4_ = SUB84(dVar10,0);
    auVar55._0_8_ = dVar21;
    auVar55._12_4_ = uVar66;
    auVar44._8_4_ = SUB84(dVar10,0);
    auVar44._0_8_ = dVar21;
    auVar44._12_4_ = uVar66;
    auVar30 = blendpd(auVar44,auVar69,2);
    auVar56._0_8_ = auVar55._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar21;
    auVar56._8_8_ = auVar69._0_8_ * auVar54._8_8_ - dVar11 * dVar10;
    auVar54 = blendpd(auVar54,auVar57,2);
    auVar32._8_4_ = SUB84(auVar56._8_8_,0);
    auVar32._0_8_ = auVar56._0_8_;
    auVar32._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar45._0_8_ = auVar30._0_8_ * dVar11 - auVar54._0_8_ * auVar69._0_8_;
    auVar45._8_8_ = auVar30._8_8_ * auVar57._8_8_ - auVar54._8_8_ * auVar69._8_8_;
    auVar57 = blendpd(auVar56,auVar45,2);
    dVar11 = dVar10 * dVar15 + dVar14 + auVar45._0_8_ + (double)plVar6[0x1f];
    local_a8 = auVar69._0_8_ * dVar15 + dVar18 + auVar57._0_8_ + (double)plVar6[0x20];
    local_b8._8_4_ = SUB84(dVar11,0);
    local_b8._0_8_ = dVar21 * dVar15 + dVar13 + auVar32._8_8_ + (double)plVar6[0x1e];
    local_b8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (**(code **)(*plVar6 + 0x18))
              (plVar6,local_b8,plVar6 + 5,*(code **)(*plVar6 + 0x18),(char)plVar6[8]);
    puVar26 = puVar26 + 1;
  }
  lVar5 = *(longlong *)this;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x14) = 0x3e99999a;
  *(undefined4 *)(lVar5 + 0x18) = 0x3f733333;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x20) = 0x40400000;
  *(undefined4 *)(lVar5 + 0x24) = 0x40800000;
  lVar5 = *(longlong *)((longlong)this + 8);
  puVar27 = *(ulonglong **)(lVar5 + 0x130);
  iVar4 = *(int *)(lVar5 + 0x138);
  puVar3 = puVar27 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0x138) != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar27 == puVar3) break;
    plVar6 = *(longlong **)this;
    uVar24 = *puVar27;
    pFVar8 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
    auVar57 = *(undefined1 (*) [16])(plVar6 + 0x1c);
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar30 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    dVar23 = (double)plVar6[0x1d];
    uVar25 = (ulonglong)((uint)(uVar24 >> 0x20) & 0x1ff);
    auVar43 = blendpd(auVar54,auVar57,2);
    lVar7 = *(longlong *)(pFVar8 + (uVar24 >> 0x29) * 8);
    pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
    dVar19 = *pdVar2 * (double)plVar6[0x22];
    dVar18 = pdVar2[1] * (double)plVar6[0x23];
    uVar66 = (undefined4)((ulonglong)dVar18 >> 0x20);
    uVar28 = (ulonglong)((uint)uVar24 & 0x1ff);
    lVar9 = *(longlong *)(pFVar8 + ((uVar24 & 0xffffffff) >> 9) * 8);
    dVar14 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18) * (double)plVar6[0x24];
    dVar10 = (double)plVar6[0x25] * 0.0;
    auVar70._8_4_ = SUB84(dVar18,0);
    auVar70._0_8_ = dVar19;
    auVar70._12_4_ = uVar66;
    dVar11 = auVar57._0_8_;
    auVar71._0_8_ = auVar70._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar19;
    auVar71._8_8_ = dVar14 * auVar54._8_8_ - dVar11 * dVar18;
    auVar33._8_4_ = SUB84(dVar18,0);
    auVar33._0_8_ = dVar19;
    auVar33._12_4_ = uVar66;
    auVar12._8_4_ = SUB84(dVar10,0);
    auVar12._0_8_ = dVar14;
    auVar12._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar54 = blendpd(auVar33,auVar12,2);
    dVar21 = auVar57._8_8_;
    auVar34._0_8_ = auVar54._0_8_ * dVar11 - auVar43._0_8_ * dVar14;
    auVar34._8_8_ = auVar54._8_8_ * dVar21 - auVar43._8_8_ * dVar10;
    auVar54 = blendpd(auVar71,auVar34,2);
    auVar72._0_8_ = auVar54._0_8_ + auVar54._0_8_;
    auVar72._8_8_ = auVar54._8_8_ + auVar54._8_8_;
    dVar10 = auVar71._8_8_ + auVar71._8_8_;
    dVar13 = auVar34._0_8_ + auVar34._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar58._8_4_ = SUB84(dVar13,0);
    auVar58._0_8_ = dVar10;
    auVar58._12_4_ = uVar66;
    auVar46._8_4_ = SUB84(dVar13,0);
    auVar46._0_8_ = dVar10;
    auVar46._12_4_ = uVar66;
    auVar54 = blendpd(auVar46,auVar72,2);
    dVar20 = *(double *)(lVar9 + 0x10 + uVar28 * 0x18) * (double)plVar6[0x24];
    dVar22 = (double)plVar6[0x25] * 0.0;
    auVar59._0_8_ = auVar58._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
    auVar59._8_8_ = auVar72._0_8_ * auVar30._8_8_ - dVar11 * dVar13;
    auVar35._8_4_ = SUB84(auVar59._8_8_,0);
    auVar35._0_8_ = auVar59._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    auVar30 = blendpd(auVar30,auVar57,2);
    auVar47._0_8_ = auVar54._0_8_ * dVar11 - auVar30._0_8_ * auVar72._0_8_;
    auVar47._8_8_ = auVar54._8_8_ * dVar21 - auVar30._8_8_ * auVar72._8_8_;
    pdVar2 = (double *)(lVar9 + uVar28 * 0x18);
    dVar13 = dVar13 * dVar23 + dVar18 + auVar47._0_8_ + (double)plVar6[0x1f];
    dVar18 = (double)plVar6[0x22] * *pdVar2;
    dVar15 = (double)plVar6[0x23] * pdVar2[1];
    uVar66 = (undefined4)((ulonglong)dVar15 >> 0x20);
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar30 = blendpd(auVar59,auVar47,2);
    local_a8 = auVar72._0_8_ * dVar23 + dVar14 + auVar30._0_8_ + (double)plVar6[0x20];
    local_b8._8_4_ = SUB84(dVar13,0);
    local_b8._0_8_ = dVar10 * dVar23 + dVar19 + auVar35._8_8_ + (double)plVar6[0x1e];
    local_b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar73._8_4_ = SUB84(dVar15,0);
    auVar73._0_8_ = dVar18;
    auVar73._12_4_ = uVar66;
    auVar30 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar43 = blendpd(auVar54,auVar57,2);
    auVar74._0_8_ = auVar73._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar18;
    auVar74._8_8_ = dVar20 * auVar54._8_8_ - dVar11 * dVar15;
    auVar36._8_4_ = SUB84(dVar15,0);
    auVar36._0_8_ = dVar18;
    auVar36._12_4_ = uVar66;
    auVar17._8_4_ = SUB84(dVar22,0);
    auVar17._0_8_ = dVar20;
    auVar17._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    auVar54 = blendpd(auVar36,auVar17,2);
    auVar37._0_8_ = auVar54._0_8_ * dVar11 - auVar43._0_8_ * dVar20;
    auVar37._8_8_ = auVar54._8_8_ * dVar21 - auVar43._8_8_ * dVar22;
    auVar54 = blendpd(auVar74,auVar37,2);
    dVar10 = auVar74._8_8_ + auVar74._8_8_;
    dVar13 = auVar37._0_8_ + auVar37._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar75._0_8_ = auVar54._0_8_ + auVar54._0_8_;
    auVar75._8_8_ = auVar54._8_8_ + auVar54._8_8_;
    auVar60._8_4_ = SUB84(dVar13,0);
    auVar60._0_8_ = dVar10;
    auVar60._12_4_ = uVar66;
    auVar48._8_4_ = SUB84(dVar13,0);
    auVar48._0_8_ = dVar10;
    auVar48._12_4_ = uVar66;
    auVar54 = blendpd(auVar48,auVar75,2);
    auVar61._0_8_ = auVar60._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
    auVar61._8_8_ = auVar75._0_8_ * auVar30._8_8_ - dVar11 * dVar13;
    auVar38._8_4_ = SUB84(auVar61._8_8_,0);
    auVar38._0_8_ = auVar61._0_8_;
    auVar38._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar57 = blendpd(auVar30,auVar57,2);
    auVar49._0_8_ = auVar54._0_8_ * dVar11 - auVar57._0_8_ * auVar75._0_8_;
    auVar49._8_8_ = auVar54._8_8_ * dVar21 - auVar57._8_8_ * auVar75._8_8_;
    dVar11 = dVar13 * dVar21 + dVar15 + auVar49._0_8_ + (double)plVar6[0x1f];
    auVar57 = blendpd(auVar61,auVar49,2);
    local_98._8_4_ = SUB84(dVar11,0);
    local_98._0_8_ = dVar10 * dVar21 + dVar18 + auVar38._8_8_ + (double)plVar6[0x1e];
    local_98._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_88 = auVar75._0_8_ * dVar21 + dVar20 + auVar57._0_8_ + (double)plVar6[0x20];
    (**(code **)(*plVar6 + 8))(plVar6,local_98,local_b8,plVar6 + 2,(int)plVar6[4],(char)plVar6[8]);
    puVar27 = puVar27 + 1;
  }
  lVar5 = *(longlong *)this;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x14) = 0x3e99999a;
  *(undefined4 *)(lVar5 + 0x18) = 0x3f733333;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x20) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x24) = 0x40800000;
  lVar5 = *(longlong *)((longlong)this + 8);
  puVar27 = *(ulonglong **)(lVar5 + 0x150);
  iVar4 = *(int *)(lVar5 + 0x158);
  puVar3 = puVar27 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0x158) != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar27 == puVar3) break;
    plVar6 = *(longlong **)this;
    uVar24 = *puVar27;
    pFVar8 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
    auVar57 = *(undefined1 (*) [16])(plVar6 + 0x1c);
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    dVar23 = (double)plVar6[0x1d];
    uVar25 = (ulonglong)((uint)(uVar24 >> 0x20) & 0x1ff);
    lVar7 = *(longlong *)(pFVar8 + (uVar24 >> 0x29) * 8);
    pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
    dVar19 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18) * (double)plVar6[0x24];
    dVar10 = (double)plVar6[0x25] * 0.0;
    uVar25 = (ulonglong)((uint)uVar24 & 0x1ff);
    lVar7 = *(longlong *)(pFVar8 + ((uVar24 & 0xffffffff) >> 9) * 8);
    dVar14 = (double)plVar6[0x22] * *pdVar2;
    dVar18 = (double)plVar6[0x23] * pdVar2[1];
    uVar66 = (undefined4)((ulonglong)dVar18 >> 0x20);
    auVar30 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar76._8_4_ = SUB84(dVar18,0);
    auVar76._0_8_ = dVar14;
    auVar76._12_4_ = uVar66;
    dVar11 = auVar57._0_8_;
    auVar50 = blendpd(auVar30,auVar57,2);
    auVar77._0_8_ = auVar76._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar14;
    auVar77._8_8_ = dVar19 * auVar30._8_8_ - dVar11 * dVar18;
    auVar43._8_4_ = SUB84(dVar18,0);
    auVar43._0_8_ = dVar14;
    auVar43._12_4_ = uVar66;
    auVar30._8_4_ = SUB84(dVar10,0);
    auVar30._0_8_ = dVar19;
    auVar30._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar30 = blendpd(auVar43,auVar30,2);
    dVar21 = auVar57._8_8_;
    auVar39._0_8_ = auVar30._0_8_ * dVar11 - auVar50._0_8_ * dVar19;
    auVar39._8_8_ = auVar30._8_8_ * dVar21 - auVar50._8_8_ * dVar10;
    auVar30 = blendpd(auVar77,auVar39,2);
    auVar78._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar78._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    dVar10 = auVar77._8_8_ + auVar77._8_8_;
    dVar13 = auVar39._0_8_ + auVar39._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar62._8_4_ = SUB84(dVar13,0);
    auVar62._0_8_ = dVar10;
    auVar62._12_4_ = uVar66;
    auVar51._8_4_ = SUB84(dVar13,0);
    auVar51._0_8_ = dVar10;
    auVar51._12_4_ = uVar66;
    auVar30 = blendpd(auVar51,auVar78,2);
    auVar63._0_8_ = auVar62._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar10;
    auVar63._8_8_ = auVar78._0_8_ * auVar54._8_8_ - dVar11 * dVar13;
    auVar50._8_4_ = SUB84(auVar63._8_8_,0);
    auVar50._0_8_ = auVar63._0_8_;
    auVar50._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
    auVar54 = blendpd(auVar54,auVar57,2);
    auVar52._0_8_ = auVar30._0_8_ * dVar11 - auVar54._0_8_ * auVar78._0_8_;
    auVar52._8_8_ = auVar30._8_8_ * dVar21 - auVar54._8_8_ * auVar78._8_8_;
    dVar20 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18) * (double)plVar6[0x24];
    dVar22 = (double)plVar6[0x25] * 0.0;
    pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
    dVar13 = dVar13 * dVar23 + dVar18 + auVar52._0_8_ + (double)plVar6[0x1f];
    auVar54 = blendpd(auVar63,auVar52,2);
    dVar18 = (double)plVar6[0x22] * *pdVar2;
    dVar15 = (double)plVar6[0x23] * pdVar2[1];
    uVar66 = (undefined4)((ulonglong)dVar15 >> 0x20);
    local_88 = auVar78._0_8_ * dVar23 + dVar19 + auVar54._0_8_ + (double)plVar6[0x20];
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar79._8_4_ = SUB84(dVar15,0);
    auVar79._0_8_ = dVar18;
    auVar79._12_4_ = uVar66;
    local_98._8_4_ = SUB84(dVar13,0);
    local_98._0_8_ = dVar10 * dVar23 + dVar14 + auVar50._8_8_ + (double)plVar6[0x1e];
    local_98._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar30 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar43 = blendpd(auVar54,auVar57,2);
    auVar80._0_8_ = auVar79._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar18;
    auVar80._8_8_ = dVar20 * auVar54._8_8_ - dVar11 * dVar15;
    auVar40._8_4_ = SUB84(dVar15,0);
    auVar40._0_8_ = dVar18;
    auVar40._12_4_ = uVar66;
    auVar54._8_4_ = SUB84(dVar22,0);
    auVar54._0_8_ = dVar20;
    auVar54._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    auVar54 = blendpd(auVar40,auVar54,2);
    auVar41._0_8_ = auVar54._0_8_ * dVar11 - auVar43._0_8_ * dVar20;
    auVar41._8_8_ = auVar54._8_8_ * dVar21 - auVar43._8_8_ * dVar22;
    auVar54 = blendpd(auVar80,auVar41,2);
    dVar10 = auVar80._8_8_ + auVar80._8_8_;
    dVar13 = auVar41._0_8_ + auVar41._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar81._0_8_ = auVar54._0_8_ + auVar54._0_8_;
    auVar81._8_8_ = auVar54._8_8_ + auVar54._8_8_;
    auVar64._8_4_ = SUB84(dVar13,0);
    auVar64._0_8_ = dVar10;
    auVar64._12_4_ = uVar66;
    auVar53._8_4_ = SUB84(dVar13,0);
    auVar53._0_8_ = dVar10;
    auVar53._12_4_ = uVar66;
    auVar54 = blendpd(auVar53,auVar81,2);
    auVar65._0_8_ = auVar64._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
    auVar65._8_8_ = auVar81._0_8_ * auVar30._8_8_ - dVar11 * dVar13;
    auVar42._8_4_ = SUB84(auVar65._8_8_,0);
    auVar42._0_8_ = auVar65._0_8_;
    auVar42._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
    auVar30 = blendpd(auVar30,auVar57,2);
    auVar57._0_8_ = auVar54._0_8_ * dVar11 - auVar30._0_8_ * auVar81._0_8_;
    auVar57._8_8_ = auVar54._8_8_ * dVar21 - auVar30._8_8_ * auVar81._8_8_;
    dVar11 = dVar13 * dVar21 + dVar15 + auVar57._0_8_ + (double)plVar6[0x1f];
    auVar57 = blendpd(auVar65,auVar57,2);
    local_b8._8_4_ = SUB84(dVar11,0);
    local_b8._0_8_ = dVar10 * dVar21 + dVar18 + auVar42._8_8_ + (double)plVar6[0x1e];
    local_b8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_a8 = auVar81._0_8_ * dVar21 + dVar20 + auVar57._0_8_ + (double)plVar6[0x20];
    (**(code **)(*plVar6 + 8))(plVar6,local_b8,local_98,plVar6 + 2,(int)plVar6[4],(char)plVar6[8]);
    puVar27 = puVar27 + 1;
  }
  return;
}

// operator() @ 14cb6b260

void __thiscall
`FBasicDynamicMeshSelectionTransformer::UpdatePendingVertexChange'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong lVar3;
  FMeshVertexChangeBuilder *this_00;
  void *_Src;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  lVar3 = *(longlong *)this;
  this_00 = *(FMeshVertexChangeBuilder **)(lVar3 + 0x128);
  cVar2 = **(char **)((longlong)this + 8);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = *(int *)(lVar3 + 0x50);
  lVar7 = (longlong)local_30;
  _Src = *(void **)(lVar3 + 0x48);
  if (local_30 == 0) {
    local_2c = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar7 << 2);
    iVar5 = local_30;
  }
  pFVar1 = local_38.Data + (longlong)iVar5 * 4;
  FVar4.Data = local_38.Data;
  iVar6 = iVar5;
  if (cVar2 == '\0') {
    while( true ) {
      if (iVar6 != iVar5) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar4.Data == pFVar1) break;
      FMeshVertexChangeBuilder::SaveVertexInitial(this_00,param_1,*(int *)FVar4.Data);
      FVar4.Data = FVar4.Data + 4;
      iVar6 = local_30;
    }
  }
  else {
    while( true ) {
      if (iVar6 != iVar5) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar4.Data == pFVar1) break;
      FMeshVertexChangeBuilder::SaveVertexFinal(this_00,param_1,*(int *)FVar4.Data);
      FVar4.Data = FVar4.Data + 4;
      iVar6 = local_30;
    }
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMeshVertexChangeBuilder::SaveOverlayNormals
            (*(FMeshVertexChangeBuilder **)(*(longlong *)this + 0x128),param_1,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*(longlong *)this + 0xb8),
             **(char **)((longlong)this + 8) == '\0');
  return;
}

// operator() @ 14cb6b6c0

void __thiscall
`FBasicDynamicMeshSelectionTransformer::UpdateTransform'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  FMutex *this_00;
  uint *puVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  short sVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  
  plVar1 = (longlong *)((longlong)this + 8);
  uVar15 = 0;
  if (0 < **(int **)this) {
    lVar16 = 0;
    lVar14 = 0;
    do {
      lVar6 = *plVar1;
      uVar12 = 0;
      if ((int)uVar15 < *(int *)(lVar6 + 0x120)) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *plVar1;
      lVar6 = *(longlong *)(lVar6 + 0x118);
      uVar12 = 0;
      if ((int)uVar15 < *(int *)(lVar7 + 0x50)) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar12 = *(uint *)(*(longlong *)(lVar7 + 0x48) + lVar16 * 4);
      sVar11 = _dclass(*(undefined8 *)(lVar14 + lVar6));
      if (((sVar11 < 1) && (sVar11 = _dclass(*(undefined8 *)(lVar14 + 8 + lVar6)), sVar11 < 1)) &&
         (sVar11 = _dclass(*(undefined8 *)(lVar14 + 0x10 + lVar6)), sVar11 < 1)) {
        uVar9 = ((undefined8 *)(lVar14 + lVar6))[1];
        uVar13 = (ulonglong)(uVar12 & 0x1ff);
        uVar5 = *(undefined8 *)(lVar14 + 0x10 + lVar6);
        lVar7 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        puVar3 = (undefined8 *)(lVar7 + uVar13 * 0x18);
        *puVar3 = *(undefined8 *)(lVar14 + lVar6);
        puVar3[1] = uVar9;
        *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18) = uVar5;
        if ((param_1->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(param_1->ChangeStampShape).Mutex;
          LOCK();
          bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar10) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar10) {
            UE::FMutex::LockSlow(this_00);
          }
          puVar2 = &(param_1->ChangeStampShape).Value;
          *puVar2 = *puVar2 + 1;
          LOCK();
          aVar4 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            UE::FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 0x18;
    } while ((int)uVar15 < **(int **)this);
  }
  UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)(*plVar1 + 0x108),true,true);
  return;
}

// BeginTransform @ 14cb74ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBasicDynamicMeshSelectionTransformer::BeginTransform
          (FBasicDynamicMeshSelectionTransformer *this,FGeometrySelection *param_1)

{
  TPimplPtr<FMeshVertexChangeBuilder,0> *pTVar1;
  FMeshVertexChangeBuilder *pFVar2;
  ulonglong uVar3;
  UDynamicMesh *pUVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  FGroupTopology *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ForAnyElementType *local_98;
  FBasicDynamicMeshSelectionTransformer *local_90;
  longlong local_88 [2];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  puVar7 = (undefined8 *)0x0;
  local_c0 = (FGroupTopology *)0x0;
  if (param_1->TopologyType == Polygroup) {
    local_c0 = FBaseDynamicMeshSelector::GetGroupTopology(this->Selector);
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  pUVar4 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->Selector->TargetMesh).WeakPtr);
  local_a8._8_8_ = &local_c0;
  local_98 = &local_78;
  local_b8._8_8_ = local_a8;
  local_b8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_a8._0_8_ = param_1;
  local_90 = this;
  UDynamicMesh::ProcessMesh
            (pUVar4,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_b8);
  puVar5 = ::operator_new(0x150);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = UE::Core::Private::PimplPtr::DeleterFunc<FMeshVertexChangeBuilder>;
    FMeshVertexChangeBuilder::FMeshVertexChangeBuilder
              ((FMeshVertexChangeBuilder *)(puVar5 + 2),OverlayNormals|VertexPositions);
    puVar7 = puVar5;
  }
  pTVar1 = &this->ActiveVertexChange;
  if ((TPimplPtr<FMeshVertexChangeBuilder,0> *)local_88 == pTVar1) {
    if ((FMeshVertexChangeBuilder *)(puVar7 + 2) == (FMeshVertexChangeBuilder *)0x0)
    goto LAB_14cb74dbf;
    pcVar6 = (code *)*puVar7;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FMeshVertexChangeBuilder *)(puVar7 + 2);
    if (pFVar2 == (FMeshVertexChangeBuilder *)0x0) goto LAB_14cb74dbf;
    pcVar6 = *(code **)&pFVar2[-1].OnNewVertexSaved.field_0x20;
    puVar7 = (undefined8 *)&pFVar2[-1].OnNewVertexSaved.field_0x20;
  }
  (*pcVar6)(puVar7);
LAB_14cb74dbf:
  local_c8[0] = 0;
  pUVar4 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->Selector->TargetMesh).WeakPtr);
  local_b8._8_8_ = local_c8;
  local_a8._8_8_ = local_b8;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::UpdatePendingVertexChange'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_b8._0_8_ = this;
  UDynamicMesh::ProcessMesh
            (pUVar4,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_a8);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar3 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// EndTransform @ 14cb89300

void __thiscall
FBasicDynamicMeshSelectionTransformer::EndTransform
          (FBasicDynamicMeshSelectionTransformer *this,IToolsContextTransactionsAPI *param_1)

{
  FMeshVertexChangeBuilder *pFVar1;
  FMeshVertexChange *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  UDynamicMesh *this_00;
  FText *pFVar5;
  UObject *pUVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FMeshVertexChange *local_res8;
  FBasicDynamicMeshSelectionTransformer *local_38;
  FMeshVertexChange **local_30;
  undefined1 local_28 [16];
  
  local_res8 = (FMeshVertexChange *)CONCAT71(local_res8._1_7_,1);
  this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->Selector->TargetMesh).WeakPtr);
  local_30 = &local_res8;
  local_28._8_8_ = &local_38;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::UpdatePendingVertexChange'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_38 = this;
  UDynamicMesh::ProcessMesh
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_28);
  if (param_1 != (IToolsContextTransactionsAPI *)0x0) {
    pFVar1 = (this->ActiveVertexChange).Ptr;
    pFVar2 = (pFVar1->Change).Ptr;
    (pFVar1->Change).Ptr = (FMeshVertexChange *)0x0;
    pcVar3 = *(code **)((longlong)*param_1 + 0x28);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"FBaseDynamicMeshSelector",L"DynamicMeshTransformChange",
                        L"Transform");
    local_res8 = pFVar2;
    pUVar6 = FWeakObjectPtr::Get(&(this->Selector->TargetMesh).WeakPtr);
    (*pcVar3)(param_1,pUVar6,&local_res8,pFVar5);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
  }
  pFVar1 = (this->ActiveVertexChange).Ptr;
  if (pFVar1 != (FMeshVertexChangeBuilder *)0x0) {
    (this->ActiveVertexChange).Ptr = (FMeshVertexChangeBuilder *)0x0;
    (**(code **)&pFVar1[-1].OnNewVertexSaved.field_0x20)();
  }
  if (*(void **)&this->OnEndTransformFunc != (void *)0x0) {
    local_res8 = (FMeshVertexChange *)param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnEndTransformFunc);
    plVar4 = *(longlong **)&(this->OnEndTransformFunc).field_0x28;
    pcVar3 = *(code **)&this->OnEndTransformFunc;
    plVar8 = (longlong *)&(this->OnEndTransformFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,&local_res8);
  }
  return;
}

// GetSelector @ 14cb9efb0

IGeometrySelector * __thiscall
FBasicDynamicMeshSelectionTransformer::GetSelector(FBasicDynamicMeshSelectionTransformer *this)

{
  return (IGeometrySelector *)this->Selector;
}

// Initialize @ 14cba15c0

void __thiscall
FBasicDynamicMeshSelectionTransformer::Initialize
          (FBasicDynamicMeshSelectionTransformer *this,FBaseDynamicMeshSelector *param_1)

{
  this->Selector = param_1;
  return;
}

// PreviewRender @ 14cba7430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FBasicDynamicMeshSelectionTransformer::PreviewRender
          (FBasicDynamicMeshSelectionTransformer *this,IToolsContextRenderAPI *param_1)

{
  TTransform<double> *pTVar1;
  UDynamicMesh *this_00;
  undefined1 auStack_1e8 [32];
  FToolDataVisualizer *local_1c8;
  FBasicDynamicMeshSelectionTransformer *local_1c0;
  code *local_1b8;
  undefined1 **local_1b0;
  FToolDataVisualizer local_1a8;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (this->bEnableSelectionTransformDrawing != false) {
    FToolDataVisualizer::FToolDataVisualizer(&local_1a8);
    local_1a8.bDepthTested = false;
    FToolDataVisualizer::BeginFrame(&local_1a8,param_1);
    pTVar1 = (TTransform<double> *)
             (**(code **)(this->Selector->_padding_ + 0x80))(this->Selector,local_78);
    FToolDataVisualizer::PushTransform(&local_1a8,pTVar1);
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->Selector->TargetMesh).WeakPtr);
    local_1c8 = &local_1a8;
    local_1b0 = (undefined1 **)&local_1c8;
    local_1b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::PreviewRender'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_1c0 = this;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_1b8
              );
    FToolDataVisualizer::EndFrame(&local_1a8);
    FToolDataVisualizer::~FToolDataVisualizer(&local_1a8);
  }
  return;
}

// UpdatePendingVertexChange @ 14cbb8ab0

void __thiscall
FBasicDynamicMeshSelectionTransformer::UpdatePendingVertexChange
          (FBasicDynamicMeshSelectionTransformer *this,bool param_1)

{
  UDynamicMesh *this_00;
  undefined1 local_res10 [24];
  FBasicDynamicMeshSelectionTransformer *local_28;
  undefined1 *local_20;
  code *local_18;
  FBasicDynamicMeshSelectionTransformer **local_10;
  
  local_res10[0] = param_1;
  this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->Selector->TargetMesh).WeakPtr);
  local_20 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::UpdatePendingVertexChange'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_28 = this;
  UDynamicMesh::ProcessMesh
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return;
}

// UpdateTransform @ 14cbbc6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBasicDynamicMeshSelectionTransformer::UpdateTransform
          (FBasicDynamicMeshSelectionTransformer *this,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TTransform<double>_const_&)>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UDynamicMesh *this_00;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  int local_108 [2];
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *local_e0;
  FBasicDynamicMeshSelectionTransformer *local_d8;
  code *local_d0;
  int **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_108[0] = (this->MeshVertices).ArrayNum;
  (**(code **)(this->Selector->_padding_ + 0x80))(this->Selector,local_a8);
  uVar6 = 0;
  if (0 < local_108[0]) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar6 < (this->InitialPositions).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InitialPositions).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar6 < (this->MeshVertices).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_100[0] = *(undefined4 *)((this->MeshVertices).AllocatorInstance.Data + lVar9);
      (**(code **)param_1)
                (&local_c0,*(undefined8 *)&param_1->field_0x8,local_100,
                 pFVar1 + (longlong)(int)uVar6 * 0x18);
      uVar5 = 0;
      if ((int)uVar6 < (this->UpdatedPositions).ArrayNum) {
        uVar5 = uVar8;
      }
      local_f8 = local_b0;
      local_f0 = local_c0;
      uStack_ec = uStack_bc;
      uStack_e8 = uStack_b8;
      uStack_e4 = uStack_b4;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->UpdatedPositions).AllocatorInstance.Data;
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 4;
      pFVar1 = pFVar2 + lVar7;
      *(undefined4 *)pFVar1 = local_f0;
      *(undefined4 *)(pFVar1 + 4) = uStack_ec;
      *(undefined4 *)(pFVar1 + 8) = uStack_e8;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_e4;
      *(undefined8 *)(pFVar2 + lVar7 + 0x10) = local_f8;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar6 < local_108[0]);
  }
  this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->Selector->TargetMesh).WeakPtr);
  local_e0 = local_108;
  local_c8 = &local_e0;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::UpdateTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_d8 = this;
  UDynamicMesh::EditMesh
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_d0,
             DeformationEdit,NormalsTangents|VertexPositions,false);
  return;
}

