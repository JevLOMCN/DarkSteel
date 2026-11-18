// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 36

// ~TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> @ 14c7b6980

void __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::
~TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__TRemoveOccludedTriangles_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__6B_;
  pFVar1 = (this->RemovedT).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> @ 14c7b69a0

void __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::
~TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ =
       (longlong)&___7__TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->RemovedT).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator() @ 14c7c1d50

bool __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::
<lambda_1>::operator()
          (void *this,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>
          *param_1,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>
                   *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TTransformSRT3<double> *param_5,
          TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
          *param_6)

{
  int iVar1;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *pTVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  longlong local_res18;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double> local_a8;
  double local_80;
  
  iVar1 = param_2->ArrayNum;
  uVar12 = 0;
  dVar4 = 0.0;
  dVar13 = 0.0;
  if (0 < (longlong)iVar1) {
    lVar11 = 0;
    local_res18 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < param_6->ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar10 = (param_6->AllocatorInstance).Data + local_res18;
      dVar13 = (((TQuaternion<double>_u_0 *)&pFVar10[0x20].field_0x0)->_s_0).X;
      if (((((dVar13 == (param_5->Translation).field0_0x0._s_0.X) &&
            (*(double *)(pFVar10 + 0x28) == (param_5->Translation).field0_0x0._s_0.Y)) &&
           (*(double *)(pFVar10 + 0x30) == (param_5->Translation).field0_0x0._s_0.Z)) &&
          ((*(double *)(pFVar10 + 0x38) == (param_5->Scale3D).field0_0x0._s_0.X &&
           ((((TQuaternion<double>_u_0 *)&pFVar10[0x40].field_0x0)->_s_0).X ==
            (param_5->Scale3D).field0_0x0._s_0.Y)))) &&
         ((*(double *)(pFVar10 + 0x48) == (param_5->Scale3D).field0_0x0._s_0.Z &&
          (bVar5 = UE::Geometry::TQuaternion<double>::EpsilonEqual
                             (&param_5->Rotation,(TQuaternion<double> *)pFVar10,0.0), bVar5)))) {
        dVar3 = (param_4->field0_0x0)._s_0.X;
        dVar14 = *(double *)((longlong)&param_4->field0_0x0 + 8);
        dVar13 = (param_4->field0_0x0)._s_0.Z;
      }
      else {
        local_e0._s_0.X = (param_3->field0_0x0)._s_0.X - dVar13;
        local_e0._s_0.Y = (param_3->field0_0x0)._s_0.Y - *(double *)(pFVar10 + 0x28);
        local_e0._s_0.Z = (param_3->field0_0x0)._s_0.Z - *(double *)(pFVar10 + 0x30);
        pTVar8 = UE::Geometry::operator*<double>
                           (&local_a8,(TQuaternion<double> *)(pFVar10 + 0x50),
                            (TVector<double> *)&local_e0._s_0);
        dVar13 = (pTVar8->field0_0x0)._s_0.Z *
                 (((TQuaternion<double>_u_0 *)&pFVar10[0x80].field_0x0)->_s_0).X;
        dVar14 = (pTVar8->field0_0x0)._s_0.Y * *(double *)(pFVar10 + 0x78);
        dVar3 = *(double *)(pFVar10 + 0x70) * (pTVar8->field0_0x0)._s_0.X;
        local_80 = dVar13;
      }
      uVar7 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      this_00 = param_2->DataPtr[lVar11];
      if ((this_00->Tree == (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Tree",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                             ,0x16c,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar9 = this_00->Tree;
      if ((pTVar9->RootIndex < 0) || (pTVar9->MeshChangeStamp != 1)) {
        UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::BuildTopDown(pTVar9,false)
        ;
        pTVar9->MeshChangeStamp = 1;
      }
      pTVar9 = this_00->Tree;
      if (this_00->FastWindingCacheMeshChangeStamp != pTVar9->MeshChangeStamp) {
        UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::build_fast_winding_cache
                  (this_00);
        pTVar9 = this_00->Tree;
        this_00->FastWindingCacheMeshChangeStamp = pTVar9->MeshChangeStamp;
      }
      local_c8._8_4_ = SUB84(dVar14,0);
      local_c8._0_8_ = dVar3;
      local_c8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      local_c8._s_0.Z = dVar13;
      dVar13 = UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::
               branch_fast_winding_num(this_00,pTVar9->RootIndex,(TVector<double> *)&local_c8._s_0);
      dVar4 = dVar4 + dVar13;
      local_res18 = local_res18 + 0x88;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 1;
      dVar13 = dVar4;
    } while (lVar11 < iVar1);
  }
  return *(double *)(*(longlong *)this + 0x20) <= dVar13 &&
         dVar13 != *(double *)(*(longlong *)this + 0x20);
}

// operator() @ 14c7c20a0

bool __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_1>::
operator()(void *this,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *param_1,
          TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TTransformSRT3<double> *param_5,
          TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
          *param_6)

{
  int iVar1;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double> local_a8;
  double local_80;
  
  iVar1 = param_2->ArrayNum;
  uVar12 = 0;
  dVar4 = 0.0;
  dVar13 = 0.0;
  if (0 < (longlong)iVar1) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < param_6->ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar9 = (param_6->AllocatorInstance).Data + lVar11;
      dVar13 = (((TQuaternion<double>_u_0 *)&pFVar9[0x20].field_0x0)->_s_0).X;
      if (((((dVar13 == (param_5->Translation).field0_0x0._s_0.X) &&
            (*(double *)(pFVar9 + 0x28) == (param_5->Translation).field0_0x0._s_0.Y)) &&
           (*(double *)(pFVar9 + 0x30) == (param_5->Translation).field0_0x0._s_0.Z)) &&
          ((*(double *)(pFVar9 + 0x38) == (param_5->Scale3D).field0_0x0._s_0.X &&
           ((((TQuaternion<double>_u_0 *)&pFVar9[0x40].field_0x0)->_s_0).X ==
            (param_5->Scale3D).field0_0x0._s_0.Y)))) &&
         ((*(double *)(pFVar9 + 0x48) == (param_5->Scale3D).field0_0x0._s_0.Z &&
          (bVar5 = UE::Geometry::TQuaternion<double>::EpsilonEqual
                             (&param_5->Rotation,(TQuaternion<double> *)pFVar9,0.0), bVar5)))) {
        dVar3 = (param_4->field0_0x0)._s_0.X;
        dVar14 = *(double *)((longlong)&param_4->field0_0x0 + 8);
        dVar13 = (param_4->field0_0x0)._s_0.Z;
      }
      else {
        local_e0._s_0.X = (param_3->field0_0x0)._s_0.X - dVar13;
        local_e0._s_0.Y = (param_3->field0_0x0)._s_0.Y - *(double *)(pFVar9 + 0x28);
        local_e0._s_0.Z = (param_3->field0_0x0)._s_0.Z - *(double *)(pFVar9 + 0x30);
        pTVar8 = UE::Geometry::operator*<double>
                           (&local_a8,(TQuaternion<double> *)(pFVar9 + 0x50),
                            (TVector<double> *)&local_e0._s_0);
        dVar13 = (pTVar8->field0_0x0)._s_0.Z *
                 (((TQuaternion<double>_u_0 *)&pFVar9[0x80].field_0x0)->_s_0).X;
        dVar14 = (pTVar8->field0_0x0)._s_0.Y * *(double *)(pFVar9 + 0x78);
        dVar3 = *(double *)(pFVar9 + 0x70) * (pTVar8->field0_0x0)._s_0.X;
        local_80 = dVar13;
      }
      uVar7 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      this_00 = param_2->DataPtr[lVar10];
      UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this_00,false);
      local_c8._8_4_ = SUB84(dVar14,0);
      local_c8._0_8_ = dVar3;
      local_c8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      local_c8._s_0.Z = dVar13;
      dVar13 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                         (this_00,this_00->Tree->RootIndex,(TVector<double> *)&local_c8._s_0);
      uVar12 = uVar12 + 1;
      dVar4 = dVar4 + dVar13;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x88;
      dVar13 = dVar4;
    } while (lVar10 < iVar1);
  }
  return *(double *)(*(longlong *)this + 0x20) <= dVar13 &&
         dVar13 != *(double *)(*(longlong *)this + 0x20);
}

// operator() @ 14c7cc680

bool __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::
<lambda_2>::operator()
          (void *this,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>
          *param_1,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>
                   *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TTransformSRT3<double> *param_5,
          TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
          *param_6)

{
  int iVar1;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  TVector<double> local_98;
  double local_70;
  
  uVar12 = 0;
  iVar1 = param_2->ArrayNum;
  if (0 < (longlong)iVar1) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar12 < param_6->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar9 = (param_6->AllocatorInstance).Data + lVar11;
      dVar13 = (((TQuaternion<double>_u_0 *)&pFVar9[0x20].field_0x0)->_s_0).X;
      if (((((dVar13 == (param_5->Translation).field0_0x0._s_0.X) &&
            (*(double *)(pFVar9 + 0x28) == (param_5->Translation).field0_0x0._s_0.Y)) &&
           (*(double *)(pFVar9 + 0x30) == (param_5->Translation).field0_0x0._s_0.Z)) &&
          ((*(double *)(pFVar9 + 0x38) == (param_5->Scale3D).field0_0x0._s_0.X &&
           ((((TQuaternion<double>_u_0 *)&pFVar9[0x40].field_0x0)->_s_0).X ==
            (param_5->Scale3D).field0_0x0._s_0.Y)))) &&
         ((*(double *)(pFVar9 + 0x48) == (param_5->Scale3D).field0_0x0._s_0.Z &&
          (bVar4 = UE::Geometry::TQuaternion<double>::EpsilonEqual
                             (&param_5->Rotation,(TQuaternion<double> *)pFVar9,0.0), bVar4)))) {
        dVar3 = (param_4->field0_0x0)._s_0.X;
        dVar14 = *(double *)((longlong)&param_4->field0_0x0 + 8);
        dVar13 = (param_4->field0_0x0)._s_0.Z;
      }
      else {
        local_d0._s_0.X = (param_3->field0_0x0)._s_0.X - dVar13;
        local_d0._s_0.Y = (param_3->field0_0x0)._s_0.Y - *(double *)(pFVar9 + 0x28);
        local_d0._s_0.Z = (param_3->field0_0x0)._s_0.Z - *(double *)(pFVar9 + 0x30);
        pTVar7 = UE::Geometry::operator*<double>
                           (&local_98,(TQuaternion<double> *)(pFVar9 + 0x50),
                            (TVector<double> *)&local_d0._s_0);
        dVar13 = (pTVar7->field0_0x0)._s_0.Z *
                 (((TQuaternion<double>_u_0 *)&pFVar9[0x80].field_0x0)->_s_0).X;
        dVar14 = (pTVar7->field0_0x0)._s_0.Y * *(double *)(pFVar9 + 0x78);
        dVar3 = *(double *)(pFVar9 + 0x70) * (pTVar7->field0_0x0)._s_0.X;
        local_70 = dVar13;
      }
      uVar6 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      this_00 = param_2->DataPtr[lVar10];
      if ((this_00->Tree == (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Tree",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                             ,0x16c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar8 = this_00->Tree;
      if ((pTVar8->RootIndex < 0) || (pTVar8->MeshChangeStamp != 1)) {
        UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::BuildTopDown(pTVar8,false)
        ;
        pTVar8->MeshChangeStamp = 1;
      }
      pTVar8 = this_00->Tree;
      if (this_00->FastWindingCacheMeshChangeStamp != pTVar8->MeshChangeStamp) {
        UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::build_fast_winding_cache
                  (this_00);
        pTVar8 = this_00->Tree;
        this_00->FastWindingCacheMeshChangeStamp = pTVar8->MeshChangeStamp;
      }
      local_b8._8_4_ = SUB84(dVar14,0);
      local_b8._0_8_ = dVar3;
      local_b8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      local_b8._s_0.Z = dVar13;
      dVar13 = UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::
               branch_fast_winding_num(this_00,pTVar8->RootIndex,(TVector<double> *)&local_b8._s_0);
      if (*(double *)(*(longlong *)this + 0x20) <= dVar13 &&
          dVar13 != *(double *)(*(longlong *)this + 0x20)) {
        return true;
      }
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x88;
    } while (lVar10 < iVar1);
  }
  return false;
}

// operator() @ 14c7cc980

bool __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_2>::
operator()(void *this,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *param_1,
          TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TTransformSRT3<double> *param_5,
          TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
          *param_6)

{
  int iVar1;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  TVector<double> local_98;
  double local_70;
  
  uVar11 = 0;
  iVar1 = param_2->ArrayNum;
  if (0 < (longlong)iVar1) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < param_6->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar8 = (param_6->AllocatorInstance).Data + lVar10;
      dVar12 = (((TQuaternion<double>_u_0 *)&pFVar8[0x20].field_0x0)->_s_0).X;
      if (((((dVar12 == (param_5->Translation).field0_0x0._s_0.X) &&
            (*(double *)(pFVar8 + 0x28) == (param_5->Translation).field0_0x0._s_0.Y)) &&
           (*(double *)(pFVar8 + 0x30) == (param_5->Translation).field0_0x0._s_0.Z)) &&
          ((*(double *)(pFVar8 + 0x38) == (param_5->Scale3D).field0_0x0._s_0.X &&
           ((((TQuaternion<double>_u_0 *)&pFVar8[0x40].field_0x0)->_s_0).X ==
            (param_5->Scale3D).field0_0x0._s_0.Y)))) &&
         ((*(double *)(pFVar8 + 0x48) == (param_5->Scale3D).field0_0x0._s_0.Z &&
          (bVar4 = UE::Geometry::TQuaternion<double>::EpsilonEqual
                             (&param_5->Rotation,(TQuaternion<double> *)pFVar8,0.0), bVar4)))) {
        dVar3 = (param_4->field0_0x0)._s_0.X;
        dVar13 = *(double *)((longlong)&param_4->field0_0x0 + 8);
        dVar12 = (param_4->field0_0x0)._s_0.Z;
      }
      else {
        local_d0._s_0.X = (param_3->field0_0x0)._s_0.X - dVar12;
        local_d0._s_0.Y = (param_3->field0_0x0)._s_0.Y - *(double *)(pFVar8 + 0x28);
        local_d0._s_0.Z = (param_3->field0_0x0)._s_0.Z - *(double *)(pFVar8 + 0x30);
        pTVar7 = UE::Geometry::operator*<double>
                           (&local_98,(TQuaternion<double> *)(pFVar8 + 0x50),
                            (TVector<double> *)&local_d0._s_0);
        dVar12 = (pTVar7->field0_0x0)._s_0.Z *
                 (((TQuaternion<double>_u_0 *)&pFVar8[0x80].field_0x0)->_s_0).X;
        dVar13 = (pTVar7->field0_0x0)._s_0.Y * *(double *)(pFVar8 + 0x78);
        dVar3 = *(double *)(pFVar8 + 0x70) * (pTVar7->field0_0x0)._s_0.X;
        local_70 = dVar12;
      }
      uVar6 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      this_00 = param_2->DataPtr[lVar9];
      UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this_00,false);
      local_b8._8_4_ = SUB84(dVar13,0);
      local_b8._0_8_ = dVar3;
      local_b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      local_b8._s_0.Z = dVar12;
      dVar12 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                         (this_00,this_00->Tree->RootIndex,(TVector<double> *)&local_b8._s_0);
      if (*(double *)(*(longlong *)this + 0x20) <= dVar12 &&
          dVar12 != *(double *)(*(longlong *)this + 0x20)) {
        return true;
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x88;
    } while (lVar9 < iVar1);
  }
  return false;
}

