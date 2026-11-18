// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// ~FGroupTopologyLaplacianDeformer @ 14cc22120

void __thiscall
FGroupTopologyLaplacianDeformer::~FGroupTopologyLaplacianDeformer
          (FGroupTopologyLaplacianDeformer *this)

{
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FGroupTopologyLaplacianDeformer__6B_;
  pFVar1 = this->AsyncMeshDeformTask;
  if (pFVar1 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar1->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar1,false);
      pFVar1 = this->AsyncMeshDeformTask;
      if (pFVar1 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
      }
    }
    else {
      UE::Geometry::FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask>::CancelAndDelete
                (this->AsyncMeshDeformTask);
    }
    this->AsyncMeshDeformTask = (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0;
  }
  pFVar2 = (this->SubsetIDBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SrcMeshConstraintBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UE::Geometry::FGroupTopologyDeformer::~FGroupTopologyDeformer((FGroupTopologyDeformer *)this);
  return;
}

// ExportDeformedPositions @ 14cc57260

void __thiscall
FGroupTopologyLaplacianDeformer::ExportDeformedPositions
          (FGroupTopologyLaplacianDeformer *this,FDynamicMesh3 *param_1)

{
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *pFVar1;
  bool bVar2;
  
  pFVar1 = this->AsyncMeshDeformTask;
  if (pFVar1 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar1->_padding_)->Counter != 0) {
      bVar2 = true;
      goto LAB_14cc5728d;
    }
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar1,false);
  }
  bVar2 = false;
LAB_14cc5728d:
  pFVar1 = this->AsyncMeshDeformTask;
  if ((pFVar1 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) && (!bVar2)) {
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar1);
    FConstrainedMeshDeformerTask::ExportResults
              ((FConstrainedMeshDeformerTask *)&pFVar1->_padding_,param_1);
  }
  return;
}

// InitBackgroundWorker @ 14cc5ff40

void __thiscall
FGroupTopologyLaplacianDeformer::InitBackgroundWorker
          (FGroupTopologyLaplacianDeformer *this,ELaplacianWeightScheme param_1)

{
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *this_00;
  ELaplacianWeightScheme local_res10 [2];
  
  if (this->AsyncMeshDeformTask == (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0)
  {
    local_res10[0] = param_1;
    this_00 = ::operator_new(0x398);
    if (this_00 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
      FAsyncTask<FConstrainedMeshDeformerTask>::
      FAsyncTask<FConstrainedMeshDeformerTask><enum_ELaplacianWeightScheme_const_&>
                ((FAsyncTask<FConstrainedMeshDeformerTask> *)this_00,local_res10);
      this_00->_padding_ =
           (longlong)
           &___7__FAsyncTaskExecuterWithAbort_VFConstrainedMeshDeformerTask___Geometry_UE__6B_;
      (this_00->TaskCounter).Object = (atomic<int> *)0x0;
      (this_00->TaskCounter).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      this_00->bAbort = false;
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
      this_00->_padding_ = (longlong)&this_00->bAbort;
      this->AsyncMeshDeformTask = this_00;
      return;
    }
    this->AsyncMeshDeformTask = (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0;
  }
  return;
}

// InitializeConstraintBuffer @ 14cc60630

void __thiscall
FGroupTopologyLaplacianDeformer::InitializeConstraintBuffer(FGroupTopologyLaplacianDeformer *this)

{
  int *piVar1;
  TArray<FDeformerVertexConstraintData,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  
  pTVar2 = &this->SrcMeshConstraintBuffer;
  piVar1 = &(this->SrcMeshConstraintBuffer).ArrayNum;
  iVar13 = *piVar1;
  uVar17 = *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24);
  if (iVar13 < (int)uVar17) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,uVar17 - iVar13,&pTVar2->AllocatorInstance,piVar1,
                        &(this->SrcMeshConstraintBuffer).ArrayMax);
    DefaultConstructItems<FDeformerVertexConstraintData,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x28,uVar17 - iVar13);
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((int)uVar17 < iVar13) {
      uVar18 = iVar13 - uVar17;
      if (((int)(uVar17 | uVar18) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar18 != 0) {
        pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28;
        iVar13 = (*piVar1 - uVar18) - uVar17;
        if (iVar13 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar18 * 0x28,(longlong)iVar13 * 0x28);
        }
        *piVar1 = *piVar1 - uVar18;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&pTVar2->AllocatorInstance,*piVar1,
                   &(this->SrcMeshConstraintBuffer).ArrayMax);
      }
    }
  }
  lVar5 = this->_padding_;
  uVar17 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
  uVar20 = 0;
  if ((uVar17 != 0) &&
     (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U))) {
    uVar20 = 1;
    uVar18 = 1;
    if ((int)uVar17 < 2) goto joined_r0x00014cc607c8;
    do {
      uVar15 = (ulonglong)((uint)uVar20 & 0x1ff);
      lVar6 = (*(undefined8 **)(lVar5 + 0x28))[uVar20 >> 9];
      if ((*(short *)(lVar6 + uVar15 * 2) != 0) && (*(short *)(lVar6 + uVar15 * 2) != -1)) break;
      uVar18 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar18;
    } while ((int)uVar18 < (int)uVar17);
  }
  uVar18 = (uint)uVar20;
