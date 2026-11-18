// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 49

// ~FBaseDynamicMeshSelector @ 14cb642e0

void __thiscall FBaseDynamicMeshSelector::~FBaseDynamicMeshSelector(FBaseDynamicMeshSelector *this)

{
  FDelegateHandle FVar1;
  FColliderMesh *pFVar2;
  FGroupTopology *pFVar3;
  FSegmentTree3 *pFVar4;
  longlong *plVar5;
  bool bVar6;
  UObject *pUVar7;
  longlong *plVar8;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->_padding_ = (longlong)&___7FBaseDynamicMeshSelector__6B_;
  bVar6 = FWeakObjectPtr::IsValid(&(this->TargetMesh).WeakPtr);
  if (bVar6) {
    `FBaseDynamicMeshSelector::~FBaseDynamicMeshSelector'::__l5::<lambda_1>::operator()(&local_res8)
    ;
    bVar6 = FWeakObjectPtr::IsValid(&(this->TargetMesh).WeakPtr);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
      FVar1.ID = (this->TargetMesh_OnMeshChangedHandle).ID;
      if (FVar1.ID != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[2].field_0x10,FVar1
                  );
      }
      (this->TargetMesh_OnMeshChangedHandle).ID = 0;
      pFVar2 = (this->ColliderMesh).Ptr;
      if (pFVar2 != (FColliderMesh *)0x0) {
        (this->ColliderMesh).Ptr = (FColliderMesh *)0x0;
        (**(code **)&pFVar2[-1].AABBTree.IndexList.Blocks.ArrayNum)();
      }
      pFVar3 = (this->GroupTopology).Ptr;
      if (pFVar3 != (FGroupTopology *)0x0) {
        (this->GroupTopology).Ptr = (FGroupTopology *)0x0;
        (*(code *)pFVar3[-1].CurrentExtraCornerVids.Hash.SecondaryData)();
      }
      pFVar4 = (this->GroupEdgeSegmentTree).Ptr;
      if (pFVar4 != (FSegmentTree3 *)0x0) {
        (this->GroupEdgeSegmentTree).Ptr = (FSegmentTree3 *)0x0;
        (**(code **)&pFVar4[-1].SegmentsEnd)();
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->TargetMesh).WeakPtr = local_res8;
  }
  pFVar4 = (this->GroupEdgeSegmentTree).Ptr;
  if (pFVar4 != (FSegmentTree3 *)0x0) {
    (**(code **)&pFVar4[-1].SegmentsEnd)(&pFVar4[-1].SegmentsEnd);
  }
  pFVar3 = (this->GroupTopology).Ptr;
  if (pFVar3 != (FGroupTopology *)0x0) {
    (*(code *)pFVar3[-1].CurrentExtraCornerVids.Hash.SecondaryData)
              (&pFVar3[-1].CurrentExtraCornerVids.Hash.SecondaryData);
  }
  pFVar2 = (this->ColliderMesh).Ptr;
  if (pFVar2 != (FColliderMesh *)0x0) {
    (**(code **)&pFVar2[-1].AABBTree.IndexList.Blocks.ArrayNum)
              (&pFVar2[-1].AABBTree.IndexList.Blocks.ArrayNum);
  }
  if (*(longlong *)&this->GetWorldTransformFunc != 0) {
    plVar5 = *(longlong **)&(this->GetWorldTransformFunc).field_0x28;
    plVar8 = (longlong *)&(this->GetWorldTransformFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  IGeometrySelector::~IGeometrySelector((IGeometrySelector *)this);
  return;
}

// operator() @ 14cb67170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FBaseDynamicMeshSelector::AccumulateElementsFromPredicate'::__l2::<lambda_1>::operator()
          (void *this,EGeometryElementType param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_c8 [32];
  undefined8 local_98;
  EGeometryElementType local_90;
  code *local_88;
  undefined8 *local_80;
  EGeometryElementType local_78;
  int local_74;
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_74 = (*(char *)((longlong)this + 0x1a) != '\0') + 1;
  local_68 = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_98 = *(undefined8 *)((longlong)this + 0x10);
  local_80 = &local_98;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<``FBaseDynamicMeshSelector::AccumulateElementsFromPredicate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
             ::Call;
  local_90 = param_1;
  local_78 = param_1;
  (**(code **)(**(longlong **)this + 0x48))(*(longlong **)this,&local_78,&local_88,0);
  (**(code **)(**(longlong **)this + 0xa0))();
  local_28 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  uVar1 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar2 = local_60.MaxBits;
  uStack_40 = 0xffffffff;
  local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// operator() @ 14cb69dc0

void __thiscall
`FBaseDynamicMeshSelector::InitializeSelectionFromPredicate'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  undefined2 local_28;
  bool local_24;
  TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> local_20;
  
  if (**(int **)this == 1) {
    local_38._8_8_ = local_res8;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``FBaseDynamicMeshSelector::InitializeSelectionFromPredicate'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,bool,UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID>
         ::Call;
    local_20._0_8_ = **(undefined8 **)((longlong)this + 0x18);
    local_20._8_8_ = (*(undefined8 **)((longlong)this + 0x18))[1];
    UE::Geometry::MakeSelectAllConnectedSelection
              (param_1,(FGroupTopology *)**(undefined8 **)((longlong)this + 8),
               (FGeometrySelection *)**(undefined8 **)((longlong)this + 0x10),&local_20,
               (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID)>
                *)local_38,*(FGeometrySelection **)((longlong)this + 0x20));
    return;
  }
  if (**(int **)this == 2) {
    local_38._0_8_ = (FGeometrySelection *)0x0;
    local_38._8_8_ = &DAT_400000002;
    local_28._0_1_ = true;
    local_28._1_1_ = false;
    local_24 = false;
    UE::Geometry::FGeometrySelectionEditor::Initialize
              ((FGeometrySelectionEditor *)local_38,
               (FGeometrySelection *)**(undefined8 **)((longlong)this + 0x10),
               ((FGeometrySelection *)**(undefined8 **)((longlong)this + 0x10))->TopologyType ==
               Polygroup);
    local_20._0_8_ = **(undefined8 **)((longlong)this + 0x18);
    local_20._8_8_ = (*(undefined8 **)((longlong)this + 0x18))[1];
    UE::Geometry::MakeBoundaryConnectedSelection
              (param_1,(FGroupTopology *)**(undefined8 **)((longlong)this + 8),
               (FGeometrySelection *)**(undefined8 **)((longlong)this + 0x10),&local_20,
               *(FGeometrySelection **)((longlong)this + 0x20));
    return;
  }
  local_20._0_8_ = **(undefined8 **)((longlong)this + 0x18);
  local_20._8_8_ = (*(undefined8 **)((longlong)this + 0x18))[1];
  UE::Geometry::MakeSelectAllSelection
            (param_1,(FGroupTopology *)**(undefined8 **)((longlong)this + 8),&local_20,
             *(FGeometrySelection **)((longlong)this + 0x20));
  return;
}

// operator() @ 14cb6af10