// operator() @ 14c7d04a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::
<lambda_3>::operator()
          (void *this,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>
          *param_1,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>
                   *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TTransformSRT3<double> *param_5,
          TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
          *param_6)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  uint local_1b8;
  uint local_1b4;
  longlong local_1b0;
  void *local_1a8;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int> *local_1a0;
  TVector<double> *local_198;
  TVector<double> *local_190;
  TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
  *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  TVector<double>_u_0 local_168;
  double local_150;
  double dStack_148;
  double local_140;
  TVector<double>_u_0 local_138;
  TVector<double> local_120;
  double local_f8;
  TVector<double> local_f0;
  undefined8 local_d8 [2];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98;
  ulonglong local_88;
  
  uVar6 = __real_7fefffffffffffff;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_168._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_168._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_198 = param_4;
  local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_140 = __real_3ff0000000000000;
  local_150 = 0.0;
  dStack_148 = 0.0;
  local_188 = param_6;
  local_1b8 = 0;
  local_1a8 = this;
  local_1a0 = param_1;
  local_190 = param_3;
  if (0 < **(int **)((longlong)this + 0x10)) {
    do {
      local_170 = (longlong)local_1a0->ArrayNum;
      uVar16 = 0;
      lVar17 = 0;
      if (local_170 < 1) {
        return false;
      }
      local_1b4 = ~local_1b8 >> 0x1f;
      local_180 = (longlong)(int)local_1b8;
      local_1b0 = 0;
      local_178 = local_180 * 3;
      while( true ) {
        lVar7 = local_1b0;
        uVar18 = ~uVar16 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar16 < param_6->ArrayNum) {
          uVar12 = uVar18;
        }
        if (uVar12 == 0) {
          local_1c8 = (longlong)(int)uVar16;
          local_1c0 = (longlong)param_6->ArrayNum;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            uVar10 = (*pcVar3)();
            return (bool)uVar10;
          }
        }
        pFVar15 = (param_6->AllocatorInstance).Data + lVar7;
        dVar1 = (((TQuaternion<double>_u_0 *)&pFVar15[0x20].field_0x0)->_s_0).X;
        if (((((dVar1 == (param_5->Translation).field0_0x0._s_0.X) &&
              (*(double *)(pFVar15 + 0x28) == (param_5->Translation).field0_0x0._s_0.Y)) &&
             (*(double *)(pFVar15 + 0x30) == (param_5->Translation).field0_0x0._s_0.Z)) &&
            ((*(double *)(pFVar15 + 0x38) == (param_5->Scale3D).field0_0x0._s_0.X &&
             ((((TQuaternion<double>_u_0 *)&pFVar15[0x40].field_0x0)->_s_0).X ==
              (param_5->Scale3D).field0_0x0._s_0.Y)))) &&
           ((*(double *)(pFVar15 + 0x48) == (param_5->Scale3D).field0_0x0._s_0.Z &&
            (bVar9 = UE::Geometry::TQuaternion<double>::EpsilonEqual
                               (&param_5->Rotation,(TQuaternion<double> *)pFVar15,0.0), bVar9)))) {
          dVar5 = (local_198->field0_0x0)._s_0.X;
          dVar4 = *(double *)((longlong)&local_198->field0_0x0 + 8);
          dVar1 = (local_198->field0_0x0)._s_0.Z;
        }
        else {
          local_138._s_0.X = (local_190->field0_0x0)._s_0.X - dVar1;
          local_138._s_0.Y = (local_190->field0_0x0)._s_0.Y - *(double *)(pFVar15 + 0x28);
          local_138._s_0.Z = (local_190->field0_0x0)._s_0.Z - *(double *)(pFVar15 + 0x30);
          pTVar13 = UE::Geometry::operator*<double>
                              (&local_120,(TQuaternion<double> *)(pFVar15 + 0x50),
                               (TVector<double> *)&local_138._s_0);
          dVar1 = (pTVar13->field0_0x0)._s_0.Z *
                  (((TQuaternion<double>_u_0 *)&pFVar15[0x80].field_0x0)->_s_0).X;
          dVar4 = (pTVar13->field0_0x0)._s_0.Y * *(double *)(pFVar15 + 0x78);
          dVar5 = *(double *)(pFVar15 + 0x70) * (pTVar13->field0_0x0)._s_0.X;
          local_f8 = dVar1;
        }
        param_6 = local_188;
        uVar12 = 0;
        if ((int)uVar16 < local_188->ArrayNum) {
          uVar12 = uVar18;
        }
        if ((uVar12 == 0) &&
           (local_1c8 = lVar17, local_1c0 = (longlong)local_188->ArrayNum,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        pFVar15 = (param_6->AllocatorInstance).Data;
        plVar14 = *(longlong **)((longlong)local_1a8 + 8);
        iVar2 = (int)plVar14[1];
        uVar12 = 0;
        if ((int)local_1b8 < iVar2) {
          uVar12 = local_1b4;
        }
        if (uVar12 == 0) {
          local_1c8 = local_180;
          local_1c0 = (longlong)iVar2;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            uVar10 = (*pcVar3)();
            return (bool)uVar10;
          }
        }
        lVar7 = local_1b0;
        pTVar13 = UE::Geometry::operator*<double>
                            (&local_f0,(TQuaternion<double> *)(pFVar15 + local_1b0 + 0x50),
                             (TVector<double> *)(*plVar14 + local_178 * 8));
        pTVar8 = local_1a0;
        local_150 = *(double *)(pFVar15 + lVar7 + 0x70) * (pTVar13->field0_0x0)._s_0.X;
        dStack_148 = (pTVar13->field0_0x0)._s_0.Y * *(double *)(pFVar15 + lVar7 + 0x78);
        local_140 = (pTVar13->field0_0x0)._s_0.Z * *(double *)(pFVar15 + lVar7 + 0x80);
        local_168._8_4_ = SUB84(dVar4,0);
        local_168._s_0.X = dVar5;
        local_168._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uVar12 = 0;
        if ((int)uVar16 < local_1a0->ArrayNum) {
          uVar12 = uVar18;
        }
        local_168._s_0.Z = dVar1;
        if ((uVar12 == 0) &&
           (local_1c8 = lVar17, local_1c0 = (longlong)local_1a0->ArrayNum,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        local_d8[0] = uVar6;
        local_c8 = 0;
        local_a0 = (longlong *)0x0;
        local_98 = 0;
        cVar11 = (**(code **)(pTVar8->DataPtr[lVar17]->_padding_ + 0x68))
                           (pTVar8->DataPtr[lVar17],&local_168,local_d8);
        if (local_c8 != 0) {
          plVar14 = local_b8;
          if (local_a0 != (longlong *)0x0) {
            plVar14 = local_a0;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if (cVar11 != '\0') break;
        local_1b0 = lVar7 + 0x88;
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 1;
        if (local_170 <= lVar17) {
          return false;
        }
      }
      local_1b8 = local_1b8 + 1;
    } while ((int)local_1b8 < **(int **)((longlong)local_1a8 + 0x10));
  }
  return true;
}

// operator() @ 14c7d08f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_3>::
operator()(void *this,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *param_1,
          TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TTransformSRT3<double> *param_5,
          TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
          *param_6)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  uint local_1b8;
  uint local_1b4;
  longlong local_1b0;
  void *local_1a8;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *local_1a0;
  TVector<double> *local_198;
  TVector<double> *local_190;
  TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
  *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  TVector<double>_u_0 local_168;
  double local_150;
  double dStack_148;
  double local_140;
  TVector<double>_u_0 local_138;
  TVector<double> local_120;
  double local_f8;
  TVector<double> local_f0;
  undefined8 local_d8 [2];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98;
  ulonglong local_88;
  
  uVar6 = __real_7fefffffffffffff;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_168._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_168._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_198 = param_4;
  local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_140 = __real_3ff0000000000000;
  local_150 = 0.0;
  dStack_148 = 0.0;
  local_188 = param_6;
  local_1b8 = 0;
  local_1a8 = this;
  local_1a0 = param_1;
  local_190 = param_3;
  if (0 < **(int **)((longlong)this + 0x10)) {
    do {
      local_170 = (longlong)local_1a0->ArrayNum;
      uVar16 = 0;
      lVar17 = 0;
      if (local_170 < 1) {
        return false;
      }
      local_1b4 = ~local_1b8 >> 0x1f;
      local_180 = (longlong)(int)local_1b8;
      local_1b0 = 0;
      local_178 = local_180 * 3;
      while( true ) {
        lVar7 = local_1b0;
        uVar18 = ~uVar16 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar16 < param_6->ArrayNum) {
          uVar12 = uVar18;
        }
        if (uVar12 == 0) {
          local_1c8 = (longlong)(int)uVar16;
          local_1c0 = (longlong)param_6->ArrayNum;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            uVar10 = (*pcVar3)();
            return (bool)uVar10;
          }
        }
        pFVar15 = (param_6->AllocatorInstance).Data + lVar7;
        dVar1 = (((TQuaternion<double>_u_0 *)&pFVar15[0x20].field_0x0)->_s_0).X;
        if (((((dVar1 == (param_5->Translation).field0_0x0._s_0.X) &&
              (*(double *)(pFVar15 + 0x28) == (param_5->Translation).field0_0x0._s_0.Y)) &&
             (*(double *)(pFVar15 + 0x30) == (param_5->Translation).field0_0x0._s_0.Z)) &&
            ((*(double *)(pFVar15 + 0x38) == (param_5->Scale3D).field0_0x0._s_0.X &&
             ((((TQuaternion<double>_u_0 *)&pFVar15[0x40].field_0x0)->_s_0).X ==
              (param_5->Scale3D).field0_0x0._s_0.Y)))) &&
           ((*(double *)(pFVar15 + 0x48) == (param_5->Scale3D).field0_0x0._s_0.Z &&
            (bVar9 = UE::Geometry::TQuaternion<double>::EpsilonEqual
                               (&param_5->Rotation,(TQuaternion<double> *)pFVar15,0.0), bVar9)))) {
          dVar5 = (local_198->field0_0x0)._s_0.X;
          dVar4 = *(double *)((longlong)&local_198->field0_0x0 + 8);
          dVar1 = (local_198->field0_0x0)._s_0.Z;
        }
        else {
          local_138._s_0.X = (local_190->field0_0x0)._s_0.X - dVar1;
          local_138._s_0.Y = (local_190->field0_0x0)._s_0.Y - *(double *)(pFVar15 + 0x28);
          local_138._s_0.Z = (local_190->field0_0x0)._s_0.Z - *(double *)(pFVar15 + 0x30);
          pTVar13 = UE::Geometry::operator*<double>
                              (&local_120,(TQuaternion<double> *)(pFVar15 + 0x50),
                               (TVector<double> *)&local_138._s_0);
          dVar1 = (pTVar13->field0_0x0)._s_0.Z *
                  (((TQuaternion<double>_u_0 *)&pFVar15[0x80].field_0x0)->_s_0).X;
          dVar4 = (pTVar13->field0_0x0)._s_0.Y * *(double *)(pFVar15 + 0x78);
          dVar5 = *(double *)(pFVar15 + 0x70) * (pTVar13->field0_0x0)._s_0.X;
          local_f8 = dVar1;
        }
        param_6 = local_188;
        uVar12 = 0;
        if ((int)uVar16 < local_188->ArrayNum) {
          uVar12 = uVar18;
        }
        if ((uVar12 == 0) &&
           (local_1c8 = lVar17, local_1c0 = (longlong)local_188->ArrayNum,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        pFVar15 = (param_6->AllocatorInstance).Data;
        plVar14 = *(longlong **)((longlong)local_1a8 + 8);
        iVar2 = (int)plVar14[1];
        uVar12 = 0;
        if ((int)local_1b8 < iVar2) {
          uVar12 = local_1b4;
        }
        if (uVar12 == 0) {
          local_1c8 = local_180;
          local_1c0 = (longlong)iVar2;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            uVar10 = (*pcVar3)();
            return (bool)uVar10;
          }
        }
        lVar7 = local_1b0;
        pTVar13 = UE::Geometry::operator*<double>
                            (&local_f0,(TQuaternion<double> *)(pFVar15 + local_1b0 + 0x50),
                             (TVector<double> *)(*plVar14 + local_178 * 8));
        pTVar8 = local_1a0;
        local_150 = *(double *)(pFVar15 + lVar7 + 0x70) * (pTVar13->field0_0x0)._s_0.X;
        dStack_148 = (pTVar13->field0_0x0)._s_0.Y * *(double *)(pFVar15 + lVar7 + 0x78);
        local_140 = (pTVar13->field0_0x0)._s_0.Z * *(double *)(pFVar15 + lVar7 + 0x80);
        local_168._8_4_ = SUB84(dVar4,0);
        local_168._s_0.X = dVar5;
        local_168._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uVar12 = 0;
        if ((int)uVar16 < local_1a0->ArrayNum) {
          uVar12 = uVar18;
        }
        local_168._s_0.Z = dVar1;
        if ((uVar12 == 0) &&
           (local_1c8 = lVar17, local_1c0 = (longlong)local_1a0->ArrayNum,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        local_d8[0] = uVar6;
        local_c8 = 0;
        local_a0 = (longlong *)0x0;
        local_98 = 0;
        cVar11 = (**(code **)(pTVar8->DataPtr[lVar17]->_padding_ + 0x68))
                           (pTVar8->DataPtr[lVar17],&local_168,local_d8);
        if (local_c8 != 0) {
          plVar14 = local_b8;
          if (local_a0 != (longlong *)0x0) {
            plVar14 = local_a0;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if (cVar11 != '\0') break;
        local_1b0 = lVar7 + 0x88;
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 1;
        if (local_170 <= lVar17) {
          return false;
        }
      }
      local_1b8 = local_1b8 + 1;
    } while ((int)local_1b8 < **(int **)((longlong)local_1a8 + 0x10));
  }
  return true;
}

// operator() @ 14c7d26b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::
<lambda_4>::operator()
          (void *this,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>
          *param_1,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>
                   *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TTransformSRT3<double> *param_5,
          TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
          *param_6)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  longlong *plVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  void *local_188;
  longlong local_180;
  TVector<double> *local_178;
  TVector<double> *local_170;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int> *local_168;
  longlong local_160;
  TVector<double>_u_0 local_158;
  double local_140;
  double dStack_138;
  double local_130;
  TVector<double>_u_0 local_128;
  TVector<double> local_110;
  double local_e8;
  TVector<double> local_e0;
  undefined8 local_c8 [2];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88;
  ulonglong local_78;
  
  uVar4 = __real_7fefffffffffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar18 = 0;
  local_158._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_158._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_178 = param_4;
  local_160 = (longlong)param_1->ArrayNum;
  local_158._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_130 = __real_3ff0000000000000;
  local_140 = 0.0;
  dStack_138 = 0.0;
  if (0 < local_160) {
    lVar17 = 0;
    local_180 = 0;
    local_188 = this;
    local_170 = param_3;
    local_168 = param_1;
    do {
      lVar6 = local_180;
      uVar16 = ~uVar18 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar18 < param_6->ArrayNum) {
        uVar14 = uVar16;
      }
      if (uVar14 == 0) {
        local_198 = (longlong)(int)uVar18;
        local_190 = (longlong)param_6->ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
      }
      pFVar15 = (param_6->AllocatorInstance).Data + lVar6;
      dVar1 = (((TQuaternion<double>_u_0 *)&pFVar15[0x20].field_0x0)->_s_0).X;
      if (((((dVar1 == (param_5->Translation).field0_0x0._s_0.X) &&
            (*(double *)(pFVar15 + 0x28) == (param_5->Translation).field0_0x0._s_0.Y)) &&
           (*(double *)(pFVar15 + 0x30) == (param_5->Translation).field0_0x0._s_0.Z)) &&
          ((*(double *)(pFVar15 + 0x38) == (param_5->Scale3D).field0_0x0._s_0.X &&
           ((((TQuaternion<double>_u_0 *)&pFVar15[0x40].field_0x0)->_s_0).X ==
            (param_5->Scale3D).field0_0x0._s_0.Y)))) &&
         ((*(double *)(pFVar15 + 0x48) == (param_5->Scale3D).field0_0x0._s_0.Z &&
          (bVar8 = UE::Geometry::TQuaternion<double>::EpsilonEqual
                             (&param_5->Rotation,(TQuaternion<double> *)pFVar15,0.0), bVar8)))) {
        dVar19 = (local_178->field0_0x0)._s_0.X;
        dVar1 = *(double *)((longlong)&local_178->field0_0x0 + 8);
        local_158._s_0.Z = (local_178->field0_0x0)._s_0.Z;
      }
      else {
        local_128._s_0.X = (local_170->field0_0x0)._s_0.X - dVar1;
        local_128._s_0.Y = (local_170->field0_0x0)._s_0.Y - *(double *)(pFVar15 + 0x28);
        local_128._s_0.Z = (local_170->field0_0x0)._s_0.Z - *(double *)(pFVar15 + 0x30);
        pTVar12 = UE::Geometry::operator*<double>
                            (&local_110,(TQuaternion<double> *)(pFVar15 + 0x50),
                             (TVector<double> *)&local_128._s_0);
        local_158._s_0.Z =
             (pTVar12->field0_0x0)._s_0.Z *
             (((TQuaternion<double>_u_0 *)&pFVar15[0x80].field_0x0)->_s_0).X;
        dVar19 = *(double *)(pFVar15 + 0x70) * (pTVar12->field0_0x0)._s_0.X;
        dVar1 = (pTVar12->field0_0x0)._s_0.Y * *(double *)(pFVar15 + 0x78);
        local_e8 = local_158._s_0.Z;
      }
      uVar14 = 0;
      local_158._8_4_ = SUB84(dVar1,0);
      local_158._s_0.X = dVar19;
      local_158._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      if (**(int **)((longlong)local_188 + 0x10) < 1) {
        return true;
      }
      while( true ) {
        pvVar5 = local_188;
        uVar11 = 0;
        if ((int)uVar18 < param_6->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (local_198 = lVar17, local_190 = (longlong)param_6->ArrayNum,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        plVar13 = *(longlong **)((longlong)pvVar5 + 8);
        pFVar15 = (param_6->AllocatorInstance).Data;
        iVar2 = (int)plVar13[1];
        uVar11 = 0;
        if ((int)uVar14 < iVar2) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_198 = (longlong)(int)uVar14;
          local_190 = (longlong)iVar2;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
        }
        lVar6 = local_180;
        pTVar12 = UE::Geometry::operator*<double>
                            (&local_e0,(TQuaternion<double> *)(pFVar15 + local_180 + 0x50),
                             (TVector<double> *)(*plVar13 + (longlong)(int)uVar14 * 0x18));
        pTVar7 = local_168;
        local_140 = *(double *)(pFVar15 + lVar6 + 0x70) * (pTVar12->field0_0x0)._s_0.X;
        dStack_138 = (pTVar12->field0_0x0)._s_0.Y * *(double *)(pFVar15 + lVar6 + 0x78);
        local_130 = (pTVar12->field0_0x0)._s_0.Z * *(double *)(pFVar15 + lVar6 + 0x80);
        uVar11 = 0;
        if ((int)uVar18 < local_168->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (local_198 = lVar17, local_190 = (longlong)local_168->ArrayNum,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        local_c8[0] = uVar4;
        local_b8 = 0;
        local_90 = (longlong *)0x0;
        local_88 = 0;
        cVar10 = (**(code **)(pTVar7->DataPtr[lVar17]->_padding_ + 0x68))
                           (pTVar7->DataPtr[lVar17],&local_158,local_c8);
        if (local_b8 != 0) {
          plVar13 = local_a8;
          if (local_90 != (longlong *)0x0) {
            plVar13 = local_90;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        if (cVar10 == '\0') break;
        uVar14 = uVar14 + 1;
        if (**(int **)((longlong)local_188 + 0x10) <= (int)uVar14) {
          return true;
        }
      }
      local_180 = lVar6 + 0x88;
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 1;
    } while (lVar17 < local_160);
  }
  return false;
}

// operator() @ 14c7d2ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_4>::
operator()(void *this,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *param_1,
          TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TTransformSRT3<double> *param_5,
          TArray<_public:_virtual_bool___cdecl_UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select(TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>,bool)_::_2_::FTransformWithInv,TSizedDefaultAllocator<32>_>
          *param_6)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  longlong *plVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  void *local_188;
  longlong local_180;
  TVector<double> *local_178;
  TVector<double> *local_170;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *local_168;
  longlong local_160;
  TVector<double>_u_0 local_158;
  double local_140;
  double dStack_138;
  double local_130;
  TVector<double>_u_0 local_128;
  TVector<double> local_110;
  double local_e8;
  TVector<double> local_e0;
  undefined8 local_c8 [2];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88;
  ulonglong local_78;
  
  uVar4 = __real_7fefffffffffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar18 = 0;
  local_158._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_158._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_178 = param_4;
  local_160 = (longlong)param_1->ArrayNum;
  local_158._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_130 = __real_3ff0000000000000;
  local_140 = 0.0;
  dStack_138 = 0.0;
  if (0 < local_160) {
    lVar17 = 0;
    local_180 = 0;
    local_188 = this;
    local_170 = param_3;
    local_168 = param_1;
    do {
      lVar6 = local_180;
      uVar16 = ~uVar18 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar18 < param_6->ArrayNum) {
        uVar14 = uVar16;
      }
      if (uVar14 == 0) {
        local_198 = (longlong)(int)uVar18;
        local_190 = (longlong)param_6->ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
      }
      pFVar15 = (param_6->AllocatorInstance).Data + lVar6;
      dVar1 = (((TQuaternion<double>_u_0 *)&pFVar15[0x20].field_0x0)->_s_0).X;
      if (((((dVar1 == (param_5->Translation).field0_0x0._s_0.X) &&
            (*(double *)(pFVar15 + 0x28) == (param_5->Translation).field0_0x0._s_0.Y)) &&
           (*(double *)(pFVar15 + 0x30) == (param_5->Translation).field0_0x0._s_0.Z)) &&
          ((*(double *)(pFVar15 + 0x38) == (param_5->Scale3D).field0_0x0._s_0.X &&
           ((((TQuaternion<double>_u_0 *)&pFVar15[0x40].field_0x0)->_s_0).X ==
            (param_5->Scale3D).field0_0x0._s_0.Y)))) &&
         ((*(double *)(pFVar15 + 0x48) == (param_5->Scale3D).field0_0x0._s_0.Z &&
          (bVar8 = UE::Geometry::TQuaternion<double>::EpsilonEqual
                             (&param_5->Rotation,(TQuaternion<double> *)pFVar15,0.0), bVar8)))) {
        dVar19 = (local_178->field0_0x0)._s_0.X;
        dVar1 = *(double *)((longlong)&local_178->field0_0x0 + 8);
        local_158._s_0.Z = (local_178->field0_0x0)._s_0.Z;
      }
      else {
        local_128._s_0.X = (local_170->field0_0x0)._s_0.X - dVar1;
        local_128._s_0.Y = (local_170->field0_0x0)._s_0.Y - *(double *)(pFVar15 + 0x28);
        local_128._s_0.Z = (local_170->field0_0x0)._s_0.Z - *(double *)(pFVar15 + 0x30);
        pTVar12 = UE::Geometry::operator*<double>
                            (&local_110,(TQuaternion<double> *)(pFVar15 + 0x50),
                             (TVector<double> *)&local_128._s_0);
        local_158._s_0.Z =
             (pTVar12->field0_0x0)._s_0.Z *
             (((TQuaternion<double>_u_0 *)&pFVar15[0x80].field_0x0)->_s_0).X;
        dVar19 = *(double *)(pFVar15 + 0x70) * (pTVar12->field0_0x0)._s_0.X;
        dVar1 = (pTVar12->field0_0x0)._s_0.Y * *(double *)(pFVar15 + 0x78);
        local_e8 = local_158._s_0.Z;
      }
      uVar14 = 0;
      local_158._8_4_ = SUB84(dVar1,0);
      local_158._s_0.X = dVar19;
      local_158._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      if (**(int **)((longlong)local_188 + 0x10) < 1) {
        return true;
      }
      while( true ) {
        pvVar5 = local_188;
        uVar11 = 0;
        if ((int)uVar18 < param_6->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (local_198 = lVar17, local_190 = (longlong)param_6->ArrayNum,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        plVar13 = *(longlong **)((longlong)pvVar5 + 8);
        pFVar15 = (param_6->AllocatorInstance).Data;
        iVar2 = (int)plVar13[1];
        uVar11 = 0;
        if ((int)uVar14 < iVar2) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_198 = (longlong)(int)uVar14;
          local_190 = (longlong)iVar2;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
        }
        lVar6 = local_180;
        pTVar12 = UE::Geometry::operator*<double>
                            (&local_e0,(TQuaternion<double> *)(pFVar15 + local_180 + 0x50),
                             (TVector<double> *)(*plVar13 + (longlong)(int)uVar14 * 0x18));
        pTVar7 = local_168;
        local_140 = *(double *)(pFVar15 + lVar6 + 0x70) * (pTVar12->field0_0x0)._s_0.X;
        dStack_138 = (pTVar12->field0_0x0)._s_0.Y * *(double *)(pFVar15 + lVar6 + 0x78);
        local_130 = (pTVar12->field0_0x0)._s_0.Z * *(double *)(pFVar15 + lVar6 + 0x80);
        uVar11 = 0;
        if ((int)uVar18 < local_168->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (local_198 = lVar17, local_190 = (longlong)local_168->ArrayNum,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        local_c8[0] = uVar4;
        local_b8 = 0;
        local_90 = (longlong *)0x0;
        local_88 = 0;
        cVar10 = (**(code **)(pTVar7->DataPtr[lVar17]->_padding_ + 0x68))
                           (pTVar7->DataPtr[lVar17],&local_158,local_c8);
        if (local_b8 != 0) {
          plVar13 = local_a8;
          if (local_90 != (longlong *)0x0) {
            plVar13 = local_90;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        if (cVar10 == '\0') break;
        uVar14 = uVar14 + 1;
        if (**(int **)((longlong)local_188 + 0x10) <= (int)uVar14) {
          return true;
        }
      }
      local_180 = lVar6 + 0x88;
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 1;
    } while (lVar17 < local_160);
  }
  return false;
}

// operator() @ 14c7d3520

void __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l27::
<lambda_5>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  undefined8 uVar11;
  longlong *plVar12;
  char cVar13;
  ulonglong uVar14;
  TQuaternion<double> *pTVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong local_res18;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<double>_u_0 local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  TVector<double> local_68;
  
  if (-1 < param_1) {
    lVar3 = *(longlong *)(*(longlong *)this + 8);
    if ((param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      plVar12 = *(longlong **)((longlong)this + 0x10);
      uVar14 = 0;
      uVar9 = 0;
      if (param_1 < (int)plVar12[1]) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(char *)((longlong)param_1 + *plVar12) == '\0') {
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar1 = (double *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        local_d8 = *pdVar1;
        dStack_d0 = pdVar1[1];
        local_c8 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        pTVar10 = UE::Geometry::FMeshNormals::operator[]
                            (*(FMeshNormals **)((longlong)this + 8),param_1);
        cVar8 = '\x01';
        cVar13 = '\x01';
        local_a8 = (pTVar10->field0_0x0)._s_0.Z;
        dVar2 = *(double *)(*(longlong *)this + 0x18);
        local_d8 = local_d8 + dVar2 * (pTVar10->field0_0x0)._s_0.X;
        dStack_d0 = dStack_d0 + dVar2 * (pTVar10->field0_0x0)._s_0.Y;
        local_c8 = local_c8 + dVar2 * local_a8;
        local_res18 = (longlong)*(int *)(*(longlong *)((longlong)this + 0x20) + 8);
        uVar17 = uVar14;
        if (0 < local_res18) {
          do {
            plVar12 = *(longlong **)((longlong)this + 0x20);
            uVar16 = (uint)uVar17;
            uVar9 = 0;
            if ((int)uVar16 < (int)plVar12[1]) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar15 = (TQuaternion<double> *)(*plVar12 + uVar14);
            local_a0._s_0.X = local_d8 * pTVar15[1].field0_0x0._s_0.W;
            local_a0._s_0.Y = dStack_d0 * pTVar15[2].field0_0x0._s_0.X;
            local_a0._s_0.Z = local_c8 * pTVar15[2].field0_0x0._s_0.Y;
            pTVar10 = UE::Geometry::operator*<double>
                                (&local_68,pTVar15,(TVector<double> *)&local_a0._s_0);
            local_a8 = pTVar15[1].field0_0x0._s_0.Z + (pTVar10->field0_0x0)._s_0.Z;
            local_b0 = pTVar15[1].field0_0x0._s_0.Y + (pTVar10->field0_0x0)._s_0.Y;
            local_b8 = pTVar15[1].field0_0x0._s_0.X + (pTVar10->field0_0x0)._s_0.X;
            if (cVar8 == '\0') {
LAB_14c7d3811:
              cVar13 = '\0';
            }
            else {
              puVar4 = *(undefined8 **)((longlong)this + 0x18);
              uVar5 = *(undefined8 *)((longlong)this + 0x38);
              local_88 = **(undefined8 **)((longlong)this + 0x30);
              uStack_80 = (*(undefined8 **)((longlong)this + 0x30))[1];
              local_78 = **(undefined8 **)((longlong)this + 0x28);
              uStack_70 = (*(undefined8 **)((longlong)this + 0x28))[1];
              UE::Core::Private::Function::CheckCallable((void *)*puVar4);
              pcVar6 = (code *)*puVar4;
              plVar12 = (longlong *)puVar4[5];
              if ((longlong *)puVar4[5] == (longlong *)0x0) {
                plVar12 = puVar4 + 2;
              }
              uVar11 = (**(code **)(*plVar12 + 8))();
              cVar8 = (*pcVar6)(uVar11,&local_78,&local_88,&local_b8,&local_d8,pTVar15,uVar5);
              if (cVar8 == '\0') goto LAB_14c7d3811;
              cVar13 = '\x01';
            }
            uVar14 = uVar14 + 0x50;
            local_res18 = local_res18 + -1;
            uVar17 = (ulonglong)(uVar16 + 1);
            cVar8 = cVar13;
          } while (local_res18 != 0);
        }
        plVar12 = *(longlong **)((longlong)this + 0x10);
        uVar9 = 0;
        if (param_1 < (int)plVar12[1]) {
          uVar9 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(char *)(*plVar12 + (longlong)param_1) = cVar13;
      }
    }
  }
  return;
}

// operator() @ 14c7d38c0

void __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l27::<lambda_5>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  undefined8 uVar11;
  longlong *plVar12;
  char cVar13;
  ulonglong uVar14;
  TQuaternion<double> *pTVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong local_res18;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<double>_u_0 local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  TVector<double> local_68;
  
  if (-1 < param_1) {
    lVar3 = *(longlong *)(*(longlong *)this + 8);
    if ((param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      plVar12 = *(longlong **)((longlong)this + 0x10);
      uVar14 = 0;
      uVar9 = 0;
      if (param_1 < (int)plVar12[1]) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(char *)((longlong)param_1 + *plVar12) == '\0') {
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar1 = (double *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        local_d8 = *pdVar1;
        dStack_d0 = pdVar1[1];
        local_c8 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        pTVar10 = UE::Geometry::FMeshNormals::operator[]
                            (*(FMeshNormals **)((longlong)this + 8),param_1);
        cVar8 = '\x01';
        cVar13 = '\x01';
        local_a8 = (pTVar10->field0_0x0)._s_0.Z;
        dVar2 = *(double *)(*(longlong *)this + 0x18);
        local_d8 = local_d8 + dVar2 * (pTVar10->field0_0x0)._s_0.X;
        dStack_d0 = dStack_d0 + dVar2 * (pTVar10->field0_0x0)._s_0.Y;
        local_c8 = local_c8 + dVar2 * local_a8;
        local_res18 = (longlong)*(int *)(*(longlong *)((longlong)this + 0x20) + 8);
        uVar17 = uVar14;
        if (0 < local_res18) {
          do {
            plVar12 = *(longlong **)((longlong)this + 0x20);
            uVar16 = (uint)uVar17;
            uVar9 = 0;
            if ((int)uVar16 < (int)plVar12[1]) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar15 = (TQuaternion<double> *)(*plVar12 + uVar14);
            local_a0._s_0.X = local_d8 * pTVar15[1].field0_0x0._s_0.W;
            local_a0._s_0.Y = dStack_d0 * pTVar15[2].field0_0x0._s_0.X;
            local_a0._s_0.Z = local_c8 * pTVar15[2].field0_0x0._s_0.Y;
            pTVar10 = UE::Geometry::operator*<double>
                                (&local_68,pTVar15,(TVector<double> *)&local_a0._s_0);
            local_a8 = pTVar15[1].field0_0x0._s_0.Z + (pTVar10->field0_0x0)._s_0.Z;
            local_b0 = pTVar15[1].field0_0x0._s_0.Y + (pTVar10->field0_0x0)._s_0.Y;
            local_b8 = pTVar15[1].field0_0x0._s_0.X + (pTVar10->field0_0x0)._s_0.X;
            if (cVar8 == '\0') {
LAB_14c7d3bb1:
              cVar13 = '\0';
            }
            else {
              puVar4 = *(undefined8 **)((longlong)this + 0x18);
              uVar5 = *(undefined8 *)((longlong)this + 0x38);
              local_88 = **(undefined8 **)((longlong)this + 0x30);
              uStack_80 = (*(undefined8 **)((longlong)this + 0x30))[1];
              local_78 = **(undefined8 **)((longlong)this + 0x28);
              uStack_70 = (*(undefined8 **)((longlong)this + 0x28))[1];
              UE::Core::Private::Function::CheckCallable((void *)*puVar4);
              pcVar6 = (code *)*puVar4;
              plVar12 = (longlong *)puVar4[5];
              if ((longlong *)puVar4[5] == (longlong *)0x0) {
                plVar12 = puVar4 + 2;
              }
              uVar11 = (**(code **)(*plVar12 + 8))();
              cVar8 = (*pcVar6)(uVar11,&local_78,&local_88,&local_b8,&local_d8,pTVar15,uVar5);
              if (cVar8 == '\0') goto LAB_14c7d3bb1;
              cVar13 = '\x01';
            }
            uVar14 = uVar14 + 0x50;
            local_res18 = local_res18 + -1;
            uVar17 = (ulonglong)(uVar16 + 1);
            cVar8 = cVar13;
          } while (local_res18 != 0);
        }
        plVar12 = *(longlong **)((longlong)this + 0x10);
        uVar9 = 0;
        if (param_1 < (int)plVar12[1]) {
          uVar9 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(char *)(*plVar12 + (longlong)param_1) = cVar13;
      }
    }
  }
  return;
}

// operator() @ 14c7d3e20

void __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::
<lambda_6>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  uint uVar23;
  TVector<double> *pTVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong uVar29;
  TQuaternion<double> *pTVar30;
  uint uVar31;
  uint local_res8;
  longlong local_res18;
  longlong local_res20;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 local_1c0;
  longlong local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  TVector<double> local_108 [8];
  
  if (-1 < param_1) {
    lVar28 = *(longlong *)(*(longlong *)this + 8);
    if (param_1 < *(int *)(lVar28 + 0x140) * 0x200 + *(int *)(lVar28 + 0x144)) {
      uVar29 = (ulonglong)(param_1 & 0x1ff);
      uVar26 = (ulonglong)((uint)param_1 >> 9);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar28 + 0x148) + uVar26 * 8) + uVar29 * 2
                             ) - 1U) < 0xfffe) {
        iVar6 = *(int *)(*(longlong *)this + 0x10);
        if ((iVar6 == 1) || (iVar6 == 2)) {
          plVar27 = *(longlong **)((longlong)this + 8);
          lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x130) + uVar26 * 8);
          local_1c0 = *(longlong *)(lVar28 + uVar29 * 0xc);
          uVar23 = *(uint *)(lVar28 + 8 + uVar29 * 0xc);
          lVar28 = (longlong)(int)(uint)local_1c0;
          uVar31 = 0;
          if ((int)(uint)local_1c0 < (int)plVar27[1]) {
            uVar31 = ~(uint)local_1c0 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)(lVar28 + *plVar27) == '\0') {
            return;
          }
          lVar28 = (longlong)(int)local_1c0._4_4_;
          plVar27 = *(longlong **)((longlong)this + 8);
          uVar31 = 0;
          if ((int)local_1c0._4_4_ < (int)plVar27[1]) {
            uVar31 = ~local_1c0._4_4_ >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)(lVar28 + *plVar27) == '\0') {
            return;
          }
          plVar27 = *(longlong **)((longlong)this + 8);
          uVar31 = 0;
          if ((int)uVar23 < (int)plVar27[1]) {
            uVar31 = ~uVar23 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)((longlong)(int)uVar23 + *plVar27) == '\0') {
            return;
          }
        }
        if (*(int *)(*(longlong *)((longlong)this + 0x20) + 8) < 1) {
LAB_14c7d444c:
          plVar27 = *(longlong **)((longlong)this + 0x28);
          uVar23 = 0;
          if (param_1 < (int)plVar27[1]) {
            uVar23 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          LOCK();
          *(undefined4 *)(*plVar27 + (longlong)param_1 * 4) = 1;
          UNLOCK();
        }
        else {
          UE::Geometry::FDynamicMesh3::GetTriNormal
                    (*(FDynamicMesh3 **)(*(longlong *)this + 8),(TVector<double> *)&local_160._s_0,
                     param_1);
          local_res8 = 0;
          local_1b0 = 0;
          bVar20 = true;
          lVar28 = *(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10);
          lVar7 = *(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x130) + uVar26 * 8);
          uVar23 = *(uint *)(lVar7 + uVar29 * 0xc);
          uVar26 = (ulonglong)(uVar23 & 0x1ff);
          lVar8 = *(longlong *)(lVar28 + (ulonglong)(uVar23 >> 9) * 8);
          pdVar1 = (double *)(lVar8 + uVar26 * 0x18);
          dVar14 = *pdVar1;
          dVar15 = pdVar1[1];
          dVar2 = *(double *)(lVar8 + 0x10 + uVar26 * 0x18);
          uVar23 = *(uint *)(lVar7 + 4 + uVar29 * 0xc);
          uVar26 = (ulonglong)(uVar23 & 0x1ff);
          lVar8 = *(longlong *)(lVar28 + (ulonglong)(uVar23 >> 9) * 8);
          pdVar1 = (double *)(lVar8 + uVar26 * 0x18);
          dVar16 = *pdVar1;
          dVar17 = pdVar1[1];
          dVar3 = *(double *)(lVar8 + 0x10 + uVar26 * 0x18);
          uVar23 = *(uint *)(lVar7 + 8 + uVar29 * 0xc);
          uVar29 = (ulonglong)(uVar23 & 0x1ff);
          lVar28 = *(longlong *)(lVar28 + (ulonglong)(uVar23 >> 9) * 8);
          pdVar1 = (double *)(lVar28 + uVar29 * 0x18);
          dVar18 = *pdVar1;
          dVar19 = pdVar1[1];
          dVar4 = *(double *)(lVar28 + 0x10 + uVar29 * 0x18);
          local_1c0 = (longlong)*(int *)(*(longlong *)((longlong)this + 0x20) + 8);
          local_res20 = 0;
          local_1d8 = dVar18;
          dStack_1d0 = dVar19;
          local_1c8 = dVar4;
          local_1a8 = dVar16;
          dStack_1a0 = dVar17;
          local_198 = dVar3;
          local_190 = dVar14;
          dStack_188 = dVar15;
          local_180 = dVar2;
          do {
            lVar28 = local_1b0;
            uVar29 = 0;
            if (local_1c0 <= local_res20) goto LAB_14c7d444c;
            plVar27 = *(longlong **)((longlong)this + 0x20);
            uVar23 = 0;
            if ((int)local_res8 < (int)plVar27[1]) {
              uVar23 = ~local_res8 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar7 = *plVar27;
            pdVar1 = (double *)(lVar28 + lVar7);
            dVar12 = *pdVar1;
            dVar13 = pdVar1[1];
            local_168 = *(double *)(lVar28 + 0x10 + lVar7);
            dVar5 = *(double *)(*(longlong *)this + 0x18);
            local_1d8 = dVar5 * local_160._s_0.X + dVar18 * local_168 +
                        dVar16 * dVar13 + dVar14 * dVar12;
            dStack_1d0 = dVar5 * local_160._s_0.Y + dVar19 * local_168 +
                         dVar17 * dVar13 + dVar15 * dVar12;
            local_1c8 = dVar5 * local_160._s_0.Z + dVar4 * local_168 +
                        dVar3 * dVar13 + dVar2 * dVar12;
            local_res18 = (longlong)*(int *)(*(longlong *)((longlong)this + 0x18) + 8);
            uVar26 = uVar29;
            if (0 < local_res18) {
              do {
                plVar27 = *(longlong **)((longlong)this + 0x18);
                uVar31 = (uint)uVar26;
                uVar23 = 0;
                if ((int)uVar31 < (int)plVar27[1]) {
                  uVar23 = ~uVar31 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pTVar30 = (TQuaternion<double> *)(*plVar27 + uVar29);
                local_148._s_0.X = local_1d8 * pTVar30[1].field0_0x0._s_0.W;
                local_148._s_0.Y = dStack_1d0 * pTVar30[2].field0_0x0._s_0.X;
                local_148._s_0.Z = local_1c8 * pTVar30[2].field0_0x0._s_0.Y;
                pTVar24 = UE::Geometry::operator*<double>
                                    (local_108,pTVar30,(TVector<double> *)&local_148._s_0);
                local_168 = pTVar30[1].field0_0x0._s_0.Z + (pTVar24->field0_0x0)._s_0.Z;
                local_170 = pTVar30[1].field0_0x0._s_0.Y + (pTVar24->field0_0x0)._s_0.Y;
                local_178 = pTVar30[1].field0_0x0._s_0.X + (pTVar24->field0_0x0)._s_0.X;
                if (bVar20) {
                  puVar9 = *(undefined8 **)((longlong)this + 0x10);
                  uVar10 = *(undefined8 *)((longlong)this + 0x40);
                  local_128 = **(undefined8 **)((longlong)this + 0x38);
                  uStack_120 = (*(undefined8 **)((longlong)this + 0x38))[1];
                  local_118 = **(undefined8 **)((longlong)this + 0x30);
                  uStack_110 = (*(undefined8 **)((longlong)this + 0x30))[1];
                  UE::Core::Private::Function::CheckCallable((void *)*puVar9);
                  pcVar11 = (code *)*puVar9;
                  plVar27 = (longlong *)puVar9[5];
                  if ((longlong *)puVar9[5] == (longlong *)0x0) {
                    plVar27 = puVar9 + 2;
                  }
                  uVar25 = (**(code **)(*plVar27 + 8))();
                  cVar22 = (*pcVar11)(uVar25,&local_118,&local_128,&local_178,&local_1d8,pTVar30,
                                      uVar10);
                  if (cVar22 == '\0') goto LAB_14c7d43eb;
                  bVar20 = true;
                }
                else {
LAB_14c7d43eb:
                  bVar20 = false;
                }
                uVar29 = uVar29 + 0x50;
                local_res18 = local_res18 + -1;
                lVar28 = local_1b0;
                uVar26 = (ulonglong)(uVar31 + 1);
              } while (local_res18 != 0);
            }
            local_res8 = local_res8 + 1;
            local_res20 = local_res20 + 1;
            local_1b0 = lVar28 + 0x18;
          } while (bVar20);
        }
      }
    }
  }
  return;
}

// operator() @ 14c7d4540

void __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_6>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  uint uVar23;
  TVector<double> *pTVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong uVar29;
  TQuaternion<double> *pTVar30;
  uint uVar31;
  uint local_res8;
  longlong local_res18;
  longlong local_res20;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 local_1c0;
  longlong local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  TVector<double> local_108 [8];
  
  if (-1 < param_1) {
    lVar28 = *(longlong *)(*(longlong *)this + 8);
    if (param_1 < *(int *)(lVar28 + 0x140) * 0x200 + *(int *)(lVar28 + 0x144)) {
      uVar29 = (ulonglong)(param_1 & 0x1ff);
      uVar26 = (ulonglong)((uint)param_1 >> 9);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar28 + 0x148) + uVar26 * 8) + uVar29 * 2
                             ) - 1U) < 0xfffe) {
        iVar6 = *(int *)(*(longlong *)this + 0x10);
        if ((iVar6 == 1) || (iVar6 == 2)) {
          plVar27 = *(longlong **)((longlong)this + 8);
          lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x130) + uVar26 * 8);
          local_1c0 = *(longlong *)(lVar28 + uVar29 * 0xc);
          uVar23 = *(uint *)(lVar28 + 8 + uVar29 * 0xc);
          lVar28 = (longlong)(int)(uint)local_1c0;
          uVar31 = 0;
          if ((int)(uint)local_1c0 < (int)plVar27[1]) {
            uVar31 = ~(uint)local_1c0 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)(lVar28 + *plVar27) == '\0') {
            return;
          }
          lVar28 = (longlong)(int)local_1c0._4_4_;
          plVar27 = *(longlong **)((longlong)this + 8);
          uVar31 = 0;
          if ((int)local_1c0._4_4_ < (int)plVar27[1]) {
            uVar31 = ~local_1c0._4_4_ >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)(lVar28 + *plVar27) == '\0') {
            return;
          }
          plVar27 = *(longlong **)((longlong)this + 8);
          uVar31 = 0;
          if ((int)uVar23 < (int)plVar27[1]) {
            uVar31 = ~uVar23 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)((longlong)(int)uVar23 + *plVar27) == '\0') {
            return;
          }
        }
        if (*(int *)(*(longlong *)((longlong)this + 0x20) + 8) < 1) {
LAB_14c7d4b6c:
          plVar27 = *(longlong **)((longlong)this + 0x28);
          uVar23 = 0;
          if (param_1 < (int)plVar27[1]) {
            uVar23 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          LOCK();
          *(undefined4 *)(*plVar27 + (longlong)param_1 * 4) = 1;
          UNLOCK();
        }
        else {
          UE::Geometry::FDynamicMesh3::GetTriNormal
                    (*(FDynamicMesh3 **)(*(longlong *)this + 8),(TVector<double> *)&local_160._s_0,
                     param_1);
          local_res8 = 0;
          local_1b0 = 0;
          bVar20 = true;
          lVar28 = *(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10);
          lVar7 = *(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x130) + uVar26 * 8);
          uVar23 = *(uint *)(lVar7 + uVar29 * 0xc);
          uVar26 = (ulonglong)(uVar23 & 0x1ff);
          lVar8 = *(longlong *)(lVar28 + (ulonglong)(uVar23 >> 9) * 8);
          pdVar1 = (double *)(lVar8 + uVar26 * 0x18);
          dVar14 = *pdVar1;
          dVar15 = pdVar1[1];
          dVar2 = *(double *)(lVar8 + 0x10 + uVar26 * 0x18);
          uVar23 = *(uint *)(lVar7 + 4 + uVar29 * 0xc);
          uVar26 = (ulonglong)(uVar23 & 0x1ff);
          lVar8 = *(longlong *)(lVar28 + (ulonglong)(uVar23 >> 9) * 8);
          pdVar1 = (double *)(lVar8 + uVar26 * 0x18);
          dVar16 = *pdVar1;
          dVar17 = pdVar1[1];
          dVar3 = *(double *)(lVar8 + 0x10 + uVar26 * 0x18);
          uVar23 = *(uint *)(lVar7 + 8 + uVar29 * 0xc);
          uVar29 = (ulonglong)(uVar23 & 0x1ff);
          lVar28 = *(longlong *)(lVar28 + (ulonglong)(uVar23 >> 9) * 8);
          pdVar1 = (double *)(lVar28 + uVar29 * 0x18);
          dVar18 = *pdVar1;
          dVar19 = pdVar1[1];
          dVar4 = *(double *)(lVar28 + 0x10 + uVar29 * 0x18);
          local_1c0 = (longlong)*(int *)(*(longlong *)((longlong)this + 0x20) + 8);
          local_res20 = 0;
          local_1d8 = dVar18;
          dStack_1d0 = dVar19;
          local_1c8 = dVar4;
          local_1a8 = dVar16;
          dStack_1a0 = dVar17;
          local_198 = dVar3;
          local_190 = dVar14;
          dStack_188 = dVar15;
          local_180 = dVar2;
          do {
            lVar28 = local_1b0;
            uVar29 = 0;
            if (local_1c0 <= local_res20) goto LAB_14c7d4b6c;
            plVar27 = *(longlong **)((longlong)this + 0x20);
            uVar23 = 0;
            if ((int)local_res8 < (int)plVar27[1]) {
              uVar23 = ~local_res8 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar7 = *plVar27;
            pdVar1 = (double *)(lVar28 + lVar7);
            dVar12 = *pdVar1;
            dVar13 = pdVar1[1];
            local_168 = *(double *)(lVar28 + 0x10 + lVar7);
            dVar5 = *(double *)(*(longlong *)this + 0x18);
            local_1d8 = dVar5 * local_160._s_0.X + dVar18 * local_168 +
                        dVar16 * dVar13 + dVar14 * dVar12;
            dStack_1d0 = dVar5 * local_160._s_0.Y + dVar19 * local_168 +
                         dVar17 * dVar13 + dVar15 * dVar12;
            local_1c8 = dVar5 * local_160._s_0.Z + dVar4 * local_168 +
                        dVar3 * dVar13 + dVar2 * dVar12;
            local_res18 = (longlong)*(int *)(*(longlong *)((longlong)this + 0x18) + 8);
            uVar26 = uVar29;
            if (0 < local_res18) {
              do {
                plVar27 = *(longlong **)((longlong)this + 0x18);
                uVar31 = (uint)uVar26;
                uVar23 = 0;
                if ((int)uVar31 < (int)plVar27[1]) {
                  uVar23 = ~uVar31 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pTVar30 = (TQuaternion<double> *)(*plVar27 + uVar29);
                local_148._s_0.X = local_1d8 * pTVar30[1].field0_0x0._s_0.W;
                local_148._s_0.Y = dStack_1d0 * pTVar30[2].field0_0x0._s_0.X;
                local_148._s_0.Z = local_1c8 * pTVar30[2].field0_0x0._s_0.Y;
                pTVar24 = UE::Geometry::operator*<double>
                                    (local_108,pTVar30,(TVector<double> *)&local_148._s_0);
                local_168 = pTVar30[1].field0_0x0._s_0.Z + (pTVar24->field0_0x0)._s_0.Z;
                local_170 = pTVar30[1].field0_0x0._s_0.Y + (pTVar24->field0_0x0)._s_0.Y;
                local_178 = pTVar30[1].field0_0x0._s_0.X + (pTVar24->field0_0x0)._s_0.X;
                if (bVar20) {
                  puVar9 = *(undefined8 **)((longlong)this + 0x10);
                  uVar10 = *(undefined8 *)((longlong)this + 0x40);
                  local_128 = **(undefined8 **)((longlong)this + 0x38);
                  uStack_120 = (*(undefined8 **)((longlong)this + 0x38))[1];
                  local_118 = **(undefined8 **)((longlong)this + 0x30);
                  uStack_110 = (*(undefined8 **)((longlong)this + 0x30))[1];
                  UE::Core::Private::Function::CheckCallable((void *)*puVar9);
                  pcVar11 = (code *)*puVar9;
                  plVar27 = (longlong *)puVar9[5];
                  if ((longlong *)puVar9[5] == (longlong *)0x0) {
                    plVar27 = puVar9 + 2;
                  }
                  uVar25 = (**(code **)(*plVar27 + 8))();
                  cVar22 = (*pcVar11)(uVar25,&local_118,&local_128,&local_178,&local_1d8,pTVar30,
                                      uVar10);
                  if (cVar22 == '\0') goto LAB_14c7d4b0b;
                  bVar20 = true;
                }
                else {
LAB_14c7d4b0b:
                  bVar20 = false;
                }
                uVar29 = uVar29 + 0x50;
                local_res18 = local_res18 + -1;
                lVar28 = local_1b0;
                uVar26 = (ulonglong)(uVar31 + 1);
              } while (local_res18 != 0);
            }
            local_res8 = local_res8 + 1;
            local_res20 = local_res20 + 1;
            local_1b0 = lVar28 + 0x18;
          } while (bVar20);
        }
      }
    }
  }
  return;
}