joined_r0x00014cc607c8:
  do {
    uVar15 = uVar20;
    if (uVar18 == uVar17) {
      return;
    }
    while( true ) {
      uVar19 = (uint)uVar15;
      uVar18 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      lVar14 = (longlong)(int)uVar19;
      uVar18 = uVar19 + 1;
      uVar20 = (ulonglong)uVar18;
      lVar6 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + (uVar15 >> 9) * 8);
      uVar4 = *(undefined8 *)(lVar6 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
      puVar3 = (undefined8 *)(lVar6 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      *(undefined8 *)(pFVar7 + lVar14 * 0x28 + 0x18) = 0;
      pFVar7[lVar14 * 0x28 + 0x20] = (FScriptContainerElement)0x0;
      *(undefined8 *)(pFVar7 + lVar14 * 0x28) = uVar9;
      *(undefined8 *)(pFVar7 + lVar14 * 0x28 + 8) = uVar10;
      *(undefined8 *)(pFVar7 + lVar14 * 0x28 + 0x10) = uVar4;
      if ((int)uVar17 <= (int)uVar18) break;
      while( true ) {
        uVar16 = (ulonglong)((uint)uVar20 & 0x1ff);
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x28) + (uVar20 >> 9) * 8);
        if ((*(short *)(lVar6 + uVar16 * 2) != 0) &&
           (uVar15 = uVar20, *(short *)(lVar6 + uVar16 * 2) != -1)) break;
        uVar18 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar18;
        if ((int)uVar17 <= (int)uVar18) goto joined_r0x00014cc607c8;
      }
    }
  } while( true );
}

// IsTaskInFlight @ 14cc62640

bool __thiscall
FGroupTopologyLaplacianDeformer::IsTaskInFlight(FGroupTopologyLaplacianDeformer *this)

{
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *this_00;
  
  this_00 = this->AsyncMeshDeformTask;
  if (this_00 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
    if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) {
      return true;
    }
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
  }
  return false;
}

// SetActiveHandleCorners @ 14cc74ab0

void __thiscall
FGroupTopologyLaplacianDeformer::SetActiveHandleCorners
          (FGroupTopologyLaplacianDeformer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int local_res8 [2];
  int local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  void *local_38;
  undefined8 local_30;
  
  (**(code **)(this->_padding_ + 0x38))();
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8[0] =
         UE::Geometry::FGroupTopology::GetCornerVertexID
                   ((FGroupTopology *)this->_padding_,*(int *)pFVar3);
    if (-1 < local_res8[0]) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                 local_res10,(bool *)local_res8);
    }
    pFVar3 = pFVar3 + 4;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  local_38 = (void *)0x0;
  local_30 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  UE::Geometry::FGroupTopology::FindCornerNbrGroups
            ((FGroupTopology *)this->_padding_,param_1,&local_48);
  (**(code **)(this->_padding_ + 0x40))(this,&local_38,&local_48);
  UpdateSelection(this,(FDynamicMesh3 *)this->_padding_,&local_48,this->bLocalize);
  (**(code **)(this->_padding_ + 0x48))(this);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// SetActiveHandleEdges @ 14cc74be0

void __thiscall
FGroupTopologyLaplacianDeformer::SetActiveHandleEdges
          (FGroupTopologyLaplacianDeformer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res8 [2];
  int local_res10 [2];
  FScriptContainerElement *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  void *local_48;
  undefined8 local_40;
  
  (**(code **)(this->_padding_ + 0x38))();
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  local_res18 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    pFVar1 = local_res18;
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pTVar4 = UE::Geometry::FGroupTopology::GetGroupEdgeVertices
                       ((FGroupTopology *)this->_padding_,*(int *)pFVar6);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    iVar3 = pTVar4->ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar3 * 4;
    while( true ) {
      if (pTVar4->ArrayNum != iVar3) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar1) break;
      local_res8[0] = *(undefined4 *)pFVar5;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                 local_res10,(bool *)local_res8);
      pFVar5 = pFVar5 + 4;
    }
    pFVar6 = pFVar6 + 4;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  local_48 = (void *)0x0;
  local_40 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  UE::Geometry::FGroupTopology::FindEdgeNbrGroups
            ((FGroupTopology *)this->_padding_,param_1,&local_58);
  (**(code **)(this->_padding_ + 0x40))(this,&local_48,&local_58);
  UpdateSelection(this,(FDynamicMesh3 *)this->_padding_,&local_58,this->bLocalize);
  (**(code **)(this->_padding_ + 0x48))(this);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// SetActiveHandleFaces @ 14cc74d60