void __thiscall
`FBaseDynamicMeshSelector::UpdateColliderMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FBuildOptions local_res8 [2];
  longlong local_18 [2];
  
  local_res8[0].bBuildVertexMap = true;
  local_res8[0].bBuildTriangleMap = true;
  local_res8[0].bBuildAABBTree = true;
  puVar2 = ::operator_new(0x120);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FColliderMesh>;
    UE::Geometry::FColliderMesh::FColliderMesh((FColliderMesh *)(puVar2 + 2),param_1,local_res8);
  }
  plVar3 = (longlong *)(*(longlong *)this + 0xa0);
  if (local_18 == plVar3) {
    if (puVar2 + 2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)(puVar2);
    }
  }
  else {
    lVar1 = *plVar3;
    *plVar3 = (longlong)(puVar2 + 2);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      return;
    }
  }
  return;
}

// operator() @ 14cb6afd0

void __thiscall
`FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  int iVar2;
  FSegmentTree3 *this_00;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong local_58;
  ForAnyElementType local_50;
  int local_48 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  lVar9 = **(longlong **)this;
  lVar11 = *(longlong *)(lVar9 + 0x60);
  iVar1 = *(int *)(lVar9 + 0x68);
  pFVar8 = (ForAnyElementType *)(lVar11 + 0x20);
  lVar10 = (longlong)iVar1 * 0x50 + lVar11;
  while( true ) {
    if (*(int *)(lVar9 + 0x68) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupEdge_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar11 == lVar10) break;
    if (&local_50 == pFVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar2 = *(int *)&pFVar8[1].Data;
    if (iVar2 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar2,&local_50,local_48,local_48 + 1);
      memcpy(local_50.Data + (longlong)iVar5 * 4,pFVar8->Data,(longlong)iVar2 << 2);
    }
    lVar11 = lVar11 + 0x50;
    pFVar8 = pFVar8 + 10;
  }
  puVar6 = ::operator_new(0x90);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FSegmentTree3>;
    puVar6[1] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 2) = 8;
    puVar6[4] = 0;
    puVar6[9] = 0;
    puVar6[6] = &
                ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    puVar6[7] = `UE::Geometry::FSegmentTree3::MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
    if (puVar6 + 7 != (undefined8 *)0x0) {
      puVar6[4] = UE::Core::Private::Function::
                  TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
                  ::Call;
    }
    puVar6[10] = 0;
    puVar6[0x11] = 0x3e45798ee2308c3a;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0xffffffffffffffff;
  }
  plVar7 = (longlong *)(*(longlong *)((longlong)this + 8) + 0xb0);
  if (&local_58 == plVar7) {
    if (puVar6 + 2 == (undefined8 *)0x0) goto LAB_14cb6b1a7;
  }
  else {
    lVar9 = *plVar7;
    *plVar7 = (longlong)(puVar6 + 2);
    if (lVar9 == 0) goto LAB_14cb6b1a7;
    puVar6 = (undefined8 *)(lVar9 + -0x10);
  }
  (*(code *)*puVar6)();
LAB_14cb6b1a7:
  _Src.Data = local_50.Data;
  lVar9 = (longlong)local_48[0];
  iVar1 = (param_1->EdgeRefCounts).UsedCount;
  this_00 = *(FSegmentTree3 **)(*(longlong *)((longlong)this + 8) + 0xb0);
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = local_48[0];
  if (local_48[0] == 0) {
    local_40.ArrayMax = local_48[0];
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_48[0],0,&local_40.AllocatorInstance,local_48[0],&local_40.ArrayMax);
    memcpy(local_40.AllocatorInstance.Data,_Src.Data,lVar9 << 2);
  }
  UE::Geometry::FSegmentTree3::
  Build<TArray<int,TSizedDefaultAllocator<32>_>,__FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (this_00,&local_40,(<lambda_1>)param_1,iVar1);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// operator() @ 14cb6b3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionFromSelection'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FGeometrySelection *pFVar1;
  FGeometrySelectionDelta *pFVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  FGroupTopology *pFVar6;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 auStackY_c8 [32];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar1 = *(FGeometrySelection **)((longlong)this + 0x18);
  local_80._0_8_ = (FScriptContainerElement *)0x0;
  local_80._8_8_ = 0;
  local_60 = (void *)0x0;
  local_58 = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  local_88._4_4_ = ((EGeometryElementType *)**(undefined8 **)this)[1];
  local_88._0_4_ = *(EGeometryElementType *)**(undefined8 **)this;
  pFVar6 = FBaseDynamicMeshSelector::GetGroupTopology
                     (*(FBaseDynamicMeshSelector **)((longlong)this + 0x10));
  bVar5 = UE::Geometry::ConvertSelection
                    (param_1,pFVar6,pFVar1,(FGeometrySelection *)local_88,ContainSelection);
  *(bool *)*(undefined8 *)((longlong)this + 8) = bVar5;
  if (**(char **)((longlong)this + 8) != '\0') {
    pFVar2 = (FGeometrySelectionDelta *)**(undefined8 **)((longlong)this + 0x28);
    pTVar7 = TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Array
                       ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                         *)local_80,&local_98);
    UE::Geometry::UpdateSelectionWithNewElements
              (*(FGeometrySelectionEditor **)this,
               **(EGeometrySelectionChangeType **)((longlong)this + 0x20),pTVar7,pFVar2);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  local_38 = 0;
  if (local_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40);
  }
  iVar3 = SUB84(local_80._8_8_,4);
  local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
  }
  uVar4 = local_58._4_4_;
  uStack_50 = 0xffffffff;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  if (0x80 < uVar4) {
    local_58 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  return;
}

// operator() @ 14cb6b540

bool __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double> local_88 [5];
  
  dVar1 = *(double *)((longlong)this + 0xd8);
  dVar2 = *(double *)((longlong)this + 0xd0);
  local_b8._s_0.Y = dVar2 * (param_3->field0_0x0)._s_0.Y;
  dVar3 = *(double *)((longlong)this + 200);
  local_b8._s_0.X = dVar3 * (param_3->field0_0x0)._s_0.X;
  local_b8._s_0.Z = dVar1 * (param_3->field0_0x0)._s_0.Z;
  pTVar5 = UE::Geometry::operator*<double>
                     (local_88,(TQuaternion<double> *)((longlong)this + 0x90),
                      (TVector<double> *)&local_b8._s_0);
  local_b8._s_0.X = dVar3 * (param_2->field0_0x0)._s_0.X;
  local_b8._s_0.Y = dVar2 * (param_2->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = dVar1 * (param_2->field0_0x0)._s_0.Z;
  dVar1 = *(double *)((longlong)this + 0xb0);
  dVar2 = *(double *)((longlong)this + 0xb8);
  local_a0._s_0.X = dVar1 + (pTVar5->field0_0x0)._s_0.X;
  dVar3 = *(double *)((longlong)this + 0xc0);
  local_a0._s_0.Y = dVar2 + (pTVar5->field0_0x0)._s_0.Y;
  local_a0._s_0.Z = dVar3 + (pTVar5->field0_0x0)._s_0.Z;
  pTVar5 = UE::Geometry::operator*<double>
                     (local_88,(TQuaternion<double> *)((longlong)this + 0x90),
                      (TVector<double> *)&local_b8._s_0);
  local_b8._s_0.X = dVar1 + (pTVar5->field0_0x0)._s_0.X;
  local_b8._s_0.Y = dVar2 + (pTVar5->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = dVar3 + (pTVar5->field0_0x0)._s_0.Z;
  bVar4 = ToolSceneQueriesUtil::PointSnapQuery
                    ((FViewCameraState *)((longlong)this + 0x30),(TVector<double> *)&local_b8._s_0,
                     (TVector<double> *)&local_a0._s_0,0.0);
  return bVar4;
}

// operator() @ 14cb6bc30

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::operator()
          (void *this,EGeometrySelectionChangeType param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  UDynamicMesh *this_00;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined1 local_res10 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_58;
  uint local_48 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_40;
  code *local_38;
  uint *local_30;
  
  if (Remove < param_1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8165591483852783308>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\DynamicMeshSelector.cpp"
                       ,0x134,
                       "ChangeType == EGeometrySelectionChangeType::Add || ChangeType == EGeometrySelectionChangeType::Remove"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar6 = 0x18;
  if (param_1 != Add) {
    lVar6 = 8;
  }
  puVar7 = (undefined8 *)(lVar6 + *(longlong *)((longlong)this + 0x10));
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  puVar8 = (uint *)*puVar7;
  iVar2 = *(int *)(puVar7 + 1);
  puVar1 = puVar8 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)(puVar7 + 1) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar8 == puVar1) break;
    uVar3 = *puVar8;
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x90));
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<``FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::operator()'::__l6::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_48[0] = (uVar3 & 0xfffffff) << 2 | uVar3 >> 0x1e;
    local_40 = &local_58;
    local_30 = local_48;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    puVar8 = puVar8 + 2;
  }
  UE::Geometry::UpdateSelectionWithNewElements
            (*(FGeometrySelectionEditor **)((longlong)this + 8),param_1,&local_58,
             (FGeometrySelectionDelta *)(*(longlong *)((longlong)this + 0x10) + 8));
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cb6c1a0

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l10::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  TQuaternion<double> *pTVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float local_res10 [2];
  ulonglong local_88;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  TVector<double> local_38;
  
  uVar11 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar13 = 0;
  if ((uVar11 != 0) &&
     (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar11) {
      do {
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar12 >> 9) * 8);
        if ((*(short *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
           (uVar13 = uVar12, *(short *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
        uVar12 = uVar12 + 1;
        uVar13 = uVar12;
      } while ((int)uVar12 < (int)uVar11);
    }
  }
joined_r0x00014cb6c228:
  do {
    if (uVar13 == uVar11) {
      return;
    }
    while( true ) {
      pTVar5 = *(TQuaternion<double> **)this;
      lVar4 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
      pdVar2 = (double *)(lVar4 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
      local_50 = *pdVar2;
      dStack_48 = pdVar2[1];
      local_40 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
      local_80._s_0.X = local_50 * pTVar5[1].field0_0x0._s_0.W;
      local_80._s_0.Z = local_40 * pTVar5[2].field0_0x0._s_0.Y;
      local_80._s_0.Y = dStack_48 * pTVar5[2].field0_0x0._s_0.X;
      pTVar10 = UE::Geometry::operator*<double>(&local_38,pTVar5,(TVector<double> *)&local_80._s_0);
      local_68._s_0.Z = pTVar5[1].field0_0x0._s_0.Z + (pTVar10->field0_0x0)._s_0.Z;
      local_68._s_0.Y = pTVar5[1].field0_0x0._s_0.Y + (pTVar10->field0_0x0)._s_0.Y;
      local_68._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar10->field0_0x0)._s_0.X;
      local_res10[0] = 0.0;
      bVar8 = FConvexVolume::IntersectSphere
                        (*(FConvexVolume **)((longlong)this + 8),(TVector<double> *)&local_68._s_0,
                         local_res10);
      if (bVar8) {
        pFVar6 = *(ForAnyElementType **)((longlong)this + 0x10);
        local_88 = (ulonglong)uVar13;
        if (((pFVar6->Data <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8)) &&
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
        iVar9 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar9 + 1;
        *(ulonglong *)(pFVar6->Data + (longlong)iVar9 * 8) = local_88;
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar11 <= (int)uVar13) break;
      pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar13 >> 9) * 8) +
                       (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
        uVar13 = uVar13 + 1;
        if ((int)uVar11 <= (int)uVar13) goto joined_r0x00014cb6c228;
      }
    }
  } while( true );
}

// operator() @ 14cb6d7e0

bool __thiscall
`FBaseDynamicMeshSelector::RayHitTest'::__l14::<lambda_2>::operator()
          (void *this,int param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double> local_88 [5];
  
  dVar1 = *(double *)((longlong)this + 0xd8);
  dVar2 = *(double *)((longlong)this + 0xd0);
  local_b8._s_0.Y = dVar2 * (param_3->field0_0x0)._s_0.Y;
  dVar3 = *(double *)((longlong)this + 200);
  local_b8._s_0.X = dVar3 * (param_3->field0_0x0)._s_0.X;
  local_b8._s_0.Z = dVar1 * (param_3->field0_0x0)._s_0.Z;
  pTVar5 = UE::Geometry::operator*<double>
                     (local_88,(TQuaternion<double> *)((longlong)this + 0x90),
                      (TVector<double> *)&local_b8._s_0);
  local_b8._s_0.X = dVar3 * (param_2->field0_0x0)._s_0.X;
  local_b8._s_0.Y = dVar2 * (param_2->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = dVar1 * (param_2->field0_0x0)._s_0.Z;
  dVar1 = *(double *)((longlong)this + 0xb0);
  dVar2 = *(double *)((longlong)this + 0xb8);
  local_a0._s_0.X = dVar1 + (pTVar5->field0_0x0)._s_0.X;
  dVar3 = *(double *)((longlong)this + 0xc0);
  local_a0._s_0.Y = dVar2 + (pTVar5->field0_0x0)._s_0.Y;
  local_a0._s_0.Z = dVar3 + (pTVar5->field0_0x0)._s_0.Z;
  pTVar5 = UE::Geometry::operator*<double>
                     (local_88,(TQuaternion<double> *)((longlong)this + 0x90),
                      (TVector<double> *)&local_b8._s_0);
  local_b8._s_0.X = dVar1 + (pTVar5->field0_0x0)._s_0.X;
  local_b8._s_0.Y = dVar2 + (pTVar5->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = dVar3 + (pTVar5->field0_0x0)._s_0.Z;
  bVar4 = ToolSceneQueriesUtil::PointSnapQuery
                    ((FViewCameraState *)((longlong)this + 0x30),(TVector<double> *)&local_b8._s_0,
                     (TVector<double> *)&local_a0._s_0,0.0);
  return bVar4;
}

// operator() @ 14cb6d960

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l14::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  double *pdVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  TQuaternion<double> *pTVar6;
  ulonglong uVar7;
  ForAnyElementType *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float local_res10 [2];
  float local_res18 [4];
  ulonglong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double> local_80;
  TVector<double> local_68 [2];
  
  uVar18 = (param_1->EdgeRefCounts).RefCounts.CurBlockUsed +
           (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  uVar17 = 0;
  if ((uVar18 != 0) &&
     (pFVar4 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar17 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar16 = 1;
    uVar17 = 1;
    if (1 < (int)uVar18) {
      do {
        lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar16 >> 9) * 8);
        if ((*(short *)(lVar5 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
           (uVar17 = uVar16, *(short *)(lVar5 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
        uVar16 = uVar16 + 1;
        uVar17 = uVar16;
      } while ((int)uVar16 < (int)uVar18);
    }
  }
joined_r0x00014cb6d9ea:
  do {
    if (uVar17 == uVar18) {
      return;
    }
    while( true ) {
      pFVar4 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
      pTVar6 = *(TQuaternion<double> **)this;
      uVar7 = *(ulonglong *)
               (*(longlong *)
                 ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8) +
               (ulonglong)(uVar17 & 0x1ff) * 0x10);
      uVar14 = (ulonglong)((uint)uVar7 & 0x1ff);
      lVar5 = *(longlong *)(pFVar4 + ((uVar7 & 0xffffffff) >> 9) * 8);
      pdVar2 = (double *)(lVar5 + uVar14 * 0x18);
      local_e0._s_0.X = *pdVar2;
      local_e0._s_0.Y = pdVar2[1];
      local_e0._s_0.Z = *(double *)(lVar5 + 0x10 + uVar14 * 0x18);
      uVar14 = (ulonglong)((uint)(uVar7 >> 0x20) & 0x1ff);
      lVar5 = *(longlong *)(pFVar4 + (uVar7 >> 0x29) * 8);
      pdVar2 = (double *)(lVar5 + uVar14 * 0x18);
      dVar10 = *pdVar2;
      dVar11 = pdVar2[1];
      local_c8._s_0.Z = *(double *)(lVar5 + 0x10 + uVar14 * 0x18);
      local_b0._s_0.X = local_e0._s_0.X * pTVar6[1].field0_0x0._s_0.W;
      local_b0._s_0.Y = local_e0._s_0.Y * pTVar6[2].field0_0x0._s_0.X;
      local_b0._s_0.Z = local_e0._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      local_c8._s_0.X = dVar10;
      local_c8._s_0.Y = dVar11;
      pTVar15 = UE::Geometry::operator*<double>(&local_80,pTVar6,(TVector<double> *)&local_b0._s_0);
      local_e0._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      local_e0._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      local_e0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      local_98._s_0.X = dVar10 * pTVar6[1].field0_0x0._s_0.W;
      local_98._s_0.Y = dVar11 * pTVar6[2].field0_0x0._s_0.X;
      local_98._s_0.Z = local_c8._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      pTVar15 = UE::Geometry::operator*<double>(local_68,pTVar6,(TVector<double> *)&local_98._s_0);
      local_c8._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      local_c8._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      local_c8._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      bVar12 = FConvexVolume::IntersectLineSegment
                         (*(FConvexVolume **)((longlong)this + 8),(TVector<double> *)&local_e0._s_0,
                          (TVector<double> *)&local_c8._s_0);
      if (bVar12) {
        local_res10[0] = 0.0;
        bVar12 = FConvexVolume::IntersectSphere
                           (*(FConvexVolume **)((longlong)this + 8),
                            (TVector<double> *)&local_e0._s_0,local_res10);
        if (bVar12) {
          local_res18[0] = 0.0;
          bVar12 = FConvexVolume::IntersectSphere
                             (*(FConvexVolume **)((longlong)this + 8),
                              (TVector<double> *)&local_c8._s_0,local_res18);
          if (bVar12) {
            pFVar8 = *(ForAnyElementType **)((longlong)this + 0x10);
            uVar3 = *(uint *)(*(longlong *)
                               ((param_1->Edges).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar17 >> 9) * 8) + 8 +
                             (ulonglong)(uVar17 & 0x1ff) * 0x10);
            uVar16 = uVar3 * 4;
            lVar5 = *(longlong *)
                     ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar3 >> 9) * 8);
            local_f0 = *(undefined8 *)(lVar5 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
            local_e8 = *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
            if ((uint)local_f0 != uVar17) {
              uVar16 = uVar16 | ((uint)((ulonglong)local_f0 >> 0x20) != uVar17) + 1;
            }
            local_f8 = (ulonglong)(uVar16 >> 2 | uVar16 << 0x1e);
            if (((pFVar8->Data <= (FScriptContainerElement *)&local_f8) &&
                ((FScriptContainerElement *)&local_f8 <
                 pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 8)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar13 = *(int *)&pFVar8[1].Data;
            piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,pFVar8,piVar1);
            }
            *(int *)&pFVar8[1].Data = iVar13 + 1;
            *(ulonglong *)(pFVar8->Data + (longlong)iVar13 * 8) = local_f8;
          }
        }
      }
      uVar17 = uVar17 + 1;
      if ((int)uVar18 <= (int)uVar17) break;
      pFVar4 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) +
                       (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
        uVar17 = uVar17 + 1;
        if ((int)uVar18 <= (int)uVar17) goto joined_r0x00014cb6d9ea;
      }
    }
  } while( true );
}

// operator() @ 14cb6e5a0

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l18::<lambda_3>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  TQuaternion<double> *pTVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  TVector<double> *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool local_res10 [8];
  ulonglong local_128;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double> local_90;
  TVector<double> local_78;
  TVector<double> local_60 [2];
  
  uVar17 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar19 = 0;
  if ((uVar17 != 0) &&
     (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar19 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar18 = 1;
    uVar19 = 1;
    if (1 < (int)uVar17) {
      do {
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8);
        if ((*(short *)(lVar4 + (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
           (uVar19 = uVar18, *(short *)(lVar4 + (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) break;
        uVar18 = uVar18 + 1;
        uVar19 = uVar18;
      } while ((int)uVar18 < (int)uVar17);
    }
  }
joined_r0x00014cb6e628:
  do {
    if (uVar19 == uVar17) {
      return;
    }
    while( true ) {
      pFVar3 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
      uVar14 = (ulonglong)(uVar19 & 0x1ff);
      pTVar5 = *(TQuaternion<double> **)this;
      lVar4 = *(longlong *)
               ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
      uVar18 = *(uint *)(lVar4 + uVar14 * 0xc);
      uVar16 = (ulonglong)(uVar18 & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + uVar16 * 0x18);
      local_f0._s_0.X = *pdVar2;
      local_f0._s_0.Y = pdVar2[1];
      local_f0._s_0.Z =
           *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + 0x10 + uVar16 * 0x18);
      uVar18 = *(uint *)(lVar4 + 4 + uVar14 * 0xc);
      uVar16 = (ulonglong)(uVar18 & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + uVar16 * 0x18);
      dVar8 = *pdVar2;
      dVar9 = pdVar2[1];
      local_108._s_0.Z =
           *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + 0x10 + uVar16 * 0x18);
      uVar18 = *(uint *)(lVar4 + 8 + uVar14 * 0xc);
      uVar14 = (ulonglong)(uVar18 & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + uVar14 * 0x18);
      dVar10 = *pdVar2;
      dVar11 = pdVar2[1];
      local_120._s_0.Z =
           *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + 0x10 + uVar14 * 0x18);
      local_d8._s_0.X = local_f0._s_0.X * pTVar5[1].field0_0x0._s_0.W;
      local_d8._s_0.Y = local_f0._s_0.Y * pTVar5[2].field0_0x0._s_0.X;
      local_d8._s_0.Z = local_f0._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
      local_120._s_0.X = dVar10;
      local_120._s_0.Y = dVar11;
      local_108._s_0.X = dVar8;
      local_108._s_0.Y = dVar9;
      pTVar15 = UE::Geometry::operator*<double>(&local_90,pTVar5,(TVector<double> *)&local_d8._s_0);
      local_f0._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      local_f0._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
      local_f0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
      local_c0._s_0.X = dVar8 * pTVar5[1].field0_0x0._s_0.W;
      local_c0._s_0.Y = dVar9 * pTVar5[2].field0_0x0._s_0.X;
      local_c0._s_0.Z = local_108._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
      pTVar15 = UE::Geometry::operator*<double>(&local_78,pTVar5,(TVector<double> *)&local_c0._s_0);
      local_108._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      local_108._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
      local_108._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
      local_a8._s_0.X = dVar10 * pTVar5[1].field0_0x0._s_0.W;
      local_a8._s_0.Y = dVar11 * pTVar5[2].field0_0x0._s_0.X;
      local_a8._s_0.Z = local_120._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
      pTVar15 = UE::Geometry::operator*<double>(local_60,pTVar5,(TVector<double> *)&local_a8._s_0);
      local_120._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      local_120._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
      local_120._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
      local_res10[0] = false;
      bVar12 = FConvexVolume::IntersectTriangle
                         (*(FConvexVolume **)((longlong)this + 8),(TVector<double> *)&local_f0._s_0,
                          (TVector<double> *)&local_108._s_0,(TVector<double> *)&local_120._s_0,
                          local_res10);
      if ((bVar12) && (local_res10[0] != false)) {
        pFVar6 = *(ForAnyElementType **)((longlong)this + 0x10);
        local_128 = (ulonglong)uVar19;
        if ((pFVar6->Data <= (FScriptContainerElement *)&local_128) &&
           (((FScriptContainerElement *)&local_128 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8 &&
            (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar13 + 1;
        *(ulonglong *)(pFVar6->Data + (longlong)iVar13 * 8) = local_128;
      }
      uVar19 = uVar19 + 1;
      if ((int)uVar17 <= (int)uVar19) break;
      pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) +
                       (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) +
                      (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
        uVar19 = uVar19 + 1;
        if ((int)uVar17 <= (int)uVar19) goto joined_r0x00014cb6e628;
      }
    }
  } while( true );
}

// operator() @ 14cb6e9a0

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l20::<lambda_3>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint local_18;
  
  uVar2 = **(uint **)((longlong)this + 8);
  uVar3 = *(uint *)(*(longlong *)
                     ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8)
                    + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  uVar1 = *(undefined8 *)
           (*(longlong *)
             ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8)
           + (ulonglong)(uVar3 & 0x1ff) * 0xc);
  local_18 = (uint)uVar1;
  if (local_18 == uVar2) {
    **(uint **)this = uVar3 * 4;
    return;
  }
  **(uint **)this = ((uint)((ulonglong)uVar1 >> 0x20) != uVar2) + 1 | uVar3 * 4;
  return;
}

// operator() @ 14cb6ef40

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l25::<lambda_4>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  uint *puVar2;
  double *pdVar3;
  int iVar4;
  longlong lVar5;
  TQuaternion<double> *pTVar6;
  longlong lVar7;
  ForAnyElementType *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TVector<double> *pTVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  float local_res18 [2];
  undefined8 local_98;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  double local_60;
  double dStack_58;
  double local_50;
  TVector<double> local_48;
  
  lVar5 = **(longlong **)this;
  iVar4 = *(int *)(lVar5 + 0x48);
  puVar14 = *(uint **)(lVar5 + 0x40);
  puVar2 = puVar14 + (longlong)iVar4 * 6;
  while( true ) {
    if (*(int *)(lVar5 + 0x48) != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FCorner_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar14 == puVar2) break;
    pTVar6 = *(TQuaternion<double> **)((longlong)this + 8);
    uVar13 = (ulonglong)(*puVar14 & 0x1ff);
    lVar7 = *(longlong *)
             ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(*puVar14 >> 9) * 8);
    pdVar3 = (double *)(lVar7 + uVar13 * 0x18);
    local_60 = *pdVar3;
    dStack_58 = pdVar3[1];
    local_50 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
    local_90._s_0.X = local_60 * pTVar6[1].field0_0x0._s_0.W;
    local_90._s_0.Z = local_50 * pTVar6[2].field0_0x0._s_0.Y;
    local_90._s_0.Y = dStack_58 * pTVar6[2].field0_0x0._s_0.X;
    pTVar12 = UE::Geometry::operator*<double>(&local_48,pTVar6,(TVector<double> *)&local_90._s_0);
    local_78._s_0.Z = pTVar6[1].field0_0x0._s_0.Z + (pTVar12->field0_0x0)._s_0.Z;
    local_78._s_0.Y = pTVar6[1].field0_0x0._s_0.Y + (pTVar12->field0_0x0)._s_0.Y;
    local_78._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar12->field0_0x0)._s_0.X;
    local_res18[0] = 0.0;
    bVar10 = FConvexVolume::IntersectSphere
                       (*(FConvexVolume **)((longlong)this + 0x10),(TVector<double> *)&local_78._s_0
                        ,local_res18);
    if (bVar10) {
      pFVar8 = *(ForAnyElementType **)((longlong)this + 0x18);
      iVar11 = UE::Geometry::FGroupTopology::GetCornerIDFromVertexID
                         ((FGroupTopology *)**(undefined8 **)this,*puVar14);
      local_98 = CONCAT44(iVar11,*puVar14);
      if ((pFVar8->Data <= (FScriptContainerElement *)&local_98) &&
         ((FScriptContainerElement *)&local_98 <
          pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 8)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar11 = *(int *)&pFVar8[1].Data;
      piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar8,piVar1);
      }
      *(int *)&pFVar8[1].Data = iVar11 + 1;
      *(undefined8 *)(pFVar8->Data + (longlong)iVar11 * 8) = local_98;
    }
    puVar14 = puVar14 + 6;
  }
  return;
}

// operator() @ 14cb6f160

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l26::<lambda_4>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint local_18;
  
  uVar2 = **(uint **)((longlong)this + 8);
  uVar3 = *(uint *)(*(longlong *)
                     ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8)
                    + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  uVar1 = *(undefined8 *)
           (*(longlong *)
             ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8)
           + (ulonglong)(uVar3 & 0x1ff) * 0xc);
  local_18 = (uint)uVar1;
  if (local_18 == uVar2) {
    **(uint **)this = uVar3 * 4;
    return;
  }
  **(uint **)this = ((uint)((ulonglong)uVar1 >> 0x20) != uVar2) + 1 | uVar3 * 4;
  return;
}

