// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// operator() @ 14cb67f60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [4];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  uint *local_c8;
  undefined8 local_c0;
  FDynamicMesh3 *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined8 *local_98;
  code *local_90;
  undefined8 *local_88;
  longlong local_80;
  FDynamicMesh3 *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  UE::Geometry::FGroupTopologyDeformer::Initialize
            (*(FGroupTopologyDeformer **)(*(longlong *)this + 0x1b8),param_1,
             (FGroupTopology *)**(undefined8 **)((longlong)this + 8));
  (**(code **)(**(longlong **)(*(longlong *)this + 0x1b8) + 0x20))
            (*(longlong **)(*(longlong *)this + 0x1b8),*(undefined8 *)((longlong)this + 0x10));
  local_108 = *(undefined8 *)((longlong)this + 0x18);
  local_e8 = &local_108;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
             ::Call;
  UE::Geometry::EnumeratePolygroupSelectionVertices
            (*(FGeometrySelection **)((longlong)this + 0x10),param_1,
             (FGroupTopology *)**(undefined8 **)((longlong)this + 8),
             &UE::Math::TTransform<double>::Identity,
             (TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *)
             &local_f0);
  pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                       ((longlong)this + 0x18),&local_70);
  lVar3 = *(longlong *)this;
  pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x48);
  if (pTVar12 != pTVar9) {
    pFVar4 = (pTVar12->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar3 + 0x50) = pTVar9->ArrayNum;
    *(int *)(lVar3 + 0x54) = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  iVar2 = *(int *)(*(longlong *)this + 0x50);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x58),iVar2,Default);
  local_res18[0] = 0;
  if (0 < iVar2) {
    do {
      uVar8 = local_res18[0];
      lVar3 = *(longlong *)this;
      uVar7 = 0;
      if ((int)local_res18[0] < *(int *)(lVar3 + 0x50)) {
        uVar7 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = local_res18[0];
      lVar10 = *(longlong *)this;
      uVar8 = *(uint *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar8 * 4);
      uVar13 = (ulonglong)(uVar8 & 0x1ff);
      lVar3 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
      puVar1 = (undefined4 *)(lVar3 + uVar13 * 0x18);
      local_e0 = *puVar1;
      uStack_dc = puVar1[1];
      uStack_d8 = puVar1[2];
      uStack_d4 = puVar1[3];
      local_100 = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
      uVar8 = 0;
      if ((int)local_res18[0] < *(int *)(lVar10 + 0x60)) {
        uVar8 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)(lVar10 + 0x58);
      puVar1 = (undefined4 *)(lVar3 + (longlong)(int)uVar7 * 0x18);
      *puVar1 = local_e0;
      puVar1[1] = uStack_dc;
      puVar1[2] = uStack_d8;
      puVar1[3] = uStack_d4;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar7 * 0x18) = local_100;
      lVar10 = (longlong)(int)local_res18[0];
      lVar3 = *(longlong *)this;
      uVar8 = 0;
      if ((int)local_res18[0] < *(int *)(lVar3 + 0x50)) {
        uVar8 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_d0 = *(longlong *)(lVar3 + 0x48) + lVar10 * 4;
      local_c8 = local_res18;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)(lVar3 + 0x168),(TPairInitializer<int_const_&,int_const_&> *)(local_res18 + 2),
                 (bool *)&local_d0);
      local_res18[0] = local_res18[0] + 1;
    } while ((int)local_res18[0] < iVar2);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x118),
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x58));
  pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      (*(longlong *)(*(longlong *)this + 0x1b8) + 0x268),local_60);
  lVar3 = *(longlong *)this;
  pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x108);
  if (pTVar12 != pTVar9) {
    pFVar4 = (pTVar12->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar3 + 0x110) = pTVar9->ArrayNum;
    *(int *)(lVar3 + 0x114) = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)this;
  *(undefined4 *)(lVar3 + 0x138) = 0;
  if (*(int *)(lVar3 + 0x13c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(lVar3 + 0x130),0,(int *)(lVar3 + 0x13c));
  }
  lVar3 = *(longlong *)this;
  *(undefined4 *)(lVar3 + 0x148) = 0;
  if (*(int *)(lVar3 + 0x14c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(lVar3 + 0x140),0,(int *)(lVar3 + 0x14c));
  }
  local_a8 = local_res8;
  local_98 = &local_c0;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void,int,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_f8 = *(undefined8 *)this;
  local_88 = &local_f8;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void,int,UE::Math::TVector<double>_const_&>
             ::Call;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void,int,UE::Geometry::TSegment3<double>_const_&>
             ::Call;
  local_res8[0] = 0;
  local_c0 = local_f8;
  local_b8 = param_1;
  UE::Geometry::EnumeratePolygroupSelectionElements
            (*(FGeometrySelection **)((longlong)this + 0x10),param_1,
             (FGroupTopology *)**(undefined8 **)((longlong)this + 8),
             (TFunctionRef<void___cdecl(int,UE::Math::TVector<double>_const_&)> *)&local_90,
             (TFunctionRef<void___cdecl(int,UE::Geometry::TSegment3<double>_const_&)> *)&local_a0,
             (TFunctionRef<void___cdecl(int,UE::Geometry::TTriangle3<double>_const_&)> *)&local_b0,
             (TTransform<double> *)0x0,true);
  lVar3 = *(longlong *)this;
  *(undefined4 *)(lVar3 + 0x158) = 0;
  if (*(int *)(lVar3 + 0x15c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(lVar3 + 0x150),0,(int *)(lVar3 + 0x15c));
  }
  local_80 = *(longlong *)this;
  lVar10 = *(longlong *)(local_80 + 0x1b8);
  iVar2 = *(int *)(lVar10 + 0x2c0);
  lVar11 = *(longlong *)(lVar10 + 0x2b8);
  lVar3 = lVar11 + (longlong)iVar2 * 0x48;
  local_78 = param_1;
  while( true ) {
    if (*(int *)(lVar10 + 0x2c0) != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FGroupTopologyDeformer::FROIEdge_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar11 == lVar3) break;
    ``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::
    <lambda_5>::operator()(&local_80,(FEdgeSpan *)(lVar11 + 8));
    lVar11 = lVar11 + 0x48;
  }
  return;
}

