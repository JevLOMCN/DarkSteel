// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 22

// QueueOneRing @ 14c7586f0

void __thiscall UE::Geometry::FQueueRemesher::QueueOneRing(FQueueRemesher *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [2];
  BaseValueIterator local_48;
  
  if ((*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModifiedEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\QueueRemesher.h"
                         ,0x79,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x8;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_48,(FSmallListSet *)(lVar1 + 0xb8),param_1,false);
    while (((local_48.ListSet != (FSmallListSet *)(lVar1 + 0xb8) || (local_48.ListIndex != param_1))
           || ((local_48.iCur != -1 || (local_48.cur_ptr != -1))))) {
      local_res10[0] = local_48.cur_value;
      if ((*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->ModifiedEdges,
                 local_res8,(bool *)local_res10);
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
    }
  }
  return;
}

// ResetQueue @ 14c75ea60

void __thiscall UE::Geometry::FQueueRemesher::ResetQueue(FQueueRemesher *this)

{
  void *pvVar1;
  
  if (*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) != -1) {
    (this->ModifiedEdges).field0_0x0.TypedValue.HashSize = 0;
    pvVar1 = *(void **)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->ModifiedEdges);
    *(undefined8 *)&(this->ModifiedEdges).field0_0x0 = 0;
    *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x34) = 0;
    *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x30) = 0xffffffff;
    *(undefined8 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x40) = 0;
    (this->ModifiedEdges).field0_0x0.TypedValue.HashSize = 0;
  }
  return;
}

// ~FQueueRemesher @ 14c7b7630

void __thiscall UE::Geometry::FQueueRemesher::~FQueueRemesher(FQueueRemesher *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  longlong *plVar5;
  
  pFVar1 = (this->EdgeShouldBeQueuedBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->PostEdgeSplitFunction != 0) {
    plVar2 = *(longlong **)&(this->PostEdgeSplitFunction).field_0x28;
    plVar5 = (longlong *)&(this->PostEdgeSplitFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  (this->EdgeBuffer).HashSize = 0;
  FVar3 = (this->EdgeBuffer).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EdgeBuffer).Elements);
  if (*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) != -1) {
    (this->ModifiedEdges).field0_0x0.TypedValue.HashSize = 0;
    pvVar4 = *(void **)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x40);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->ModifiedEdges);
  }
  FRemesher::~FRemesher((FRemesher *)this);
  return;
}

// BasicRemeshPass @ 14c7e4e00

void __thiscall UE::Geometry::FQueueRemesher::BasicRemeshPass(FQueueRemesher *this)

{
  undefined1 uVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStackX_8 [8];
  uint auStack_48 [2];
  FQueueRemesher *pFStack_40;
  code *pcStack_38;
  uint *puStack_30;
  
  if ((*(longlong *)(*(longlong *)&this->field_0x8 + 0x208) != 0) && (this->field_0xc8 == '\0')) {
    `UE::Geometry::FQueueRemesher::FastestRemesh'::__l5::<lambda_1>::operator()(auStackX_8);
  }
  ResetQueue(this);
  dVar2 = __real_3f847ae147ae147b;
  iVar6 = 0;
  if (0 < this->MaxFastSplitIterations) {
    do {
      cVar3 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar3 != '\0') {
        return;
      }
      iVar5 = FastSplitIteration(this);
      *(int *)&this->field_0x214 = iVar5;
    } while ((dVar2 <= (double)iVar5 / (double)*(int *)(*(longlong *)&this->field_0x8 + 0x200)) &&
            (iVar6 = iVar6 + 1, iVar6 < this->MaxFastSplitIterations));
  }
  ResetQueue(this);
  uVar7 = 0;
  uVar1 = this->field_0x128;
  if (0 < this->MaxRemeshIterations + -1) {
    while (cVar3 = (**(code **)(*(longlong *)this + 8))(this), cVar3 == '\0') {
      pcStack_38 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FQueueRemesher::FastestRemesh'::__l15::<lambda_2>,bool>
                   ::Call;
      uVar4 = uVar1;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      this->field_0x128 = uVar4;
      puStack_30 = auStack_48;
      auStack_48[0] = uVar7;
      pFStack_40 = this;
      RemeshIteration(this,(TFunctionRef<bool___cdecl(void)> *)&pcStack_38);
      if (((10 < (int)auStack_48[0]) &&
          ((double)*(int *)&pFStack_40->field_0x214 /
           (double)*(int *)(*(longlong *)&pFStack_40->field_0x8 + 0x200) <
           pFStack_40->MinActiveEdgeFraction)) ||
         (uVar7 = uVar7 + 1, this->MaxRemeshIterations + -1 <= (int)uVar7)) break;
    }
  }
  cVar3 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar3 == '\0') {
    puStack_30 = (uint *)auStackX_8;
    this->field_0x128 = uVar1;
    pcStack_38 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FQueueRemesher::FastestRemesh'::__l2::<lambda_3>,bool>
                 ::Call;
    RemeshIteration(this,(TFunctionRef<bool___cdecl(void)> *)&pcStack_38);
  }
  return;
}

// OnEdgeSplit @ 14c81e760

void __thiscall
UE::Geometry::FQueueRemesher::OnEdgeSplit
          (FQueueRemesher *this,int param_1,int param_2,int param_3,FEdgeSplitInfo *param_4)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int local_res8 [2];
  int local_28 [2];
  int local_20 [2];
  int local_18 [4];
  
  if (*(void **)&this->PostEdgeSplitFunction != (void *)0x0) {
    local_res8[0] = param_4->NewVertex;
    local_28[0] = param_3;
    local_20[0] = param_2;
    local_18[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&this->PostEdgeSplitFunction);
    pcVar1 = *(code **)&this->PostEdgeSplitFunction;
    plVar2 = *(longlong **)&(this->PostEdgeSplitFunction).field_0x28;
    plVar4 = (longlong *)&(this->PostEdgeSplitFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,local_18,local_20,local_28,local_res8);
  }
  return;
}

// operator() @ 14c8a5ef0

void __thiscall
`UE::Geometry::FQueueRemesher::TrackedMoveVerticesParallel'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int local_res8 [2];
  char local_res10 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (-1 < param_1) {
    lVar3 = *(longlong *)(*(longlong *)this + 8);
    if (param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) {
      uVar9 = (ulonglong)(param_1 & 0x1ff);
      lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar2) + uVar9 * 2) - 1U)
          < 0xfffe) {
        local_res10[0] = '\0';
        local_res8[0] = param_1;
        UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
        pcVar4 = *(code **)((longlong)this + 0x10);
        plVar8 = (longlong *)((longlong)this + 0x20);
        if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
          plVar8 = *(longlong **)((longlong)this + 0x38);
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        (*pcVar4)(&local_48,uVar7,local_res8,local_res10);
        if (local_res10[0] != '\0') {
          lVar3 = *(longlong *)this;
          uVar6 = 0;
          if (param_1 < *(int *)(lVar3 + 0x248)) {
            uVar6 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar3 + 0x240)) = 1;
          lVar3 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x230) + lVar2);
          puVar1 = (undefined8 *)(lVar3 + uVar9 * 0x18);
          *puVar1 = local_48;
          puVar1[1] = uStack_40;
          *(undefined8 *)(lVar3 + 0x10 + uVar9 * 0x18) = local_38;
        }
      }
    }
  }
  return;
}

// operator() @ 14c8a8380