// operator() @ 14cb6fd80

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l29::<lambda_5>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  TQuaternion<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  ForAnyElementType *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  uint *puVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  TVector<double> *pTVar18;
  uint *puVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  float local_res18 [2];
  float local_res20 [2];
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  uint *local_c8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double> local_90;
  TVector<double> local_78 [2];
  
  uVar20 = 0;
  local_110 = (longlong)*(int *)(**(longlong **)this + 0x68);
  if (0 < local_110) {
    lVar21 = 0;
    local_res10 = param_1;
    do {
      lVar4 = **(longlong **)this;
      uVar15 = 0;
      if ((int)uVar20 < *(int *)(lVar4 + 0x68)) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x60);
      puVar19 = *(uint **)(lVar4 + 0x20 + lVar21);
      iVar16 = *(int *)(lVar4 + 0x28 + lVar21);
      local_c8 = puVar19 + iVar16;
      while( true ) {
        puVar13 = local_c8;
        if (*(int *)(lVar4 + 0x28 + lVar21) != iVar16) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar19 == puVar13) break;
        pTVar5 = *(TQuaternion<double> **)((longlong)this + 8);
        pFVar6 = (local_res10->Vertices).Blocks.AllocatorInstance.Data;
        uVar7 = *(ulonglong *)
                 (*(longlong *)
                   ((local_res10->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(*puVar19 >> 9) * 8) + (ulonglong)(*puVar19 & 0x1ff) * 0x10);
        uVar17 = (ulonglong)((uint)uVar7 & 0x1ff);
        lVar8 = *(longlong *)(pFVar6 + ((uVar7 & 0xffffffff) >> 9) * 8);
        pdVar2 = (double *)(lVar8 + uVar17 * 0x18);
        local_f8._s_0.X = *pdVar2;
        local_f8._s_0.Y = pdVar2[1];
        local_f8._s_0.Z = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
        uVar17 = (ulonglong)((uint)(uVar7 >> 0x20) & 0x1ff);
        lVar8 = *(longlong *)(pFVar6 + (uVar7 >> 0x29) * 8);
        pdVar2 = (double *)(lVar8 + uVar17 * 0x18);
        dVar11 = *pdVar2;
        dVar12 = pdVar2[1];
        local_e0._s_0.Z = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
        local_c0._s_0.X = local_f8._s_0.X * pTVar5[1].field0_0x0._s_0.W;
        local_c0._s_0.Y = local_f8._s_0.Y * pTVar5[2].field0_0x0._s_0.X;
        local_c0._s_0.Z = local_f8._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
        local_e0._s_0.X = dVar11;
        local_e0._s_0.Y = dVar12;
        pTVar18 = UE::Geometry::operator*<double>
                            (&local_90,pTVar5,(TVector<double> *)&local_c0._s_0);
        local_f8._s_0.X = (pTVar18->field0_0x0)._s_0.X + pTVar5[1].field0_0x0._s_0.X;
        local_f8._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
        local_f8._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
        local_a8._s_0.X = dVar11 * pTVar5[1].field0_0x0._s_0.W;
        local_a8._s_0.Y = dVar12 * pTVar5[2].field0_0x0._s_0.X;
        local_a8._s_0.Z = local_e0._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
        pTVar18 = UE::Geometry::operator*<double>(local_78,pTVar5,(TVector<double> *)&local_a8._s_0)
        ;
        local_e0._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
        local_e0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
        local_e0._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar18->field0_0x0)._s_0.X;
        bVar14 = FConvexVolume::IntersectLineSegment
                           (*(FConvexVolume **)((longlong)this + 0x10),
                            (TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_e0._s_0);
        if (!bVar14) goto LAB_14cb7018e;
        local_res18[0] = 0.0;
        bVar14 = FConvexVolume::IntersectSphere
                           (*(FConvexVolume **)((longlong)this + 0x10),
                            (TVector<double> *)&local_f8._s_0,local_res18);
        if (!bVar14) goto LAB_14cb7018e;
        local_res20[0] = 0.0;
        bVar14 = FConvexVolume::IntersectSphere
                           (*(FConvexVolume **)((longlong)this + 0x10),
                            (TVector<double> *)&local_e0._s_0,local_res20);
        if (!bVar14) goto LAB_14cb7018e;
        puVar19 = puVar19 + 1;
      }
      if ((*(int *)(lVar4 + 0x28 + lVar21) < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar3 = **(uint **)(lVar4 + 0x20 + lVar21);
      uVar15 = *(uint *)(*(longlong *)
                          ((local_res10->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar3 >> 9) * 8) + 8 + (ulonglong)(uVar3 & 0x1ff) * 0x10);
      lVar4 = *(longlong *)
               ((local_res10->TriangleEdges).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar15 >> 9) * 8);
      local_108 = *(undefined8 *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      local_100 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      uVar15 = uVar15 * 4;
      if ((uint)local_108 != uVar3) {
        uVar15 = uVar15 | ((uint)((ulonglong)local_108 >> 0x20) != uVar3) + 1;
      }
      pFVar9 = *(ForAnyElementType **)((longlong)this + 0x18);
      local_118 = CONCAT44(uVar20,uVar15 >> 2 | uVar15 << 0x1e);
      if (((pFVar9->Data <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 <
           pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar16 = *(int *)&pFVar9[1].Data;
      piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar9,piVar1);
      }
      *(int *)&pFVar9[1].Data = iVar16 + 1;
      *(undefined8 *)(pFVar9->Data + (longlong)iVar16 * 8) = local_118;
LAB_14cb7018e:
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x50;
      local_110 = local_110 + -1;
    } while (local_110 != 0);
  }
  return;
}

// operator() @ 14cb70290

void __thiscall
`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l33::<lambda_6>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  uint *puVar2;
  double *pdVar3;
  uint uVar4;
  undefined4 uVar5;
  TQuaternion<double> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  ForAnyElementType *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 *puVar15;
  bool bVar16;
  int iVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar21;
  uint *puVar22;
  undefined4 *puVar23;
  bool local_res8 [8];
  FDynamicMesh3 *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_168;
  uint local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  longlong local_110;
  undefined4 *local_108;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double> local_b8;
  TVector<double> local_a0;
  TVector<double> local_88 [3];
  
  local_110 = **(longlong **)this;
  local_160 = *(uint *)(local_110 + 0x58);
  uVar19 = (ulonglong)(int)local_160;
  puVar23 = *(undefined4 **)(local_110 + 0x50);
  piVar21 = puVar23 + 4;
  local_108 = puVar23 + uVar19 * 0xe;
  local_res10 = param_1;
  do {
    puVar15 = local_108;
    if (*(int *)(local_110 + 0x58) != (int)uVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroup_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (puVar23 == puVar15) {
      return;
    }
    puVar22 = *(uint **)(piVar21 + -2);
    iVar17 = *piVar21;
    puVar2 = puVar22 + iVar17;
    while( true ) {
      if (*piVar21 != iVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar22 == puVar2) break;
      pTVar6 = *(TQuaternion<double> **)((longlong)this + 8);
      uVar20 = (ulonglong)(*puVar22 & 0x1ff);
      pFVar7 = (local_res10->Vertices).Blocks.AllocatorInstance.Data;
      lVar8 = *(longlong *)
               ((local_res10->Triangles).Blocks.AllocatorInstance.Data +
               (ulonglong)(*puVar22 >> 9) * 8);
      uVar4 = *(uint *)(lVar8 + uVar20 * 0xc);
      uVar19 = (ulonglong)(uVar4 & 0x1ff);
      pdVar3 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar19 * 0x18);
      local_128._s_0.X = *pdVar3;
      local_128._s_0.Y = pdVar3[1];
      local_128._s_0.Z =
           *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar19 * 0x18);
      uVar4 = *(uint *)(lVar8 + 4 + uVar20 * 0xc);
      uVar19 = (ulonglong)(uVar4 & 0x1ff);
      pdVar3 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar19 * 0x18);
      dVar11 = *pdVar3;
      dVar12 = pdVar3[1];
      local_140._s_0.Z =
           *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar19 * 0x18);
      uVar4 = *(uint *)(lVar8 + 8 + uVar20 * 0xc);
      uVar19 = (ulonglong)(uVar4 & 0x1ff);
      pdVar3 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar19 * 0x18);
      dVar13 = *pdVar3;
      dVar14 = pdVar3[1];
      local_158._s_0.Z =
           *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar19 * 0x18);
      local_100._s_0.X = local_128._s_0.X * pTVar6[1].field0_0x0._s_0.W;
      local_100._s_0.Y = local_128._s_0.Y * pTVar6[2].field0_0x0._s_0.X;
      local_100._s_0.Z = local_128._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      local_158._s_0.X = dVar13;
      local_158._s_0.Y = dVar14;
      local_140._s_0.X = dVar11;
      local_140._s_0.Y = dVar12;
      pTVar18 = UE::Geometry::operator*<double>(&local_b8,pTVar6,(TVector<double> *)&local_100._s_0)
      ;
      local_128._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar18->field0_0x0)._s_0.X;
      local_128._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      local_128._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      local_e8._s_0.X = dVar11 * pTVar6[1].field0_0x0._s_0.W;
      local_e8._s_0.Y = dVar12 * pTVar6[2].field0_0x0._s_0.X;
      local_e8._s_0.Z = local_140._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      pTVar18 = UE::Geometry::operator*<double>(&local_a0,pTVar6,(TVector<double> *)&local_e8._s_0);
      local_140._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      local_140._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      local_140._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar18->field0_0x0)._s_0.X;
      local_d0._s_0.X = dVar13 * pTVar6[1].field0_0x0._s_0.W;
      local_d0._s_0.Y = dVar14 * pTVar6[2].field0_0x0._s_0.X;
      local_d0._s_0.Z = local_158._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      pTVar18 = UE::Geometry::operator*<double>(local_88,pTVar6,(TVector<double> *)&local_d0._s_0);
      local_158._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar18->field0_0x0)._s_0.X;
      local_158._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      local_158._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      local_res8[0] = false;
      bVar16 = FConvexVolume::IntersectTriangle
                         (*(FConvexVolume **)((longlong)this + 0x10),
                          (TVector<double> *)&local_128._s_0,(TVector<double> *)&local_140._s_0,
                          (TVector<double> *)&local_158._s_0,local_res8);
      if ((!bVar16) || (local_res8[0] == false)) goto LAB_14cb70653;
      puVar22 = puVar22 + 1;
    }
    pFVar9 = *(ForAnyElementType **)((longlong)this + 0x18);
    uVar5 = *puVar23;
    if (*piVar21 < 1) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_168 = CONCAT44(uVar5,**(undefined4 **)(piVar21 + -2));
    if ((pFVar9->Data <= (FScriptContainerElement *)&local_168) &&
       ((FScriptContainerElement *)&local_168 <
        pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar17 = *(int *)&pFVar9[1].Data;
    piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar9,piVar1);
    }
    *(int *)&pFVar9[1].Data = iVar17 + 1;
    *(undefined8 *)(pFVar9->Data + (longlong)iVar17 * 8) = local_168;
LAB_14cb70653:
    puVar23 = puVar23 + 0xe;
    piVar21 = piVar21 + 0xe;
    uVar19 = (ulonglong)local_160;
  } while( true );
}

// AccumulateElementsFromPredicate @ 14cb722a0

void __thiscall
FBaseDynamicMeshSelector::AccumulateElementsFromPredicate
          (FBaseDynamicMeshSelector *this,FGeometrySelectionElements *param_1,bool param_2,
          bool param_3,bool param_4,
          TFunctionRef<bool___cdecl(UE::Geometry::EGeometryElementType,UE::Geometry::FGeoSelectionID)>
          *param_5)

{
  FBaseDynamicMeshSelector *local_28;
  FGeometrySelectionElements *local_20;
  TFunctionRef<bool___cdecl(UE::Geometry::EGeometryElementType,UE::Geometry::FGeoSelectionID)>
  *local_18;
  undefined1 local_10;
  undefined1 local_f;
  bool local_e;
  
  local_18 = param_5;
  local_e = param_4;
  local_28 = this;
  local_20 = param_1;
  local_10 = param_2;
  local_f = param_3;
  `FBaseDynamicMeshSelector::AccumulateElementsFromPredicate'::__l2::<lambda_1>::operator()
            (&local_28,Vertex);
  `FBaseDynamicMeshSelector::AccumulateElementsFromPredicate'::__l2::<lambda_1>::operator()
            (&local_28,Edge);
  `FBaseDynamicMeshSelector::AccumulateElementsFromPredicate'::__l2::<lambda_1>::operator()
            (&local_28,Face);
  return;
}

