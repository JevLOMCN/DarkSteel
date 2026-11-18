// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// operator() @ 14c94b750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FRemoveOccludedTrianglesOp::CalculateResult'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  uint local_f0 [2];
  int local_e8 [4];
  undefined1 local_d8 [8];
  undefined1 local_d0 [32];
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ForElementType<FSetElementId> local_90;
  int local_88;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar5 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._8_8_ = 0;
  pFVar3 = pFVar5 + (longlong)iVar1 * 4;
  local_b0 = (void *)0x0;
  local_a8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_a0 = _UNK_150631d98;
  local_90 = (ForElementType<FSetElementId>)0x0;
  local_88 = 0;
  local_d8 = (undefined1  [8])param_1;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (pFVar5 == pFVar3) break;
    uVar2 = *(uint *)pFVar5;
    if (((-1 < (int)uVar2) &&
        ((int)uVar2 <
         (int)((((FRefCountVector *)((longlong)local_d8 + 0x140))->RefCounts).CurBlock * 0x200 +
              (((FRefCountVector *)((longlong)local_d8 + 0x140))->RefCounts).CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((((FRefCountVector *)((longlong)local_d8 + 0x140))->RefCounts).Blocks.
                              AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      local_f0[0] = uVar2;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d0,local_e8,
                 (bool *)local_f0);
    }
    pFVar5 = pFVar5 + 4;
  }
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours
            ((FMeshFaceSelection *)local_d8,param_3,false,
             (TUniqueFunction<bool___cdecl(int)> *)local_78);
  if (local_78._0_8_ != 0) {
    plVar4 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar4 = local_50;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d0,&local_100);
  if (param_2 != &local_100) {
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_2->AllocatorInstance).Data = local_100.AllocatorInstance.Data;
    param_2->ArrayNum = local_100.ArrayNum;
    param_2->ArrayMax = local_100.ArrayMax;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  local_88 = 0;
  if (local_90 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_90);
  }
  iVar1 = SUB84(local_d0._8_8_,4);
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
  }
  uVar2 = local_a8._4_4_;
  uStack_a0 = 0xffffffff;
  local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  return;
}