// Apply @ 14c7d98d0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Apply
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this,
          TTransformSRT3<double> *param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2)

{
  code *pcVar1;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> local_48;
  
  local_48.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.FastWindingCache.ArrayNum = 0;
  local_48.FastWindingCache.ArrayMax = 0;
  local_48.FastWindingCacheOffset = 0;
  local_48.FastWindingCacheMeshChangeStamp = 0;
  local_48.FWNBeta = __real_4000000000000000;
  local_48.FWNApproxOrder = 2;
  local_48.Tree = param_2;
  if (this->InsideMode == FastWindingNumber) {
    if ((param_2 == (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pTVar2 = local_48.Tree;
    if (((local_48.Tree)->RootIndex < 0) || ((local_48.Tree)->MeshChangeStamp != 1)) {
      TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::BuildTopDown(local_48.Tree,false);
      pTVar2->MeshChangeStamp = 1;
    }
    TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::build_fast_winding_cache(&local_48);
    local_48.FastWindingCacheMeshChangeStamp = (local_48.Tree)->MeshChangeStamp;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x38))(this,param_1,param_2,&local_48);
  if (local_48.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FastWindingCache.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// Apply @ 14c7d99e0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Apply
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this,
          TTransformSRT3<double> *param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2,
          TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  TTransformSRT3<double> *local_18;
  undefined4 uStack_10;
  
  local_18._0_4_ = SUB84(param_1,0);
  uStack_10 = 1;
  uVar1 = local_18._0_4_;
  local_18 = param_1;
  uVar2 = (**(code **)(this->_padding_ + 0x40))(uVar1,&local_18);
  return (bool)uVar2;
}

// Apply @ 14c7d9a20

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Apply
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2,
          TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *param_3)

{
  undefined1 uVar1;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *local_res18;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *local_res20;
  undefined8 local_48;
  ulonglong uStack_40;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> **local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28 = &local_res18;
  _uStack_30 = CONCAT44(uStack_2c,1);
  local_38 = &local_res20;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_48 = 0;
  uStack_20 = 1;
  local_res18 = param_2;
  local_res20 = param_3;
  uVar1 = (**(code **)(this->_padding_ + 0x48))
                    (local_28._0_4_,&local_18,&local_28,&local_38,&local_48,0);
  return (bool)uVar1;
}

// Apply @ 14c7d9ab0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Apply
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>
          *param_2,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>
                   *param_3,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_4,
          bool param_5)

{
  char cVar1;
  undefined1 uVar2;
  TTransformSRT3<double> *local_48;
  undefined8 uStack_40;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> **local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38 = param_3->DataPtr;
  uStack_30 = *(undefined8 *)&param_3->ArrayNum;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_48 = param_4->DataPtr;
  uStack_40 = *(undefined8 *)&param_4->ArrayNum;
  local_28 = *(undefined4 *)&param_2->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_20 = param_2->ArrayNum;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  cVar1 = (**(code **)(this->_padding_ + 0x20))
                    (local_28,&local_18,&local_28,&local_38,&local_48,param_5);
  if (cVar1 == '\0') {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c7d9b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(this->_padding_ + 0x28))(this);
  return (bool)uVar2;
}

// Apply @ 14c7d9b40

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Apply
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this,
          TTransformSRT3<double> *param_1,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2)

