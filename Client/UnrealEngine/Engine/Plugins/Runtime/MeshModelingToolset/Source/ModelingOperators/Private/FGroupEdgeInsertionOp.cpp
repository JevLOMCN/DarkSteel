// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// CalculateResult @ 14c964500

void __thiscall
UE::Geometry::FGroupEdgeInsertionOp::CalculateResult
          (FGroupEdgeInsertionOp *this,FProgressCancel *param_1)

{
  TSharedPtr<UE::Geometry::FGroupTopology,1> *pTVar1;
  TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  FDynamicMesh3 *this_00;
  FGroupTopology *pFVar5;
  bool bVar6;
  undefined8 uVar7;
  TSharedRef<UE::Geometry::FGroupTopology,1> *pTVar8;
  TSharedRef<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> *pTVar9;
  longlong *plVar10;
  FGroupEdgeInserter local_res8 [8];
  FGroupTopology *local_f8;
  FSharedReferencer<1> local_f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e8;
  FSharedReferencer<1> local_e0;
  FOptionalOutputParams local_d8;
  TSharedRef<UE::Geometry::FGroupTopology,1> local_b8;
  TSharedRef<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> local_a8;
  FGroupEdgeInsertionParams local_98;
  
  this->bSucceeded = false;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar3 = *(code **)&param_1->CancelF;
    plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar10 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar10 = plVar4;
    }
    uVar7 = (**(code **)(*plVar10 + 8))();
    bVar6 = (bool)(*pcVar3)(uVar7);
    param_1->WasCancelled = bVar6;
    if (bVar6 != false) {
      return;
    }
  }
  this_00 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FDynamicMesh3::Copy(this_00,(this->OriginalMesh).Object,true,true,true,true);
  pTVar8 = MakeShared<UE::Geometry::FGroupTopology,1>(&local_b8);
  local_f0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_f8 = pTVar8->Object;
  if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ResultTopology;
  if (pTVar1 != (TSharedPtr<UE::Geometry::FGroupTopology,1> *)&local_f8) {
    pTVar1->Object = local_f8;
    local_f8 = (FGroupTopology *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ResultTopology).SharedReferenceCount,&local_f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (((this->OriginalTopology).Object == (FGroupTopology *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = (this->OriginalTopology).Object;
  if ((pTVar1->Object == (FGroupTopology *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FGroupTopology::operator=(pTVar1->Object,pFVar5);
  if ((pTVar1->Object == (FGroupTopology *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FGroupTopology::RetargetOnClonedMesh(pTVar1->Object,(FDynamicMesh3 *)this->_padding_);
  pTVar9 = MakeShared<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1>(&local_a8);
  local_e0.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  local_e8 = pTVar9->Object;
  if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->ChangedTids;
  if (pTVar2 != (TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> *)&local_e8) {
    pTVar2->Object = local_e8;
    local_e8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChangedTids).SharedReferenceCount,&local_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  if ((this->bShowingBaseMesh == false) &&
     ((param_1 == (FProgressCancel *)0x0 || (bVar6 = FProgressCancel::Cancelled(param_1), !bVar6))))
  {
    local_98.Mesh = (FDynamicMesh3 *)this->_padding_;
    local_98.VertexTolerance = this->VertexTolerance;
    local_98.StartPoint.ElementID = (this->StartPoint).ElementID;
    local_98.StartPoint.bIsVertex = (this->StartPoint).bIsVertex;
    local_98.StartPoint._5_3_ = *(undefined3 *)&(this->StartPoint).field_0x5;
    local_98.StartPoint.Tangent.field0_0x0._s_0.X = (this->StartPoint).Tangent.field0_0x0._s_0.X;
    local_98.Topology = pTVar1->Object;
    local_98.Mode = this->Mode;
    local_98.GroupID = this->CommonGroupID;
    local_98.StartPoint.Tangent.field0_0x0._s_0.Y = (this->StartPoint).Tangent.field0_0x0._s_0.Y;
    local_98.StartPoint.Tangent.field0_0x0._s_0.Z = (this->StartPoint).Tangent.field0_0x0._s_0.Z;
    local_98.GroupBoundaryIndex = this->CommonBoundaryIndex;
    local_d8.NewEidsOut = &this->Eids;
    local_98.StartPoint.EdgeTValue = (this->StartPoint).EdgeTValue;
    local_98.EndPoint.ElementID = (this->EndPoint).ElementID;
    local_98.EndPoint.bIsVertex = (this->EndPoint).bIsVertex;
    local_98.EndPoint._5_3_ = *(undefined3 *)&(this->EndPoint).field_0x5;
    local_98.EndPoint.Tangent.field0_0x0._s_0.X = (this->EndPoint).Tangent.field0_0x0._s_0.X;
    local_d8.ChangedTidsOut = pTVar2->Object;
    local_98.EndPoint.Tangent.field0_0x0._s_0.Y = (this->EndPoint).Tangent.field0_0x0._s_0.Y;
    local_98.EndPoint.Tangent.field0_0x0._s_0.Z = (this->EndPoint).Tangent.field0_0x0._s_0.Z;
    local_98.EndPoint.EdgeTValue = (this->EndPoint).EdgeTValue;
    local_98.bSimplifyAlongPath = true;
    local_d8.ProblemGroupEdgeIDsOut = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    bVar6 = FGroupEdgeInserter::InsertGroupEdge(local_res8,&local_98,&local_d8,param_1);
    this->bSucceeded = bVar6;
  }
  return;
}

// GetEdgeLocations @ 14c97f000

void __thiscall
UE::Geometry::FGroupEdgeInsertionOp::GetEdgeLocations
          (FGroupEdgeInsertionOp *this,
          TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  piVar1 = &param_1->ArrayMax;
  iVar15 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  puVar4 = &(this->Eids).Elements.field_0x10;
  uStack_c4 = 1;
  iVar5 = *(int *)&(this->Eids).Elements.field_0x28;
  local_d8 = &this->Eids;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->Eids).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      local_b0 = local_b0 + 0x20;
      iVar15 = iVar15 + 1;
      iStack_b4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c97f0dd;
      uVar17 = puVar19[lVar14 + 1];
    }
    uStack_c4 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_c4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iStack_b4 = local_res18 + -1 + local_b0;
    if (iVar5 < iStack_b4) {
      iStack_b4 = iVar5;
    }
  }
LAB_14c97f0dd:
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(this->Eids).Elements.field_0x8 - *(int *)&(this->Eids).Elements.field_0x34;
  uVar17 = *(uint *)&(this->Eids).Elements.field_0x28;
  uVar20 = uVar17 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_c4,iVar15);
  uStack_b8 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar17 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = local_d8;
  iStack_c8 = iVar15;
  local_c0 = puVar4;
  local_a0 = local_d8;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_d8;
  uVar6 = *(uint *)&(this->Eids).Elements.field_0x28;
  if (uVar17 != uVar6) {
    puVar18 = *(undefined1 **)&(this->Eids).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14c97f200;
      uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    uVar17 = local_res20 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_14c97f200:
  while( true ) {
    pTVar11 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar17) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar11 == pTVar10)
       ) break;
    lVar14 = this->_padding_;
    uVar20 = *(uint *)(*(longlong *)&pTVar11->Elements + (longlong)TStack_98.CurrentBitIndex * 0xc);
    uVar3 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x1c0) + (ulonglong)(uVar20 >> 9) * 8) +
             (ulonglong)(uVar20 & 0x1ff) * 0x10);
    uVar13 = (ulonglong)((uint)uVar3 & 0x1ff);
    lVar7 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + ((uVar3 & 0xffffffff) >> 9) * 8);
    puVar2 = (undefined8 *)(lVar7 + uVar13 * 0x18);
    local_108 = *puVar2;
    uStack_100 = puVar2[1];
    local_f8 = *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18);
    uVar13 = (ulonglong)((uint)(uVar3 >> 0x20) & 0x1ff);
    lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (uVar3 >> 0x29) * 8);
    pFVar8 = (param_1->AllocatorInstance).Data;
    puVar2 = (undefined8 *)(lVar14 + uVar13 * 0x18);
    uStack_f0 = *puVar2;
    uStack_e8 = puVar2[1];
    uStack_e0 = *(undefined8 *)(lVar14 + 0x10 + uVar13 * 0x18);
    if (((pFVar8 <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 < pFVar8 + (longlong)*piVar1 * 0x30)) &&
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
    iVar15 = param_1->ArrayNum;
    if (iVar15 == *piVar1) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&param_1->AllocatorInstance,piVar1);
    }
    lVar14 = (longlong)iVar15;
    param_1->ArrayNum = iVar15 + 1;
    pFVar8 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + lVar14 * 0x30) = local_108;
    *(undefined8 *)(pFVar8 + lVar14 * 0x30 + 8) = uStack_100;
    *(undefined8 *)(pFVar8 + lVar14 * 0x30 + 0x10) = local_f8;
    *(undefined8 *)(pFVar8 + lVar14 * 0x30 + 0x10 + 8) = uStack_f0;
    *(undefined8 *)(pFVar8 + lVar14 * 0x30 + 0x20) = uStack_e8;
    *(undefined8 *)(pFVar8 + lVar14 * 0x30 + 0x20 + 8) = uStack_e0;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return;
}

// SetTransform @ 14c985800

void __thiscall
UE::Geometry::FGroupEdgeInsertionOp::SetTransform
          (FGroupEdgeInsertionOp *this,TTransformSRT3<double> *param_1)

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