// AccumulateSelectionBounds @ 14cb72310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBaseDynamicMeshSelector::AccumulateSelectionBounds
          (FBaseDynamicMeshSelector *this,FGeometrySelection *param_1,
          FGeometrySelectionBounds *param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  UDynamicMesh *this_00;
  undefined1 auStack_1a8 [32];
  int local_188 [2];
  code *local_180;
  FGeometrySelection **local_178;
  FGeometrySelection *local_170;
  FBaseDynamicMeshSelector *local_168;
  undefined1 *local_160;
  double *local_158;
  double *local_150;
  double local_148 [2];
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  FBaseDynamicMeshSelector local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (param_3) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x80))(this,(longlong)&local_e8 + 0x60);
  }
  else {
    plVar3 = (longlong *)local_148;
    local_148 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_138 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_128 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_118 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_108 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_f8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  local_e8._padding_ = *plVar3;
  local_e8._padding_ = plVar3[1];
  local_e8._padding_ = plVar3[2];
  local_e8._padding_ = plVar3[3];
  local_e8._padding_ = plVar3[4];
  local_e8._padding_ = plVar3[5];
  local_e8._padding_ = plVar3[6];
  local_e8._padding_ = plVar3[7];
  local_e8._padding_ = plVar3[8];
  local_e8.SourceGeometryIdentifier._0_8_ = plVar3[9];
  local_e8.SourceGeometryIdentifier.TargetObject.WeakPtr = *(FWeakObjectPtr *)(plVar3 + 10);
  local_e8._padding_ = plVar3[0xb];
  local_148[1] = (double)_UNK_150a9e648;
  local_148[0] = (double)___xmm_7fefffffffffffff7fefffffffffffff;
  local_188[0] = 0;
  local_138[1] = (double)_UNK_150a9e6d8;
  local_138[0] = (double)___xmm_ffefffffffffffff7fefffffffffffff;
  local_128[1] = (double)_UNK_1508ffb58;
  local_128[0] = (double)___xmm_ffefffffffffffffffefffffffffffff;
  if (param_1->TopologyType == Polygroup) {
    GetGroupTopology(this);
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_160 = (undefined1 *)&local_e8;
    local_158 = local_148;
    local_150 = (double *)local_188;
    local_180 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseDynamicMeshSelector::AccumulateSelectionBounds'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_168 = this;
  }
  else {
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_168 = &local_e8;
    local_160 = (undefined1 *)local_148;
    local_158 = (double *)local_188;
    local_180 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseDynamicMeshSelector::AccumulateSelectionBounds'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
  }
  local_178 = &local_170;
  local_170 = param_1;
  UDynamicMesh::ProcessMesh
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_180);
  if (0 < local_188[0]) {
    dVar1 = (param_2->WorldBounds).Min.field0_0x0._s_0.X;
    dVar2 = (param_2->WorldBounds).Min.field0_0x0._s_0.Y;
    if (local_148[0] <= dVar1) {
      dVar1 = local_148[0];
    }
    if (local_148[1] <= dVar2) {
      dVar2 = local_148[1];
    }
    (param_2->WorldBounds).Min.field0_0x0._s_0.X = dVar1;
    dVar1 = (param_2->WorldBounds).Min.field0_0x0._s_0.Z;
    if (local_138[0] <= dVar1) {
      dVar1 = local_138[0];
    }
    (param_2->WorldBounds).Min.field0_0x0._s_0.Y = dVar2;
    dVar2 = (param_2->WorldBounds).Max.field0_0x0._s_0.X;
    if (dVar2 <= local_138[1]) {
      dVar2 = local_138[1];
    }
    (param_2->WorldBounds).Min.field0_0x0._s_0.Z = dVar1;
    dVar1 = (param_2->WorldBounds).Max.field0_0x0._s_0.Y;
    (param_2->WorldBounds).Max.field0_0x0._s_0.X = dVar2;
    if (dVar1 <= local_128[0]) {
      dVar1 = local_128[0];
    }
    dVar2 = (param_2->WorldBounds).Max.field0_0x0._s_0.Z;
    if (dVar2 <= local_128[1]) {
      dVar2 = local_128[1];
    }
    (param_2->WorldBounds).Max.field0_0x0._s_0.Y = dVar1;
    (param_2->WorldBounds).Max.field0_0x0._s_0.Z = dVar2;
  }
  return;
}

// AccumulateSelectionElements @ 14cb72550

void __thiscall
FBaseDynamicMeshSelector::AccumulateSelectionElements
          (FBaseDynamicMeshSelector *this,FGeometrySelection *param_1,
          FGeometrySelectionElements *param_2,bool param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb72565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa0))();
  return;
}

// AccumulateSelectionElements @ 14cb72580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EEnumerateSelectionMapping": Some values do not have unique names */

void __thiscall
FBaseDynamicMeshSelector::AccumulateSelectionElements
          (FBaseDynamicMeshSelector *this,FGeometrySelection *param_1,
          FGeometrySelectionElements *param_2,bool param_3,EEnumerateSelectionMapping param_4)

{
  FGroupTopology *pFVar1;
  UObject *pUVar2;
  FGroupTopology *pFVar3;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_48;
  
  local_48.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_d8);
  (**(code **)(this->_padding_ + 0x80))(this,&stack0xffffffffffffff58);
  pFVar1 = (FGroupTopology *)0x0;
  pFVar3 = (FGroupTopology *)&stack0xffffffffffffff58;
  if (!param_3) {
    pFVar3 = pFVar1;
  }
  if (param_1->TopologyType == Polygroup) {
    pFVar1 = GetGroupTopology(this);
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  ToolSelectionUtil::AccumulateSelectionElements
            (param_2,param_1,*(FDynamicMesh3 **)&pUVar2[4].field_0x18,pFVar1,
             (TTransform<double> *)pFVar3,param_4);
  return;
}

// GetColliderMesh @ 14cb95240

FColliderMesh * __thiscall FBaseDynamicMeshSelector::GetColliderMesh(FBaseDynamicMeshSelector *this)

{
  UDynamicMesh *this_00;
  FBaseDynamicMeshSelector *local_res8 [4];
  code *local_18;
  FBaseDynamicMeshSelector **local_10;
  
  if ((this->ColliderMesh).Ptr == (FColliderMesh *)0x0) {
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateColliderMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res8[0] = this;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (this->ColliderMesh).Ptr;
  }
  return (this->ColliderMesh).Ptr;
}

// GetGroupEdgeSpatial @ 14cb97040

FSegmentTree3 * __thiscall
FBaseDynamicMeshSelector::GetGroupEdgeSpatial(FBaseDynamicMeshSelector *this)

{
  UDynamicMesh *this_00;
  FGroupTopology *local_res8 [4];
  FGroupTopology **local_28;
  FBaseDynamicMeshSelector *local_20;
  code *local_18;
  undefined8 **local_10;
  
  if ((this->GroupEdgeSegmentTree).Ptr == (FSegmentTree3 *)0x0) {
    local_res8[0] = GetGroupTopology(this);
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_28 = local_res8;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_20 = this;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (this->GroupEdgeSegmentTree).Ptr;
  }
  return (this->GroupEdgeSegmentTree).Ptr;
}

// GetGroupTopology @ 14cb972b0

FGroupTopology * __thiscall
FBaseDynamicMeshSelector::GetGroupTopology(FBaseDynamicMeshSelector *this)

{
  FGroupTopology *pFVar1;
  TPimplPtr<UE::Geometry::FGroupTopology,0> *pTVar2;
  FDynamicMesh3 *pFVar3;
  FGroupTopology *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  longlong local_18 [2];
  
  pTVar2 = &this->GroupTopology;
  if (pTVar2->Ptr != (FGroupTopology *)0x0) {
    return pTVar2->Ptr;
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  pFVar3 = *(FDynamicMesh3 **)&pUVar5[4].field_0x18;
  puVar6 = ::operator_new(0x170);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6[1] = 0;
    *puVar6 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FGroupTopology>;
    UE::Geometry::FGroupTopology::FGroupTopology((FGroupTopology *)(puVar6 + 2),pFVar3,true);
  }
  pFVar1 = (FGroupTopology *)(puVar6 + 2);
  if ((TPimplPtr<UE::Geometry::FGroupTopology,0> *)local_18 == pTVar2) {
    if (pFVar1 != (FGroupTopology *)0x0) {
      (*(code *)*puVar6)(puVar6);
      return pTVar2->Ptr;
    }
  }
  else {
    pFVar4 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar1;
    if (pFVar4 == (FGroupTopology *)0x0) {
      return pFVar1;
    }
    (*(code *)pFVar4[-1].CurrentExtraCornerVids.Hash.SecondaryData)
              (&pFVar4[-1].CurrentExtraCornerVids.Hash.SecondaryData);
  }
  return pTVar2->Ptr;
}