{
  code *pcVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_48;
  
  local_48.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.FastWindingCache.ArrayNum = 0;
  local_48.FastWindingCache.ArrayMax = 0;
  local_48.FastWindingCacheOffset = 0;
  local_48.FastWindingCacheMeshChangeStamp = 0;
  local_48.FWNBeta = __real_4000000000000000;
  local_48.FWNApproxOrder = 2;
  local_48.Tree = param_2;
  if (this->InsideMode == FastWindingNumber) {
    if ((param_2 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pTVar2 = local_48.Tree;
    if (((local_48.Tree)->RootIndex < 0) ||
       (uVar5 = FDynamicMesh3::GetChangeStamp((local_48.Tree)->Mesh),
       pTVar2->MeshChangeStamp != uVar5)) {
      pTVar2 = local_48.Tree;
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_48.Tree,false);
      uVar5 = FDynamicMesh3::GetChangeStamp(pTVar2->Mesh);
      pTVar2->MeshChangeStamp = uVar5;
    }
    TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_48);
    local_48.FastWindingCacheMeshChangeStamp = (local_48.Tree)->MeshChangeStamp;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x38))(this,param_1,param_2,&local_48);
  if (local_48.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FastWindingCache.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// Apply @ 14c7d9c60

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Apply
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this,
          TTransformSRT3<double> *param_1,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          TFastWindingTree<UE::Geometry::FDynamicMesh3> *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  TTransformSRT3<double> *local_18;
  undefined4 uStack_10;
  
  local_18._0_4_ = SUB84(param_1,0);
  uStack_10 = 1;
  uVar1 = local_18._0_4_;
  local_18 = param_1;
  uVar2 = (**(code **)(this->_padding_ + 0x40))(uVar1,&local_18);
  return (bool)uVar2;
}