TVector<double> * __thiscall
`UE::Geometry::FQueueRemesher::TrackedFullProjectionPass'::__l5::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,bool *param_2)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int local_res18 [2];
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  *param_2 = false;
  lVar2 = *(longlong *)
           (((*(FMeshRefinerBase **)this)->Mesh->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  local_48 = *pdVar1;
  dStack_40 = pdVar1[1];
  local_38 = *(double *)(lVar2 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  bVar4 = UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained
                    (*(FMeshRefinerBase **)this,param_1);
  if (bVar4) {
LAB_14c8a84d8:
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_48;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_40;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_38;
  }
  else {
    lVar2 = *(longlong *)this;
    if (*(void **)(lVar2 + 0xe0) != (void *)0x0) {
      local_res18[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar2 + 0xe0));
      pcVar3 = *(code **)(lVar2 + 0xe0);
      plVar7 = (longlong *)(lVar2 + 0xf0);
      if (*(longlong **)(lVar2 + 0x108) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x108);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      uVar6 = (*pcVar3)(uVar5,local_res18);
      if ((uVar6 & 2) != 0) goto LAB_14c8a84d8;
    }
    (**(code **)(**(longlong **)(*(longlong *)this + 0xd0) + 8))
              (*(longlong **)(*(longlong *)this + 0xd0),&local_30,&local_48,param_1);
    uVar8 = SUB84(local_48 - local_30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar9 = (uint)((ulonglong)(local_48 - local_30) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
          (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a) ||
        (uVar8 = SUB84(dStack_40 - dStack_28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar9 = (uint)((ulonglong)(dStack_40 - dStack_28) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
        (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a)) ||
       (uVar8 = SUB84(local_38 - local_20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)(local_38 - local_20) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
       (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a)) {
      *param_2 = true;
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_30;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_28;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_20;
    }
    else {
      *param_2 = false;
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_30;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_28;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_20;
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14c8a8510

TVector<double> * __thiscall
`UE::Geometry::FQueueRemesher::TrackedFullSmoothPass_Buffer'::__l5::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,bool *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong local_38 [2];
  undefined1 local_28 [24];
  undefined8 local_10;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  plVar2 = *(longlong **)this;
  pcVar3 = *(code **)(*plVar1 + 0x90);
  local_38[0] = *plVar2;
  local_10 = 0;
  if (local_38[0] != 0) {
    plVar4 = plVar2 + 2;
    if ((longlong *)plVar2[5] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[5];
    }
    (**(code **)*plVar4)(plVar4,local_28);
  }
  (*pcVar3)(plVar1,__return_storage_ptr__,param_1,local_38,param_2);
  return __return_storage_ptr__;
}

// operator() @ 14c8ac7e0

void __thiscall
`UE::Geometry::FQueueRemesher::FastSplitIteration'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3,int param_4)

{
  FSmallListSet *pFVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_res8 [2];
  BaseValueIterator local_60 [2];
  
  iVar10 = param_4;
  pFVar1 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
           (ulonglong)((uint)param_4 >> 9) * 8);
  pdVar2 = (double *)(lVar4 + (ulonglong)(param_4 & 0x1ff) * 0x18);
  dVar8 = *pdVar2;
  dVar9 = pdVar2[1];
  dVar3 = *(double *)(lVar4 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(local_60,pFVar1,param_4,false);
  while ((((local_60[0].ListSet != pFVar1 || (local_60[0].ListIndex != iVar10)) ||
          (local_60[0].iCur != -1)) || (local_60[0].cur_ptr != -1))) {
    lVar4 = *(longlong *)this;
    uVar12 = (uint)local_60[0]._32_8_;
    uVar5 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 8) + 0x1c0) +
               ((local_60[0]._32_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0x10);
    if ((int)uVar5 == iVar10) {
      uVar5 = uVar5 >> 0x20;
    }
    uVar13 = (ulonglong)((uint)uVar5 & 0x1ff);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 8) + 0x10) + (ulonglong)((uint)uVar5 >> 9) * 8);
    pdVar2 = (double *)(lVar6 + uVar13 * 0x18);
    dVar15 = dVar8 - *pdVar2;
    dVar14 = dVar3 - *(double *)(lVar6 + 0x10 + uVar13 * 0x18);
    dVar16 = dVar9 - pdVar2[1];
    dVar14 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
    if (**(double **)((longlong)this + 8) <= dVar14 && dVar14 != **(double **)((longlong)this + 8))
    {
      param_4 = uVar12;
      if (*(int *)(lVar4 + 0x27c) == -1) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ModifiedEdges",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\QueueRemesher.h"
                            ,0x85,L"");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(lVar4 + 0x27c) == -1) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             );
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar4 + 0x270),local_res8
                 ,(bool *)&param_4);
    }
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(local_60);
  }
  return;
}

// operator() @ 14c8acf60

void __thiscall
`UE::Geometry::FQueueRemesher::TrackedFullProjectionPass'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  FQueueRemesher *this_00;
  double dVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  FSmallListSet *pFVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  int local_res8 [2];
  double local_98;
  double dStack_90;
  double local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  BaseValueIterator local_68;
  
  bVar6 = UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained
                    (*(FMeshRefinerBase **)this,param_1);
  if (!bVar6) {
    lVar3 = *(longlong *)this;
    if (*(void **)(lVar3 + 0xe0) != (void *)0x0) {
      local_res8[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0xe0));
      pcVar4 = *(code **)(lVar3 + 0xe0);
      plVar9 = (longlong *)(lVar3 + 0xf0);
      if (*(longlong **)(lVar3 + 0x108) != (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar3 + 0x108);
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      uVar8 = (*pcVar4)(uVar7,local_res8);
      if ((uVar8 & 2) != 0) {
        return;
      }
    }
    uVar8 = (ulonglong)(param_1 & 0x1ff);
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
             (ulonglong)((uint)param_1 >> 9) * 8);
    puVar1 = (undefined4 *)(lVar3 + uVar8 * 0x18);
    local_80 = *puVar1;
    uStack_7c = puVar1[1];
    uStack_78 = puVar1[2];
    uStack_74 = puVar1[3];
    local_70 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
    plVar9 = *(longlong **)(*(longlong *)this + 0xd0);
    (**(code **)(*plVar9 + 8))(plVar9,&local_98,&local_80);
    dVar5 = (double)CONCAT44(uStack_7c,local_80) - local_98;
    uVar12 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar13 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar13,uVar12) &&
          (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee2308c3a) ||
        (dVar5 = (double)CONCAT44(uStack_74,uStack_78) - dStack_90,
        uVar12 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee2308c3a <= (double)CONCAT44(uVar13,uVar12) &&
        (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee2308c3a)) ||
       (uVar12 = SUB84(local_70 - local_88,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar13 = (uint)((ulonglong)(local_70 - local_88) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3e45798ee2308c3a <= (double)CONCAT44(uVar13,uVar12) &&
       (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee2308c3a)) {
      lVar3 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar3 + 0x248)) {
        uVar12 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar3 + 0x240)) = 1;
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)this + 0x230) + (ulonglong)((uint)param_1 >> 9) * 8);
      pdVar2 = (double *)(lVar3 + uVar8 * 0x18);
      *pdVar2 = local_98;
      pdVar2[1] = dStack_90;
      *(double *)(lVar3 + 0x10 + uVar8 * 0x18) = local_88;
      pFVar11 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_68,pFVar11,param_1,false);
      while (((local_68.ListSet != pFVar11 || (local_68.ListIndex != param_1)) ||
             ((local_68.iCur != -1 || (local_68.cur_ptr != -1))))) {
        this_00 = *(FQueueRemesher **)this;
        uVar8 = *(ulonglong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)&this_00->field_0x8 + 0x1c0) +
                   ((local_68._32_8_ & 0xffffffff) >> 9) * 8) +
                 (ulonglong)(local_68.cur_value & 0x1ff) * 0x10);
        if ((int)uVar8 == param_1) {
          uVar8 = uVar8 >> 0x20;
        }
        uVar10 = (ulonglong)((uint)uVar8 & 0x1ff);
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)&this_00->field_0x8 + 0x10) +
                 (ulonglong)((uint)uVar8 >> 9) * 8);
        pdVar2 = (double *)(lVar3 + uVar10 * 0x18);
        dVar14 = *(double *)(lVar3 + 0x10 + uVar10 * 0x18) - local_88;
        dVar15 = pdVar2[1] - dStack_90;
        dVar5 = *pdVar2 - local_98;
        dVar5 = SQRT(dVar15 * dVar15 + dVar5 * dVar5 + dVar14 * dVar14);
        if ((dVar5 < *(double *)&this_00->field_0x158) ||
           (*(double *)&this_00->field_0x160 <= dVar5 && dVar5 != *(double *)&this_00->field_0x160))
        {
          UE::Geometry::FQueueRemesher::QueueEdge(this_00,local_68.cur_value);
        }
        UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_68);
      }
    }
  }
  return;
}