void __thiscall
FGroupTopologyLaplacianDeformer::SetActiveHandleFaces
          (FGroupTopologyLaplacianDeformer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  int local_e8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_e0;
  int local_cc;
  longlong *local_c8;
  int iStack_c0;
  uint uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x38))();
  if ((param_1->ArrayNum != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FaceGroupIDs.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DeformMeshPolygonsTool.cpp"
                         ,0x264,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = *(int *)(param_1->AllocatorInstance).Data;
  local_res20 = iVar7;
  UE::Geometry::FGroupTopology::CollectGroupVertices
            ((FGroupTopology *)this->_padding_,iVar7,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  plVar1 = &this->_padding_;
  UE::Geometry::FGroupTopology::CollectGroupBoundaryVertices
            ((FGroupTopology *)this->_padding_,iVar7,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)plVar1);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  plVar2 = &this->_padding_;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  iStack_c0 = 0;
  iVar7 = (int)this->_padding_;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = iStack_c0;
  if (iVar7 != 0) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = plVar2;
    }
    uVar12 = (uint)*plVar13;
    local_a8 = 0;
    iStack_c0 = 0;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14cc74ebd;
      uVar12 = *(uint *)((longlong)plVar13 + lVar8 * 4 + 4);
    }
    uStack_bc = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_bc * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_cc = (int)lVar8;
    iStack_ac = local_a8 + -1 + local_cc;
    if (iVar7 < iStack_ac) {
      iStack_ac = iVar7;
    }
  }
LAB_14cc74ebd:
  uVar12 = (uint)this->_padding_;
  uStack_a4 = local_4c;
  uVar14 = uVar12 & 0xffffffe0;
  iStack_a0 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uStack_b0 = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_90.CurrentBitIndex = iStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = plVar1;
  local_b8 = plVar2;
  local_98 = plVar1;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
  if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = (uint)this->_padding_;
  if (uVar12 != uVar4) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = plVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cc74fc0;
      uVar12 = *(uint *)((longlong)plVar13 + lVar8 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14cc74fc0:
  while( true ) {
    plVar13 = local_98;
    if ((int)local_98[1] - *(int *)((longlong)local_98 + 0x34) != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar12) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar2)) && (plVar13 == plVar1))
    break;
    UE::Geometry::FGroupTopology::FindVertexNbrGroups
              ((FGroupTopology *)this->_padding_,
               *(int *)(*plVar13 + (longlong)TStack_90.CurrentBitIndex * 0xc),&local_e0);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
  local_f8.ArrayNum = iVar7 + 1;
  *(int *)(local_f8.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res20;
  iVar7 = local_e0.ArrayNum;
  uVar9 = (ulonglong)local_e0.ArrayNum;
  pFVar3 = local_e0.AllocatorInstance.Data + uVar9 * 4;
  FVar11.Data = local_e0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar7) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar11.Data == pFVar3) break;
    local_e8[0] = *(int *)FVar11.Data;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_f8,local_e8);
    uVar9 = local_e0._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 4;
  }
  (**(code **)(this->_padding_ + 0x40))(this,local_res10,&local_f8);
  UpdateSelection(this,(FDynamicMesh3 *)this->_padding_,&local_f8,this->bLocalize);
  (**(code **)(this->_padding_ + 0x48))(this);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  return;
}

// UpdateAndLaunchdWorker @ 14cc83760

bool __thiscall
FGroupTopologyLaplacianDeformer::UpdateAndLaunchdWorker
          (FGroupTopologyLaplacianDeformer *this,ELaplacianWeightScheme param_1,FRichCurve *param_2)

{
  bool bVar1;
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *this_00;
  
  if (this->AsyncMeshDeformTask == (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0)
  {
    InitBackgroundWorker(this,param_1);
  }
  if ((this->bDeformerNeedsToRun != false) &&
     (((FThreadSafeCounter *)&this->AsyncMeshDeformTask->_padding_)->Counter == 0)) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this->AsyncMeshDeformTask,false);
    this_00 = this->AsyncMeshDeformTask;
    bVar1 = this->bTaskSubmeshIsDirty;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
    FConstrainedMeshDeformerTask::UpdateDeformer
              ((FConstrainedMeshDeformerTask *)&this_00->_padding_,param_1,
               (FDynamicMesh3 *)this->_padding_,&this->SrcMeshConstraintBuffer,&this->SubsetIDBuffer
               ,bVar1,param_2);
    this->bTaskSubmeshIsDirty = false;
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)this->AsyncMeshDeformTask,false,GThreadPool,Normal,None,-1,
               (wchar_t *)0x0);
    this->bDeformerNeedsToRun = false;
    this->bVertexPositionsNeedSync = true;
    return true;
  }
  return false;
}