// GetIdentifier @ 14cb973c0

FGeometryIdentifier * __thiscall
FBaseDynamicMeshSelector::GetIdentifier
          (FBaseDynamicMeshSelector *this,FGeometryIdentifier *__return_storage_ptr__)

{
  undefined8 local_res8;
  
  __return_storage_ptr__->TargetType = PrimitiveComponent;
  __return_storage_ptr__->ObjectType = Unknown;
  (__return_storage_ptr__->TargetObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(__return_storage_ptr__->TargetObject).WeakPtr,(FObjectPtr)&local_res8)
  ;
  __return_storage_ptr__->TargetType = MeshContainer;
  __return_storage_ptr__->ObjectType = DynamicMesh;
  (__return_storage_ptr__->TargetObject).WeakPtr = (this->TargetMesh).WeakPtr;
  return __return_storage_ptr__;
}

// GetLocalToWorldTransform @ 14cb97470

TTransform<double> * __thiscall
FBaseDynamicMeshSelector::GetLocalToWorldTransform
          (FBaseDynamicMeshSelector *this,TTransform<double> *__return_storage_ptr__)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetWorldTransformFunc);
  pcVar1 = *(code **)&this->GetWorldTransformFunc;
  plVar2 = *(longlong **)&(this->GetWorldTransformFunc).field_0x28;
  plVar4 = (longlong *)&(this->GetWorldTransformFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_88,uVar3);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dStack_80;
  *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 = local_78;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) = uStack_74;
  *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) = local_70;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) = uStack_6c;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_68;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dStack_60;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_58;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_50;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dStack_48;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_40;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// GetSelectionFrame @ 14cb9bfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBaseDynamicMeshSelector::GetSelectionFrame
          (FBaseDynamicMeshSelector *this,FGeometrySelection *param_1,TFrame3<double> *param_2,
          bool param_3)

{
  double dVar1;
  UDynamicMesh *pUVar2;
  TFrame3<double> *pTVar3;
  TTransform<double> *pTVar4;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  TVector<double>_u_0 local_1a8;
  FGroupTopologySelection local_188;
  TFrame3<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (param_1->TopologyType == Polygroup) {
    local_1c8._0_8_ = GetGroupTopology(this);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_188);
    pUVar2 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_1a8._s_0.Y = (double)local_1c8;
    local_1a8._s_0.Z = (double)&local_188;
    local_1b8._8_8_ = &local_1a8;
    local_1b8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBaseDynamicMeshSelector::GetSelectionFrame'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_1a8._s_0.X = (double)param_1;
    UDynamicMesh::ProcessMesh
              (pUVar2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_1b8);
    pTVar3 = UE::Geometry::FGroupTopology::GetSelectionFrame
                       ((FGroupTopology *)local_1c8._0_8_,&local_98,&local_188,
                        (TFrame3<double> *)0x0);
    dVar1 = (pTVar3->Origin).field0_0x0._s_0.Y;
    (param_2->Origin).field0_0x0._s_0.X = (pTVar3->Origin).field0_0x0._s_0.X;
    (param_2->Origin).field0_0x0._s_0.Y = dVar1;
    dVar1 = (pTVar3->Rotation).field0_0x0._s_0.X;
    (param_2->Origin).field0_0x0._s_0.Z = (pTVar3->Origin).field0_0x0._s_0.Z;
    (param_2->Rotation).field0_0x0._s_0.X = dVar1;
    dVar1 = (pTVar3->Rotation).field0_0x0._s_0.Z;
    (param_2->Rotation).field0_0x0._s_0.Y = (pTVar3->Rotation).field0_0x0._s_0.Y;
    (param_2->Rotation).field0_0x0._s_0.Z = dVar1;
    (param_2->Rotation).field0_0x0._s_0.W = (pTVar3->Rotation).field0_0x0._s_0.W;
    local_188.SelectedEdgeIDs.HashSize = 0;
    if (local_188.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_188.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188.SelectedEdgeIDs.Elements);
    local_188.SelectedCornerIDs.HashSize = 0;
    if (local_188.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_188.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188.SelectedCornerIDs.Elements);
    local_188.SelectedGroupIDs.HashSize = 0;
    if (local_188.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_188.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_188);
  }
  else {
    pUVar2 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_1c8._8_8_ = local_1b8;
    local_1c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBaseDynamicMeshSelector::GetSelectionFrame'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_1b8._0_8_ = param_1;
    local_1b8._8_8_ = param_2;
    UDynamicMesh::ProcessMesh
              (pUVar2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_1c8);
  }
  if (param_3) {
    pTVar4 = (TTransform<double> *)(**(code **)(this->_padding_ + 0x80))(this,&local_98);
    UE::Geometry::TFrame3<double>::Transform(param_2,pTVar4);
  }
  return;
}

// GetSelectionPreviewForRaycast @ 14cb9d600

void __thiscall
FBaseDynamicMeshSelector::GetSelectionPreviewForRaycast
          (FBaseDynamicMeshSelector *this,FWorldRayQueryInfo *param_1,
          FGeometrySelectionEditor *param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined2 local_38 [4];
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  cVar1 = (**(code **)(this->_padding_ + 0x30))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(this->_padding_ + 0x38))(this), cVar1 != '\0')) {
    return;
  }
  local_38[0] = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_res8[0] = 0;
  (**(code **)(this->_padding_ + 0x60))(this,param_1,param_2,local_res8,local_38);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// GetSourceGeometryIdentifier @ 14cb9efc0

FGeometryIdentifier * __thiscall
FBaseDynamicMeshSelector::GetSourceGeometryIdentifier
          (FBaseDynamicMeshSelector *this,FGeometryIdentifier *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  EObjectType EVar2;
  
  EVar2 = (this->SourceGeometryIdentifier).ObjectType;
  FVar1 = (this->SourceGeometryIdentifier).TargetObject.WeakPtr;
  __return_storage_ptr__->TargetType = (this->SourceGeometryIdentifier).TargetType;
  __return_storage_ptr__->ObjectType = EVar2;
  (__return_storage_ptr__->TargetObject).WeakPtr = FVar1;
  return __return_storage_ptr__;
}

// GetTargetFrame @ 14cb9ff40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBaseDynamicMeshSelector::GetTargetFrame
          (FBaseDynamicMeshSelector *this,FGeometrySelection *param_1,TFrame3<double> *param_2)

{
  TTransform<double> *pTVar1;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar1 = (TTransform<double> *)(**(code **)(this->_padding_ + 0x80))(this,local_88);
  UE::Geometry::TFrame3<double>::Transform(param_2,pTVar1);
  local_a8 = (param_2->Rotation).field0_0x0._s_0.X;
  dStack_a0 = (param_2->Rotation).field0_0x0._s_0.Y;
  local_98 = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x10);
  uStack_94 = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x14);
  uStack_90 = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x18);
  uStack_8c = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x1c);
  (**(code **)(this->_padding_ + 0x88))(this,param_1,param_2,1);
  (param_2->Rotation).field0_0x0._s_0.X = local_a8;
  (param_2->Rotation).field0_0x0._s_0.Y = dStack_a0;
  (param_2->Rotation).field0_0x0._s_0.Z = (double)CONCAT44(uStack_94,local_98);
  (param_2->Rotation).field0_0x0._s_0.W = (double)CONCAT44(uStack_8c,uStack_90);
  return;
}

// Initialize @ 14cba14b0

void __thiscall
FBaseDynamicMeshSelector::Initialize
          (FBaseDynamicMeshSelector *this,FGeometryIdentifier *param_1,UDynamicMesh *param_2,
          TUniqueFunction<UE::Geometry::TTransformSRT3<double>___cdecl(void)> *param_3)