// Apply @ 14c7d9ca0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Apply
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          TFastWindingTree<UE::Geometry::FDynamicMesh3> *param_3)

{
  undefined1 uVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_res18;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_res20;
  undefined8 local_48;
  ulonglong uStack_40;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28 = &local_res18;
  _uStack_30 = CONCAT44(uStack_2c,1);
  local_38 = &local_res20;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_48 = 0;
  uStack_20 = 1;
  local_res18 = param_2;
  local_res20 = param_3;
  uVar1 = (**(code **)(this->_padding_ + 0x48))
                    (local_28._0_4_,&local_18,&local_28,&local_38,&local_48,0);
  return (bool)uVar1;
}

// Apply @ 14c7d9d30

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Apply
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *param_2,
          TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> *param_3,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_4,bool param_5)

{
  char cVar1;
  undefined1 uVar2;
  TTransformSRT3<double> *local_48;
  undefined8 uStack_40;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> **local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38 = param_3->DataPtr;
  uStack_30 = *(undefined8 *)&param_3->ArrayNum;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_48 = param_4->DataPtr;
  uStack_40 = *(undefined8 *)&param_4->ArrayNum;
  local_28 = *(undefined4 *)&param_2->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_20 = param_2->ArrayNum;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  cVar1 = (**(code **)(this->_padding_ + 0x20))
                    (local_28,&local_18,&local_28,&local_38,&local_48,param_5);
  if (cVar1 == '\0') {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c7d9da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(this->_padding_ + 0x28))(this);
  return (bool)uVar2;
}

// Cancelled @ 14c7e7bc0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Cancelled
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this)

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

// Cancelled @ 14c7e7c30

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Cancelled
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this)

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

// RemoveSelected @ 14c823fe0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::RemoveSelected
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this)

{
  bool bVar1;
  FDynamicMeshEditor local_res8 [4];
  
  if (0 < (this->RemovedT).ArrayNum) {
    local_res8[0].Mesh = this->Mesh;
    bVar1 = FDynamicMeshEditor::RemoveTriangles(local_res8,&this->RemovedT,true);
    if (!bVar1) {
      this->bRemoveFailed = true;
      return false;
    }
  }
  return true;
}

// RemoveSelected @ 14c824030

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::RemoveSelected
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this)

{
  bool bVar1;
  FDynamicMeshEditor local_res8 [4];
  
  if (0 < (this->RemovedT).ArrayNum) {
    local_res8[0].Mesh = this->Mesh;
    bVar1 = FDynamicMeshEditor::RemoveTriangles(local_res8,&this->RemovedT,true);
    if (!bVar1) {
      this->bRemoveFailed = true;
      return false;
    }
  }
  return true;
}