// operator() @ 14c8ad230

void __thiscall
`UE::Geometry::FQueueRemesher::TrackedFullSmoothPass_Buffer'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FQueueRemesher *this_00;
  bool bVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  FSmallListSet *pFVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char local_res10 [8];
  double local_98;
  double dStack_90;
  double local_88;
  BaseValueIterator local_80;
  longlong local_58 [2];
  undefined1 local_48 [24];
  undefined8 local_30;
  
  plVar2 = *(longlong **)this;
  lVar3 = plVar2[1];
  if ((-1 < param_1) && (param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar11 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           uVar11 * 2) - 1U) < 0xfffe) {
      plVar4 = *(longlong **)((longlong)this + 8);
      local_res10[0] = '\0';
      pcVar5 = *(code **)(*plVar2 + 0x90);
      local_58[0] = *plVar4;
      local_30 = 0;
      if (local_58[0] != 0) {
        plVar7 = plVar4 + 2;
        if ((longlong *)plVar4[5] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar4[5];
        }
        (**(code **)*plVar7)(plVar7,local_48);
      }
      (*pcVar5)(plVar2,&local_98,param_1,local_58,local_res10);
      if (local_res10[0] != '\0') {
        lVar3 = *(longlong *)this;
        uVar9 = 0;
        if (param_1 < *(int *)(lVar3 + 0x248)) {
          uVar9 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar3 + 0x240)) = 1;
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)this + 0x230) + (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar1 = (double *)(lVar3 + uVar11 * 0x18);
        *pdVar1 = local_98;
        pdVar1[1] = dStack_90;
        *(double *)(lVar3 + 0x10 + uVar11 * 0x18) = local_88;
        pFVar10 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
        UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                  (&local_80,pFVar10,param_1,false);
        while ((((local_80.ListSet != pFVar10 || (local_80.ListIndex != param_1)) ||
                (local_80.iCur != -1)) || (local_80.cur_ptr != -1))) {
          this_00 = *(FQueueRemesher **)this;
          uVar11 = *(ulonglong *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)&this_00->field_0x8 + 0x1c0) +
                      ((local_80._32_8_ & 0xffffffff) >> 9) * 8) +
                    (ulonglong)(local_80.cur_value & 0x1ff) * 0x10);
          if ((int)uVar11 == param_1) {
            uVar11 = uVar11 >> 0x20;
          }
          uVar8 = (ulonglong)((uint)uVar11 & 0x1ff);
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)&this_00->field_0x8 + 0x10) +
                   (ulonglong)((uint)uVar11 >> 9) * 8);
          pdVar1 = (double *)(lVar3 + uVar8 * 0x18);
          dVar13 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18) - local_88;
          dVar14 = pdVar1[1] - dStack_90;
          dVar12 = *pdVar1 - local_98;
          dVar13 = SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
          if ((dVar13 < *(double *)&this_00->field_0x158) ||
             (*(double *)&this_00->field_0x160 <= dVar13 &&
              dVar13 != *(double *)&this_00->field_0x160)) {
            UE::Geometry::FQueueRemesher::QueueEdge(this_00,local_80.cur_value);
          }
          UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_80);
        }
      }
    }
  }
  return;
}

// operator() @ 14c8ad4d0

void __thiscall
`UE::Geometry::FQueueRemesher::TrackedMoveVerticesParallel'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (-1 < param_1) {
    lVar2 = *(longlong *)this;
    lVar11 = (longlong)param_1;
    lVar3 = *(longlong *)(lVar2 + 8);
    if (param_1 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4)) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x1d8) + (ulonglong)((uint)param_1 >> 9) * 8)
                             + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar4 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8)
                 + (ulonglong)(param_1 & 0x1ff) * 0x10);
        uVar12 = (uint)uVar4;
        uVar10 = 0;
        if ((int)uVar12 < *(int *)(lVar2 + 0x248)) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar10 = (uint)(uVar4 >> 0x20);
        if (*(char *)((longlong)(int)uVar12 + *(longlong *)(lVar2 + 0x240)) != '\0') {
          lVar2 = *(longlong *)this;
          uVar9 = (ulonglong)(uVar12 & 0x1ff);
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x230) + ((uVar4 & 0xffffffff) >> 9) * 8);
          lVar5 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x10) + (uVar4 >> 0x29) * 8);
          pdVar1 = (double *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
          dVar15 = *pdVar1 - *(double *)(lVar3 + uVar9 * 0x18);
          dVar14 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18) -
                   *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
          dVar13 = pdVar1[1] - *(double *)(lVar3 + 8 + uVar9 * 0x18);
          dVar13 = dVar15 * dVar15 + dVar13 * dVar13 + dVar14 * dVar14;
          if ((dVar13 < *(double *)(lVar2 + 0x158) * *(double *)(lVar2 + 0x158)) ||
             (*(double *)(lVar2 + 0x160) * *(double *)(lVar2 + 0x160) < dVar13)) {
            uVar8 = 0;
            if (param_1 < *(int *)(lVar2 + 0x370)) {
              uVar8 = (uint)~param_1 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined1 *)(lVar11 + *(longlong *)(lVar2 + 0x368)) = 1;
          }
        }
        lVar2 = *(longlong *)this;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(lVar2 + 0x248)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)((longlong)(int)uVar10 + *(longlong *)(lVar2 + 0x240)) != '\0') {
          lVar2 = *(longlong *)this;
          uVar8 = 0;
          if (param_1 < *(int *)(lVar2 + 0x370)) {
            uVar8 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(char *)(lVar11 + *(longlong *)(lVar2 + 0x368)) == '\0') {
            lVar2 = *(longlong *)this;
            uVar9 = (ulonglong)(uVar10 & 0x1ff);
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x230) + (uVar4 >> 0x29) * 8);
            lVar5 = *(longlong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x10) +
                     ((uVar4 & 0xffffffff) >> 9) * 8);
            pdVar1 = (double *)(lVar5 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
            dVar13 = *pdVar1 - *(double *)(lVar3 + uVar9 * 0x18);
            dVar14 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18) -
                     *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
            dVar15 = pdVar1[1] - *(double *)(lVar3 + 8 + uVar9 * 0x18);
            dVar13 = dVar15 * dVar15 + dVar13 * dVar13 + dVar14 * dVar14;
            if ((dVar13 < *(double *)(lVar2 + 0x158) * *(double *)(lVar2 + 0x158)) ||
               (*(double *)(lVar2 + 0x160) * *(double *)(lVar2 + 0x160) < dVar13)) {
              uVar10 = 0;
              if (param_1 < *(int *)(lVar2 + 0x370)) {
                uVar10 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(undefined1 *)(lVar11 + *(longlong *)(lVar2 + 0x368)) = 1;
            }
          }
        }
      }
    }
  }
  return;
}