// UpdateSelection @ 14cc86d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGroupTopologyLaplacianDeformer::UpdateSelection
          (FGroupTopologyLaplacianDeformer *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  short sVar3;
  code *pcVar4;
  longlong lVar5;
  FGroupTopologyLaplacianDeformer *pFVar6;
  FDynamicMesh3 *pFVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  undefined8 local_1d0;
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined1 local_1b0 [4];
  uint local_1ac;
  undefined4 local_1a8 [2];
  FGroupTopologyLaplacianDeformer *local_1a0;
  uint local_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_190;
  undefined4 local_188;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  FDynamicMesh3 *local_178;
  undefined4 local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  FScriptContainerElement *local_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  IndexIterator local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar22;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1a0 = this;
  local_178 = param_1;
  if (param_3) {
    local_1ac = param_2->ArrayNum;
    uVar14 = (ulonglong)(int)local_1ac;
    uVar22 = 0;
    uVar21 = 0;
    pFVar19 = (param_2->AllocatorInstance).Data;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_158 = pFVar19 + uVar14 * 4;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = -1;
    local_64 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    while( true ) {
      pFVar17 = local_158;
      if (param_2->ArrayNum != (int)uVar14) {
        local_1d8 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1d8);
      }
      pFVar6 = local_1a0;
      uVar20 = 0;
      if (pFVar19 == pFVar17) break;
      pTVar11 = UE::Geometry::FGroupTopology::GetGroupTriangles
                          ((FGroupTopology *)local_1a0->_padding_,*(int *)pFVar19);
      iVar18 = pTVar11->ArrayNum;
      pFVar17 = (pTVar11->AllocatorInstance).Data;
      if ((iVar18 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar20 = (local_98._8_4_ - local_64) + iVar18;
      if ((uint)(local_98._8_4_ - local_64) < uVar20) {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,uVar20);
        if (uVar20 < 4) {
          uVar20 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_170 = (undefined4)lVar16;
          uVar20 = 1 << ((byte)lVar16 & 0x1f);
        }
        if ((local_50 == 0) || ((int)local_50 < (int)uVar20)) {
          local_50 = uVar20;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
          }
          if (uVar20 != 0) {
            uVar25 = uVar20;
            if (uVar20 < 2) {
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                uVar25 = 0;
                goto LAB_14cc86f43;
              }
            }
            else {
LAB_14cc86f43:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar25,4);
            }
            if (0 < (int)uVar20) {
              uVar24 = (ulonglong)uVar20;
              uVar14 = uVar22;
              do {
                FVar15.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_58.Data;
                }
                uVar12 = (longlong)(int)uVar20 - 1U & uVar14;
                uVar14 = uVar14 + 1;
                *(undefined4 *)(FVar15.Data + uVar12 * 4) = 0xffffffff;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
          }
          if (local_50 != 0) {
            pTStack_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
            local_198 = 0;
            uStack_194 = 1;
            uStack_184 = 0;
            uStack_180 = 0;
            uVar14 = uVar22;
            if (local_70 != 0) {
              FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar23 = local_78;
              }
              uVar20 = *(uint *)FVar23;
              uVar24 = uVar22;
              while (uVar20 == 0) {
                uStack_180 = (int)uVar24 + 0x20;
                uVar24 = (ulonglong)uStack_180;
                iVar10 = (int)uVar14;
                local_198 = iVar10 + 1;
                uVar14 = (ulonglong)local_198;
                if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_198) goto LAB_14cc8705a;
                uVar20 = ((uint *)((longlong)FVar23 + 4))[iVar10];
              }
              uStack_194 = -uVar20 & uVar20;
              uVar14 = (ulonglong)uStack_194 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              local_16c = (int)lVar16;
              uStack_184 = (uStack_180 - 1) + local_16c;
              uVar14 = (ulonglong)uStack_184;
              if ((int)local_70 < (int)uStack_184) {
LAB_14cc8705a:
                uVar14 = (ulonglong)local_70;
                uStack_184 = local_70;
              }
            }
            local_188 = 0xffffffff;
            local_150 = (longlong *)local_98;
            local_148._padding_ = CONCAT44(uStack_194,local_198);
            local_148.CurrentBitIndex = uStack_184;
            local_148.UnvisitedBitMask = 0xffffffff;
            local_148._28_4_ = uStack_17c;
            local_148.BaseBitIndex = uStack_180;
            local_148.Array = pTStack_190;
            if ((int)uVar14 < (int)local_70) {
              do {
                iVar10 = (int)uVar14;
                uVar20 = local_50 - 1 & *(uint *)(*local_150 + (longlong)iVar10 * 0xc);
                lVar16 = *local_150 + (longlong)iVar10 * 0xc;
                *(uint *)(lVar16 + 8) = uVar20;
                FVar15.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_58.Data;
                }
                uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar20;
                *(undefined4 *)(lVar16 + 4) = *(undefined4 *)(FVar15.Data + uVar14 * 4);
                *(int *)(FVar15.Data + uVar14 * 4) = iVar10;
                local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
                uVar14 = (ulonglong)(uint)local_148.CurrentBitIndex;
              } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
            }
          }
        }
      }
      pFVar2 = pFVar17 + (longlong)iVar18 * 4;
      for (; pFVar17 != pFVar2; pFVar17 = pFVar17 + 4) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_168,
                   (bool *)pFVar17);
      }
      uVar14 = (ulonglong)local_1ac;
      pFVar19 = pFVar19 + 4;
    }
    pTVar11 = &local_1a0->SubsetIDBuffer;
    uVar25 = (local_98._8_4_ - local_64) * 3;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    piVar1 = &(local_1a0->SubsetIDBuffer).ArrayMax;
    (local_1a0->SubsetIDBuffer).ArrayNum = 0;
    if ((local_1a0->SubsetIDBuffer).ArrayMax < (int)uVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar25,&pTVar11->AllocatorInstance,0,piVar1);
    }
    uVar25 = local_70;
    uStack_11c = 1;
    uStack_10c = uVar20;
    if (local_70 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_78;
      }
      uVar26 = *(uint *)FVar23;
      uVar14 = uVar22;
      uVar20 = 0;
      uVar21 = 0;
      while (uVar26 == 0) {
        iVar18 = (int)uVar22;
        uVar20 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uVar20;
        uVar21 = iVar18 + 1;
        uVar22 = (ulonglong)uVar21;
        uStack_10c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_14cc87200;
        uVar26 = ((uint *)((longlong)FVar23 + 4))[iVar18];
      }
      uStack_11c = -uVar26 & uVar26;
      uVar22 = (ulonglong)uStack_11c * 2 + 1;
      lVar16 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_164 = (int)lVar16;
      uStack_10c = (uVar20 - 1) + local_164;
      if ((int)local_70 < (int)uStack_10c) {
        uStack_10c = local_70;
      }
    }