// CalculateResult @ 14c9689a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FRemoveOccludedTrianglesOp::CalculateResult
          (FRemoveOccludedTrianglesOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FDynamicMesh3 *pFVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  FPolygroupSet *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  int local_res24;
  ForAnyElementType local_178;
  int local_170 [2];
  ForAnyElementType local_168;
  int local_160 [2];
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> local_158;
  FDynamicMeshEditor local_f8;
  FDynamicMeshEditor local_f0;
  TTransformSRT3<double> *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TTransformSRT3<double> *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> local_a8;
  TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> local_98;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> local_88;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> local_78;
  FPolygroupSet local_68;
  FPolygroupSet local_50;
  
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar10 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    bVar5 = (bool)(*pcVar1)(uVar9);
    param_1->WasCancelled = bVar5;
    if (bVar5 != false) {
      return;
    }
  }
  pFVar3 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FDynamicMesh3::Copy(pFVar3,(this->OriginalMesh).Object,true,true,true,true);
  local_158.Mesh = (FDynamicMesh3 *)this->_padding_;
  uVar12 = 0;
  local_158._padding_ =
       (longlong)&___7__TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  local_158.TriangleSamplingMethod = Vertices;
  local_158.InsideMode = FastWindingNumber;
  local_158.AddRandomRays = 0;
  local_158.AddTriangleSamples = 0;
  local_158.Progress = (FProgressCancel *)0x0;
  local_158.RemovedT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.RemovedT.ArrayNum = 0;
  local_158.RemovedT.ArrayMax = 0;
  local_158.bRemoveFailed = false;
  local_158.NormalOffset = ___xmm_3fe00000000000003e45798ee2308c3a;
  local_158.WindingIsoValue = _UNK_1528cb7d8;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) goto LAB_14c96900b;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar10 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    bVar5 = (bool)(*pcVar1)(uVar9);
    param_1->WasCancelled = bVar5;
    if (bVar5 != false) goto LAB_14c96900b;
  }
  local_158.NormalOffset = this->NormalOffset;
  local_158.WindingIsoValue = this->WindingIsoValue;
  uVar7 = (this->OccluderTrees).ArrayNum;
  local_158.TriangleSamplingMethod = this->TriangleSamplingMethod;
  local_158.AddRandomRays = this->AddRandomRays;
  local_158.InsideMode = this->InsideMode;
  local_158.AddTriangleSamples = this->AddTriangleSamples;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160[0] = 0;
  local_160[1] = 0;
  if ((int)uVar7 < 1) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
  }
  else {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar7,&local_168,local_160,local_160 + 1);
    memset(local_168.Data + (longlong)iVar6 * 8,0,(longlong)(int)uVar7 << 3);
  }
  uVar7 = (this->OccluderWindings).ArrayNum;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170[0] = 0;
  local_170[1] = 0;
  if ((int)uVar7 < 1) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
  }
  else {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar7,&local_178,local_170,local_170 + 1);
    memset(local_178.Data + (longlong)iVar6 * 8,0,(longlong)(int)uVar7 << 3);
  }
  uVar14 = uVar12;
  uVar16 = uVar12;
  if (0 < (this->OccluderTrees).ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar15 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < (this->OccluderTrees).ArrayNum) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = *(undefined8 *)((this->OccluderTrees).AllocatorInstance.Data + uVar14);
      uVar8 = 0;
      uVar7 = uVar8;
      if ((int)uVar11 < local_160[0]) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined8 *)(local_168.Data + uVar16) = uVar9;
      uVar7 = uVar8;
      if ((int)uVar11 < (this->OccluderWindings).ArrayNum) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = *(undefined8 *)((this->OccluderWindings).AllocatorInstance.Data + uVar14);
      if ((int)uVar11 < local_170[0]) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(undefined8 *)(local_178.Data + uVar16) = uVar9;
      uVar14 = uVar14 + 0x10;
      uVar16 = uVar16 + 8;
    } while ((int)(uVar11 + 1) < (this->OccluderTrees).ArrayNum);
  }
  local_e8 = (TTransformSRT3<double> *)(this->OccluderTransforms).AllocatorInstance.Data;
  iVar6 = (this->OccluderTransforms).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = local_170[0];
  local_d8 = local_178.Data;
  iStack_e0 = iVar6;
  if ((local_170[0] < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_d0 = iVar4;
  iVar6 = local_160[0];
  local_c8 = local_168.Data;
  if ((local_160[0] < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b8 = (TTransformSRT3<double> *)(this->MeshTransforms).AllocatorInstance.Data;
  iStack_c0 = iVar6;
  iVar6 = (this->MeshTransforms).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a8._12_4_ = uStack_dc;
  local_a8.ArrayNum = iStack_e0;
  local_98._12_4_ = uStack_cc;
  local_98.ArrayNum = iStack_d0;
  local_a8.DataPtr = local_e8;
  local_88._12_4_ = uStack_bc;
  local_88.ArrayNum = iStack_c0;
  local_98.DataPtr = (TFastWindingTree<UE::Geometry::FDynamicMesh3> **)local_d8;
  local_78._12_4_ = uStack_ac;
  local_78.ArrayNum = iVar6;
  local_88.DataPtr = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)local_c8;
  local_78.DataPtr = local_b8;
  iStack_b0 = iVar6;
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select
            (&local_158,&local_78,&local_88,&local_98,&local_a8,false);
  if (0 < this->ShrinkRemoval) {
    `UE::Geometry::FRemoveOccludedTrianglesOp::CalculateResult'::__l2::<lambda_1>::operator()
              (local_res18,(FDynamicMesh3 *)this->_padding_,&local_158.RemovedT,this->ShrinkRemoval)
    ;
  }
  if (this->bSetTriangleGroupInsteadOfRemoving == false) {
    if (0 < local_158.RemovedT.ArrayNum) {
      local_f8.Mesh = local_158.Mesh;
      bVar5 = FDynamicMeshEditor::RemoveTriangles(&local_f8,&local_158.RemovedT,true);
      if (!bVar5) {
        local_158.bRemoveFailed = true;
      }
    }
  }
  else {
    pFVar3 = (FDynamicMesh3 *)this->_padding_;
    if (local_158.RemovedT.ArrayNum == 0) {
      this->CreatedGroupID = -1;
      this->CreatedGroupLayerIndex = -1;
    }
    else {
      if (this->bActiveGroupLayerIsDefault == false) {
        FPolygroupSet::FPolygroupSet(&local_68,pFVar3,this->ActiveGroupLayer);
        pFVar13 = &local_68;
      }
      else {
        FPolygroupSet::FPolygroupSet(&local_50,pFVar3);
        pFVar13 = &local_50;
      }
      ``UE::Geometry::FRemoveOccludedTrianglesOp::CalculateResult'::__l2::<lambda_2>::operator()'::
      __l2::<lambda_1>::operator()
                (local_res10,(FDynamicMesh3 *)&local_res20,(FPolygroupSet *)pFVar3,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar13);
      this->CreatedGroupID = local_res20;
      this->CreatedGroupLayerIndex = local_res24;
    }
  }
  if ((0 < this->MinTriCountConnectedComponent) || (0.0 < this->MinAreaConnectedComponent)) {
    local_f0.Mesh = (FDynamicMesh3 *)this->_padding_;
    FDynamicMeshEditor::RemoveSmallComponents
              (&local_f0,__real_ffefffffffffffff,this->MinAreaConnectedComponent,
               this->MinTriCountConnectedComponent);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
LAB_14c96900b:
  local_158._padding_ =
       (longlong)&___7__TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if (local_158.RemovedT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.RemovedT.AllocatorInstance.Data);
  }
  return;
}

// SetTransform @ 14c9858f0

void __thiscall
UE::Geometry::FRemoveOccludedTrianglesOp::SetTransform
          (FRemoveOccludedTrianglesOp *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar3 = (param_1->Rotation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  dVar4 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar6 = (param_1->Translation).XY.m128d_f64[0];
  dVar7 = (param_1->Translation).XY.m128d_f64[1];
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(param_1->Rotation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar3;
  this->_padding_ = (longlong)dVar8;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar6;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = (longlong)dVar5;
  this->_padding_ = (longlong)dVar2;
  return;
}