{
  code *pcVar1;
  FWeakObjectPtr FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  EObjectType EVar10;
  bool bVar11;
  UObject *pUVar12;
  FDelegateHandle FVar13;
  longlong *plVar14;
  UDynamicMesh *local_38;
  FBaseDynamicMeshSelector *local_30;
  <lambda_1> local_28 [2];
  
  if (param_2 == (UDynamicMesh *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TargetMeshIn != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\DynamicMeshSelector.cpp"
                        ,0x28,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar10 = param_1->ObjectType;
  FVar2 = (param_1->TargetObject).WeakPtr;
  (this->SourceGeometryIdentifier).TargetType = param_1->TargetType;
  (this->SourceGeometryIdentifier).ObjectType = EVar10;
  (this->SourceGeometryIdentifier).TargetObject.WeakPtr = FVar2;
  local_38 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->TargetMesh).WeakPtr,(FObjectPtr)&local_38);
  uVar3 = *(undefined8 *)&param_3->field_0x8;
  uVar4 = *(undefined8 *)&this->GetWorldTransformFunc;
  uVar5 = *(undefined8 *)&(this->GetWorldTransformFunc).field_0x8;
  uVar6 = *(undefined8 *)&(this->GetWorldTransformFunc).field_0x10;
  uVar7 = *(undefined8 *)&(this->GetWorldTransformFunc).field_0x18;
  uVar8 = *(undefined8 *)&(this->GetWorldTransformFunc).field_0x20;
  uVar9 = *(undefined8 *)&(this->GetWorldTransformFunc).field_0x28;
  *(undefined8 *)&this->GetWorldTransformFunc = *(undefined8 *)param_3;
  *(undefined8 *)&(this->GetWorldTransformFunc).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->GetWorldTransformFunc).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->GetWorldTransformFunc).field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->GetWorldTransformFunc).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->GetWorldTransformFunc).field_0x28 = uVar3;
  *(undefined8 *)param_3 = uVar4;
  *(undefined8 *)&param_3->field_0x8 = uVar5;
  *(undefined8 *)&param_3->field_0x10 = uVar6;
  *(undefined8 *)&param_3->field_0x18 = uVar7;
  *(undefined8 *)&param_3->field_0x20 = uVar8;
  *(undefined8 *)&param_3->field_0x28 = uVar9;
  local_30 = this;
  pUVar12 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  FVar13 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
           ::AddLambda<_FBaseDynamicMeshSelector::RegisterMeshChangedHandler_::__l2::<lambda_1>_>
                     ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                       *)&pUVar12[2].field_0x10,local_28);
                    /* WARNING: Load size is inaccurate */
  (this->TargetMesh_OnMeshChangedHandle).ID = *FVar13.ID;
  if (*(longlong *)param_3 != 0) {
    plVar14 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

// InitializeSelectionFromPredicate @ 14cba30d0

void __thiscall
FBaseDynamicMeshSelector::InitializeSelectionFromPredicate
          (FBaseDynamicMeshSelector *this,FGeometrySelection *param_1,
          TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> *param_2,
          EInitializeSelectionMode param_3,FGeometrySelection *param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UDynamicMesh *this_00;
  FGroupTopology *local_res8;
  EInitializeSelectionMode local_res20 [2];
  code *local_48;
  undefined4 **local_40;
  EInitializeSelectionMode *local_38;
  FGroupTopology **local_30;
  FGeometrySelection **local_28;
  TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> *local_20;
  FGeometrySelection *local_18;
  
  local_res20[0] = param_3;
  cVar2 = (**(code **)(this->_padding_ + 0x30))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(this->_padding_ + 0x38))(this), cVar2 != '\0')) {
    return;
  }
  if (param_1->TopologyType == Polygroup) {
    local_res8 = GetGroupTopology(this);
  }
  else {
    local_res8 = (FGroupTopology *)0x0;
  }
  if ((local_res20[0] == All) || (param_4 != (FGeometrySelection *)0x0)) {
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_38 = local_res20;
    local_30 = &local_res8;
    local_28 = &param_4;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBaseDynamicMeshSelector::InitializeSelectionFromPredicate'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_20 = param_2;
    local_18 = param_1;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8165591483852783478>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\DynamicMeshSelector.cpp"
                       ,0x8a,"ReferenceSelection != nullptr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// InvalidateOnMeshChange @ 14cba36a0

void __thiscall
FBaseDynamicMeshSelector::InvalidateOnMeshChange
          (FBaseDynamicMeshSelector *this,FDynamicMeshChangeInfo *param_1)

{
  int *piVar1;
  FColliderMesh *pFVar2;
  FSegmentTree3 *pFVar3;
  FGroupTopology *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FDestructionSentinel local_38;
  
  pFVar2 = (this->ColliderMesh).Ptr;
  if (pFVar2 != (FColliderMesh *)0x0) {
    (this->ColliderMesh).Ptr = (FColliderMesh *)0x0;
    (**(code **)&pFVar2[-1].AABBTree.IndexList.Blocks.ArrayNum)();
  }
  pFVar3 = (this->GroupEdgeSegmentTree).Ptr;
  if (pFVar3 != (FSegmentTree3 *)0x0) {
    (this->GroupEdgeSegmentTree).Ptr = (FSegmentTree3 *)0x0;
    (**(code **)&pFVar3[-1].SegmentsEnd)();
  }
  if ((param_1->Type != MeshVertexChange) &&
     (pFVar4 = (this->GroupTopology).Ptr, pFVar4 != (FGroupTopology *)0x0)) {
    (this->GroupTopology).Ptr = (FGroupTopology *)0x0;
    (*(code *)pFVar4[-1].CurrentExtraCornerVids.Hash.SecondaryData)();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_38);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar7 = false;
  uVar11 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(int *)(lVar12 + 8 + this->_padding_) == 0) ||
          (plVar5 = *(longlong **)(lVar12 + this->_padding_), plVar5 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
        bVar7 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// RayHitTest @ 14cba89f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cba8ba6) */
/* WARNING: Removing unreachable block (ram,0x00014cba8bba) */
/* WARNING: Removing unreachable block (ram,0x00014cba8bbe) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FBaseDynamicMeshSelector::RayHitTest
          (FBaseDynamicMeshSelector *this,FWorldRayQueryInfo *param_1,
          FGeometrySelectionHitQueryConfig *param_2,FInputRayHit *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined **ppuVar4;
  FBaseDynamicMeshSelector *pFVar5;
  FWorldRayQueryInfo *pFVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  FColliderMesh *this_00;
  UObject *pUVar10;
  FSegmentTree3 *this_01;
  TVector<double> *pTVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined ***pppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_378 [32];
  TVector<double>_u_0 local_348;
  int local_330;
  FWeakObjectPtr local_32c;
  TVector<double>_u_0 local_320;
  double local_308;
  double local_300;
  double local_2f8;
  TQuaternion<double>_u_0 local_2e8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  TVector<double> local_290;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TVector<double> local_198;
  FSegment local_178;
  FRayNearestSegmentInfo local_138;
  FWorldRayQueryInfo *pFStack_118;
  longlong local_110;
  void *local_108;
  FWeakObjectPtr FStack_100;
  undefined1 local_f8 [16];
  code *local_e8;
  double dStack_e0;
  undefined **local_d8;
  FBaseDynamicMeshSelector *pFStack_d0;
  FWorldRayQueryInfo *local_c8;
  undefined ***pppuStack_c0;
  bool local_b8;
  undefined1 local_a8 [56];
  longlong *local_70;
  bool local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_108 = (void *)0x0;
  local_32c.ObjectIndex = 0;
  local_32c.ObjectSerialNumber = 0;
  local_138.SegmentParam = ___xmm_000000000000000047efffffe0000000;
  local_138.SegmentDist = (double)_UNK_1506c8f58;
  local_348._s_0.X = 0.0;
  local_138.Metric = (double)___xmm_3ff00000000000000000000000000000;
  pFStack_118 = _UNK_15061cbc8;
  local_138.RayParam = (double)((ulonglong)local_138.RayParam & 0xffffffffffffff00);
  local_110 = (ulonglong)(uint3)((uint)(undefined4)local_110 >> 8) << 8;
  FWeakObjectPtr::operator=(&local_32c,(FObjectPtr)&local_348);
  FStack_100 = local_32c;
  *(double *)param_3 = local_138.RayParam;
  param_3->HitDepth = local_138.SegmentParam;
  (param_3->HitNormal).field0_0x0._s_0.X = local_138.SegmentDist;
  (param_3->HitNormal).field0_0x0._s_0.Y = local_138.Metric;
  (param_3->HitNormal).field0_0x0._s_0.Z = (double)pFStack_118;
  param_3->bHasHitNormal = (bool)(undefined1)local_110;
  *(undefined3 *)&param_3->field_0x29 = local_110._1_3_;
  param_3->HitIdentifier = local_110._4_4_;
  param_3->HitOwner = local_108;
  (param_3->HitObject).WeakPtr = local_32c;
  cVar7 = (**(code **)(this->_padding_ + 0x30))(this);
  if ((cVar7 != '\0') && (cVar7 = (**(code **)(this->_padding_ + 0x38))(this), cVar7 != '\0')) {
    return false;
  }
  pFVar6 = local_c8;
  pFVar5 = pFStack_d0;
  ppuVar4 = local_d8;
  dVar3 = dStack_e0;
  dVar2 = __real_7fefffffffffffff;
  local_f8._0_8_ = __real_7fefffffffffffff;
  local_e8 = (code *)0x0;
  local_b8 = false;
  if (param_2->bHitBackFaces == false) {
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBaseDynamicMeshSelector::RayHitTest'::__l7::<lambda_1>,bool,int>
               ::Call;
    dStack_e0 = local_138.SegmentParam;
    local_c8 = param_1;
    pppuStack_c0 = (undefined ***)0x0;
    local_d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FBaseDynamicMeshSelector::RayHitTest'::`7'::<lambda_1>,0,0>::
                _vftable_;
    pFStack_d0 = this;
    local_138.RayParam = 0.0;
    local_138.SegmentParam = dVar3;
    local_138.SegmentDist = (double)ppuVar4;
    local_138.Metric = (double)pFVar5;
    pFStack_118 = pFVar6;
    local_110 = 0;
  }
  pppuStack_c0 = (undefined ***)0x0;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetWorldTransformFunc);
  pcVar1 = *(code **)&this->GetWorldTransformFunc;
  plVar13 = *(longlong **)&(this->GetWorldTransformFunc).field_0x28;
  plVar12 = (longlong *)&(this->GetWorldTransformFunc).field_0x10;
  if (plVar13 != (longlong *)0x0) {
    plVar12 = plVar13;
  }
  uVar9 = (**(code **)(*plVar12 + 8))();
  (*pcVar1)(&local_2e8,uVar9);
  UE::Geometry::TTransformSRT3<double>::InverseTransformRay
            ((TTransformSRT3<double> *)&local_2e8._s_0,(TRay<double> *)&local_320._s_0,
             &param_1->WorldRay);
  this_00 = GetColliderMesh(this);
  bVar8 = UE::Geometry::FColliderMesh::FindNearestHitTriangle
                    (this_00,(TRay<double> *)&local_320._s_0,&local_298,&local_330,&local_198,
                     (FQueryOptions *)local_f8);
  if (bVar8) {
    param_3->HitIdentifier = local_330;
    param_3->bHit = true;
    pUVar10 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    uVar15 = SUB84(local_298,0);
    uVar16 = (undefined4)((ulonglong)local_298 >> 0x20);
  }
  else {
    if ((param_2->TopologyType != Polygroup) || (param_2->ElementType != Edge)) goto LAB_14cba8e5f;
    local_278 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    dStack_270 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    local_268 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    dStack_260 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    local_258 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    dStack_250 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    local_248 = (param_1->CameraState).Position.field0_0x0._s_0.X;
    dStack_240 = (param_1->CameraState).Position.field0_0x0._s_0.Y;
    local_238 = (param_1->CameraState).Position.field0_0x0._s_0.Z;
    uStack_230 = *(undefined8 *)&(param_1->CameraState).field_0x18;
    local_228 = (param_1->CameraState).Orientation.X;
    dStack_220 = (param_1->CameraState).Orientation.Y;
    local_218 = (param_1->CameraState).Orientation.Z;
    dStack_210 = (param_1->CameraState).Orientation.W;
    local_208._0_4_ = (param_1->CameraState).HorizontalFOVDegrees;
    local_208._4_4_ = (param_1->CameraState).OrthoWorldCoordinateWidth;
    uStack_200._0_4_ = (param_1->CameraState).AspectRatio;
    uStack_200._4_1_ = (param_1->CameraState).bIsOrthographic;
    uStack_200._5_1_ = (param_1->CameraState).bIsVR;
    uStack_200._6_2_ = *(undefined2 *)&(param_1->CameraState).field_0x4e;
    local_1f8 = (param_1->CameraState).DPIScale;
    uStack_1f0 = *(undefined8 *)&(param_1->CameraState).field_0x58;
    local_1e8 = local_2e8._s_0.X;
    dStack_1e0 = local_2e8._s_0.Y;
    local_1d8 = local_2e8._s_0.Z;
    dStack_1d0 = local_2e8._s_0.W;
    local_1c8 = local_2c8;
    dStack_1c0 = dStack_2c0;
    local_1b8 = local_2b8;
    dStack_1b0 = dStack_2b0;
    local_1a8 = local_2a8;
    dStack_1a0 = dStack_2a0;
    this_01 = GetGroupEdgeSpatial(this);
    local_a8._0_8_ = dVar2;
    local_a8._16_8_ = 0;
    local_348._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseDynamicMeshSelector::RayHitTest'::__l14::<lambda_2>,bool,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                 ::Call;
    local_70 = (longlong *)0x0;
    local_68 = false;
    local_348._s_0.Y = (double)&local_278;
    bVar8 = UE::Geometry::FSegmentTree3::FindNearestVisibleSegmentHitByRay
                      (this_01,(TRay<double> *)&local_320._s_0,
                       (TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                        *)&local_348._s_0,&local_178,&local_138,(FQueryOptions *)local_a8);
    if (local_a8._16_8_ != 0) {
      plVar13 = (longlong *)(local_a8 + 0x20);
      if (local_70 != (longlong *)0x0) {
        plVar13 = local_70;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (!bVar8) goto LAB_14cba8e5f;
    param_3->HitIdentifier = local_178.ID;
    param_3->bHit = true;
    pUVar10 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    uVar15 = SUB84(local_138.RayParam,0);
    uVar16 = (undefined4)((ulonglong)local_138.RayParam >> 0x20);
  }
  param_3->HitOwner = pUVar10;
  local_348._s_0.X = (local_308 * (double)CONCAT44(uVar16,uVar15) + local_320._s_0.X) * dStack_2b0;
  local_348._s_0.Z = (local_2f8 * (double)CONCAT44(uVar16,uVar15) + local_320._s_0.Z) * dStack_2a0;
  local_348._s_0.Y = (local_300 * (double)CONCAT44(uVar16,uVar15) + local_320._s_0.Y) * local_2a8;
  pTVar11 = UE::Geometry::operator*<double>
                      (&local_290,(TQuaternion<double> *)&local_2e8._s_0,
                       (TVector<double> *)&local_348._s_0);
  param_3->HitDepth =
       ((dStack_2c0 + (pTVar11->field0_0x0)._s_0.Y) - (param_1->WorldRay).Origin.field0_0x0._s_0.Y)
       * (param_1->WorldRay).Direction.field0_0x0._s_0.Y +
       ((local_2c8 + (pTVar11->field0_0x0)._s_0.X) - (param_1->WorldRay).Origin.field0_0x0._s_0.X) *
       (param_1->WorldRay).Direction.field0_0x0._s_0.X +
       ((local_2b8 + (pTVar11->field0_0x0)._s_0.Z) - (param_1->WorldRay).Origin.field0_0x0._s_0.Z) *
       (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
LAB_14cba8e5f:
  bVar8 = param_3->bHit;
  if (local_e8 != (code *)0x0) {
    pppuVar14 = &local_d8;
    if (pppuStack_c0 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_c0;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  return bVar8;
}

// RegisterMeshChangedHandler @ 14cbaad40

void __thiscall FBaseDynamicMeshSelector::RegisterMeshChangedHandler(FBaseDynamicMeshSelector *this)

{
  UObject *pUVar1;
  FDelegateHandle FVar2;
  <lambda_1> local_res10 [3];
  
  pUVar1 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddLambda<_FBaseDynamicMeshSelector::RegisterMeshChangedHandler_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&pUVar1[2].field_0x10,local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->TargetMesh_OnMeshChangedHandle).ID = *FVar2.ID;
  return;
}

// Restore @ 14cbad340

bool __thiscall FBaseDynamicMeshSelector::Restore(FBaseDynamicMeshSelector *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDelegateHandle FVar3;
  FWeakObjectPtr local_res8;
  <lambda_1> local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SleepingTargetMesh).WeakPtr);
  if (!bVar1) {
    return false;
  }
  local_res8 = (FWeakObjectPtr)FWeakObjectPtr::Get(&(this->SleepingTargetMesh).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->TargetMesh).WeakPtr,(FObjectPtr)&local_res8);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10.__this = (FBaseDynamicMeshSelector *)0x0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->SleepingTargetMesh).WeakPtr = local_res8;
  local_res8 = (FWeakObjectPtr)this;
  pUVar2 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  FVar3 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddLambda<_FBaseDynamicMeshSelector::RegisterMeshChangedHandler_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&pUVar2[2].field_0x10,&local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->TargetMesh_OnMeshChangedHandle).ID = *FVar3.ID;
  return true;
}

// Shutdown @ 14cbb2f10

void __thiscall FBaseDynamicMeshSelector::Shutdown(FBaseDynamicMeshSelector *this)

{
  FDelegateHandle FVar1;
  FColliderMesh *pFVar2;
  FGroupTopology *pFVar3;
  FSegmentTree3 *pFVar4;
  bool bVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->TargetMesh).WeakPtr);
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    FVar1.ID = (this->TargetMesh_OnMeshChangedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6[2].field_0x10,FVar1);
    }
    (this->TargetMesh_OnMeshChangedHandle).ID = 0;
    pFVar2 = (this->ColliderMesh).Ptr;
    if (pFVar2 != (FColliderMesh *)0x0) {
      (this->ColliderMesh).Ptr = (FColliderMesh *)0x0;
      (**(code **)&pFVar2[-1].AABBTree.IndexList.Blocks.ArrayNum)();
    }
    pFVar3 = (this->GroupTopology).Ptr;
    if (pFVar3 != (FGroupTopology *)0x0) {
      (this->GroupTopology).Ptr = (FGroupTopology *)0x0;
      (*(code *)pFVar3[-1].CurrentExtraCornerVids.Hash.SecondaryData)();
    }
    pFVar4 = (this->GroupEdgeSegmentTree).Ptr;
    if (pFVar4 != (FSegmentTree3 *)0x0) {
      (this->GroupEdgeSegmentTree).Ptr = (FSegmentTree3 *)0x0;
      (**(code **)&pFVar4[-1].SegmentsEnd)();
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->TargetMesh).WeakPtr = local_res8;
  return;
}

// Sleep @ 14cbb33c0

bool __thiscall FBaseDynamicMeshSelector::Sleep(FBaseDynamicMeshSelector *this)

{
  FDelegateHandle FVar1;
  FColliderMesh *pFVar2;
  FGroupTopology *pFVar3;
  FSegmentTree3 *pFVar4;
  bool bVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->TargetMesh).WeakPtr);
  if (!bVar5) {
    return false;
  }
  pUVar6 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  FVar1.ID = (this->TargetMesh_OnMeshChangedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6[2].field_0x10,FVar1);
  }
  (this->SleepingTargetMesh).WeakPtr = (this->TargetMesh).WeakPtr;
  (this->TargetMesh_OnMeshChangedHandle).ID = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->TargetMesh).WeakPtr = local_res8;
  pFVar2 = (this->ColliderMesh).Ptr;
  if (pFVar2 != (FColliderMesh *)0x0) {
    (this->ColliderMesh).Ptr = (FColliderMesh *)0x0;
    (**(code **)&pFVar2[-1].AABBTree.IndexList.Blocks.ArrayNum)();
  }
  pFVar3 = (this->GroupTopology).Ptr;
  if (pFVar3 != (FGroupTopology *)0x0) {
    (this->GroupTopology).Ptr = (FGroupTopology *)0x0;
    (*(code *)pFVar3[-1].CurrentExtraCornerVids.Hash.SecondaryData)();
  }
  pFVar4 = (this->GroupEdgeSegmentTree).Ptr;
  if (pFVar4 != (FSegmentTree3 *)0x0) {
    (this->GroupEdgeSegmentTree).Ptr = (FSegmentTree3 *)0x0;
    (**(code **)&pFVar4[-1].SegmentsEnd)();
  }
  return true;
}

// SupportsSleep @ 14cbb4640

bool __thiscall FBaseDynamicMeshSelector::SupportsSleep(FBaseDynamicMeshSelector *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TargetMesh).WeakPtr);
  return bVar1;
}

// UpdateAfterGeometryEdit @ 14cbb70d0

void __thiscall
FBaseDynamicMeshSelector::UpdateAfterGeometryEdit
          (FBaseDynamicMeshSelector *this,IToolsContextTransactionsAPI *param_1,bool param_2,
          TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
          param_3,FText *param_4)

{
  code *pcVar1;
  FDynamicMeshChange *this_00;
  ITextData *pIVar2;
  FMeshChange *this_01;
  UObject *pUVar3;
  FScriptContainerElement *local_res8;
  FMeshChange *local_res10;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0x28);
  this_01 = ::operator_new(0x40);
  local_res10 = (FMeshChange *)0x0;
  if (this_01 != (FMeshChange *)0x0) {
    local_res8 = ((param_3.Ptr)->OldVertices).AllocatorInstance.Data;
    ((param_3.Ptr)->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res10 = FMeshChange::FMeshChange(this_01,(FDynamicMeshChange *)&local_res8);
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  (*pcVar1)(param_1,pUVar3,&local_res10,param_4);
  this_00 = (FDynamicMeshChange *)((param_3.Ptr)->OldVertices).AllocatorInstance.Data;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  pIVar2 = (param_4->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// UpdateColliderMesh @ 14cbb7180

void __thiscall FBaseDynamicMeshSelector::UpdateColliderMesh(FBaseDynamicMeshSelector *this)

{
  UDynamicMesh *this_00;
  FBaseDynamicMeshSelector *local_res8 [4];
  code *local_18;
  FBaseDynamicMeshSelector **local_10;
  
  this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateColliderMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_res8[0] = this;
  UDynamicMesh::ProcessMesh
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return;
}

// UpdateGroupEdgeSegmentTree @ 14cbb7550

void __thiscall FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree(FBaseDynamicMeshSelector *this)

{
  UDynamicMesh *this_00;
  FGroupTopology *local_res8 [4];
  FGroupTopology **local_28;
  FBaseDynamicMeshSelector *local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_res8[0] = GetGroupTopology(this);
  this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  local_28 = local_res8;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_20 = this;
  UDynamicMesh::ProcessMesh
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return;
}

// UpdateGroupTopology @ 14cbb75b0

void __thiscall FBaseDynamicMeshSelector::UpdateGroupTopology(FBaseDynamicMeshSelector *this)

{
  TPimplPtr<UE::Geometry::FGroupTopology,0> *pTVar1;
  FDynamicMesh3 *pFVar2;
  FGroupTopology *pFVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  longlong local_18 [2];
  
  pUVar4 = FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
  pFVar2 = *(FDynamicMesh3 **)&pUVar4[4].field_0x18;
  puVar5 = ::operator_new(0x170);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *puVar5 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FGroupTopology>;
    UE::Geometry::FGroupTopology::FGroupTopology((FGroupTopology *)(puVar5 + 2),pFVar2,true);
  }
  pTVar1 = &this->GroupTopology;
  if ((TPimplPtr<UE::Geometry::FGroupTopology,0> *)local_18 == pTVar1) {
    if ((FGroupTopology *)(puVar5 + 2) != (FGroupTopology *)0x0) {
      (*(code *)*puVar5)(puVar5);
    }
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (FGroupTopology *)(puVar5 + 2);
    if (pFVar3 != (FGroupTopology *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cbb7643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pFVar3[-1].CurrentExtraCornerVids.Hash.SecondaryData)
                (&pFVar3[-1].CurrentExtraCornerVids.Hash.SecondaryData);
      return;
    }
  }
  return;
}

// UpdateSelectionFromSelection @ 14cbb9e60

void __thiscall
FBaseDynamicMeshSelector::UpdateSelectionFromSelection
          (FBaseDynamicMeshSelector *this,FGeometrySelection *param_1,bool param_2,
          FGeometrySelectionEditor *param_3,FGeometrySelectionUpdateConfig *param_4,
          FGeometrySelectionDelta *param_5)

{
  FGeometrySelectionDelta *pFVar1;
  char cVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  UDynamicMesh *this_00;
  undefined1 local_res8 [8];
  undefined1 local_48 [16];
  FGeometrySelectionEditor *local_38;
  undefined1 *local_30;
  FBaseDynamicMeshSelector *local_28;
  FGeometrySelection *local_20;
  FGeometrySelectionUpdateConfig *local_18;
  FGeometrySelectionDelta **local_10;
  
  cVar2 = (**(code **)(this->_padding_ + 0x30))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(this->_padding_ + 0x38))(this), cVar2 != '\0')) {
    return;
  }
  pFVar1 = param_5;
  if ((param_1->ElementType == param_3->TargetSelection->ElementType) &&
     (param_1->TopologyType == param_3->TargetSelection->TopologyType)) {
    pTVar3 = TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Array
                       (&param_1->Selection,
                        (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)local_48);
    UE::Geometry::UpdateSelectionWithNewElements(param_3,param_4->ChangeType,pTVar3,pFVar1);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  else if (param_2) {
    local_res8[0] = 0;
    this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_30 = local_res8;
    local_18 = param_4;
    local_10 = &param_5;
    local_48._8_8_ = &local_38;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionFromSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_38 = param_3;
    local_28 = this;
    local_20 = param_1;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_48);
  }
  return;
}

// UpdateSelectionViaRaycast @ 14cbbaf30

void __thiscall
FBaseDynamicMeshSelector::UpdateSelectionViaRaycast
          (FBaseDynamicMeshSelector *this,FWorldRayQueryInfo *param_1,
          FGeometrySelectionEditor *param_2,FGeometrySelectionUpdateConfig *param_3,
          FGeometrySelectionUpdateResult *param_4)

{
  EGeometryTopologyType EVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  FGroupTopology *pFVar6;
  FColliderMesh *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  TRay<double> local_88;
  TTransformSRT3<double> local_58;
  
  cVar3 = (**(code **)(this->_padding_ + 0x30))();
  if ((cVar3 != '\0') && (cVar3 = (**(code **)(this->_padding_ + 0x38))(this), cVar3 != '\0')) {
    return;
  }
  EVar1 = param_2->TargetSelection->TopologyType;
  if (EVar1 == Triangle) {
    pcVar9 = *(code **)(this->_padding_ + 0xe8);
  }
  else {
    if ((EVar1 != Polygroup) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelectionEditor.GetTopologyType() == EGeometryTopologyType::Polygroup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\DynamicMeshSelector.cpp"
                           ,0x114,L""), bVar4)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (param_2->TargetSelection->ElementType != Edge) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->GetWorldTransformFunc);
      pcVar9 = *(code **)&this->GetWorldTransformFunc;
      plVar2 = *(longlong **)&(this->GetWorldTransformFunc).field_0x28;
      plVar8 = (longlong *)&(this->GetWorldTransformFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar8 = plVar2;
      }
      uVar5 = (**(code **)(*plVar8 + 8))();
      (*pcVar9)(&local_58,uVar5);
      UE::Geometry::TTransformSRT3<double>::InverseTransformRay
                (&local_58,&local_88,&param_1->WorldRay);
      pFVar6 = GetGroupTopology(this);
      pFVar7 = GetColliderMesh(this);
      UE::Geometry::UpdateGroupSelectionViaRaycast(pFVar7,pFVar6,param_2,&local_88,param_3,param_4);
      return;
    }
    pcVar9 = *(code **)(this->_padding_ + 0xe0);
  }
  (*pcVar9)(this,param_1,param_2,param_3,param_4);
  return;
}

// UpdateSelectionViaRaycast_GroupEdges @ 14cbbb330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cbbb534) */
/* WARNING: Removing unreachable block (ram,0x00014cbbb548) */
/* WARNING: Removing unreachable block (ram,0x00014cbbb54c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges
          (FBaseDynamicMeshSelector *this,FWorldRayQueryInfo *param_1,
          FGeometrySelectionEditor *param_2,FGeometrySelectionUpdateConfig *param_3,
          FGeometrySelectionUpdateResult *param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  FWorldRayQueryInfo *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  FColliderMesh *this_00;
  FSegmentTree3 *pFVar9;
  FGroupTopology *pFVar10;
  UDynamicMesh *pUVar11;
  longlong *plVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auStackY_4b8 [32];
  uint local_478;
  uint local_474;
  uint local_470;
  uint local_46c;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_468;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_458;
  TVector<double>_u_0 local_448;
  TVector<double>_u_0 local_430;
  undefined8 local_418;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  int local_3d8 [2];
  double local_3d0;
  double local_3c8;
  uint *local_3c0;
  undefined8 *local_3b8;
  code *local_3b0;
  uint **local_3a8;
  code *local_3a0;
  undefined8 *local_398;
  uint *local_390;
  undefined8 *local_388;
  code *local_380;
  uint **local_378;
  TVector<double>_u_0 local_370;
  double local_358;
  double local_350;
  double local_348;
  undefined8 local_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  TQuaternion<double>_u_0 local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  TVector<double> local_198;
  undefined8 local_178;
  undefined8 uStack_170;
  FWorldRayQueryInfo *local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  FBaseDynamicMeshSelector *pFStack_120;
  FWorldRayQueryInfo *local_118;
  longlong *plStack_110;
  bool local_108;
  FRayNearestSegmentInfo local_f8;
  undefined1 local_d8 [56];
  longlong *local_a0;
  bool local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetWorldTransformFunc);
  pcVar1 = *(code **)&this->GetWorldTransformFunc;
  plVar13 = *(longlong **)&(this->GetWorldTransformFunc).field_0x28;
  plVar12 = (longlong *)&(this->GetWorldTransformFunc).field_0x10;
  if (plVar13 != (longlong *)0x0) {
    plVar12 = plVar13;
  }
  uVar8 = (**(code **)(*plVar12 + 8))();
  (*pcVar1)(&local_2e8,uVar8);
  UE::Geometry::TTransformSRT3<double>::InverseTransformRay
            ((TTransformSRT3<double> *)&local_2e8._s_0,(TRay<double> *)&local_370._s_0,
             &param_1->WorldRay);
  pFVar4 = local_118;
  uVar8 = uStack_130;
  dVar3 = __real_7fefffffffffffff;
  local_298 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  dStack_290 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_288 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_280 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_278 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dStack_270 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  local_268 = (param_1->CameraState).Position.field0_0x0._s_0.X;
  dStack_260 = (param_1->CameraState).Position.field0_0x0._s_0.Y;
  local_258 = (param_1->CameraState).Position.field0_0x0._s_0.Z;
  uStack_250 = *(undefined8 *)&(param_1->CameraState).field_0x18;
  local_248 = (param_1->CameraState).Orientation.X;
  dStack_240 = (param_1->CameraState).Orientation.Y;
  local_238 = (param_1->CameraState).Orientation.Z;
  dStack_230 = (param_1->CameraState).Orientation.W;
  local_228._0_4_ = (param_1->CameraState).HorizontalFOVDegrees;
  local_228._4_4_ = (param_1->CameraState).OrthoWorldCoordinateWidth;
  uStack_220._0_4_ = (param_1->CameraState).AspectRatio;
  uStack_220._4_1_ = (param_1->CameraState).bIsOrthographic;
  uStack_220._5_1_ = (param_1->CameraState).bIsVR;
  uStack_220._6_2_ = *(undefined2 *)&(param_1->CameraState).field_0x4e;
  local_218 = (param_1->CameraState).DPIScale;
  uStack_210 = *(undefined8 *)&(param_1->CameraState).field_0x58;
  local_208 = local_2e8._s_0.X;
  dStack_200 = local_2e8._s_0.Y;
  local_1f8 = local_2e8._s_0.Z;
  dStack_1f0 = local_2e8._s_0.W;
  local_1e8 = local_2c8;
  uStack_1e0 = uStack_2c0;
  local_1d8 = local_2b8;
  uStack_1d0 = uStack_2b0;
  local_1c8 = local_2a8;
  uStack_1c0 = uStack_2a0;
  local_148._0_8_ = __real_7fefffffffffffff;
  local_138 = (code *)0x0;
  local_108 = false;
  pFStack_120 = (FBaseDynamicMeshSelector *)CONCAT44(pFStack_120._4_4_,pFStack_120._0_4_);
  if ((param_2->QueryConfig).bHitBackFaces == false) {
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l5::<lambda_2>,bool,int>
                ::Call;
    uStack_130 = uStack_170;
    local_118 = param_1;
    plStack_110 = (longlong *)0x0;
    local_128 = 0x5291a0f0;
    uStack_124 = 1;
    pFStack_120 = this;
    local_178 = 0;
    uStack_170 = uVar8;
    local_158 = pFVar4;
    uStack_150 = 0;
  }
  plStack_110 = (longlong *)0x0;
  if ((param_2->QueryConfig).bOnlyVisible == false) {
LAB_14cbbb909:
    dStack_330 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_328 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dStack_320 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_318 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    dStack_310 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_308 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    dStack_300 = 0.0;
    pFVar9 = GetGroupEdgeSpatial(this);
    uVar17 = (undefined4)local_148._0_8_;
    uVar18 = SUB84(local_148._0_8_,4);
    if (__real_47efffffe0000000 <= (double)local_148._0_8_) {
      uVar17 = SUB84(__real_47efffffe0000000,0);
      uVar18 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
    }
    local_f8.Metric = dVar3;
    local_470 = 0xffffffff;
    local_3a0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l2::<lambda_1>,bool,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    local_398 = &local_298;
    local_f8.RayParam = (double)CONCAT44(uVar18,uVar17);
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_f8.SegmentParam = ___xmm_7fefffffffffffff3fe0000000000000;
    local_f8.SegmentDist = _UNK_15291a4b8;
    UE::Geometry::FSegmentTree3::FindNearestVisibleSegmentHitByRayInternal
              (pFVar9,pFVar9->RootBoxIndex,(TRay<double> *)&local_370._s_0,
               (TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                *)&local_3a0,(int *)&local_470,&local_f8,(FQueryOptions *)local_148);
    lVar16 = (longlong)(int)local_470;
    if (local_470 == 0xffffffff) goto LAB_14cbbbb6b;
    uVar6 = 0;
    if ((int)local_470 < (pFVar9->SegmentList).ArrayNum) {
      uVar6 = ~local_470 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = (pFVar9->SegmentList).AllocatorInstance.Data;
    lVar16 = lVar16 * 0x40;
    local_338 = *(undefined8 *)(pFVar2 + lVar16);
    dStack_330 = *(double *)(pFVar2 + lVar16 + 8);
    dStack_328 = *(double *)(pFVar2 + lVar16 + 0x10);
    dStack_320 = *(double *)(pFVar2 + lVar16 + 0x10 + 8);
    local_318 = *(double *)(pFVar2 + lVar16 + 0x20);
    dStack_310 = *(double *)(pFVar2 + lVar16 + 0x20 + 8);
    local_308 = *(double *)(pFVar2 + lVar16 + 0x30);
    dStack_300 = *(double *)(pFVar2 + lVar16 + 0x30 + 8);
    pFVar10 = GetGroupTopology(this);
    iVar7 = UE::Geometry::FGroupTopology::FindGroupEdgeID(pFVar10,(int)local_338);
    if (iVar7 < 0) goto LAB_14cbbbb6b;
    local_46c = 0;
    pUVar11 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_390 = &local_46c;
    local_388 = &local_338;
    local_378 = &local_390;
    local_380 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l26::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              (pUVar11,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_380
              );
    uVar15 = local_46c << 0x1e;
    uVar6 = local_46c >> 2;
    local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_458.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_458.AllocatorInstance,1,&local_458.ArrayMax);
    *(ulonglong *)local_458.AllocatorInstance.Data = CONCAT44(iVar7,uVar15 | uVar6);
    bVar5 = UE::Geometry::UpdateSelectionWithNewElements
                      (param_2,param_3->ChangeType,&local_458,&param_4->SelectionDelta);
    FVar14.Data = local_458.AllocatorInstance.Data;
  }
  else {
    this_00 = GetColliderMesh(this);
    bVar5 = UE::Geometry::FColliderMesh::FindNearestHitTriangle
                      (this_00,(TRay<double> *)&local_370._s_0,&local_3d0,local_3d8,&local_198,
                       (FQueryOptions *)local_148);
    if (!bVar5) goto LAB_14cbbb909;
    local_430._s_0.X = local_358 * local_3d0 + local_370._s_0.X;
    local_430._s_0.Z = local_348 * local_3d0 + local_370._s_0.Z;
    local_430._s_0.Y = local_350 * local_3d0 + local_370._s_0.Y;
    local_3f8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    dStack_3f0 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    dStack_3e0 = 0.0;
    dStack_410 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_408 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dStack_400 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3e8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    pFVar9 = GetGroupEdgeSpatial(this);
    local_d8._0_8_ = dVar3;
    local_d8._16_8_ = 0;
    local_a0 = (longlong *)0x0;
    local_98 = false;
    local_3c8 = dVar3;
    local_478 = 0xffffffff;
    UE::Geometry::FSegmentTree3::FindNearestSegmentInternal
              (pFVar9,pFVar9->RootBoxIndex,(TVector<double> *)&local_430._s_0,&local_3c8,
               (int *)&local_478,(FQueryOptions *)local_d8);
    lVar16 = (longlong)(int)local_478;
    if (local_478 == 0xffffffff) {
      bVar5 = false;
    }
    else {
      uVar6 = 0;
      if ((int)local_478 < (pFVar9->SegmentList).ArrayNum) {
        uVar6 = ~local_478 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = (pFVar9->SegmentList).AllocatorInstance.Data;
      lVar16 = lVar16 * 0x40;
      bVar5 = true;
      local_418 = *(undefined8 *)(pFVar2 + lVar16);
      dStack_410 = *(double *)(pFVar2 + lVar16 + 8);
      dStack_408 = *(double *)(pFVar2 + lVar16 + 0x10);
      dStack_400 = *(double *)(pFVar2 + lVar16 + 0x10 + 8);
      local_3f8 = *(double *)(pFVar2 + lVar16 + 0x20);
      dStack_3f0 = *(double *)(pFVar2 + lVar16 + 0x20 + 8);
      local_3e8 = *(double *)(pFVar2 + lVar16 + 0x30);
      dStack_3e0 = *(double *)(pFVar2 + lVar16 + 0x30 + 8);
    }
    if (local_d8._16_8_ != 0) {
      plVar13 = (longlong *)(local_d8 + 0x20);
      if (local_a0 != (longlong *)0x0) {
        plVar13 = local_a0;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (!bVar5) goto LAB_14cbbbb6b;
    dVar19 = (local_430._s_0.Y - dStack_408) * dStack_3f0 +
             (local_430._s_0.X - dStack_410) * local_3f8 +
             (local_430._s_0.Z - dStack_400) * local_3e8;
    dVar3 = dStack_3e0;
    if ((dStack_3e0 <= dVar19) ||
       (dVar3 = dVar19,
       (double)CONCAT44((uint)((ulonglong)dStack_3e0 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dStack_3e0,0) ^ (uint)__xmm_80000000000000008000000000000000) < dVar19
       )) {
      local_448._s_0.Z = local_3e8 * dVar3 + dStack_400;
      local_448._s_0.Y = dStack_3f0 * dVar3 + dStack_408;
      local_448._s_0.X = local_3f8 * dVar3 + dStack_410;
    }
    else {
      local_448._s_0.X = dStack_410 - local_3f8 * dStack_3e0;
      local_448._s_0.Y = dStack_408 - dStack_3f0 * dStack_3e0;
      local_448._s_0.Z = dStack_400 - local_3e8 * dStack_3e0;
    }
    bVar5 = `FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l2::<lambda_1>::
            operator()(&local_298,0,(TVector<double> *)&local_430._s_0,
                       (TVector<double> *)&local_448._s_0);
    if (!bVar5) goto LAB_14cbbbb6b;
    pFVar10 = GetGroupTopology(this);
    iVar7 = UE::Geometry::FGroupTopology::FindGroupEdgeID(pFVar10,(int)local_418);
    if (iVar7 < 0) goto LAB_14cbbbb6b;
    local_474 = 0;
    pUVar11 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
    local_3c0 = &local_474;
    local_3b8 = &local_418;
    local_3a8 = &local_3c0;
    local_3b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l20::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              (pUVar11,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_3b0
              );
    uVar15 = local_474 << 0x1e;
    uVar6 = local_474 >> 2;
    local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_468.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_468.AllocatorInstance,1,&local_468.ArrayMax);
    *(ulonglong *)local_468.AllocatorInstance.Data = CONCAT44(iVar7,uVar15 | uVar6);
    bVar5 = UE::Geometry::UpdateSelectionWithNewElements
                      (param_2,param_3->ChangeType,&local_468,&param_4->SelectionDelta);
    FVar14.Data = local_468.AllocatorInstance.Data;
  }
  param_4->bSelectionModified = bVar5;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  param_4->bSelectionMissed = false;
LAB_14cbbbb6b:
  if (local_138 != (code *)0x0) {
    plVar13 = (longlong *)&local_128;
    if (plStack_110 != (longlong *)0x0) {
      plVar13 = plStack_110;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// UpdateSelectionViaRaycast_MeshTopology @ 14cbbbbf0

void __thiscall
FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology
          (FBaseDynamicMeshSelector *this,FWorldRayQueryInfo *param_1,
          FGeometrySelectionEditor *param_2,FGeometrySelectionUpdateConfig *param_3,
          FGeometrySelectionUpdateResult *param_4)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FColliderMesh *pFVar4;
  longlong *plVar5;
  FBaseDynamicMeshSelector *local_a8;
  FGeometrySelectionEditor *local_a0;
  FGeometrySelectionUpdateResult *local_98;
  TRay<double> local_90;
  TTransformSRT3<double> local_60;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetWorldTransformFunc);
  pcVar1 = *(code **)&this->GetWorldTransformFunc;
  plVar2 = *(longlong **)&(this->GetWorldTransformFunc).field_0x28;
  plVar5 = (longlong *)&(this->GetWorldTransformFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(&local_60,uVar3);
  UE::Geometry::TTransformSRT3<double>::InverseTransformRay(&local_60,&local_90,&param_1->WorldRay);
  pFVar4 = GetColliderMesh(this);
  UE::Geometry::UpdateTriangleSelectionViaRaycast(pFVar4,param_2,&local_90,param_3,param_4);
  if (param_2->TargetSelection->ElementType == Edge) {
    local_98 = param_4;
    local_a8 = this;
    local_a0 = param_2;
    `FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::operator()
              (&local_a8,Add);
    `FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::operator()
              (&local_a8,Remove);
  }
  return;
}

// UpdateSelectionViaShape @ 14cbbbce0

void __thiscall
FBaseDynamicMeshSelector::UpdateSelectionViaShape
          (FBaseDynamicMeshSelector *this,FWorldShapeQueryInfo *param_1,
          FGeometrySelectionEditor *param_2,FGeometrySelectionUpdateConfig *param_3,
          FGeometrySelectionUpdateResult *param_4)

{
  EGeometryTopologyType EVar1;
  EGeometryElementType EVar2;
  code *pcVar3;
  longlong *plVar4;
  FGeometrySelectionUpdateResult *pFVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  UDynamicMesh *this_00;
  longlong *plVar9;
  code *local_a8;
  FGeometrySelectionUpdateResult ***local_a0;
  FGeometrySelectionUpdateResult **local_98;
  FWorldShapeQueryInfo *local_90;
  FWorldShapeQueryInfo *local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  
  pFVar5 = param_4;
  param_4->bSelectionMissed = true;
  param_4->bSelectionModified = false;
  cVar6 = (**(code **)(this->_padding_ + 0x30))();
  if ((cVar6 != '\0') && (cVar6 = (**(code **)(this->_padding_ + 0x38))(this), cVar6 != '\0')) {
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetWorldTransformFunc);
  pcVar3 = *(code **)&this->GetWorldTransformFunc;
  plVar4 = *(longlong **)&(this->GetWorldTransformFunc).field_0x28;
  plVar9 = (longlong *)&(this->GetWorldTransformFunc).field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar9 = plVar4;
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  (*pcVar3)(&stack0xffffffffffffff98,uVar8);
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  EVar1 = param_2->TargetSelection->TopologyType;
  if (EVar1 == Triangle) {
    EVar2 = param_2->TargetSelection->ElementType;
    if (EVar2 == Vertex) {
      this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
      local_98 = (FGeometrySelectionUpdateResult **)&stack0xffffffffffffff98;
      local_88 = (FWorldShapeQueryInfo *)local_78;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l10::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_90 = param_1;
    }
    else if (EVar2 == Edge) {
      this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
      local_98 = (FGeometrySelectionUpdateResult **)&stack0xffffffffffffff98;
      local_88 = (FWorldShapeQueryInfo *)local_78;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l14::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_90 = param_1;
    }
    else {
      if (EVar2 != Face) goto LAB_14cbbbf36;
      this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
      local_98 = (FGeometrySelectionUpdateResult **)&stack0xffffffffffffff98;
      local_88 = (FWorldShapeQueryInfo *)local_78;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l18::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_90 = param_1;
    }
LAB_14cbbbf00:
    local_a0 = &local_98;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a8)
    ;
  }
  else {
    if (EVar1 != Polygroup) goto LAB_14cbbbf36;
    param_4 = (FGeometrySelectionUpdateResult *)GetGroupTopology(this);
    EVar2 = param_2->TargetSelection->ElementType;
    if (EVar2 == Vertex) {
      this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l25::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
LAB_14cbbbefc:
      local_80 = local_78;
      local_90 = (FWorldShapeQueryInfo *)&stack0xffffffffffffff98;
      local_98 = &param_4;
      local_88 = param_1;
      goto LAB_14cbbbf00;
    }
    if (EVar2 == Edge) {
      this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l29::<lambda_5>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      goto LAB_14cbbbefc;
    }
    if (EVar2 == Face) {
      this_00 = (UDynamicMesh *)FWeakObjectPtr::Get(&(this->TargetMesh).WeakPtr);
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l33::<lambda_6>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      goto LAB_14cbbbefc;
    }
  }
  if (0 < (int)local_78._8_4_) {
    bVar7 = UE::Geometry::UpdateSelectionWithNewElements
                      (param_2,param_3->ChangeType,
                       (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)local_78,
                       &pFVar5->SelectionDelta);
    pFVar5->bSelectionModified = bVar7;
    pFVar5->bSelectionMissed = false;
  }
LAB_14cbbbf36:
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// operator() @ 150576db0

bool __thiscall
`FBaseDynamicMeshSelector::~FBaseDynamicMeshSelector'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8165591483852783587>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8165591483852783587>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