// FastSplitIteration @ 14c8e24d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __thiscall UE::Geometry::FQueueRemesher::FastSplitIteration(FQueueRemesher *this)

{
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this_00;
  undefined1 *puVar1;
  ETargetProjectionMode EVar2;
  short sVar3;
  uint uVar4;
  ESmoothTypes EVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  char cVar14;
  bool bVar15;
  int iVar16;
  ulonglong uVar17;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [4];
  uint local_144;
  undefined1 local_140 [8];
  undefined8 local_138;
  uint uStack_130;
  uint uStack_12c;
  int *local_128;
  uint uStack_120;
  uint uStack_11c;
  double local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_e8;
  undefined4 local_c4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  undefined8 uStack_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  int local_98;
  undefined4 uStack_94;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_90;
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_50;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) == 0) {
    return 0;
  }
  if ((*(longlong *)(*(longlong *)&this->field_0x8 + 0x208) != 0) && (this->field_0xc8 == '\0')) {
    local_148[0] = 0;
    `UE::Geometry::FQueueRemesher::FastSplitIteration'::__l8::<lambda_1>::operator()(local_148);
  }
  uVar9 = *(undefined4 *)&this->field_0x158;
  uVar10 = *(undefined4 *)&this->field_0x15c;
  uVar11 = *(undefined4 *)&this->field_0x160;
  uVar12 = *(undefined4 *)&this->field_0x164;
  (this->SavedState).bEnableFlips = (bool)this->field_0x140;
  (this->SavedState).bEnableCollapses = (bool)this->field_0x141;
  (this->SavedState).bEnableSplits = (bool)this->field_0x142;
  (this->SavedState).bEnableSmoothing = (bool)this->field_0x143;
  (this->SavedState).SmoothSpeedT = *(double *)&this->field_0x168;
  (this->SavedState).SmoothType = *(ESmoothTypes *)&this->field_0x170;
  (this->SavedState).ProjectionMode = this->field_0x128;
  lVar19 = *(longlong *)this;
  *(undefined4 *)&(this->SavedState).MinEdgeLength = uVar9;
  *(undefined4 *)((longlong)&(this->SavedState).MinEdgeLength + 4) = uVar10;
  *(undefined4 *)&(this->SavedState).MaxEdgeLength = uVar11;
  *(undefined4 *)((longlong)&(this->SavedState).MaxEdgeLength + 4) = uVar12;
  this->field_0x143 = 0;
  *(undefined2 *)&this->field_0x140 = 0;
  this->field_0x128 = 0;
  (**(code **)(lVar19 + 200))(this);
  (**(code **)(*(longlong *)this + 0xd8))(this);
  local_b8 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&this->PostEdgeSplitFunction
  ;
  lVar19 = *(longlong *)&(this->PostEdgeSplitFunction).field_0x8;
  uVar24 = 0;
  local_a8 = *(TBitArray<FDefaultBitArrayAllocator> **)&(this->PostEdgeSplitFunction).field_0x10;
  ppTStack_90 = *(TBitArray<FDefaultBitArrayAllocator> ***)&(this->PostEdgeSplitFunction).field_0x28
  ;
  local_118 = *(double *)&this->field_0x160 * *(double *)&this->field_0x160;
  *(code **)&this->PostEdgeSplitFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FQueueRemesher::FastSplitIteration'::__l2::<lambda_2>,void,int,int,int,int>
       ::Call;
  *(longlong *)&(this->PostEdgeSplitFunction).field_0x8 = uStack_b0;
  *(undefined4 *)&(this->PostEdgeSplitFunction).field_0x10 = 0x528cfe68;
  *(undefined4 *)&(this->PostEdgeSplitFunction).field_0x14 = 1;
  *(FQueueRemesher **)&(this->PostEdgeSplitFunction).field_0x18 = this;
  *(double **)&(this->PostEdgeSplitFunction).field_0x20 = &local_118;
  *(undefined4 *)&(this->PostEdgeSplitFunction).field_0x28 = 0;
  *(undefined4 *)&(this->PostEdgeSplitFunction).field_0x2c = 0;
  uStack_a0 = *(uint *)&(this->PostEdgeSplitFunction).field_0x18;
  uStack_9c = *(uint *)&(this->PostEdgeSplitFunction).field_0x1c;
  local_98 = *(int *)&(this->PostEdgeSplitFunction).field_0x20;
  uStack_94 = *(undefined4 *)&(this->PostEdgeSplitFunction).field_0x24;
  uStack_b0 = lVar19;
  if (local_b8 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    ppTVar18 = &local_a8;
    if (ppTStack_90 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
      ppTVar18 = ppTStack_90;
    }
    (*(code *)((*ppTVar18)->AllocatorInstance).SecondaryData)();
  }
  this_00 = &this->ModifiedEdges;
  uVar21 = 0;
  local_144 = 0;
  if (*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) != -1) {
    if (&this->EdgeBuffer != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
      Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (&this->EdgeBuffer,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00)
      ;
    }
    if ((*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      iVar16 = (*pcVar8)();
      return iVar16;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
    uVar21 = *(uint *)&(this->EdgeBuffer).Elements.field_0x28;
    puVar1 = &(this->EdgeBuffer).Elements.field_0x10;
    iVar16 = (int)uVar21 >> 5;
    uVar24 = uVar21 & 0xffffffe0;
    if (((int)uVar21 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      iVar16 = (*pcVar8)();
      return iVar16;
    }
    uVar26 = *(uint *)&(this->EdgeBuffer).Elements.field_0x28;
    if (uVar21 != uVar26) {
      puVar22 = *(undefined1 **)&(this->EdgeBuffer).Elements.field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar1;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar16 * 4);
      while (uVar21 == 0) {
        lVar19 = (longlong)iVar16;
        uVar24 = uVar24 + 0x20;
        iVar16 = iVar16 + 1;
        uVar21 = uVar26;
        if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14c8e2a1b;
        uVar21 = *(uint *)(puVar22 + lVar19 * 4 + 4);
      }
      uVar17 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar21 = (uVar24 - 1) + (int)lVar19;
      if ((int)uVar26 < (int)uVar21) {
        uVar21 = uVar26;
      }
    }
LAB_14c8e2a1b:
    iVar16 = 0;
    local_98 = 0;
    uVar24 = 1;
    uStack_9c = 0;
    if (uVar26 != 0) {
      puVar23 = *(uint **)&(this->EdgeBuffer).Elements.field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar4 = *puVar23;
      while (uVar4 == 0) {
        lVar19 = (longlong)iVar16;
        local_98 = local_98 + 0x20;
        iVar16 = iVar16 + 1;
        uStack_9c = uVar26;
        if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14c8e2a8c;
        uVar4 = puVar23[lVar19 + 1];
      }
      uVar24 = -uVar4 & uVar4;
      uVar17 = (ulonglong)uVar24 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uStack_9c = local_98 + -1 + (int)lVar19;
      if ((int)uVar26 < (int)uStack_9c) {
        uStack_9c = uVar26;
      }
    }
LAB_14c8e2a8c:
    local_110 = &this->EdgeBuffer;
    uStack_b0 = CONCAT44(uVar24,iVar16);
    TStack_108._padding_ = uStack_b0;
    uStack_a0 = 0xffffffff;
    uStack_94 = local_c4;
    ppTStack_90 = (TBitArray<FDefaultBitArrayAllocator> **)
                  CONCAT44(ppTStack_90._4_4_,
                           *(int *)&(this->EdgeBuffer).Elements.field_0x8 -
                           *(int *)&(this->EdgeBuffer).Elements.field_0x34);
    TStack_108.UnvisitedBitMask = 0xffffffff;
    TStack_108.CurrentBitIndex = uStack_9c;
    TStack_108.BaseBitIndex = local_98;
    TStack_108._28_4_ = local_c4;
    ppTStack_e8 = ppTStack_90;
    uVar24 = local_144;
    TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_b8 = local_110;
    local_a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    while( true ) {
      pTVar13 = local_110;
      if (*(int *)&(local_110->Elements).field_0x8 - *(int *)&(local_110->Elements).field_0x34 !=
          (int)ppTStack_e8) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_140);
      }
      if (((TStack_108.CurrentBitIndex == uVar21) &&
          (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar13 == &this->EdgeBuffer)) break;
      uVar26 = *(uint *)(*(longlong *)&pTVar13->Elements +
                        (longlong)TStack_108.CurrentBitIndex * 0xc);
      cVar14 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar14 != '\0') break;
      lVar19 = *(longlong *)&this->field_0x8;
      if (((-1 < (int)uVar26) &&
          ((int)uVar26 < *(int *)(lVar19 + 0x1d0) * 0x200 + *(int *)(lVar19 + 0x1d4))) &&
         (((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar19 + 0x1d8) + (ulonglong)(uVar26 >> 9) * 8) +
                              (ulonglong)(uVar26 & 0x1ff) * 2) - 1U) < 0xfffe &&
          (iVar16 = (**(code **)(*(longlong *)this + 0x68))(this,uVar26), iVar16 == 2)))) {
        *(int *)&this->field_0x214 = *(int *)&this->field_0x214 + 1;
        uVar24 = uVar24 + 1;
      }
      TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    }
    goto LAB_14c8e2bc1;
  }
  local_50.InlineData[0] = '\0';
  local_50.InlineData[1] = '\0';
  local_50.InlineData[2] = '\0';
  local_50.InlineData[3] = '\0';
  local_50._padding_ = 0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  local_40 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator=
            (this_00,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88);
  local_40 = local_40 & 0xffffffff00000000;
  if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  iVar16 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar16 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  lVar19 = *(longlong *)&this->field_0x8;
  local_128 = (int *)(lVar19 + 0x1d0);
  uStack_120 = 0;
  uVar25 = *local_128 * 0x200 + *(int *)(lVar19 + 0x1d4);
  uVar26 = uVar25;
  uVar4 = 0;
  local_144 = uVar25;
  uStack_12c = uVar25;
  uStack_11c = uVar25;
  local_138 = local_128;
  if (uVar25 == 0) {
LAB_14c8e2812:
    uStack_130 = uStack_120;
    if (uVar21 == uVar25) goto LAB_14c8e2bc1;
  }
  else {
    uStack_130 = uStack_120;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar19 + 0x1d8) - 1U)) {
      uVar21 = 1;
      uVar17 = 1;
      uStack_120 = 1;
      if (1 < (int)uVar25) {
        do {
          uVar21 = (uint)uVar17;
          sVar3 = *(short *)((*(undefined8 **)(lVar19 + 0x1d8))[uVar17 >> 9] +
                            (ulonglong)(uVar21 & 0x1ff) * 2);
          if ((sVar3 != 0) && (sVar3 != -1)) break;
          uVar21 = uVar21 + 1;
          uVar17 = (ulonglong)uVar21;
          uStack_120 = uVar21;
        } while ((int)uVar21 < (int)uVar25);
      }
      goto LAB_14c8e2812;
    }
  }
  do {
    uVar24 = uVar4;
    uVar21 = uStack_130;
    cVar14 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar14 != '\0') break;
    lVar6 = *(longlong *)&this->field_0x8;
    if (((-1 < (int)uVar21) &&
        ((int)uVar21 < *(int *)(lVar6 + 0x1d0) * 0x200 + *(int *)(lVar6 + 0x1d4))) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar6 + 0x1d8) + (ulonglong)(uVar21 >> 9) * 8) +
                           (ulonglong)(uStack_130 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      iVar16 = (**(code **)(*(longlong *)this + 0x68))(this,uVar21);
      if (iVar16 == 2) {
        *(int *)&this->field_0x214 = *(int *)&this->field_0x214 + 1;
        uVar24 = uVar24 + 1;
      }
    }
    uStack_130 = uVar21 + 1;
    if ((int)uStack_130 < (int)uVar25) {
      do {
        uVar26 = local_144;
        if ((*(short *)(*(longlong *)
                         (*(longlong *)(lVar19 + 0x1d8) + (ulonglong)(uStack_130 >> 9) * 8) +
                       (ulonglong)(uStack_130 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)
                        (*(longlong *)(lVar19 + 0x1d8) + (ulonglong)(uStack_130 >> 9) * 8) +
                      (ulonglong)(uStack_130 & 0x1ff) * 2) != -1)) break;
        uStack_130 = uStack_130 + 1;
      } while ((int)uStack_130 < (int)uVar25);
    }
    uVar4 = uVar24;
  } while (uStack_130 != uVar26);
LAB_14c8e2bc1:
  (**(code **)(*(longlong *)this + 0xe0))(this);
  if (*(longlong *)&this->PostEdgeSplitFunction != 0) {
    plVar7 = *(longlong **)&(this->PostEdgeSplitFunction).field_0x28;
    plVar20 = (longlong *)&(this->PostEdgeSplitFunction).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar20 = plVar7;
    }
    (**(code **)(*plVar20 + 0x10))();
    *(undefined8 *)&this->PostEdgeSplitFunction = 0;
  }
  bVar15 = (this->SavedState).bEnableFlips;
  uVar9 = *(undefined4 *)&(this->SavedState).MinEdgeLength;
  uVar10 = *(undefined4 *)((longlong)&(this->SavedState).MinEdgeLength + 4);
  uVar11 = *(undefined4 *)&(this->SavedState).MaxEdgeLength;
  uVar12 = *(undefined4 *)((longlong)&(this->SavedState).MaxEdgeLength + 4);
  *(double *)&this->field_0x168 = (this->SavedState).SmoothSpeedT;
  EVar5 = (this->SavedState).SmoothType;
  this->field_0x140 = bVar15;
  bVar15 = (this->SavedState).bEnableCollapses;
  *(ESmoothTypes *)&this->field_0x170 = EVar5;
  EVar2 = (this->SavedState).ProjectionMode;
  this->field_0x141 = bVar15;
  bVar15 = (this->SavedState).bEnableSplits;
  this->field_0x128 = EVar2;
  this->field_0x142 = bVar15;
  this->field_0x143 = (this->SavedState).bEnableSmoothing;
  *(undefined4 *)&this->field_0x158 = uVar9;
  *(undefined4 *)&this->field_0x15c = uVar10;
  *(undefined4 *)&this->field_0x160 = uVar11;
  *(undefined4 *)&this->field_0x164 = uVar12;
  (**(code **)(*(longlong *)this + 0xd0))(this);
  return uVar24;
}

// FastestRemesh @ 14c8e2cc0

void __thiscall UE::Geometry::FQueueRemesher::FastestRemesh(FQueueRemesher *this)

{
  undefined1 uVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  uint local_48 [2];
  FQueueRemesher *local_40;
  code *local_38;
  uint *local_30;
  
  if ((*(longlong *)(*(longlong *)&this->field_0x8 + 0x208) != 0) && (this->field_0xc8 == '\0')) {
    `UE::Geometry::FQueueRemesher::FastestRemesh'::__l5::<lambda_1>::operator()(local_res8);
  }
  ResetQueue(this);
  dVar2 = __real_3f847ae147ae147b;
  iVar6 = 0;
  if (0 < this->MaxFastSplitIterations) {
    do {
      cVar3 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar3 != '\0') {
        return;
      }
      iVar5 = FastSplitIteration(this);
      *(int *)&this->field_0x214 = iVar5;
    } while ((dVar2 <= (double)iVar5 / (double)*(int *)(*(longlong *)&this->field_0x8 + 0x200)) &&
            (iVar6 = iVar6 + 1, iVar6 < this->MaxFastSplitIterations));
  }
  ResetQueue(this);
  uVar7 = 0;
  uVar1 = this->field_0x128;
  if (0 < this->MaxRemeshIterations + -1) {
    while (cVar3 = (**(code **)(*(longlong *)this + 8))(this), cVar3 == '\0') {
      local_38 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FQueueRemesher::FastestRemesh'::__l15::<lambda_2>,bool>
                 ::Call;
      uVar4 = uVar1;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      this->field_0x128 = uVar4;
      local_30 = local_48;
      local_48[0] = uVar7;
      local_40 = this;
      RemeshIteration(this,(TFunctionRef<bool___cdecl(void)> *)&local_38);
      if (((10 < (int)local_48[0]) &&
          ((double)*(int *)&local_40->field_0x214 /
           (double)*(int *)(*(longlong *)&local_40->field_0x8 + 0x200) <
           local_40->MinActiveEdgeFraction)) ||
         (uVar7 = uVar7 + 1, this->MaxRemeshIterations + -1 <= (int)uVar7)) break;
    }
  }
  cVar3 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar3 == '\0') {
    local_30 = (uint *)local_res8;
    this->field_0x128 = uVar1;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FQueueRemesher::FastestRemesh'::__l2::<lambda_3>,bool>
               ::Call;
    RemeshIteration(this,(TFunctionRef<bool___cdecl(void)> *)&local_38);
  }
  return;
}