LAB_14cc87200:
    local_128 = (longlong *)local_98;
    uVar26 = local_70 & 0xffffffe0;
    uStack_104 = local_9c;
    local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_100 = local_98._8_4_ - local_64;
    uStack_110 = 0xffffffff;
    TStack_f0.CurrentBitIndex = uStack_10c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_11c,uVar21);
    iVar18 = (int)local_70 >> 5;
    TStack_f0._28_4_ = local_9c;
    TStack_f0.BaseBitIndex = uVar20;
    uStack_d0 = CONCAT44(uStack_fc,iStack_100);
    bVar13 = (byte)local_70;
    uStack_120 = uVar21;
    local_108 = uVar20;
    local_f8 = local_128;
    TStack_f0.Array = local_118;
    if (((int)local_70 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = local_178;
    if (uVar25 != local_70) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_78;
      }
      uVar21 = -1 << (bVar13 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar18 * 4);
      while (uVar21 == 0) {
        lVar16 = (longlong)iVar18;
        uVar26 = uVar26 + 0x20;
        iVar18 = iVar18 + 1;
        uVar25 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14cc87314;
        uVar21 = ((uint *)((longlong)FVar23 + 4))[lVar16];
      }
      uVar22 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_160 = (int)lVar16;
      uVar25 = (uVar26 - 1) + local_160;
      if ((int)local_70 < (int)uVar25) {
        uVar25 = local_70;
      }
    }