// operator() @ 14cb68f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FDynamicMeshPolygroupTransformer::EndTransform'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FMeshVertexChangeBuilder *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_58;
  
  this_00 = *(FMeshVertexChangeBuilder **)(*(longlong *)this + 0x128);
  local_58.Elements._0_8_ = 0;
  local_58.Elements._8_8_ = 0;
  local_58.Elements._32_8_ = 0;
  local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_58.Elements._48_8_ = _UNK_150631d98;
  local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_58.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&local_58,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)(*(longlong *)this + 0x1b8) + 0x38));
  FMeshVertexChangeBuilder::SaveVertices<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (this_00,param_1,&local_58,false);
  FMeshVertexChangeBuilder::SaveOverlayNormals
            (*(FMeshVertexChangeBuilder **)(*(longlong *)this + 0x128),param_1,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)(*(longlong *)this + 0x1b8) + 0x268),false);
  return;
}

// operator() @ 14cb6b8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  lVar3 = *(longlong *)((longlong)this + 0x10);
  plVar5 = *(longlong **)(lVar1 + 0x1b8);
  local_68[0] = (code *)0x0;
  pcVar4 = *(code **)(*plVar5 + 0x28);
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<``FDynamicMeshPolygroupTransformer::UpdateTransform'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_40[1] = lVar1;
  local_40[2] = lVar2;
  local_40[3] = lVar3;
  if (local_40 + 1 != (longlong *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_*,int>
                  ::Call;
  }
  (*pcVar4)(plVar5,param_1,local_68);
  if (local_68[0] != (code *)0x0) {
    plVar5 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x108),true,
             true);
  return;
}

// operator() @ 14cb6c960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FMeshVertexChangeBuilder *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_58;
  
  this_00 = *(FMeshVertexChangeBuilder **)(*(longlong *)this + 0x128);
  local_58.Elements._0_8_ = 0;
  local_58.Elements._8_8_ = 0;
  local_58.Elements._32_8_ = 0;
  local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_58.Elements._48_8_ = _UNK_150631d98;
  local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_58.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&local_58,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)(*(longlong *)this + 0x1b8) + 0x38));
  FMeshVertexChangeBuilder::SaveVertices<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (this_00,param_1,&local_58,true);
  FMeshVertexChangeBuilder::SaveOverlayNormals
            (*(FMeshVertexChangeBuilder **)(*(longlong *)this + 0x128),param_1,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)(*(longlong *)this + 0x1b8) + 0x268),true);
  return;
}

// BeginTransform @ 14cb74eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicMeshPolygroupTransformer::BeginTransform
          (FDynamicMeshPolygroupTransformer *this,FGeometrySelection *param_1)