// InitializeVertexBufferForPass @ 14c8ff590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FQueueRemesher::InitializeVertexBufferForPass(FQueueRemesher *this)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool local_res8 [8];
  
  this_00 = &this->field_0x228;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 0x24);
  iVar3 = *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200;
  iVar5 = iVar3 + iVar1;
  if (*(int *)this_00 * 0x200 + *(int *)&this->field_0x22c < iVar5) {
    TDynamicVector<UE::Math::TVector<double>,512>::Resize
              ((TDynamicVector<UE::Math::TVector<double>,512> *)this_00,iVar5 / 5 + iVar1 + iVar3);
  }
  iVar5 = *(int *)(*(longlong *)&this->field_0x8 + 0x24) +
          *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200;
  if (*(int *)&this->field_0x248 < iVar5) {
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x240,iVar5 * 2,Default);
  }
  local_res8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x240,local_res8,
             *(int *)&this->field_0x248);
  uVar7 = 0;
  if (*(int *)this_00 * 0x200 + *(int *)&this->field_0x22c != 0) {
    do {
      uVar6 = uVar7 & 0xffffffff;
      uVar4 = (ulonglong)((uint)uVar7 & 0x1ff);
      uVar7 = uVar7 + 1;
      lVar2 = *(longlong *)(*(longlong *)&this->field_0x230 + (uVar6 >> 9) * 8);
      *(undefined8 *)(lVar2 + uVar4 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + uVar4 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x10 + uVar4 * 0x18) = 0;
    } while (uVar7 < (uint)(*(int *)this_00 * 0x200 + *(int *)&this->field_0x22c));
  }
  iVar5 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d4) +
          *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200;
  if ((this->EdgeShouldBeQueuedBuffer).ArrayNum < iVar5) {
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
              (&this->EdgeShouldBeQueuedBuffer,iVar5 * 2,Default);
  }
  local_res8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&this->EdgeShouldBeQueuedBuffer,local_res8,(this->EdgeShouldBeQueuedBuffer).ArrayNum);
  return;
}