LAB_14cc87314:
    while( true ) {
      plVar8 = local_f8;
      if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
        local_1d7[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
      }
      if (((TStack_f0.CurrentBitIndex == uVar25) &&
          (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar8 == (longlong *)local_98)) break;
      uVar21 = *(uint *)(*plVar8 + (longlong)TStack_f0.CurrentBitIndex * 0xc);
      uVar22 = (ulonglong)(uVar21 & 0x1ff);
      lVar16 = *(longlong *)
                ((pFVar7->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8);
      pFVar19 = (pTVar11->AllocatorInstance).Data;
      local_1d0 = *(undefined8 *)(lVar16 + uVar22 * 0xc);
      local_1c8[0] = *(undefined4 *)(lVar16 + 8 + uVar22 * 0xc);
      if (((pFVar19 <= (FScriptContainerElement *)&local_1d0) &&
          ((FScriptContainerElement *)&local_1d0 < pFVar19 + (longlong)*piVar1 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar18 = (pFVar6->SubsetIDBuffer).ArrayNum;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar11->AllocatorInstance,piVar1);
      }
      (pFVar6->SubsetIDBuffer).ArrayNum = iVar18 + 1;
      *(undefined4 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar18 * 4) =
           (undefined4)local_1d0;
      pFVar19 = (pTVar11->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)((longlong)&local_1d0 + 4U)) &&
          ((FScriptContainerElement *)((longlong)&local_1d0 + 4U) < pFVar19 + (longlong)*piVar1 * 4)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar18 = (pFVar6->SubsetIDBuffer).ArrayNum;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar11->AllocatorInstance,piVar1);
      }
      (pFVar6->SubsetIDBuffer).ArrayNum = iVar18 + 1;
      *(undefined4 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_1d0._4_4_;
      pFVar19 = (pTVar11->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)local_1c8) &&
          ((FScriptContainerElement *)local_1c8 < pFVar19 + (longlong)*piVar1 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar18 = (pFVar6->SubsetIDBuffer).ArrayNum;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar11->AllocatorInstance,piVar1);
      }
      (pFVar6->SubsetIDBuffer).ArrayNum = iVar18 + 1;
      *(undefined4 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_1c8[0];
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  else {
    pTVar11 = &this->SubsetIDBuffer;
    uVar21 = (param_1->TriangleRefCounts).UsedCount * 3;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    piVar1 = &(this->SubsetIDBuffer).ArrayMax;
    (this->SubsetIDBuffer).ArrayNum = 0;
    if ((this->SubsetIDBuffer).ArrayMax < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar21,&pTVar11->AllocatorInstance,0,piVar1);
    }
    uVar21 = 0;
    iVar18 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    if (((iVar18 != 0) &&
        (pFVar19 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar19 - 1U))) && (uVar21 = 1, 1 < iVar18)) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar19 + (ulonglong)(uVar21 >> 9) * 8) +
                          (ulonglong)(uVar21 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < iVar18);
    }
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (local_c8,&param_1->TriangleRefCounts,iVar18,iVar18);
    if (uVar21 != local_c8[0]._8_4_) {
      do {
        lVar16 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8
                  );
        local_1c0 = *(undefined8 *)(lVar16 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
        local_1b8[0] = *(undefined4 *)(lVar16 + 8 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
        pFVar19 = (pTVar11->AllocatorInstance).Data;
        if (((pFVar19 <= (FScriptContainerElement *)&local_1c0) &&
            ((FScriptContainerElement *)&local_1c0 < pFVar19 + (longlong)*piVar1 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this->SubsetIDBuffer).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar11->AllocatorInstance,piVar1);
        }
        (this->SubsetIDBuffer).ArrayNum = iVar10 + 1;
        *(undefined4 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar10 * 4) =
             (undefined4)local_1c0;
        pFVar19 = (pTVar11->AllocatorInstance).Data;
        if (((pFVar19 <= (FScriptContainerElement *)((longlong)&local_1c0 + 4U)) &&
            ((FScriptContainerElement *)((longlong)&local_1c0 + 4U) <
             pFVar19 + (longlong)*piVar1 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this->SubsetIDBuffer).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar11->AllocatorInstance,piVar1);
        }
        (this->SubsetIDBuffer).ArrayNum = iVar10 + 1;
        *(undefined4 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_1c0._4_4_;
        pFVar19 = (pTVar11->AllocatorInstance).Data;
        if (((pFVar19 <= (FScriptContainerElement *)local_1b8) &&
            ((FScriptContainerElement *)local_1b8 < pFVar19 + (longlong)*piVar1 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this->SubsetIDBuffer).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar11->AllocatorInstance,piVar1);
        }
        uVar21 = uVar21 + 1;
        (this->SubsetIDBuffer).ArrayNum = iVar10 + 1;
        *(undefined4 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_1b8[0];
        if ((int)uVar21 < iVar18) {
          pFVar19 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          do {
            lVar16 = (ulonglong)(uVar21 >> 9) * 8;
            lVar5 = (ulonglong)(uVar21 & 0x1ff) * 2;
            if ((*(short *)(lVar5 + *(longlong *)(pFVar19 + lVar16)) != 0) &&
               (*(short *)(lVar5 + *(longlong *)(pFVar19 + lVar16)) != -1)) break;
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < iVar18);
        }
      } while (uVar21 != local_c8[0]._8_4_);
    }
  }
  pFVar6 = local_1a0;
  bVar9 = 1 < (int)local_1a0->_padding_;
  if (!bVar9) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_1a0->_padding_);
  }
  iVar18 = *(int *)((longlong)&pFVar6->_padding_ + 4);
  *(undefined4 *)&pFVar6->_padding_ = 0;
  if (iVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&pFVar6->_padding_,0,
               (int *)((longlong)&pFVar6->_padding_ + 4));
  }
  *(undefined4 *)&pFVar6->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 0;
  iVar18 = *(int *)((longlong)&pFVar6->_padding_ + 4);
  *(undefined4 *)&pFVar6->_padding_ = 0;
  if ((iVar18 < 0) || (0x80 < iVar18)) {
    *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&pFVar6->_padding_,0);
  }
  if (bVar9) {
    *(undefined4 *)&pFVar6->_padding_ = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pFVar6->_padding_);
  }
  pFVar17 = (pFVar6->SubsetIDBuffer).AllocatorInstance.Data;
  iVar18 = (pFVar6->SubsetIDBuffer).ArrayNum;
  pFVar19 = pFVar17 + (longlong)iVar18 * 4;
  while( true ) {
    if ((pFVar6->SubsetIDBuffer).ArrayNum != iVar18) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1b0);
    }
    if (pFVar17 == pFVar19) break;
    local_1a8[0] = *(undefined4 *)pFVar17;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pFVar6->_padding_,
               &local_15c,(bool *)local_1a8);
    pFVar17 = pFVar17 + 4;
  }
  return;
}

// UpdateSolution @ 14cc87fe0