{
  TPimplPtr<UE::Geometry::FGroupTopologyDeformer,0> *pTVar1;
  longlong *plVar2;
  FGroupTopologyDeformer *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_> *pTVar7;
  UDynamicMesh *pUVar8;
  TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStackY_118 [32];
  FGroupTopology *local_e8;
  FDynamicMeshPolygroupTransformer *local_e0;
  code *local_d8;
  FDynamicMeshPolygroupTransformer **local_d0;
  code *local_c8;
  FDynamicMeshPolygroupTransformer **local_c0;
  FDynamicMeshPolygroupTransformer *local_b8;
  FGroupTopology **local_b0;
  FGeometrySelection *local_a8;
  ForAnyElementType *local_a0;
  longlong local_98;
  longlong local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_1->TopologyType != Polygroup) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5065351173247074283>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\DynamicMeshPolygroupTransformer.cpp"
                       ,0x15,"Selection.TopologyType == EGeometryTopologyType::Polygroup");
    if (!bVar6) {
      this->bFallbackToSimpleTransform = true;
      FBasicDynamicMeshSelectionTransformer::BeginTransform
                ((FBasicDynamicMeshSelectionTransformer *)this,param_1);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_e8 = FBaseDynamicMeshSelector::GetGroupTopology((FBaseDynamicMeshSelector *)this->_padding_)
  ;
  pTVar7 = ::operator_new(0x310);
  pTVar11 = (TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_>
             *)0x0;
  pTVar9 = pTVar11;
  if (pTVar7 != (TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    (pTVar7->AllocatorInstance).Data =
         (FScriptContainerElement *)
         UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FGroupTopologyDeformer>;
    memset(pTVar7 + 1,0,0x2f8);
    UE::Geometry::FGroupTopologyDeformer::FGroupTopologyDeformer
              ((FGroupTopologyDeformer *)(pTVar7 + 1));
    pTVar9 = pTVar7;
  }
  pTVar1 = &this->LinearDeformer;
  if ((TPimplPtr<UE::Geometry::FGroupTopologyDeformer,0> *)&local_98 == pTVar1) {
    if ((FGroupTopologyDeformer *)(pTVar9 + 1) != (FGroupTopologyDeformer *)0x0) {
      pFVar10 = (pTVar9->AllocatorInstance).Data;
      goto LAB_14cb74fbc;
    }
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (FGroupTopologyDeformer *)(pTVar9 + 1);
    if (pFVar3 != (FGroupTopologyDeformer *)0x0) {
      pFVar10 = pFVar3[-1].FaceEncodings.AllocatorInstance.Data;
      pTVar9 = &pFVar3[-1].FaceEncodings;
LAB_14cb74fbc:
      (*(code *)pFVar10)(pTVar9);
    }
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  pUVar8 = (UDynamicMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x90));
  local_b0 = &local_e8;
  local_a0 = &local_88;
  local_d0 = &local_b8;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_b8 = this;
  local_a8 = param_1;
  UDynamicMesh::ProcessMesh
            (pUVar8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_d8);
  pTVar9 = ::operator_new(0x150);
  if (pTVar9 != (TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
    (pTVar9->AllocatorInstance).Data =
         (FScriptContainerElement *)
         UE::Core::Private::PimplPtr::DeleterFunc<FMeshVertexChangeBuilder>;
    FMeshVertexChangeBuilder::FMeshVertexChangeBuilder
              ((FMeshVertexChangeBuilder *)(pTVar9 + 1),OverlayNormals|VertexPositions);
    pTVar11 = pTVar9;
  }
  plVar2 = &this->_padding_;
  if (&local_90 == plVar2) {
    if (pTVar11 + 1 ==
        (TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_> *)
        0x0) goto LAB_14cb7509f;
    pFVar10 = (pTVar11->AllocatorInstance).Data;
  }
  else {
    lVar4 = *plVar2;
    *plVar2 = (longlong)(pTVar11 + 1);
    if (lVar4 == 0) goto LAB_14cb7509f;
    pFVar10 = *(FScriptContainerElement **)(lVar4 + -0x10);
    pTVar11 = (TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_>
               *)(lVar4 + -0x10);
  }
  (*(code *)pFVar10)(pTVar11);
LAB_14cb7509f:
  pUVar8 = (UDynamicMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x90));
  local_c0 = &local_e0;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_e0 = this;
  UDynamicMesh::ProcessMesh
            (pUVar8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_c8);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  bVar6 = local_80._4_4_ != 0;
  local_80 = (ulonglong)local_80._4_4_ << 0x20;
  if (bVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_54 = 0;
  local_78.NumBits = 0;
  local_58 = 0xffffffff;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// EndTransform @ 14cb89450

void __thiscall
FDynamicMeshPolygroupTransformer::EndTransform
          (FDynamicMeshPolygroupTransformer *this,IToolsContextTransactionsAPI *param_1)

{
  FDynamicMeshPolygroupTransformer *pFVar1;
  code *pcVar2;
  longlong lVar3;
  UDynamicMesh *pUVar4;
  FText *pFVar5;
  UObject *pUVar6;
  undefined8 uVar7;
  FWeakObjectPtr *this_00;
  longlong *plVar8;
  wchar_t *pwVar9;
  FDynamicMeshPolygroupTransformer *local_res8;
  FDynamicMeshPolygroupTransformer *local_38;
  FDynamicMeshPolygroupTransformer **local_30;
  undefined1 local_28 [16];
  
  this_00 = (FWeakObjectPtr *)(this->_padding_ + 0x90);
  if (this->bFallbackToSimpleTransform == false) {
    pUVar4 = (UDynamicMesh *)FWeakObjectPtr::Get(this_00);
    local_28._8_8_ = &local_res8;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDynamicMeshPolygroupTransformer::EndTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_res8 = this;
    UDynamicMesh::ProcessMesh
              (pUVar4,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_28);
    if (param_1 == (IToolsContextTransactionsAPI *)0x0) goto LAB_14cb89564;
    pwVar9 = L"FDynamicMeshPolygroupTransformer";
  }
  else {
    local_res8 = (FDynamicMeshPolygroupTransformer *)CONCAT71(local_res8._1_7_,1);
    pUVar4 = (UDynamicMesh *)FWeakObjectPtr::Get(this_00);
    local_30 = &local_res8;
    local_28._8_8_ = &local_38;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::UpdatePendingVertexChange'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_38 = this;
    UDynamicMesh::ProcessMesh
              (pUVar4,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_28);
    if (param_1 == (IToolsContextTransactionsAPI *)0x0) goto LAB_14cb89564;
    pwVar9 = L"FBaseDynamicMeshSelector";
  }
  pFVar1 = *(FDynamicMeshPolygroupTransformer **)this->_padding_;
  *(undefined8 *)this->_padding_ = 0;
  pcVar2 = *(code **)((longlong)*param_1 + 0x28);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_28,pwVar9,L"DynamicMeshTransformChange",L"Transform");
  local_res8 = pFVar1;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x90));
  (*pcVar2)(param_1,pUVar6,&local_res8,pFVar5);
  if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
  }
LAB_14cb89564:
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    this->_padding_ = 0;
    (**(code **)(lVar3 + -0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    local_res8 = (FDynamicMeshPolygroupTransformer *)param_1;
    UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
    pcVar2 = (code *)this->_padding_;
    plVar8 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar8 = (longlong *)this->_padding_;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar2)(uVar7,&local_res8);
  }
  return;
}

// PreviewRender @ 14cba7520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FDynamicMeshPolygroupTransformer::PreviewRender
          (FDynamicMeshPolygroupTransformer *this,IToolsContextRenderAPI *param_1)