// QueueEdge @ 14c9112d0

void __thiscall UE::Geometry::FQueueRemesher::QueueEdge(FQueueRemesher *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = param_1;
  if (*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModifiedEdges",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\QueueRemesher.h"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->ModifiedEdges,
             local_res8,(bool *)local_res10);
  return;
}

// RemeshIteration @ 14c912a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FQueueRemesher::RemeshIteration
          (FQueueRemesher *this,TFunctionRef<bool___cdecl(void)> *param_1)

{
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  FDynamicMesh3 *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStackY_178 [32];
  char local_148;
  undefined1 local_147 [7];
  undefined8 local_140;
  undefined8 local_138;
  int local_130;
  TFunctionRef<bool___cdecl(void)> *local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  undefined1 local_98 [24];
  undefined8 uStack_80;
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_60;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar14 = 0;
  *(undefined4 *)&this->field_0x214 = 0;
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) != 0) {
    local_128 = param_1;
    (**(code **)(*(longlong *)this + 200))();
    (**(code **)(*(longlong *)this + 0xd8))(this);
    this_00 = &this->ModifiedEdges;
    if (*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) != -1) {
      pTVar1 = &this->EdgeBuffer;
      if (pTVar1 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  (pTVar1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
      }
      if ((*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
      puVar2 = &(this->EdgeBuffer).Elements.field_0x10;
      uStack_114 = 1;
      iVar15 = *(int *)&(this->EdgeBuffer).Elements.field_0x28;
      local_100 = 0;
      iStack_104 = iVar14;
      if (iVar15 != 0) {
        puVar17 = *(uint **)&(this->EdgeBuffer).Elements.field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar2;
        }
        uVar11 = *puVar17;
        local_100 = 0;
        iVar14 = 0;
        while (uVar11 == 0) {
          lVar13 = (longlong)iVar14;
          local_100 = local_100 + 0x20;
          iVar14 = iVar14 + 1;
          iStack_104 = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14c912d2e;
          uVar11 = puVar17[lVar13 + 1];
        }
        uStack_114 = -uVar11 & uVar11;
        uVar3 = (ulonglong)uStack_114 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_130 = (int)lVar13;
        iStack_104 = local_100 + -1 + local_130;
        if (iVar15 < iStack_104) {
          iStack_104 = iVar15;
        }
      }
LAB_14c912d2e:
      uVar11 = *(uint *)&(this->EdgeBuffer).Elements.field_0x28;
      uStack_fc = local_a4;
      uVar12 = uVar11 & 0xffffffe0;
      iStack_f8 = *(int *)&(this->EdgeBuffer).Elements.field_0x8 -
                  *(int *)&(this->EdgeBuffer).Elements.field_0x34;
      uStack_108 = 0xffffffff;
      TStack_e8._padding_ = CONCAT44(uStack_114,iVar14);
      TStack_e8.CurrentBitIndex = iStack_104;
      TStack_e8.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar11 >> 5;
      TStack_e8._28_4_ = local_a4;
      TStack_e8.BaseBitIndex = local_100;
      uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
      local_120 = pTVar1;
      iStack_118 = iVar14;
      local_110 = puVar2;
      local_f0 = pTVar1;
      TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if (((int)uVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar4 = *(uint *)&(this->EdgeBuffer).Elements.field_0x28;
      if (uVar11 != uVar4) {
        puVar16 = *(undefined1 **)&(this->EdgeBuffer).Elements.field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar2;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
        while (uVar11 == 0) {
          lVar13 = (longlong)iVar15;
          uVar12 = uVar12 + 0x20;
          iVar15 = iVar15 + 1;
          uVar11 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14c912e41;
          uVar11 = *(uint *)(puVar16 + lVar13 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar11 = (int)lVar13 + -1 + uVar12;
        if ((int)uVar4 < (int)uVar11) {
          uVar11 = uVar4;
        }
      }
LAB_14c912e41:
      do {
        pTVar8 = local_f0;
        if (*(int *)&(local_f0->Elements).field_0x8 - *(int *)&(local_f0->Elements).field_0x34 !=
            (int)uStack_c8) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_147);
        }
        if (((TStack_e8.CurrentBitIndex == uVar11) &&
            (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (param_1 = local_128, pTVar8 == pTVar1)) goto LAB_14c912f6f;
        uVar12 = *(uint *)(*(longlong *)&pTVar8->Elements +
                          (longlong)TStack_e8.CurrentBitIndex * 0xc);
        cVar9 = (**(code **)(*(longlong *)this + 8))(this);
        param_1 = local_128;
        if (cVar9 != '\0') goto LAB_14c912f6f;
        pFVar5 = *(FDynamicMesh3 **)&this->field_0x8;
        if ((-1 < (int)uVar12) &&
           ((int)uVar12 <
            (int)((pFVar5->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar5->EdgeRefCounts).RefCounts.CurBlockUsed))) {
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar5->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                   + (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 2
                                 ) - 1U) < 0xfffe) {
            uVar6 = *(undefined8 *)
                     (*(longlong *)
                       ((pFVar5->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8
                       ) + (ulonglong)(uVar12 & 0x1ff) * 0x10);
            local_140 = uVar6;
            FDynamicMesh3::GetEdgeOpposingV(pFVar5,(int)&local_138);
            uVar12 = (**(code **)(*(longlong *)this + 0x68))(this,uVar12);
            if (uVar12 < 3) {
              QueueOneRing(this,(int)uVar6);
              QueueOneRing(this,local_140._4_4_);
              QueueOneRing(this,(int)local_138);
              QueueOneRing(this,local_138._4_4_);
              *(int *)&this->field_0x214 = *(int *)&this->field_0x214 + 1;
            }
          }
        }
        TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
      } while( true );
    }
    local_60.InlineData[0] = '\0';
    local_60.InlineData[1] = '\0';
    local_60.InlineData[2] = '\0';
    local_60.InlineData[3] = '\0';
    local_60._padding_ = 0;
    local_98._16_8_ = 0;
    uStack_80 = 0;
    local_50 = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
    TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator=
              (this_00,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
    local_50 = local_50 & 0xffffffff00000000;
    if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
    iVar14 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar14 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    uVar11 = (**(code **)(*(longlong *)this + 0x58))(this);
    local_148 = '\0';
    do {
      cVar9 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar9 != '\0') break;
      pFVar5 = *(FDynamicMesh3 **)&this->field_0x8;
      if ((-1 < (int)uVar11) &&
         ((int)uVar11 <
          (int)((pFVar5->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar5->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar5->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 2) -
                    1U) < 0xfffe) {
          uVar6 = *(undefined8 *)
                   (*(longlong *)
                     ((pFVar5->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8)
                   + (ulonglong)(uVar11 & 0x1ff) * 0x10);
          local_138 = uVar6;
          FDynamicMesh3::GetEdgeOpposingV(pFVar5,(int)&local_140);
          uVar12 = (**(code **)(*(longlong *)this + 0x68))(this,uVar11);
          if (uVar12 < 3) {
            QueueOneRing(this,(int)uVar6);
            QueueOneRing(this,local_138._4_4_);
            QueueOneRing(this,(int)local_140);
            QueueOneRing(this,local_140._4_4_);
            *(int *)&this->field_0x214 = *(int *)&this->field_0x214 + 1;
          }
        }
      }
      uVar11 = (**(code **)(*(longlong *)this + 0x60))(this,uVar11,&local_148);
    } while (local_148 == '\0');
LAB_14c912f6f:
    (**(code **)(*(longlong *)this + 0xe0))(this);
    cVar9 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
    if ((cVar9 == '\0') && (cVar9 = (**(code **)(*(longlong *)this + 8))(this), cVar9 == '\0')) {
      (**(code **)(*(longlong *)this + 0xe8))(this);
      if ((this->field_0x143 != '\0') && (0.0 < *(double *)&this->field_0x168)) {
        TrackedFullSmoothPass_Buffer(this,(bool)this->field_0x211);
        (**(code **)(*(longlong *)this + 0x28))(this,0);
      }
      (**(code **)(*(longlong *)this + 0xf0))(this);
      cVar9 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar9 == '\0') {
        (**(code **)(*(longlong *)this + 0xf8))(this);
        if ((*(longlong *)&this->field_0xd0 != 0) && (this->field_0x128 == '\x01')) {
          (**(code **)(*(longlong *)this + 0x138))(this,this->field_0x210);
          (**(code **)(*(longlong *)this + 0x28))(this,0);
        }
        (**(code **)(*(longlong *)this + 0x100))(this);
        (**(code **)(*(longlong *)this + 0xd0))(this);
      }
    }
  }
  return;
}

// TrackedFullProjectionPass @ 14c91e920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FQueueRemesher::TrackedFullProjectionPass(FQueueRemesher *this,bool param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined ***pppuVar4;
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this_00;
  int iVar5;
  undefined1 auStackY_b8 [32];
  FIdentityFunctor local_88 [8];
  FIdentityFunctor *local_80;
  code *local_78 [2];
  undefined **local_68;
  FQueueRemesher *local_60;
  undefined8 local_50;
  code *local_48 [2];
  undefined **local_38;
  FQueueRemesher *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (param_1) {
    local_50 = 0;
    local_68 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FQueueRemesher::TrackedFullProjectionPass'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_78[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FQueueRemesher::TrackedFullProjectionPass'::__l5::<lambda_1>,UE::Math::TVector<double>,int,bool_&>
                  ::Call;
    local_60 = this;
    TrackedMoveVerticesParallel
              (this,(TFunction<UE::Math::TVector<double>___cdecl(int,bool_&)> *)local_78);
  }
  else {
    (**(code **)(*(longlong *)this + 0x78))();
    if (*(longlong *)&this->field_0xd0 == 0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1046918249997926898>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\QueueRemesher.cpp"
                         ,0x1f2,"ProjTarget != nullptr");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_20 = (undefined ***)0x0;
    local_38 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FQueueRemesher::TrackedFullProjectionPass'::`2'::<lambda_2>,0,0>
                ::_vftable_;
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FQueueRemesher::TrackedFullProjectionPass'::__l2::<lambda_2>,void,int>
                  ::Call;
    local_30 = this;
    (**(code **)(*(longlong *)this + 0xc0))(this,local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar4 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar4 = local_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    (**(code **)(*(longlong *)this + 0x80))(this,0);
    this_00 = &this->ModifiedEdges;
    if (*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_80 = local_88;
    if (0 < *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 8) -
            *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x34)) {
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Compact((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00);
      iVar5 = *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 8) -
              *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x34);
      pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> **)&this_00->field0_0x0;
      if (iVar5 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<std::less<int>_>_>_>
                (pTVar1,iVar5,local_88[0],(FElementCompareClass<std::less<int>_> *)&local_80);
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
  }
  return;
}

// TrackedFullSmoothPass_Buffer @ 14c91eb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FQueueRemesher::TrackedFullSmoothPass_Buffer(FQueueRemesher *this,bool param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined ***pppuVar4;
  longlong *plVar5;
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this_00;
  int iVar6;
  undefined1 auStack_118 [32];
  FIdentityFunctor local_f8 [8];
  FIdentityFunctor *local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  longlong *local_d0;
  FQueueRemesher *local_c8;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FQueueRemesher *local_a0;
  longlong *local_98;
  undefined ***local_90;
  longlong local_88 [2];
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1) {
    (**(code **)(*(longlong *)this + 0xa0))(this,local_88);
    local_c0 = 0;
    local_d8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FQueueRemesher::TrackedFullSmoothPass_Buffer'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_d0 = local_88;
    local_e8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FQueueRemesher::TrackedFullSmoothPass_Buffer'::__l5::<lambda_1>,UE::Math::TVector<double>,int,bool_&>
                  ::Call;
    local_c8 = this;
    TrackedMoveVerticesParallel
              (this,(TFunction<UE::Math::TVector<double>___cdecl(int,bool_&)> *)local_e8);
    if (local_88[0] == 0) {
      return;
    }
    plVar5 = local_78;
  }
  else {
    (**(code **)(*(longlong *)this + 0x78))();
    (**(code **)(*(longlong *)this + 0xa0))(this,local_58);
    if ((*(int *)&this->field_0x248 <
         *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
         *(int *)(*(longlong *)&this->field_0x8 + 0x24)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TempFlagBuffer.Num() >= Mesh->MaxVertexID()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\QueueRemesher.cpp"
                           ,0x1c5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(int *)&this->field_0x228 * 0x200 + *(int *)&this->field_0x22c <
         *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
         *(int *)(*(longlong *)&this->field_0x8 + 0x24)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<int>(TempPosBuffer.Num()) >= Mesh->MaxVertexID()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\QueueRemesher.cpp"
                           ,0x1c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((this->EdgeShouldBeQueuedBuffer).ArrayNum <
         *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
         *(int *)(*(longlong *)&this->field_0x8 + 0x1d4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeShouldBeQueuedBuffer.Num() >= Mesh->MaxEdgeID()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\QueueRemesher.cpp"
                           ,0x1c7,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_90 = (undefined ***)0x0;
    local_a8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FQueueRemesher::TrackedFullSmoothPass_Buffer'::`2'::<lambda_2>,0,0>
                ::_vftable_;
    local_98 = local_58;
    local_b8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FQueueRemesher::TrackedFullSmoothPass_Buffer'::__l2::<lambda_2>,void,int>
                  ::Call;
    local_a0 = this;
    (**(code **)(*(longlong *)this + 0x98))(this,local_b8);
    if (local_b8[0] != (code *)0x0) {
      pppuVar4 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar4 = local_90;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    (**(code **)(*(longlong *)this + 0x80))(this,0);
    this_00 = &this->ModifiedEdges;
    if ((*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_f0 = local_f8;
    if (0 < *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 8) -
            *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x34)) {
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Compact((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00);
      iVar6 = *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 8) -
              *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x34);
      pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> **)&this_00->field0_0x0;
      if ((iVar6 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<std::less<int>_>_>_>
                (pTVar1,iVar6,local_f8[0],(FElementCompareClass<std::less<int>_> *)&local_f0);
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
    if (local_58[0] == 0) {
      return;
    }
    plVar5 = local_48;
    local_60 = local_30;
  }
  if (local_60 != (longlong *)0x0) {
    plVar5 = local_60;
  }
  (**(code **)(*plVar5 + 0x10))();
  return;
}

// TrackedMoveVerticesParallel @ 14c91edd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FQueueRemesher::TrackedMoveVerticesParallel
          (FQueueRemesher *this,TFunction<UE::Math::TVector<double>___cdecl(int,bool_&)> *param_1)

{
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this_00;
  longlong lVar1;
  longlong lVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStackY_138 [32];
  <lambda_1> local_f8 [8];
  uint local_f0 [2];
  int local_e8 [2];
  FQueueRemesher *local_e0;
  TFunction<UE::Math::TVector<double>___cdecl(int,bool_&)> *local_d8;
  <lambda_1> *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FQueueRemesher **local_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  FQueueRemesher **local_90;
  FQueueRemesher *local_88 [2];
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_d8 = param_1;
  (**(code **)(*(longlong *)this + 0x78))();
  if ((*(int *)&this->field_0x248 <
       *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
       *(int *)(*(longlong *)&this->field_0x8 + 0x24)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TempFlagBuffer.Num() >= Mesh->MaxVertexID()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\QueueRemesher.cpp"
                         ,0x14a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)&this->field_0x228 * 0x200 + *(int *)&this->field_0x22c <
       *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
       *(int *)(*(longlong *)&this->field_0x8 + 0x24)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<int>(TempPosBuffer.Num()) >= Mesh->MaxVertexID()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\QueueRemesher.cpp"
                         ,0x14b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_78 = *(longlong *)param_1;
  uVar11 = 0;
  local_50 = (longlong *)0x0;
  local_88[0] = this;
  if (local_78 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,local_68);
  }
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FQueueRemesher::TrackedMoveVerticesParallel'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = local_88;
  local_c8.DataPtr = (void **)0x0;
  local_c8.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x24),1,
             (TFunctionRef<void___cdecl(int)> *)&local_b8,local_f8[0],None,&local_c8);
  if (local_78 != 0) {
    plVar9 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar9 = local_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (((this->EdgeShouldBeQueuedBuffer).ArrayNum <
       *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
       *(int *)(*(longlong *)&this->field_0x8 + 0x1d4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("EdgeShouldBeQueuedBuffer.Num() >= Mesh->MaxEdgeID()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\QueueRemesher.cpp"
                         ,0x15d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_90 = &local_e0;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FQueueRemesher::TrackedMoveVerticesParallel'::__l2::<lambda_2>,void,int>
             ::Call;
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_e0 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_98,local_f8[0],None,&local_a8);
  lVar1 = *(longlong *)&this->field_0x8;
  uVar13 = *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4);
  if (((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x1d8) - 1U))) &&
     (uVar11 = 1, 1 < (int)uVar13)) {
    do {
      lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      lVar2 = (*(undefined8 **)(lVar1 + 0x1d8))[uVar11 >> 9];
      if ((*(short *)(lVar5 + lVar2) != 0) && (*(short *)(lVar5 + lVar2) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar13);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014c91f05d:
  do {
    if (uVar10 == uVar13) {
      (**(code **)(*(longlong *)this + 0x80))(this,1);
      this_00 = &this->ModifiedEdges;
      if ((*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_d0 = local_f8;
      if (0 < *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 8) -
              *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x34)) {
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Compact((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00);
        iVar12 = *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 8) -
                 *(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x34);
        pTVar3 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> **)&this_00->field0_0x0;
        if ((iVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AlgoImpl::
        IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<std::less<int>_>_>_>
                  (pTVar3,iVar12,(FIdentityFunctor)local_f8[0],
                   (FElementCompareClass<std::less<int>_> *)&local_d0);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
      if (*(longlong *)param_1 != 0) {
        plVar9 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      return;
    }
    while( true ) {
      lVar2 = *(longlong *)&this->field_0x8;
      uVar10 = (uint)uVar11;
      if (((-1 < (int)uVar10) &&
          ((int)uVar10 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + (uVar11 >> 9) * 8) +
                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        uVar7 = 0;
        if ((int)uVar10 < (this->EdgeShouldBeQueuedBuffer).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->EdgeShouldBeQueuedBuffer).AllocatorInstance.Data[(int)uVar10] !=
            (FScriptContainerElement)0x0) {
          local_f0[0] = uVar10;
          if (*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ModifiedEdges",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\QueueRemesher.h"
                               ,0x85,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((*(int *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) == -1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->ModifiedEdges,
                     local_e8,(bool *)local_f0);
        }
      }
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      param_1 = local_d8;
      if ((int)uVar13 <= (int)uVar10) break;
      while( true ) {
        lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x1d8) + (uVar11 >> 9) * 8);
        if ((*(short *)(lVar5 + lVar2) != 0) && (*(short *)(lVar5 + lVar2) != -1)) break;
        uVar10 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        if ((int)uVar13 <= (int)uVar10) goto joined_r0x00014c91f05d;
      }
    }
  } while( true );
}

// operator() @ 1505748a0

bool __thiscall
`UE::Geometry::FQueueRemesher::FastestRemesh'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1046918249997926413>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1046918249997926413>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505749a0

bool __thiscall
`UE::Geometry::FQueueRemesher::FastSplitIteration'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1046918249997926484>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1046918249997926484>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