void __thiscall
FGroupTopologyLaplacianDeformer::UpdateSolution
          (FGroupTopologyLaplacianDeformer *this,FDynamicMesh3 *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_*,int)> *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FDynamicMesh3 *pFVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong *plVar22;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_*,int)> *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_1a8 [8];
  uint local_1a0 [2];
  FVertexPositionCache local_198;
  uint local_178 [2];
  longlong *local_170;
  int iStack_168;
  uint uStack_164;
  longlong *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  FDynamicMesh3 *local_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_74;
  undefined4 local_54;
  
  puVar18 = (uint *)this->_padding_;
  iVar21 = 0;
  iVar5 = (int)this->_padding_;
  local_198.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Vertices.ArrayNum = 0;
  local_198.Vertices.ArrayMax = 0;
  local_198.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar2 = puVar18 + iVar5;
  local_198.Positions.ArrayNum = 0;
  local_198.Positions.ArrayMax = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  while( true ) {
    if ((int)this->_padding_ != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar18 == puVar2) break;
    local_1a0[0] = *puVar18;
    if (((local_198.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)local_1a0) &&
        ((FScriptContainerElement *)local_1a0 <
         local_198.Vertices.AllocatorInstance.Data + (longlong)local_198.Vertices.ArrayMax * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = local_198.Vertices.ArrayNum;
    if (local_198.Vertices.ArrayNum == local_198.Vertices.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)&local_198,&local_198.Vertices.ArrayMax);
    }
    local_198.Vertices.ArrayNum = iVar12 + 1;
    *(uint *)(local_198.Vertices.AllocatorInstance.Data + (longlong)iVar12 * 4) = local_1a0[0];
    lVar15 = *(longlong *)
              ((param_1->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_1a0[0] >> 9) * 8);
    puVar3 = (undefined8 *)(lVar15 + (ulonglong)(local_1a0[0] & 0x1ff) * 0x18);
    local_138 = *puVar3;
    uStack_130 = puVar3[1];
    local_128 = *(undefined8 *)(lVar15 + 0x10 + (ulonglong)(local_1a0[0] & 0x1ff) * 0x18);
    if (((local_198.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_138) &&
        ((FScriptContainerElement *)&local_138 <
         local_198.Positions.AllocatorInstance.Data + (longlong)local_198.Positions.ArrayMax * 0x18)
        ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = local_198.Positions.ArrayNum;
    if (local_198.Positions.ArrayNum == local_198.Positions.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_198.Positions.AllocatorInstance,&local_198.Positions.ArrayMax
                         );
    }
    puVar18 = puVar18 + 1;
    local_198.Positions.ArrayNum = iVar12 + 1;
    *(undefined8 *)(local_198.Positions.AllocatorInstance.Data + (longlong)iVar12 * 0x18) =
         local_138;
    *(undefined8 *)(local_198.Positions.AllocatorInstance.Data + (longlong)iVar12 * 0x18 + 8) =
         uStack_130;
    *(undefined8 *)(local_198.Positions.AllocatorInstance.Data + (longlong)iVar12 * 0x18 + 0x10) =
         local_128;
  }
  UE::Geometry::FVertexPositionCache::SetPositions((FVertexPositionCache *)&this->_padding_,param_1)
  ;
  iVar5 = (int)this->_padding_;
  plVar1 = &this->_padding_;
  local_170 = &this->_padding_;
  local_140 = 1;
  local_150 = 0;
  uStack_164 = 1;
  iStack_154 = local_150;
  if (iVar5 != 0) {
    plVar22 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar22 = plVar1;
    }
    uStack_164 = (uint)*plVar22;
    local_150 = 0;
    while (uStack_164 == 0) {
      lVar15 = (longlong)iVar21;
      local_150 = local_150 + 0x20;
      iVar21 = iVar21 + 1;
      uStack_164 = 1;
      iStack_154 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14cc8827d;
      uStack_164 = *(uint *)((longlong)plVar22 + lVar15 * 4 + 4);
    }
    uStack_164 = -uStack_164 & uStack_164;
    uVar4 = (ulonglong)uStack_164 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_120 = (int)lVar15;
    iStack_154 = local_150 + -1 + local_120;
    if (iVar5 < iStack_154) {
      iStack_154 = iVar5;
    }
  }