{
  uint *puVar1;
  double *pdVar2;
  ulonglong *puVar3;
  int iVar4;
  FDynamicMesh3 *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TTransform<double> *pTVar20;
  UDynamicMesh *this_00;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined1 auVar66 [16];
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
  undefined4 uVar81;
  undefined4 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar95;
  double dVar96;
  undefined4 uVar98;
  undefined1 auVar97 [16];
  double dVar99;
  undefined4 uVar101;
  double dVar100;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  double dVar105;
  double dVar106;
  undefined1 auStack_408 [32];
  float local_3e8;
  undefined1 local_3e0;
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [16];
  double local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  FToolDataVisualizer local_398;
  FToolDataVisualizer local_268;
  undefined1 local_138 [96];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_408;
  if ((char)this->_padding_ != '\0') {
    if (this->bFallbackToSimpleTransform == false) {
      if ((this->LinearDeformer).Ptr != (FGroupTopologyDeformer *)0x0) {
        FToolDataVisualizer::FToolDataVisualizer(&local_398);
        local_398.bDepthTested = false;
        FToolDataVisualizer::BeginFrame(&local_398,param_1);
        pTVar20 = (TTransform<double> *)
                  (**(code **)(*(longlong *)this->_padding_ + 0x80))
                            ((longlong *)this->_padding_,local_138);
        FToolDataVisualizer::PushTransform(&local_398,pTVar20);
        puVar23 = (uint *)this->_padding_;
        iVar4 = (int)this->_padding_;
        pFVar5 = ((this->LinearDeformer).Ptr)->Mesh;
        puVar1 = puVar23 + iVar4;
        local_398.PointColor.field0_0x0._s_0.R = 0.0;
        local_398.PointColor.field0_0x0._s_0.G = 0.3;
        local_398.PointColor.field0_0x0._s_0.B = 0.95;
        local_398.PointColor.field0_0x0._s_0.A = 1.0;
        local_398.PointSize = 5.0;
        while( true ) {
          if ((int)this->_padding_ != iVar4) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_3d8);
          }
          if (puVar23 == puVar1) break;
          uVar21 = (ulonglong)(*puVar23 & 0x1ff);
          dVar13 = local_398.TotalTransform.Rotation.ZW.m128d_f64[0];
          dVar12 = local_398.TotalTransform.Rotation.XY.m128d_f64[1];
          auVar97 = blendpd((undefined1  [16])local_398.TotalTransform.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_398.TotalTransform.Rotation.ZW.m128d_f64,2);
          auVar26._8_4_ = local_398.TotalTransform.Rotation.ZW.m128d_f64[0]._0_4_;
          auVar26._0_8_ = dVar12;
          auVar26._12_4_ = local_398.TotalTransform.Rotation.ZW.m128d_f64[0]._4_4_;
          dVar14 = local_398.TotalTransform.Rotation.ZW.m128d_f64[1];
          lVar6 = *(longlong *)
                   ((pFVar5->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(*puVar23 >> 9) * 8);
          pdVar2 = (double *)(lVar6 + uVar21 * 0x18);
          dVar18 = *pdVar2 * local_398.TotalTransform.Scale3D.XY.m128d_f64[0];
          dVar19 = pdVar2[1] * local_398.TotalTransform.Scale3D.XY.m128d_f64[1];
          uVar81 = (undefined4)((ulonglong)dVar19 >> 0x20);
          local_3e8 = (float)CONCAT31(local_3e8._1_3_,local_398.bDepthTested);
          dVar16 = *(double *)(lVar6 + 0x10 + uVar21 * 0x18) *
                   local_398.TotalTransform.Scale3D.ZW.m128d_f64[0];
          dVar17 = local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
          auVar102._8_4_ = SUB84(dVar19,0);
          auVar102._0_8_ = dVar18;
          auVar102._12_4_ = uVar81;
          auVar50._8_4_ = SUB84(dVar19,0);
          auVar50._0_8_ = dVar18;
          auVar50._12_4_ = uVar81;
          auVar15._8_4_ = SUB84(dVar17,0);
          auVar15._0_8_ = dVar16;
          auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          auVar51 = blendpd(auVar50,auVar15,2);
          auVar103._0_8_ =
               auVar102._8_8_ * local_398.TotalTransform.Rotation.XY.m128d_f64[0] - dVar12 * dVar18;
          auVar103._8_8_ = dVar16 * dVar12 - auVar26._8_8_ * dVar19;
          auVar52._0_8_ = auVar51._0_8_ * dVar13 - auVar97._0_8_ * dVar16;
          auVar52._8_8_ = auVar51._8_8_ * dVar14 - auVar97._8_8_ * dVar17;
          auVar51 = blendpd(auVar103,auVar52,2);
          dVar17 = auVar103._8_8_ + auVar103._8_8_;
          dVar9 = auVar52._0_8_ + auVar52._0_8_;
          uVar81 = SUB84(dVar9,0);
          uVar82 = (undefined4)((ulonglong)dVar9 >> 0x20);
          auVar104._0_8_ = auVar51._0_8_ + auVar51._0_8_;
          auVar104._8_8_ = auVar51._8_8_ + auVar51._8_8_;
          auVar71._8_4_ = uVar81;
          auVar71._0_8_ = dVar17;
          auVar71._12_4_ = uVar82;
          auVar27._8_4_ = uVar81;
          auVar27._0_8_ = dVar17;
          auVar27._12_4_ = uVar82;
          auVar53._8_4_ = uVar81;
          auVar53._0_8_ = dVar17;
          auVar53._12_4_ = uVar82;
          auVar51 = blendpd(auVar53,auVar104,2);
          auVar72._0_8_ =
               auVar71._8_8_ * local_398.TotalTransform.Rotation.XY.m128d_f64[0] - dVar17 * dVar12;
          auVar72._8_8_ = auVar104._0_8_ * dVar12 - auVar27._8_8_ * dVar13;
          auVar28._8_4_ = SUB84(auVar104._8_8_,0);
          auVar28._0_8_ = auVar104._0_8_;
          auVar28._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
          auVar54._0_8_ = auVar51._0_8_ * dVar13 - auVar104._0_8_ * auVar97._0_8_;
          auVar54._8_8_ = auVar51._8_8_ * dVar14 - auVar28._8_8_ * auVar97._8_8_;
          auVar29._8_4_ = SUB84(auVar72._8_8_,0);
          auVar29._0_8_ = auVar72._0_8_;
          auVar29._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
          auVar51 = blendpd(auVar72,auVar54,2);
          dVar9 = dVar9 * dVar14 + dVar19 + auVar54._0_8_ +
                  local_398.TotalTransform.Translation.XY.m128d_f64[1];
          local_3d0._8_4_ = SUB84(dVar9,0);
          local_3d0._0_8_ =
               dVar17 * dVar14 + dVar18 + auVar29._8_8_ +
               local_398.TotalTransform.Translation.XY.m128d_f64[0];
          local_3d0._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_3c0 = auVar104._0_8_ * dVar14 + dVar16 + auVar51._0_8_ +
                      local_398.TotalTransform.Translation.ZW.m128d_f64[0];
          (**(code **)(local_398._padding_ + 0x18))
                    (&local_398,local_3d0,&local_398.PointColor,local_398.PointSize);
          puVar23 = puVar23 + 1;
        }
        puVar24 = (ulonglong *)this->_padding_;
        iVar4 = (int)this->_padding_;
        puVar3 = puVar24 + iVar4;
        local_398.LineColor.field0_0x0._0_8_ = ___xmm_3f8000003f7333333e99999a00000000;
        local_398.LineColor.field0_0x0._8_8_ = _UNK_1528fb378;
        local_398.LineThickness = 3.0;
        local_398.ArrowHeadSize = 4.0;
        while( true ) {
          if ((int)this->_padding_ != iVar4) {
            `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_3d8);
          }
          if (puVar24 == puVar3) break;
          uVar21 = *puVar24;
          pFVar7 = (pFVar5->Vertices).Blocks.AllocatorInstance.Data;
          dVar18 = local_398.TotalTransform.Rotation.ZW.m128d_f64[0];
          dVar16 = local_398.TotalTransform.Rotation.XY.m128d_f64[1];
          uVar22 = (ulonglong)((uint)(uVar21 >> 0x20) & 0x1ff);
          auVar97 = blendpd((undefined1  [16])local_398.TotalTransform.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_398.TotalTransform.Rotation.ZW.m128d_f64,2);
          dVar19 = local_398.TotalTransform.Rotation.ZW.m128d_f64[1];
          lVar6 = *(longlong *)(pFVar7 + (uVar21 >> 0x29) * 8);
          pdVar2 = (double *)(lVar6 + uVar22 * 0x18);
          dVar95 = *pdVar2 * local_398.TotalTransform.Scale3D.XY.m128d_f64[0];
          dVar99 = pdVar2[1] * local_398.TotalTransform.Scale3D.XY.m128d_f64[1];
          uVar25 = (ulonglong)((uint)uVar21 & 0x1ff);
          lVar8 = *(longlong *)(pFVar7 + ((uVar21 & 0xffffffff) >> 9) * 8);
          dVar12 = *(double *)(lVar6 + 0x10 + uVar22 * 0x18) *
                   local_398.TotalTransform.Scale3D.ZW.m128d_f64[0];
          uVar81 = SUB84(local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0,0);
          uVar82 = (undefined4)
                   ((ulonglong)(local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0) >> 0x20);
          uVar98 = SUB84(dVar99,0);
          auVar83._8_4_ = uVar98;
          auVar83._0_8_ = dVar95;
          uVar101 = (undefined4)((ulonglong)dVar99 >> 0x20);
          auVar83._12_4_ = uVar101;
          auVar30._8_4_ = uVar98;
          auVar30._0_8_ = dVar95;
          auVar30._12_4_ = uVar101;
          auVar55._8_4_ = uVar98;
          auVar55._0_8_ = dVar95;
          auVar55._12_4_ = uVar101;
          dVar14 = local_398.TotalTransform.Rotation.XY.m128d_f64[0];
          auVar10._8_4_ = uVar81;
          auVar10._0_8_ = dVar12;
          auVar10._12_4_ = uVar82;
          auVar51 = blendpd(auVar55,auVar10,2);
          auVar84._0_8_ = auVar83._8_8_ * dVar14 - dVar95 * dVar16;
          auVar84._8_8_ = dVar12 * dVar16 - auVar30._8_8_ * dVar18;
          auVar31._8_4_ = uVar81;
          auVar31._0_8_ = dVar12;
          auVar31._12_4_ = uVar82;
          dVar105 = auVar97._0_8_;
          dVar106 = auVar97._8_8_;
          auVar56._0_8_ = auVar51._0_8_ * dVar18 - dVar12 * dVar105;
          auVar56._8_8_ = auVar51._8_8_ * dVar19 - auVar31._8_8_ * dVar106;
          auVar51 = blendpd(auVar84,auVar56,2);
          auVar85._0_8_ = auVar51._0_8_ + auVar51._0_8_;
          auVar85._8_8_ = auVar51._8_8_ + auVar51._8_8_;
          dVar17 = auVar84._8_8_ + auVar84._8_8_;
          dVar9 = auVar56._0_8_ + auVar56._0_8_;
          uVar81 = SUB84(dVar9,0);
          uVar82 = (undefined4)((ulonglong)dVar9 >> 0x20);
          auVar73._8_4_ = uVar81;
          auVar73._0_8_ = dVar17;
          auVar73._12_4_ = uVar82;
          auVar32._8_4_ = uVar81;
          auVar32._0_8_ = dVar17;
          auVar32._12_4_ = uVar82;
          auVar57._8_4_ = uVar81;
          auVar57._0_8_ = dVar17;
          auVar57._12_4_ = uVar82;
          auVar51 = blendpd(auVar57,auVar85,2);
          pdVar2 = (double *)(lVar8 + uVar25 * 0x18);
          auVar74._0_8_ = auVar73._8_8_ * dVar14 - dVar17 * dVar16;
          auVar74._8_8_ = auVar85._0_8_ * dVar16 - auVar32._8_8_ * dVar18;
          dVar96 = *pdVar2 * local_398.TotalTransform.Scale3D.XY.m128d_f64[0];
          dVar100 = pdVar2[1] * local_398.TotalTransform.Scale3D.XY.m128d_f64[1];
          auVar33._8_4_ = SUB84(auVar85._8_8_,0);
          auVar33._0_8_ = auVar85._0_8_;
          auVar33._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
          dVar13 = *(double *)(lVar8 + 0x10 + uVar25 * 0x18) *
                   local_398.TotalTransform.Scale3D.ZW.m128d_f64[0];
          uVar81 = SUB84(local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0,0);
          uVar82 = (undefined4)
                   ((ulonglong)(local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0) >> 0x20);
          auVar58._0_8_ = auVar51._0_8_ * dVar18 - auVar85._0_8_ * dVar105;
          auVar58._8_8_ = auVar51._8_8_ * dVar19 - auVar33._8_8_ * dVar106;
          auVar34._8_4_ = SUB84(auVar74._8_8_,0);
          auVar34._0_8_ = auVar74._0_8_;
          auVar34._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
          auVar51 = blendpd(auVar74,auVar58,2);
          local_3c0 = auVar85._0_8_ * dVar19 + dVar12 + auVar51._0_8_ +
                      local_398.TotalTransform.Translation.ZW.m128d_f64[0];
          dVar9 = dVar9 * dVar19 + dVar99 + auVar58._0_8_ +
                  local_398.TotalTransform.Translation.XY.m128d_f64[1];
          uVar98 = SUB84(dVar100,0);
          auVar35._8_4_ = uVar98;
          auVar35._0_8_ = dVar96;
          uVar101 = (undefined4)((ulonglong)dVar100 >> 0x20);
          auVar35._12_4_ = uVar101;
          auVar86._8_4_ = uVar98;
          auVar86._0_8_ = dVar96;
          auVar86._12_4_ = uVar101;
          auVar59._8_4_ = uVar98;
          auVar59._0_8_ = dVar96;
          auVar59._12_4_ = uVar101;
          auVar11._8_4_ = uVar81;
          auVar11._0_8_ = dVar13;
          auVar11._12_4_ = uVar82;
          auVar51 = blendpd(auVar59,auVar11,2);
          auVar87._0_8_ = auVar86._8_8_ * dVar14 - dVar96 * dVar16;
          auVar87._8_8_ = dVar13 * dVar16 - auVar35._8_8_ * dVar18;
          local_3d0._8_4_ = SUB84(dVar9,0);
          local_3d0._0_8_ =
               dVar17 * dVar19 + dVar95 + auVar34._8_8_ +
               local_398.TotalTransform.Translation.XY.m128d_f64[0];
          local_3d0._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar36._8_4_ = uVar81;
          auVar36._0_8_ = dVar13;
          auVar36._12_4_ = uVar82;
          local_3e0 = local_398.bDepthTested;
          auVar60._0_8_ = auVar51._0_8_ * dVar18 - dVar13 * dVar105;
          auVar60._8_8_ = auVar51._8_8_ * dVar19 - auVar36._8_8_ * dVar106;
          auVar51 = blendpd(auVar87,auVar60,2);
          dVar17 = auVar87._8_8_ + auVar87._8_8_;
          dVar9 = auVar60._0_8_ + auVar60._0_8_;
          uVar81 = SUB84(dVar9,0);
          uVar82 = (undefined4)((ulonglong)dVar9 >> 0x20);
          auVar88._0_8_ = auVar51._0_8_ + auVar51._0_8_;
          auVar88._8_8_ = auVar51._8_8_ + auVar51._8_8_;
          auVar75._8_4_ = uVar81;
          auVar75._0_8_ = dVar17;
          auVar75._12_4_ = uVar82;
          auVar37._8_4_ = uVar81;
          auVar37._0_8_ = dVar17;
          auVar37._12_4_ = uVar82;
          auVar61._8_4_ = uVar81;
          auVar61._0_8_ = dVar17;
          auVar61._12_4_ = uVar82;
          auVar51 = blendpd(auVar61,auVar88,2);
          auVar76._0_8_ = auVar75._8_8_ * dVar14 - dVar17 * dVar16;
          auVar76._8_8_ = auVar88._0_8_ * dVar16 - auVar37._8_8_ * dVar18;
          auVar38._8_4_ = SUB84(auVar88._8_8_,0);
          auVar38._0_8_ = auVar88._0_8_;
          auVar38._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
          auVar62._0_8_ = auVar51._0_8_ * dVar18 - auVar88._0_8_ * dVar105;
          auVar62._8_8_ = auVar51._8_8_ * dVar19 - auVar38._8_8_ * dVar106;
          auVar39._8_4_ = SUB84(auVar76._8_8_,0);
          auVar39._0_8_ = auVar76._0_8_;
          auVar39._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
          dVar9 = dVar9 * dVar19 + dVar100 + auVar62._0_8_ +
                  local_398.TotalTransform.Translation.XY.m128d_f64[1];
          auVar51 = blendpd(auVar76,auVar62,2);
          local_3b8._8_4_ = SUB84(dVar9,0);
          local_3b8._0_8_ =
               dVar17 * dVar19 + dVar96 + auVar39._8_8_ +
               local_398.TotalTransform.Translation.XY.m128d_f64[0];
          local_3b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_3a8 = auVar88._0_8_ * dVar19 + dVar13 + auVar51._0_8_ +
                      local_398.TotalTransform.Translation.ZW.m128d_f64[0];
          local_3e8 = local_398.LineThickness;
          (**(code **)(local_398._padding_ + 8))
                    (&local_398,local_3b8,local_3d0,&local_398.LineColor);
          puVar24 = puVar24 + 1;
        }
        puVar24 = (ulonglong *)this->_padding_;
        iVar4 = (int)this->_padding_;
        local_398.LineColor.field0_0x0._0_8_ = ___xmm_3f8000003f7333333e99999a00000000;
        local_398.LineColor.field0_0x0._8_8_ = _UNK_1528fb378;
        local_398.LineThickness = 1.0;
        puVar3 = puVar24 + iVar4;
        local_398.ArrowHeadSize = 4.0;
        while( true ) {
          if ((int)this->_padding_ != iVar4) {
            `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_3d8);
          }
          if (puVar24 == puVar3) break;
          uVar21 = *puVar24;
          pFVar7 = (pFVar5->Vertices).Blocks.AllocatorInstance.Data;
          dVar18 = local_398.TotalTransform.Rotation.ZW.m128d_f64[0];
          dVar16 = local_398.TotalTransform.Rotation.XY.m128d_f64[1];
          uVar22 = (ulonglong)((uint)(uVar21 >> 0x20) & 0x1ff);
          auVar97 = blendpd((undefined1  [16])local_398.TotalTransform.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_398.TotalTransform.Rotation.ZW.m128d_f64,2);
          dVar19 = local_398.TotalTransform.Rotation.ZW.m128d_f64[1];
          lVar6 = *(longlong *)(pFVar7 + (uVar21 >> 0x29) * 8);
          pdVar2 = (double *)(lVar6 + uVar22 * 0x18);
          dVar95 = *pdVar2 * local_398.TotalTransform.Scale3D.XY.m128d_f64[0];
          dVar99 = pdVar2[1] * local_398.TotalTransform.Scale3D.XY.m128d_f64[1];
          uVar25 = (ulonglong)((uint)uVar21 & 0x1ff);
          lVar8 = *(longlong *)(pFVar7 + ((uVar21 & 0xffffffff) >> 9) * 8);
          dVar12 = *(double *)(lVar6 + 0x10 + uVar22 * 0x18) *
                   local_398.TotalTransform.Scale3D.ZW.m128d_f64[0];
          uVar81 = SUB84(local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0,0);
          uVar82 = (undefined4)
                   ((ulonglong)(local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0) >> 0x20);
          uVar98 = SUB84(dVar99,0);
          auVar89._8_4_ = uVar98;
          auVar89._0_8_ = dVar95;
          uVar101 = (undefined4)((ulonglong)dVar99 >> 0x20);
          auVar89._12_4_ = uVar101;
          auVar40._8_4_ = uVar98;
          auVar40._0_8_ = dVar95;
          auVar40._12_4_ = uVar101;
          auVar63._8_4_ = uVar98;
          auVar63._0_8_ = dVar95;
          auVar63._12_4_ = uVar101;
          dVar14 = local_398.TotalTransform.Rotation.XY.m128d_f64[0];
          auVar51._8_4_ = uVar81;
          auVar51._0_8_ = dVar12;
          auVar51._12_4_ = uVar82;
          auVar51 = blendpd(auVar63,auVar51,2);
          auVar90._0_8_ = auVar89._8_8_ * dVar14 - dVar95 * dVar16;
          auVar90._8_8_ = dVar12 * dVar16 - auVar40._8_8_ * dVar18;
          auVar41._8_4_ = uVar81;
          auVar41._0_8_ = dVar12;
          auVar41._12_4_ = uVar82;
          dVar105 = auVar97._0_8_;
          dVar106 = auVar97._8_8_;
          auVar64._0_8_ = auVar51._0_8_ * dVar18 - dVar12 * dVar105;
          auVar64._8_8_ = auVar51._8_8_ * dVar19 - auVar41._8_8_ * dVar106;
          auVar51 = blendpd(auVar90,auVar64,2);
          auVar91._0_8_ = auVar51._0_8_ + auVar51._0_8_;
          auVar91._8_8_ = auVar51._8_8_ + auVar51._8_8_;
          dVar17 = auVar90._8_8_ + auVar90._8_8_;
          dVar9 = auVar64._0_8_ + auVar64._0_8_;
          uVar81 = SUB84(dVar9,0);
          uVar82 = (undefined4)((ulonglong)dVar9 >> 0x20);
          auVar77._8_4_ = uVar81;
          auVar77._0_8_ = dVar17;
          auVar77._12_4_ = uVar82;
          auVar42._8_4_ = uVar81;
          auVar42._0_8_ = dVar17;
          auVar42._12_4_ = uVar82;
          auVar65._8_4_ = uVar81;
          auVar65._0_8_ = dVar17;
          auVar65._12_4_ = uVar82;
          auVar51 = blendpd(auVar65,auVar91,2);
          pdVar2 = (double *)(lVar8 + uVar25 * 0x18);
          auVar78._0_8_ = auVar77._8_8_ * dVar14 - dVar17 * dVar16;
          auVar78._8_8_ = auVar91._0_8_ * dVar16 - auVar42._8_8_ * dVar18;
          dVar96 = *pdVar2 * local_398.TotalTransform.Scale3D.XY.m128d_f64[0];
          dVar100 = pdVar2[1] * local_398.TotalTransform.Scale3D.XY.m128d_f64[1];
          auVar43._8_4_ = SUB84(auVar91._8_8_,0);
          auVar43._0_8_ = auVar91._0_8_;
          auVar43._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
          dVar13 = *(double *)(lVar8 + 0x10 + uVar25 * 0x18) *
                   local_398.TotalTransform.Scale3D.ZW.m128d_f64[0];
          uVar81 = SUB84(local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0,0);
          uVar82 = (undefined4)
                   ((ulonglong)(local_398.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0) >> 0x20);
          auVar66._0_8_ = auVar51._0_8_ * dVar18 - auVar91._0_8_ * dVar105;
          auVar66._8_8_ = auVar51._8_8_ * dVar19 - auVar43._8_8_ * dVar106;
          auVar44._8_4_ = SUB84(auVar78._8_8_,0);
          auVar44._0_8_ = auVar78._0_8_;
          auVar44._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
          auVar51 = blendpd(auVar78,auVar66,2);
          local_3c0 = auVar91._0_8_ * dVar19 + dVar12 + auVar51._0_8_ +
                      local_398.TotalTransform.Translation.ZW.m128d_f64[0];
          dVar9 = dVar9 * dVar19 + dVar99 + auVar66._0_8_ +
                  local_398.TotalTransform.Translation.XY.m128d_f64[1];
          uVar98 = SUB84(dVar100,0);
          auVar45._8_4_ = uVar98;
          auVar45._0_8_ = dVar96;
          uVar101 = (undefined4)((ulonglong)dVar100 >> 0x20);
          auVar45._12_4_ = uVar101;
          auVar92._8_4_ = uVar98;
          auVar92._0_8_ = dVar96;
          auVar92._12_4_ = uVar101;
          auVar67._8_4_ = uVar98;
          auVar67._0_8_ = dVar96;
          auVar67._12_4_ = uVar101;
          auVar97._8_4_ = uVar81;
          auVar97._0_8_ = dVar13;
          auVar97._12_4_ = uVar82;
          auVar51 = blendpd(auVar67,auVar97,2);
          auVar93._0_8_ = auVar92._8_8_ * dVar14 - dVar96 * dVar16;
          auVar93._8_8_ = dVar13 * dVar16 - auVar45._8_8_ * dVar18;
          local_3d0._8_4_ = SUB84(dVar9,0);
          local_3d0._0_8_ =
               dVar17 * dVar19 + dVar95 + auVar44._8_8_ +
               local_398.TotalTransform.Translation.XY.m128d_f64[0];
          local_3d0._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar46._8_4_ = uVar81;
          auVar46._0_8_ = dVar13;
          auVar46._12_4_ = uVar82;
          local_3e0 = local_398.bDepthTested;
          auVar68._0_8_ = auVar51._0_8_ * dVar18 - dVar13 * dVar105;
          auVar68._8_8_ = auVar51._8_8_ * dVar19 - auVar46._8_8_ * dVar106;
          auVar51 = blendpd(auVar93,auVar68,2);
          dVar17 = auVar93._8_8_ + auVar93._8_8_;
          dVar9 = auVar68._0_8_ + auVar68._0_8_;
          uVar81 = SUB84(dVar9,0);
          uVar82 = (undefined4)((ulonglong)dVar9 >> 0x20);
          auVar94._0_8_ = auVar51._0_8_ + auVar51._0_8_;
          auVar94._8_8_ = auVar51._8_8_ + auVar51._8_8_;
          auVar79._8_4_ = uVar81;
          auVar79._0_8_ = dVar17;
          auVar79._12_4_ = uVar82;
          auVar47._8_4_ = uVar81;
          auVar47._0_8_ = dVar17;
          auVar47._12_4_ = uVar82;
          auVar69._8_4_ = uVar81;
          auVar69._0_8_ = dVar17;
          auVar69._12_4_ = uVar82;
          auVar51 = blendpd(auVar69,auVar94,2);
          auVar80._0_8_ = auVar79._8_8_ * dVar14 - dVar17 * dVar16;
          auVar80._8_8_ = auVar94._0_8_ * dVar16 - auVar47._8_8_ * dVar18;
          auVar48._8_4_ = SUB84(auVar94._8_8_,0);
          auVar48._0_8_ = auVar94._0_8_;
          auVar48._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
          auVar70._0_8_ = auVar51._0_8_ * dVar18 - auVar94._0_8_ * dVar105;
          auVar70._8_8_ = auVar51._8_8_ * dVar19 - auVar48._8_8_ * dVar106;
          auVar49._8_4_ = SUB84(auVar80._8_8_,0);
          auVar49._0_8_ = auVar80._0_8_;
          auVar49._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
          dVar9 = dVar9 * dVar19 + dVar100 + auVar70._0_8_ +
                  local_398.TotalTransform.Translation.XY.m128d_f64[1];
          auVar51 = blendpd(auVar80,auVar70,2);
          local_3b8._8_4_ = SUB84(dVar9,0);
          local_3b8._0_8_ =
               dVar17 * dVar19 + dVar96 + auVar49._8_8_ +
               local_398.TotalTransform.Translation.XY.m128d_f64[0];
          local_3b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_3a8 = auVar94._0_8_ * dVar19 + dVar13 + auVar51._0_8_ +
                      local_398.TotalTransform.Translation.ZW.m128d_f64[0];
          local_3e8 = local_398.LineThickness;
          (**(code **)(local_398._padding_ + 8))
                    (&local_398,local_3b8,local_3d0,&local_398.LineColor);
          puVar24 = puVar24 + 1;
        }
        FToolDataVisualizer::EndFrame(&local_398);
        FToolDataVisualizer::~FToolDataVisualizer(&local_398);
      }
    }
    else {
      FToolDataVisualizer::FToolDataVisualizer(&local_268);
      local_268.bDepthTested = false;
      FToolDataVisualizer::BeginFrame(&local_268,param_1);
      pTVar20 = (TTransform<double> *)
                (**(code **)(*(longlong *)this->_padding_ + 0x80))
                          ((longlong *)this->_padding_,local_138);
      FToolDataVisualizer::PushTransform(&local_268,pTVar20);
      this_00 = (UDynamicMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x90));
      local_3b8._8_8_ = this;
      local_3b8._0_8_ = &local_268;
      local_3d0._8_8_ = local_3b8;
      local_3d0._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::PreviewRender'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      UDynamicMesh::ProcessMesh
                (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                         local_3d0);
      FToolDataVisualizer::EndFrame(&local_268);
      FToolDataVisualizer::~FToolDataVisualizer(&local_268);
    }
  }
  return;
}