// Select @ 14c8253e0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this,
          TTransformSRT3<double> *param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2)

{
  code *pcVar1;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> local_48;
  
  local_48.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.FastWindingCache.ArrayNum = 0;
  local_48.FastWindingCache.ArrayMax = 0;
  local_48.FastWindingCacheOffset = 0;
  local_48.FastWindingCacheMeshChangeStamp = 0;
  local_48.FWNBeta = __real_4000000000000000;
  local_48.FWNApproxOrder = 2;
  local_48.Tree = param_2;
  if (this->InsideMode == FastWindingNumber) {
    if ((param_2 == (TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pTVar2 = local_48.Tree;
    if (((local_48.Tree)->RootIndex < 0) || ((local_48.Tree)->MeshChangeStamp != 1)) {
      TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::BuildTopDown(local_48.Tree,false);
      pTVar2->MeshChangeStamp = 1;
    }
    TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::build_fast_winding_cache(&local_48);
    local_48.FastWindingCacheMeshChangeStamp = (local_48.Tree)->MeshChangeStamp;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2,&local_48);
  if (local_48.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FastWindingCache.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// Select @ 14c8254f0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this,
          TTransformSRT3<double> *param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2,
          TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  TTransformSRT3<double> *local_18;
  undefined4 uStack_10;
  
  local_18._0_4_ = SUB84(param_1,0);
  uStack_10 = 1;
  uVar1 = local_18._0_4_;
  local_18 = param_1;
  uVar2 = (**(code **)(this->_padding_ + 0x18))(uVar1,&local_18);
  return (bool)uVar2;
}

// Select @ 14c825530

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1,
          TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *param_2,
          TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *param_3)

{
  undefined1 uVar1;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *local_res18;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *local_res20;
  undefined8 local_48;
  ulonglong uStack_40;
  TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> **local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28 = &local_res18;
  _uStack_30 = CONCAT44(uStack_2c,1);
  local_38 = &local_res20;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_48 = 0;
  uStack_20 = 1;
  local_res18 = param_2;
  local_res20 = param_3;
  uVar1 = (**(code **)(this->_padding_ + 0x20))
                    (local_28._0_4_,&local_18,&local_28,&local_38,&local_48,0);
  return (bool)uVar1;
}

// Select @ 14c8255c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>
          *param_2,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>
                   *param_3,TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_4,
          bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  code **ppcVar22;
  longlong lVar23;
  code **ppcVar24;
  longlong *plVar25;
  undefined ***pppuVar26;
  int iVar27;
  uint uVar28;
  undefined1 auStackY_418 [32];
  ForAnyElementType local_3c8;
  int local_3c0;
  int iStack_3bc;
  <lambda_1> local_3b8 [8];
  ForAnyElementType local_3b0;
  int local_3a8;
  int iStack_3a4;
  uint local_3a0 [2];
  ForAnyElementType local_398;
  int local_390;
  int iStack_38c;
  int local_388;
  FThreadSafeBool local_384;
  TArray<FThreadSafeBool,TSizedDefaultAllocator<32>_> local_380;
  TArray<bool,TSizedDefaultAllocator<32>_> local_370;
  FRandomStream local_360;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TVector<double>_u_0 local_328;
  double local_310;
  double dStack_308;
  double local_300;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2e0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  FMeshNormals local_2b0;
  TVector<double>_u_0 local_298;
  TArrayView<std::nullptr_t,int> local_280;
  code *local_270;
  TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> **local_268;
  TArrayView<std::nullptr_t,int> local_260;
  code *local_250;
  TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> **local_248;
  TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *local_240;
  FMeshNormals *local_238;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_230;
  code **local_228;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *local_220;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int> *local_218;
  TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int> *local_210;
  ForAnyElementType *local_208;
  TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *local_200;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_1f8;
  code **local_1f0;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *local_1e8;
  ForAnyElementType *local_1e0;
  TArray<FThreadSafeBool,TSizedDefaultAllocator<32>_> *local_1d8;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int> *local_1d0;
  TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int> *local_1c8;
  ForAnyElementType *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  code *local_168 [2];
  longlong local_158 [3];
  longlong *local_140;
  code *local_138 [2];
  longlong local_128 [3];
  longlong *local_110;
  code *local_108 [2];
  longlong local_f8 [3];
  longlong *local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *local_c0;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *local_90;
  undefined ***local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_418;
  cVar16 = (**(code **)(this->_padding_ + 0x58))();
  uVar12 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  if (cVar16 == '\0') {
    iVar27 = 0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    local_3c0 = 0;
    iStack_3bc = 0;
    local_388 = 0;
    local_360.InitialSeed = 0x206573;
    local_360.Seed = 0x206573;
    if (this->InsideMode == SimpleOcclusionTest) {
      uVar5 = CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_);
      uVar6 = CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_,
                       UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_);
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_3c8,&iStack_3bc);
      local_1a8 = (double)uVar12;
      local_3c0 = iVar19 + 1;
      *(undefined8 *)(local_3c8.Data + (longlong)iVar19 * 0x18) = uVar5;
      *(undefined8 *)(local_3c8.Data + (longlong)iVar19 * 0x18 + 8) = uVar6;
      uVar10 = _UNK_15066df7c;
      uVar21 = _UNK_15066df78;
      uVar20 = __xmm_80000000000000008000000000000000._4_4_;
      uVar28 = (uint)__xmm_80000000000000008000000000000000;
      *(undefined8 *)(local_3c8.Data + (longlong)iVar19 * 0x18 + 0x10) = uVar12;
      local_358._0_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_ ^ uVar28;
      local_358._4_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_ ^ uVar20;
      local_358._8_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_ ^ uVar21;
      local_358._12_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_ ^ uVar10;
      local_358._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20)
                            ^ uVar20,SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,
                                           0) ^ uVar28);
      local_1b8 = uVar5;
      uStack_1b0 = uVar6;
      if (((local_3c8.Data <= &local_358) &&
          (&local_358 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18) =
           CONCAT44(local_358._4_4_,local_358._0_4_);
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) =
           CONCAT44(local_358._12_4_,local_358._8_4_);
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_358._s_0.Z;
      local_2f8._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_);
      local_2f8._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_);
      local_2f8._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_3c0 = iVar19;
      if (((local_3c8.Data <= &local_2f8) &&
          (&local_2f8 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18) = local_2f8._s_0.X;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) = local_2f8._s_0.Y;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_2f8._s_0.Z;
      local_340._0_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_ ^ uVar28;
      local_340._4_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_ ^ uVar20;
      local_340._8_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_ ^ uVar21;
      local_340._12_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_ ^ uVar10;
      local_340._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20)
                            ^ uVar20,SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,
                                           0) ^ uVar28);
      local_3c0 = iVar19;
      if (((local_3c8.Data <= &local_340) &&
          (&local_340 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18) =
           CONCAT44(local_340._4_4_,local_340._0_4_);
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) =
           CONCAT44(local_340._12_4_,local_340._8_4_);
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_340._s_0.Z;
      local_2e0._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
      local_2e0._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
      local_2e0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_3c0 = iVar19;
      if (((local_3c8.Data <= &local_2e0) &&
          (&local_2e0 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18) = local_2e0._s_0.X;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) = local_2e0._s_0.Y;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_2e0._s_0.Z;
      local_328._0_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^ uVar28;
      local_328._4_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^ uVar20;
      local_328._8_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ uVar21;
      local_328._12_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ uVar10;
      local_328._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20)
                            ^ uVar20,SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,
                                           0) ^ uVar28);
      local_3c0 = iVar19;
      if (((local_3c8.Data <= &local_328) &&
          (&local_328 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18) =
           CONCAT44(local_328._4_4_,local_328._0_4_);
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) =
           CONCAT44(local_328._12_4_,local_328._8_4_);
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_328._s_0.Z;
      local_3c0 = iVar19;
      if (0 < this->AddRandomRays) {
        do {
          FRandomStream::GetUnitVector(&local_360,(TVector<double> *)&local_298._s_0);
          if (((local_3c8.Data <= &local_298) &&
              (&local_298 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18)))
             && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar17)) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
          if (local_3c0 == iStack_3bc) {
            local_3c0 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_3c8,&iStack_3bc);
          }
          iVar19 = local_3c0 + 1;
          iVar27 = iVar27 + 1;
          *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18) = local_298._s_0.X;
          *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) = local_298._s_0.Y;
          *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_298._s_0.Z;
          local_3c0 = iVar19;
        } while (iVar27 < this->AddRandomRays);
      }
    }
    dVar11 = __real_3feff7ced916872b;
    dVar9 = __real_3f50624dd2f1a9fc;
    fVar8 = __real_3f800000;
    dVar7 = __real_3ff0000000000000;
    iVar27 = 0;
    uVar28 = 0x1e549;
    local_3b0.Data = (FScriptContainerElement *)0x0;
    local_3a8 = 0;
    iStack_3a4 = 0;
    local_388 = local_3c0;
    if (0 < this->AddTriangleSamples) {
      do {
        uVar20 = uVar28 * 0xbb38435 + 0x3619636b;
        uVar21 = uVar20 * 0xbb38435 + 0x3619636b;
        uVar28 = uVar21 * 0xbb38435 + 0x3619636b;
        local_310 = (double)((float)(uVar28 >> 9 | 0x3f800000) - fVar8) * dVar11 + dVar9;
        dStack_308 = (double)((float)(uVar21 >> 9 | 0x3f800000) - fVar8) * dVar11 + dVar9;
        local_300 = (double)((float)(uVar20 >> 9 | 0x3f800000) - fVar8) * dVar11 + dVar9;
        dVar4 = dVar7 / (dStack_308 + local_310 + local_300);
        local_310 = local_310 * dVar4;
        dStack_308 = dStack_308 * dVar4;
        local_300 = local_300 * dVar4;
        if (((local_3b0.Data <= (FScriptContainerElement *)&local_310) &&
            ((FScriptContainerElement *)&local_310 < local_3b0.Data + (longlong)iStack_3a4 * 0x18))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar3 = (code *)swi(3);
          uVar18 = (*pcVar3)();
          return (bool)uVar18;
        }
        if (local_3a8 == iStack_3a4) {
          local_3a8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_3b0,&iStack_3a4);
        }
        iVar19 = local_3a8 + 1;
        iVar27 = iVar27 + 1;
        *(double *)(local_3b0.Data + (longlong)local_3a8 * 0x18) = local_310;
        *(double *)(local_3b0.Data + (longlong)local_3a8 * 0x18 + 8) = dStack_308;
        *(double *)(local_3b0.Data + (longlong)local_3a8 * 0x18 + 0x10) = local_300;
        local_3a8 = iVar19;
      } while (iVar27 < this->AddTriangleSamples);
    }
    if ((this->TriangleSamplingMethod == Centroids) ||
       (this->TriangleSamplingMethod == VerticesAndCentroids)) {
      local_2c8 = ___xmm_3fd55555555555553fd5555555555555;
      uStack_2c0 = _UNK_150aa23f8;
      local_2b8 = __real_3fd5555555555555;
      if ((local_3b0.Data <= (FScriptContainerElement *)&local_2c8) &&
         (((FScriptContainerElement *)&local_2c8 < local_3b0.Data + (longlong)iStack_3a4 * 0x18 &&
          (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar17)))) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3a8 == iStack_3a4) {
        local_3a8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3b0,&iStack_3a4);
      }
      *(undefined8 *)(local_3b0.Data + (longlong)local_3a8 * 0x18) = local_2c8;
      *(undefined8 *)(local_3b0.Data + (longlong)local_3a8 * 0x18 + 8) = uStack_2c0;
      *(undefined8 *)(local_3b0.Data + (longlong)local_3a8 * 0x18 + 0x10) = local_2b8;
      local_3a8 = local_3a8 + 1;
    }
    uVar28 = 0;
    local_80 = (undefined ***)0x0;
    local_98 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__Select___TRemoveOccludedTriangles_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__UEAA_NV__TArrayView___CBV__TTransformSRT3_N_Geometry_UE__H__V__TArrayView_PEAV__TMeshAABBTree3_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__H__V__TArrayView_PEAV__TFastWindingTree_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__H__0_N_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_b0 = (undefined ***)0x0;
    local_a8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::<lambda_1>,bool,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Geometry::TTransformSRT3<double>_const_&,TArray<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::FTransformWithInv,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_c8 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__Select___TRemoveOccludedTriangles_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__UEAA_NV__TArrayView___CBV__TTransformSRT3_N_Geometry_UE__H__V__TArrayView_PEAV__TMeshAABBTree3_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__H__V__TArrayView_PEAV__TFastWindingTree_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__H__0_N_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_d8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::<lambda_2>,bool,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Geometry::TTransformSRT3<double>_const_&,TArray<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::FTransformWithInv,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_108[0] = (code *)0x0;
    local_c0 = this;
    local_90 = this;
    local_e0 = FMemory::Malloc(0x20,8);
    *local_e0 = (longlong)
                &
                ___7__TFunction_OwnedObject_V<lambda_3>__1__Select___TRemoveOccludedTriangles_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__UEAA_NV__TArrayView___CBV__TTransformSRT3_N_Geometry_UE__H__V__TArrayView_PEAV__TMeshAABBTree3_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__H__V__TArrayView_PEAV__TFastWindingTree_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__H__0_N_Z__0A__00_Function_Private_Core_UE__6B_
    ;
    local_e0[1] = (longlong)this;
    local_e0[2] = (longlong)&local_3c8;
    local_e0[3] = (longlong)&local_388;
    if (local_e0 + 1 != (longlong *)0x0) {
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::<lambda_3>,bool,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Geometry::TTransformSRT3<double>_const_&,TArray<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::FTransformWithInv,TSizedDefaultAllocator<32>_>_const_&>
                     ::Call;
    }
    local_138[0] = (code *)0x0;
    local_110 = FMemory::Malloc(0x20,8);
    *local_110 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_V<lambda_4>__1__Select___TRemoveOccludedTriangles_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__UEAA_NV__TArrayView___CBV__TTransformSRT3_N_Geometry_UE__H__V__TArrayView_PEAV__TMeshAABBTree3_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__H__V__TArrayView_PEAV__TFastWindingTree_UFComponentMesh_MeshAutoRepair_UE___Geometry_UE__H__0_N_Z__0A__00_Function_Private_Core_UE__6B_
    ;
    local_110[1] = (longlong)this;
    local_110[2] = (longlong)&local_3c8;
    local_110[3] = (longlong)&local_388;
    if (local_110 + 1 != (longlong *)0x0) {
      local_138[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::<lambda_4>,bool,TArrayView<UE::Geometry::TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>_*,int>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Geometry::TTransformSRT3<double>_const_&,TArray<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::FTransformWithInv,TSizedDefaultAllocator<32>_>_const_&>
                     ::Call;
    }
    if (this->InsideMode == FastWindingNumber) {
      ppcVar24 = local_d8;
      ppcVar22 = local_a8;
    }
    else {
      ppcVar24 = local_138;
      ppcVar22 = local_108;
    }
    if (!param_5) {
      ppcVar24 = ppcVar22;
    }
    local_168[0] = *ppcVar24;
    local_140 = (longlong *)0x0;
    if (local_168[0] != (code *)0x0) {
      ppcVar22 = ppcVar24 + 2;
      if ((code **)ppcVar24[5] != (code **)0x0) {
        ppcVar22 = (code **)ppcVar24[5];
      }
      (**(code **)*ppcVar22)(ppcVar22,local_158);
    }
    iVar27 = param_2->ArrayNum;
    iVar19 = param_4->ArrayNum;
    local_398.Data = (FScriptContainerElement *)0x0;
    local_390 = 0;
    iStack_38c = 0;
    if (iVar27 == iVar19) {
      if (0 < iVar27) {
        do {
          uVar20 = 0;
          if ((int)uVar28 < iVar19) {
            uVar20 = ~uVar28 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
          if (local_390 == iStack_38c) {
            local_390 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x888,&local_398,&iStack_38c);
          }
          lVar23 = (longlong)local_390;
          local_390 = local_390 + 1;
          `UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2
          ::FTransformWithInv::FTransformWithInv
                    (local_398.Data + lVar23 * 0x88,param_4->DataPtr + (int)uVar28);
          uVar28 = uVar28 + 1;
        } while ((int)uVar28 < param_2->ArrayNum);
      }
    }
    else if (0 < iVar27) {
      do {
        if (local_390 == iStack_38c) {
          local_390 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x888,&local_398,&iStack_38c);
        }
        uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        iVar27 = local_390 + 1;
        local_1a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_198 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar28 = uVar28 + 1;
        local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_190 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        lVar23 = (longlong)local_390 * 0x88;
        *(undefined8 *)(local_398.Data + lVar23) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 8) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x10) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x18) = 0x3ff0000000000000;
        *(undefined8 *)(local_398.Data + lVar23 + 0x20) = uVar12;
        *(undefined8 *)(local_398.Data + lVar23 + 0x20 + 8) = uVar5;
        *(undefined8 *)(local_398.Data + lVar23 + 0x38) = uVar13;
        *(undefined8 *)(local_398.Data + lVar23 + 0x38 + 8) = uVar14;
        *(undefined8 *)(local_398.Data + lVar23 + 0x30) = uVar6;
        *(undefined8 *)(local_398.Data + lVar23 + 0x48) = uVar15;
        *(undefined8 *)(local_398.Data + lVar23 + 0x50) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x58) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x60) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x68) = 0x3ff0000000000000;
        uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        *(double *)(local_398.Data + lVar23 + 0x70) =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        *(undefined8 *)(local_398.Data + lVar23 + 0x70 + 8) = uVar12;
        *(double *)(local_398.Data + lVar23 + 0x80) =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_390 = iVar27;
      } while ((int)uVar28 < param_2->ArrayNum);
    }
    local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_370.ArrayNum = 0;
    local_370.ArrayMax = 0;
    if ((this->TriangleSamplingMethod == Vertices) ||
       (this->TriangleSamplingMethod == VerticesAndCentroids)) {
      local_3b8[0] = (<lambda_1>)0x0;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init
                (&local_370,(bool *)local_3b8,
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed +
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200);
      local_2b0.Mesh = this->Mesh;
      local_2b0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b0.Normals.ArrayNum = 0;
      local_2b0.Normals.ArrayMax = 0;
      FMeshNormals::Compute_FaceAvg(&local_2b0,true,true);
      local_238 = &local_2b0;
      local_230 = &local_370;
      local_228 = local_168;
      local_208 = &local_398;
      local_270 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l27::<lambda_5>,void,int>
                  ::Call;
      local_268 = &local_240;
      local_280.DataPtr = (void **)0x0;
      local_280.ArrayNum = 0;
      local_240 = this;
      local_220 = param_1;
      local_218 = param_2;
      local_210 = param_3;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_270,local_3b8[0],None,&local_280);
      if (local_2b0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Normals.AllocatorInstance.Data);
      }
    }
    cVar16 = (**(code **)(this->_padding_ + 0x58))(this);
    if (cVar16 == '\0') {
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.ArrayNum = 0;
      local_380.ArrayMax = 0;
      local_384 = (FThreadSafeBool)0x0;
      TArray<FThreadSafeBool,TSizedDefaultAllocator<32>_>::Init
                (&local_380,&local_384,
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed);
      local_248 = &local_200;
      local_1f8 = &local_370;
      local_1f0 = local_168;
      local_1e0 = &local_3b0;
      local_1d8 = &local_380;
      local_1c0 = &local_398;
      local_250 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::<lambda_6>,void,int>
                  ::Call;
      local_260.DataPtr = (void **)0x0;
      local_260.ArrayNum = 0;
      local_200 = this;
      local_1e8 = param_1;
      local_1d0 = param_2;
      local_1c8 = param_3;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_250,local_3b8[0],None,&local_260);
      cVar16 = (**(code **)(this->_padding_ + 0x58))(this);
      if (cVar16 == '\0') {
        piVar1 = &(this->RemovedT).ArrayMax;
        (this->RemovedT).ArrayNum = 0;
        if ((this->RemovedT).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->RemovedT).AllocatorInstance,0,piVar1);
        }
        local_3a0[0] = 0;
        if (0 < (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed)) {
          do {
            uVar28 = local_3a0[0];
            uVar20 = 0;
            if ((int)local_3a0[0] < local_380.ArrayNum) {
              uVar20 = ~local_3a0[0] >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              uVar18 = (*pcVar3)();
              return (bool)uVar18;
            }
            if (*(int *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar28 * 4) != 0) {
              pFVar2 = (this->RemovedT).AllocatorInstance.Data;
              if (((pFVar2 <= (FScriptContainerElement *)local_3a0) &&
                  ((FScriptContainerElement *)local_3a0 < pFVar2 + (longlong)*piVar1 * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar3 = (code *)swi(3);
                uVar18 = (*pcVar3)();
                return (bool)uVar18;
              }
              iVar27 = (this->RemovedT).ArrayNum;
              if (iVar27 == *piVar1) {
                iVar27 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&(this->RemovedT).AllocatorInstance,piVar1);
              }
              (this->RemovedT).ArrayNum = iVar27 + 1;
              *(uint *)((this->RemovedT).AllocatorInstance.Data + (longlong)iVar27 * 4) =
                   local_3a0[0];
            }
            local_3a0[0] = local_3a0[0] + 1;
          } while ((int)local_3a0[0] <
                   (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                        (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed));
        }
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.AllocatorInstance.Data);
      }
    }
    else {
      bVar17 = false;
    }
    if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.AllocatorInstance.Data);
    }
    if (local_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data);
    }
    if (local_168[0] != (code *)0x0) {
      plVar25 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar25 = local_140;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_138[0] != (code *)0x0) {
      plVar25 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar25 = local_110;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_108[0] != (code *)0x0) {
      plVar25 = local_f8;
      if (local_e0 != (longlong *)0x0) {
        plVar25 = local_e0;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_d8[0] != (code *)0x0) {
      pppuVar26 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar26 = local_b0;
      }
      (*(code *)(*pppuVar26)[2])();
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar26 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar26 = local_80;
      }
      (*(code *)(*pppuVar26)[2])();
    }
    if (local_3b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data);
    }
    if ((TVector<double>_u_0 *)local_3c8.Data != (TVector<double>_u_0 *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
  }
  else {
    bVar17 = false;
  }
  return bVar17;
}

// Select @ 14c8266e0

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this,
          TTransformSRT3<double> *param_1,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2)

{
  code *pcVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_48;
  
  local_48.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.FastWindingCache.ArrayNum = 0;
  local_48.FastWindingCache.ArrayMax = 0;
  local_48.FastWindingCacheOffset = 0;
  local_48.FastWindingCacheMeshChangeStamp = 0;
  local_48.FWNBeta = __real_4000000000000000;
  local_48.FWNApproxOrder = 2;
  local_48.Tree = param_2;
  if (this->InsideMode == FastWindingNumber) {
    if ((param_2 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pTVar2 = local_48.Tree;
    if (((local_48.Tree)->RootIndex < 0) ||
       (uVar5 = FDynamicMesh3::GetChangeStamp((local_48.Tree)->Mesh),
       pTVar2->MeshChangeStamp != uVar5)) {
      pTVar2 = local_48.Tree;
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_48.Tree,false);
      uVar5 = FDynamicMesh3::GetChangeStamp(pTVar2->Mesh);
      pTVar2->MeshChangeStamp = uVar5;
    }
    TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_48);
    local_48.FastWindingCacheMeshChangeStamp = (local_48.Tree)->MeshChangeStamp;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2,&local_48);
  if (local_48.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FastWindingCache.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// Select @ 14c826800

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this,
          TTransformSRT3<double> *param_1,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          TFastWindingTree<UE::Geometry::FDynamicMesh3> *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  TTransformSRT3<double> *local_18;
  undefined4 uStack_10;
  
  local_18._0_4_ = SUB84(param_1,0);
  uStack_10 = 1;
  uVar1 = local_18._0_4_;
  local_18 = param_1;
  uVar2 = (**(code **)(this->_padding_ + 0x18))(uVar1,&local_18);
  return (bool)uVar2;
}

// Select @ 14c826840

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          TFastWindingTree<UE::Geometry::FDynamicMesh3> *param_3)

{
  undefined1 uVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_res18;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_res20;
  undefined8 local_48;
  ulonglong uStack_40;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28 = &local_res18;
  _uStack_30 = CONCAT44(uStack_2c,1);
  local_38 = &local_res20;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  local_48 = 0;
  uStack_20 = 1;
  local_res18 = param_2;
  local_res20 = param_3;
  uVar1 = (**(code **)(this->_padding_ + 0x20))
                    (local_28._0_4_,&local_18,&local_28,&local_38,&local_48,0);
  return (bool)uVar1;
}

// Select @ 14c8268d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *param_2,
          TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> *param_3,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  code **ppcVar22;
  longlong lVar23;
  code **ppcVar24;
  longlong *plVar25;
  undefined ***pppuVar26;
  int iVar27;
  uint uVar28;
  undefined1 auStackY_418 [32];
  ForAnyElementType local_3c8;
  int local_3c0;
  int iStack_3bc;
  <lambda_1> local_3b8 [8];
  ForAnyElementType local_3b0;
  int local_3a8;
  int iStack_3a4;
  uint local_3a0 [2];
  ForAnyElementType local_398;
  int local_390;
  int iStack_38c;
  int local_388;
  FThreadSafeBool local_384;
  TArray<FThreadSafeBool,TSizedDefaultAllocator<32>_> local_380;
  TArray<bool,TSizedDefaultAllocator<32>_> local_370;
  FRandomStream local_360;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TVector<double>_u_0 local_328;
  double local_310;
  double dStack_308;
  double local_300;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2e0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  FMeshNormals local_2b0;
  TVector<double>_u_0 local_298;
  TArrayView<std::nullptr_t,int> local_280;
  code *local_270;
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> **local_268;
  TArrayView<std::nullptr_t,int> local_260;
  code *local_250;
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> **local_248;
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *local_240;
  FMeshNormals *local_238;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_230;
  code **local_228;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *local_220;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *local_218;
  TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> *local_210;
  ForAnyElementType *local_208;
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *local_200;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_1f8;
  code **local_1f0;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *local_1e8;
  ForAnyElementType *local_1e0;
  TArray<FThreadSafeBool,TSizedDefaultAllocator<32>_> *local_1d8;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> *local_1d0;
  TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> *local_1c8;
  ForAnyElementType *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  code *local_168 [2];
  longlong local_158 [3];
  longlong *local_140;
  code *local_138 [2];
  longlong local_128 [3];
  longlong *local_110;
  code *local_108 [2];
  longlong local_f8 [3];
  longlong *local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *local_c0;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *local_90;
  undefined ***local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_418;
  cVar16 = (**(code **)(this->_padding_ + 0x58))();
  uVar12 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  if (cVar16 == '\0') {
    iVar27 = 0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    local_3c0 = 0;
    iStack_3bc = 0;
    local_388 = 0;
    local_360.InitialSeed = 0x206573;
    local_360.Seed = 0x206573;
    if (this->InsideMode == SimpleOcclusionTest) {
      uVar5 = CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_);
      uVar6 = CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_,
                       UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_);
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_3c8,&iStack_3bc);
      local_1a8 = (double)uVar12;
      local_3c0 = iVar19 + 1;
      *(undefined8 *)(local_3c8.Data + (longlong)iVar19 * 0x18) = uVar5;
      *(undefined8 *)(local_3c8.Data + (longlong)iVar19 * 0x18 + 8) = uVar6;
      uVar10 = _UNK_15066df7c;
      uVar21 = _UNK_15066df78;
      uVar20 = __xmm_80000000000000008000000000000000._4_4_;
      uVar28 = (uint)__xmm_80000000000000008000000000000000;
      *(undefined8 *)(local_3c8.Data + (longlong)iVar19 * 0x18 + 0x10) = uVar12;
      local_358._0_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_ ^ uVar28;
      local_358._4_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_ ^ uVar20;
      local_358._8_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_ ^ uVar21;
      local_358._12_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_ ^ uVar10;
      local_358._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20)
                            ^ uVar20,SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,
                                           0) ^ uVar28);
      local_1b8 = uVar5;
      uStack_1b0 = uVar6;
      if (((local_3c8.Data <= &local_358) &&
          (&local_358 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18) =
           CONCAT44(local_358._4_4_,local_358._0_4_);
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) =
           CONCAT44(local_358._12_4_,local_358._8_4_);
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_358._s_0.Z;
      local_2f8._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_);
      local_2f8._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_);
      local_2f8._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_3c0 = iVar19;
      if (((local_3c8.Data <= &local_2f8) &&
          (&local_2f8 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18) = local_2f8._s_0.X;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) = local_2f8._s_0.Y;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_2f8._s_0.Z;
      local_340._0_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_ ^ uVar28;
      local_340._4_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_ ^ uVar20;
      local_340._8_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_ ^ uVar21;
      local_340._12_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_ ^ uVar10;
      local_340._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20)
                            ^ uVar20,SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,
                                           0) ^ uVar28);
      local_3c0 = iVar19;
      if (((local_3c8.Data <= &local_340) &&
          (&local_340 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18) =
           CONCAT44(local_340._4_4_,local_340._0_4_);
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) =
           CONCAT44(local_340._12_4_,local_340._8_4_);
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_340._s_0.Z;
      local_2e0._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
      local_2e0._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
      local_2e0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_3c0 = iVar19;
      if (((local_3c8.Data <= &local_2e0) &&
          (&local_2e0 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18) = local_2e0._s_0.X;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) = local_2e0._s_0.Y;
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_2e0._s_0.Z;
      local_328._0_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^ uVar28;
      local_328._4_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^ uVar20;
      local_328._8_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ uVar21;
      local_328._12_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ uVar10;
      local_328._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20)
                            ^ uVar20,SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,
                                           0) ^ uVar28);
      local_3c0 = iVar19;
      if (((local_3c8.Data <= &local_328) &&
          (&local_328 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3c0 == iStack_3bc) {
        local_3c0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3c8,&iStack_3bc);
      }
      iVar19 = local_3c0 + 1;
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18) =
           CONCAT44(local_328._4_4_,local_328._0_4_);
      *(ulonglong *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) =
           CONCAT44(local_328._12_4_,local_328._8_4_);
      *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_328._s_0.Z;
      local_3c0 = iVar19;
      if (0 < this->AddRandomRays) {
        do {
          FRandomStream::GetUnitVector(&local_360,(TVector<double> *)&local_298._s_0);
          if (((local_3c8.Data <= &local_298) &&
              (&local_298 < (TVector<double>_u_0 *)(local_3c8.Data + (longlong)iStack_3bc * 0x18)))
             && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar17)) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
          if (local_3c0 == iStack_3bc) {
            local_3c0 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_3c8,&iStack_3bc);
          }
          iVar19 = local_3c0 + 1;
          iVar27 = iVar27 + 1;
          *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18) = local_298._s_0.X;
          *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 8) = local_298._s_0.Y;
          *(double *)(local_3c8.Data + (longlong)local_3c0 * 0x18 + 0x10) = local_298._s_0.Z;
          local_3c0 = iVar19;
        } while (iVar27 < this->AddRandomRays);
      }
    }
    dVar11 = __real_3feff7ced916872b;
    dVar9 = __real_3f50624dd2f1a9fc;
    fVar8 = __real_3f800000;
    dVar7 = __real_3ff0000000000000;
    iVar27 = 0;
    uVar28 = 0x1e549;
    local_3b0.Data = (FScriptContainerElement *)0x0;
    local_3a8 = 0;
    iStack_3a4 = 0;
    local_388 = local_3c0;
    if (0 < this->AddTriangleSamples) {
      do {
        uVar20 = uVar28 * 0xbb38435 + 0x3619636b;
        uVar21 = uVar20 * 0xbb38435 + 0x3619636b;
        uVar28 = uVar21 * 0xbb38435 + 0x3619636b;
        local_310 = (double)((float)(uVar28 >> 9 | 0x3f800000) - fVar8) * dVar11 + dVar9;
        dStack_308 = (double)((float)(uVar21 >> 9 | 0x3f800000) - fVar8) * dVar11 + dVar9;
        local_300 = (double)((float)(uVar20 >> 9 | 0x3f800000) - fVar8) * dVar11 + dVar9;
        dVar4 = dVar7 / (dStack_308 + local_310 + local_300);
        local_310 = local_310 * dVar4;
        dStack_308 = dStack_308 * dVar4;
        local_300 = local_300 * dVar4;
        if (((local_3b0.Data <= (FScriptContainerElement *)&local_310) &&
            ((FScriptContainerElement *)&local_310 < local_3b0.Data + (longlong)iStack_3a4 * 0x18))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar3 = (code *)swi(3);
          uVar18 = (*pcVar3)();
          return (bool)uVar18;
        }
        if (local_3a8 == iStack_3a4) {
          local_3a8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_3b0,&iStack_3a4);
        }
        iVar19 = local_3a8 + 1;
        iVar27 = iVar27 + 1;
        *(double *)(local_3b0.Data + (longlong)local_3a8 * 0x18) = local_310;
        *(double *)(local_3b0.Data + (longlong)local_3a8 * 0x18 + 8) = dStack_308;
        *(double *)(local_3b0.Data + (longlong)local_3a8 * 0x18 + 0x10) = local_300;
        local_3a8 = iVar19;
      } while (iVar27 < this->AddTriangleSamples);
    }
    if ((this->TriangleSamplingMethod == Centroids) ||
       (this->TriangleSamplingMethod == VerticesAndCentroids)) {
      local_2c8 = ___xmm_3fd55555555555553fd5555555555555;
      uStack_2c0 = _UNK_150aa23f8;
      local_2b8 = __real_3fd5555555555555;
      if ((local_3b0.Data <= (FScriptContainerElement *)&local_2c8) &&
         (((FScriptContainerElement *)&local_2c8 < local_3b0.Data + (longlong)iStack_3a4 * 0x18 &&
          (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar17)))) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      if (local_3a8 == iStack_3a4) {
        local_3a8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3b0,&iStack_3a4);
      }
      *(undefined8 *)(local_3b0.Data + (longlong)local_3a8 * 0x18) = local_2c8;
      *(undefined8 *)(local_3b0.Data + (longlong)local_3a8 * 0x18 + 8) = uStack_2c0;
      *(undefined8 *)(local_3b0.Data + (longlong)local_3a8 * 0x18 + 0x10) = local_2b8;
      local_3a8 = local_3a8 + 1;
    }
    uVar28 = 0;
    local_80 = (undefined ***)0x0;
    local_98 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__Select___TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__UEAA_NV__TArrayView___CBV__TTransformSRT3_N_Geometry_UE__H__V__TArrayView_PEAV__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__H__V__TArrayView_PEAV__TFastWindingTree_VFDynamicMesh3_Geometry_UE___Geometry_UE__H__0_N_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_b0 = (undefined ***)0x0;
    local_a8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_1>,bool,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Geometry::TTransformSRT3<double>_const_&,TArray<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::FTransformWithInv,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_c8 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__Select___TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__UEAA_NV__TArrayView___CBV__TTransformSRT3_N_Geometry_UE__H__V__TArrayView_PEAV__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__H__V__TArrayView_PEAV__TFastWindingTree_VFDynamicMesh3_Geometry_UE___Geometry_UE__H__0_N_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_d8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_2>,bool,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Geometry::TTransformSRT3<double>_const_&,TArray<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::FTransformWithInv,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_108[0] = (code *)0x0;
    local_c0 = this;
    local_90 = this;
    local_e0 = FMemory::Malloc(0x20,8);
    *local_e0 = (longlong)
                &
                ___7__TFunction_OwnedObject_V<lambda_3>__1__Select___TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__UEAA_NV__TArrayView___CBV__TTransformSRT3_N_Geometry_UE__H__V__TArrayView_PEAV__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__H__V__TArrayView_PEAV__TFastWindingTree_VFDynamicMesh3_Geometry_UE___Geometry_UE__H__0_N_Z__0A__00_Function_Private_Core_UE__6B_
    ;
    local_e0[1] = (longlong)this;
    local_e0[2] = (longlong)&local_3c8;
    local_e0[3] = (longlong)&local_388;
    if (local_e0 + 1 != (longlong *)0x0) {
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_3>,bool,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Geometry::TTransformSRT3<double>_const_&,TArray<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::FTransformWithInv,TSizedDefaultAllocator<32>_>_const_&>
                     ::Call;
    }
    local_138[0] = (code *)0x0;
    local_110 = FMemory::Malloc(0x20,8);
    *local_110 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_V<lambda_4>__1__Select___TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__UEAA_NV__TArrayView___CBV__TTransformSRT3_N_Geometry_UE__H__V__TArrayView_PEAV__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__H__V__TArrayView_PEAV__TFastWindingTree_VFDynamicMesh3_Geometry_UE___Geometry_UE__H__0_N_Z__0A__00_Function_Private_Core_UE__6B_
    ;
    local_110[1] = (longlong)this;
    local_110[2] = (longlong)&local_3c8;
    local_110[3] = (longlong)&local_388;
    if (local_110 + 1 != (longlong *)0x0) {
      local_138[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_4>,bool,TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int>,TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Geometry::TTransformSRT3<double>_const_&,TArray<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::FTransformWithInv,TSizedDefaultAllocator<32>_>_const_&>
                     ::Call;
    }
    if (this->InsideMode == FastWindingNumber) {
      ppcVar24 = local_d8;
      ppcVar22 = local_a8;
    }
    else {
      ppcVar24 = local_138;
      ppcVar22 = local_108;
    }
    if (!param_5) {
      ppcVar24 = ppcVar22;
    }
    local_168[0] = *ppcVar24;
    local_140 = (longlong *)0x0;
    if (local_168[0] != (code *)0x0) {
      ppcVar22 = ppcVar24 + 2;
      if ((code **)ppcVar24[5] != (code **)0x0) {
        ppcVar22 = (code **)ppcVar24[5];
      }
      (**(code **)*ppcVar22)(ppcVar22,local_158);
    }
    iVar27 = param_2->ArrayNum;
    iVar19 = param_4->ArrayNum;
    local_398.Data = (FScriptContainerElement *)0x0;
    local_390 = 0;
    iStack_38c = 0;
    if (iVar27 == iVar19) {
      if (0 < iVar27) {
        do {
          uVar20 = 0;
          if ((int)uVar28 < iVar19) {
            uVar20 = ~uVar28 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
          if (local_390 == iStack_38c) {
            local_390 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x888,&local_398,&iStack_38c);
          }
          lVar23 = (longlong)local_390;
          local_390 = local_390 + 1;
          `UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::
          FTransformWithInv::FTransformWithInv
                    (local_398.Data + lVar23 * 0x88,param_4->DataPtr + (int)uVar28);
          uVar28 = uVar28 + 1;
        } while ((int)uVar28 < param_2->ArrayNum);
      }
    }
    else if (0 < iVar27) {
      do {
        if (local_390 == iStack_38c) {
          local_390 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x888,&local_398,&iStack_38c);
        }
        uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        iVar27 = local_390 + 1;
        local_1a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_198 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar28 = uVar28 + 1;
        local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_190 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        lVar23 = (longlong)local_390 * 0x88;
        *(undefined8 *)(local_398.Data + lVar23) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 8) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x10) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x18) = 0x3ff0000000000000;
        *(undefined8 *)(local_398.Data + lVar23 + 0x20) = uVar12;
        *(undefined8 *)(local_398.Data + lVar23 + 0x20 + 8) = uVar5;
        *(undefined8 *)(local_398.Data + lVar23 + 0x38) = uVar13;
        *(undefined8 *)(local_398.Data + lVar23 + 0x38 + 8) = uVar14;
        *(undefined8 *)(local_398.Data + lVar23 + 0x30) = uVar6;
        *(undefined8 *)(local_398.Data + lVar23 + 0x48) = uVar15;
        *(undefined8 *)(local_398.Data + lVar23 + 0x50) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x58) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x60) = 0;
        *(undefined8 *)(local_398.Data + lVar23 + 0x68) = 0x3ff0000000000000;
        uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        *(double *)(local_398.Data + lVar23 + 0x70) =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        *(undefined8 *)(local_398.Data + lVar23 + 0x70 + 8) = uVar12;
        *(double *)(local_398.Data + lVar23 + 0x80) =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_390 = iVar27;
      } while ((int)uVar28 < param_2->ArrayNum);
    }
    local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_370.ArrayNum = 0;
    local_370.ArrayMax = 0;
    if ((this->TriangleSamplingMethod == Vertices) ||
       (this->TriangleSamplingMethod == VerticesAndCentroids)) {
      local_3b8[0] = (<lambda_1>)0x0;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init
                (&local_370,(bool *)local_3b8,
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed +
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200);
      local_2b0.Mesh = this->Mesh;
      local_2b0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b0.Normals.ArrayNum = 0;
      local_2b0.Normals.ArrayMax = 0;
      FMeshNormals::Compute_FaceAvg(&local_2b0,true,true);
      local_238 = &local_2b0;
      local_230 = &local_370;
      local_228 = local_168;
      local_208 = &local_398;
      local_270 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l27::<lambda_5>,void,int>
                  ::Call;
      local_268 = &local_240;
      local_280.DataPtr = (void **)0x0;
      local_280.ArrayNum = 0;
      local_240 = this;
      local_220 = param_1;
      local_218 = param_2;
      local_210 = param_3;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_270,local_3b8[0],None,&local_280);
      if (local_2b0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Normals.AllocatorInstance.Data);
      }
    }
    cVar16 = (**(code **)(this->_padding_ + 0x58))(this);
    if (cVar16 == '\0') {
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.ArrayNum = 0;
      local_380.ArrayMax = 0;
      local_384 = (FThreadSafeBool)0x0;
      TArray<FThreadSafeBool,TSizedDefaultAllocator<32>_>::Init
                (&local_380,&local_384,
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed);
      local_248 = &local_200;
      local_1f8 = &local_370;
      local_1f0 = local_168;
      local_1e0 = &local_3b0;
      local_1d8 = &local_380;
      local_1c0 = &local_398;
      local_250 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::<lambda_6>,void,int>
                  ::Call;
      local_260.DataPtr = (void **)0x0;
      local_260.ArrayNum = 0;
      local_200 = this;
      local_1e8 = param_1;
      local_1d0 = param_2;
      local_1c8 = param_3;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_250,local_3b8[0],None,&local_260);
      cVar16 = (**(code **)(this->_padding_ + 0x58))(this);
      if (cVar16 == '\0') {
        piVar1 = &(this->RemovedT).ArrayMax;
        (this->RemovedT).ArrayNum = 0;
        if ((this->RemovedT).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->RemovedT).AllocatorInstance,0,piVar1);
        }
        local_3a0[0] = 0;
        if (0 < (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed)) {
          do {
            uVar28 = local_3a0[0];
            uVar20 = 0;
            if ((int)local_3a0[0] < local_380.ArrayNum) {
              uVar20 = ~local_3a0[0] >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              uVar18 = (*pcVar3)();
              return (bool)uVar18;
            }
            if (*(int *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar28 * 4) != 0) {
              pFVar2 = (this->RemovedT).AllocatorInstance.Data;
              if (((pFVar2 <= (FScriptContainerElement *)local_3a0) &&
                  ((FScriptContainerElement *)local_3a0 < pFVar2 + (longlong)*piVar1 * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar3 = (code *)swi(3);
                uVar18 = (*pcVar3)();
                return (bool)uVar18;
              }
              iVar27 = (this->RemovedT).ArrayNum;
              if (iVar27 == *piVar1) {
                iVar27 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&(this->RemovedT).AllocatorInstance,piVar1);
              }
              (this->RemovedT).ArrayNum = iVar27 + 1;
              *(uint *)((this->RemovedT).AllocatorInstance.Data + (longlong)iVar27 * 4) =
                   local_3a0[0];
            }
            local_3a0[0] = local_3a0[0] + 1;
          } while ((int)local_3a0[0] <
                   (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                        (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed));
        }
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.AllocatorInstance.Data);
      }
    }
    else {
      bVar17 = false;
    }
    if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.AllocatorInstance.Data);
    }
    if (local_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data);
    }
    if (local_168[0] != (code *)0x0) {
      plVar25 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar25 = local_140;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_138[0] != (code *)0x0) {
      plVar25 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar25 = local_110;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_108[0] != (code *)0x0) {
      plVar25 = local_f8;
      if (local_e0 != (longlong *)0x0) {
        plVar25 = local_e0;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_d8[0] != (code *)0x0) {
      pppuVar26 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar26 = local_b0;
      }
      (*(code *)(*pppuVar26)[2])();
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar26 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar26 = local_80;
      }
      (*(code *)(*pppuVar26)[2])();
    }
    if (local_3b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data);
    }
    if ((TVector<double>_u_0 *)local_3c8.Data != (TVector<double>_u_0 *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
  }
  else {
    bVar17 = false;
  }
  return bVar17;
}

// Validate @ 14c8511a0

EOperationValidationResult __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Validate
          (TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh> *this)

{
  return Ok;
}

// Validate @ 14c8511b0

EOperationValidationResult __thiscall
UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Validate
          (TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> *this)

{
  return Ok;
}