LAB_14cc8827d:
  uVar20 = (uint)this->_padding_;
  uStack_14c = local_74;
  iStack_148 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar19 = uVar20 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_164,iVar21);
  uStack_158 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_154;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar20 >> 5;
  TStack_100._28_4_ = local_74;
  TStack_100.BaseBitIndex = local_150;
  uStack_e0 = CONCAT44(uStack_144,iStack_148);
  iStack_168 = iVar21;
  local_160 = plVar1;
  local_108 = local_170;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar20 < 0) || (iVar5 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar10 = local_res10;
  uVar13 = (uint)this->_padding_;
  if (uVar20 != uVar13) {
    plVar22 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar22 = plVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)plVar22 + (longlong)iVar12 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar20 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14cc8837d;
      uVar20 = *(uint *)((longlong)plVar22 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_11c = (int)lVar15;
    uVar20 = local_11c + -1 + uVar19;
    if ((int)uVar13 < (int)uVar20) {
      uVar20 = uVar13;
    }
  }
LAB_14cc8837d:
  while( true ) {
    plVar22 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_100.CurrentBitIndex == uVar20) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
       (plVar22 == &this->_padding_)) break;
    uVar19 = *(uint *)(*plVar22 + (longlong)TStack_100.CurrentBitIndex * 0xc);
    uVar13 = 0;
    if ((int)uVar19 < (this->SrcMeshConstraintBuffer).ArrayNum) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->SrcMeshConstraintBuffer).AllocatorInstance.Data;
    lVar16 = (longlong)(int)uVar19;
    lVar15 = *(longlong *)
              ((pFVar10->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
    puVar3 = (undefined8 *)(lVar15 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
    uVar8 = *puVar3;
    uVar9 = puVar3[1];
    uVar14 = *(undefined8 *)(lVar15 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
    *(undefined8 *)(pFVar6 + lVar16 * 0x28 + 0x18) = 0;
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    *(undefined8 *)(pFVar6 + lVar16 * 0x28) = uVar8;
    *(undefined8 *)(pFVar6 + lVar16 * 0x28 + 8) = uVar9;
    pFVar6[lVar16 * 0x28 + 0x20] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar6 + lVar16 * 0x28 + 0x10) = uVar14;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  plVar1 = &this->_padding_;
  iStack_168 = 0;
  iVar5 = (int)this->_padding_;
  plVar22 = &this->_padding_;
  local_150 = 0;
  iStack_154 = 0;
  if (iVar5 != 0) {
    plVar17 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar17 = plVar1;
    }
    uVar20 = (uint)*plVar17;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      iStack_154 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_14cc8850f;
      uVar20 = *(uint *)((longlong)plVar17 + lVar15 * 4 + 4);
    }
    local_140 = (ulonglong)(-uVar20 & uVar20);
    uVar4 = local_140 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_118 = (int)lVar15;
    iStack_154 = local_150 + -1 + local_118;
    if (iVar5 < iStack_154) {
      iStack_154 = iVar5;
    }
  }
LAB_14cc8850f:
  uVar20 = (uint)this->_padding_;
  uStack_164 = (uint)local_140;
  uVar19 = uVar20 & 0xffffffe0;
  uStack_14c = local_54;
  iStack_148 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uStack_158 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_164,iStack_168);
  TStack_d0.CurrentBitIndex = iStack_154;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar20 >> 5;
  TStack_d0._28_4_ = local_54;
  TStack_d0.BaseBitIndex = local_150;
  uStack_b0 = CONCAT44(uStack_144,iStack_148);
  local_170 = plVar22;
  local_160 = plVar1;
  local_d8 = plVar22;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar20 < 0) || (iVar5 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar10 = local_res10;
  uVar13 = (uint)this->_padding_;
  if (uVar20 != uVar13) {
    plVar17 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar17 = plVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)plVar17 + (longlong)iVar21 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar21;
      uVar19 = uVar19 + 0x20;
      iVar21 = iVar21 + 1;
      uVar20 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14cc88620;
      uVar20 = *(uint *)((longlong)plVar17 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_114 = (int)lVar15;
    uVar20 = local_114 + -1 + uVar19;
    if ((int)uVar13 < (int)uVar20) {
      uVar20 = uVar13;
    }
  }
LAB_14cc88620:
  while( true ) {
    plVar17 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      local_1a8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (((TStack_d0.CurrentBitIndex == uVar20) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) && (plVar17 == plVar22)
       ) {
      UE::Geometry::FVertexPositionCache::SetPositions(&local_198,pFVar10);
      this->bDeformerNeedsToRun = true;
      if (local_198.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Positions.AllocatorInstance.Data);
      }
      if (local_198.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Vertices.AllocatorInstance.Data);
      }
      return;
    }
    local_110 = pFVar10;
    uVar19 = *(uint *)(*plVar17 + (longlong)TStack_d0.CurrentBitIndex * 0xc);
    lVar15 = (longlong)(int)uVar19;
    local_178[0] = uVar19;
    UE::Core::Private::Function::CheckCallable(*(void **)local_res18);
    pcVar7 = *(code **)local_res18;
    plVar17 = *(longlong **)&local_res18->field_0x28;
    if (*(longlong **)&local_res18->field_0x28 == (longlong *)0x0) {
      plVar17 = (longlong *)&local_res18->field_0x10;
    }
    uVar14 = (**(code **)(*plVar17 + 8))();
    (*pcVar7)(&local_a8,uVar14,&local_110,local_178);
    uVar13 = 0;
    if ((int)uVar19 < (this->SrcMeshConstraintBuffer).ArrayNum) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) break;
    pFVar6 = (this->SrcMeshConstraintBuffer).AllocatorInstance.Data;
    *(undefined8 *)(pFVar6 + lVar15 * 0x28) = local_a8;
    *(undefined8 *)(pFVar6 + lVar15 * 0x28 + 8) = uStack_a0;
    *(undefined8 *)(pFVar6 + lVar15 * 0x28 + 0x10) = local_98;
    *(double *)(pFVar6 + lVar15 * 0x28 + 0x18) = this->HandleWeights;
    pFVar6[lVar15 * 0x28 + 0x20] = (FScriptContainerElement)this->bPostfixHandles;
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