// UpdateTransform @ 14cbbc960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicMeshPolygroupTransformer::UpdateTransform
          (FDynamicMeshPolygroupTransformer *this,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TTransform<double>_const_&)>
          *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UDynamicMesh *this_00;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  undefined4 local_128 [2];
  undefined8 local_120;
  longlong local_118;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TTransform<double>_const_&)>
  local_110;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  code *local_f0;
  FDynamicMeshPolygroupTransformer **local_e8;
  FDynamicMeshPolygroupTransformer *local_e0;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TTransform<double>_const_&)>
  *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (this->bFallbackToSimpleTransform == false) {
    iVar2 = (int)this->_padding_;
    (**(code **)(*(longlong *)this->_padding_ + 0x80))((longlong *)this->_padding_,local_a8);
    uVar9 = 0;
    local_118 = (longlong)iVar2;
    if (0 < iVar2) {
      lVar8 = 0;
      lVar10 = 0;
      do {
        uVar7 = ~uVar9 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = this->_padding_;
        uVar6 = 0;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_128[0] = *(undefined4 *)(this->_padding_ + lVar8 * 4);
        (**(code **)param_1)
                  (&local_c8,*(undefined8 *)&param_1->field_0x8,local_128,
                   lVar3 + (longlong)(int)uVar9 * 0x18);
        uVar6 = 0;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar6 = uVar7;
        }
        local_120 = local_b8;
        local_100 = local_c8;
        uStack_fc = uStack_c4;
        uStack_f8 = uStack_c0;
        uStack_f4 = uStack_bc;
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = this->_padding_;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 1;
        puVar1 = (undefined4 *)(lVar10 + lVar3);
        *puVar1 = local_100;
        puVar1[1] = uStack_fc;
        puVar1[2] = uStack_f8;
        puVar1[3] = uStack_f4;
        *(undefined8 *)(lVar10 + 0x10 + lVar3) = local_120;
        lVar10 = lVar10 + 0x18;
      } while (lVar8 < local_118);
    }
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x90));
    local_d0 = local_a8;
    local_e8 = &local_e0;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_e0 = this;
    local_d8 = param_1;
    UDynamicMesh::EditMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_f0,
               DeformationEdit,NormalsTangents|VertexPositions,false);
  }
  else {
    local_110._0_8_ = *(undefined8 *)param_1;
    local_110._8_8_ = *(undefined8 *)&param_1->field_0x8;
    FBasicDynamicMeshSelectionTransformer::UpdateTransform
              ((FBasicDynamicMeshSelectionTransformer *)this,&local_110);
  }
  return;
}

