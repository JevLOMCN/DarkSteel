// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// FConvexOptimizer @ 143a37550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FConvexOptimizer * __thiscall
Chaos::Private::FConvexOptimizer::FConvexOptimizer(FConvexOptimizer *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FCollisionObjects *pFVar3;
  FCollisionObjects *pFVar4;
  
  pFVar4 = (FCollisionObjects *)0x0;
  (this->SimplifiedConvexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimplifiedConvexes).ArrayNum = 0;
  (this->SimplifiedConvexes).ArrayMax = 0;
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 != (FCollisionObjects *)0x0) {
    (pFVar3->ImplicitObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ImplicitObjects).ArrayNum = 0;
    (pFVar3->ImplicitObjects).ArrayMax = 0;
    pFVar4 = pFVar3;
  }
  uVar2 = _UNK_150af7a58;
  uVar1 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  (this->CollisionObjects).Ptr = pFVar4;
  (this->ShapesArray).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>)
       0x0;
  (this->ShapesArray).ArrayNum = 0;
  (this->ShapesArray).ArrayMax = 1;
  *(undefined8 *)&(this->RootTriboxes).field_0x8 = 0;
  *(undefined8 *)&this->RootTriboxes = 0;
  *(undefined8 *)&(this->RootTriboxes).field_0x20 = 0;
  *(undefined4 *)&(this->RootTriboxes).field_0x28 = 0;
  *(undefined4 *)&(this->RootTriboxes).field_0x2c = 0x80;
  *(undefined4 *)&(this->RootTriboxes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RootTriboxes).field_0x34 = 0;
  *(undefined8 *)&(this->RootTriboxes).field_0x40 = 0;
  *(undefined4 *)&(this->RootTriboxes).field_0x48 = 0;
  (this->BVH).Ptr = (FImplicitBVH *)0x0;
  (this->MainTribox).NodeTribox.bIsValid = false;
  (this->MainTribox).NodeTribox.bHasDatas = false;
  *(undefined8 *)(this->MainTribox).NodeTribox.MaxDists = uVar1;
  *(undefined8 *)((this->MainTribox).NodeTribox.MaxDists + 2) = uVar2;
  *(undefined8 *)((this->MainTribox).NodeTribox.MaxDists + 4) = uVar1;
  *(undefined8 *)((this->MainTribox).NodeTribox.MaxDists + 6) = uVar2;
  *(undefined8 *)((this->MainTribox).NodeTribox.MaxDists + 8) = uVar1;
  *(undefined8 *)((this->MainTribox).NodeTribox.MaxDists + 10) = uVar2;
  *(undefined8 *)((this->MainTribox).NodeTribox.MaxDists + 0xc) = uVar1;
  *(undefined8 *)((this->MainTribox).NodeTribox.MaxDists + 0xe) = uVar2;
  *(undefined8 *)((this->MainTribox).NodeTribox.MaxDists + 0x10) = uVar1;
  (this->MainTribox).TriboxConvex.Reference = (FImplicitObject *)0x0;
  (this->MainTribox).ShapeIndex = -1;
  (this->MainTribox).NodeVolume = 0.0;
  (this->MainTribox).bValidNode = true;
  *(undefined8 *)&(this->MainTribox).bValidEdges.field_0x10 = 0;
  *(undefined8 *)&(this->MainTribox).bValidEdges.field_0x18 = 0;
  *(undefined8 *)&(this->MainTribox).bValidEdges.field_0x38 = 0;
  *(undefined8 *)&(this->MainTribox).bValidEdges.field_0x48 = 0;
  *(undefined8 *)&(this->MainTribox).bValidEdges = 0;
  *(undefined8 *)&(this->MainTribox).bValidEdges.field_0x8 = 0;
  *(undefined8 *)&(this->MainTribox).bValidEdges.field_0x20 = 0;
  *(undefined4 *)&(this->MainTribox).bValidEdges.field_0x28 = 0;
  *(undefined4 *)&(this->MainTribox).bValidEdges.field_0x2c = 0x80;
  *(undefined4 *)&(this->MainTribox).bValidEdges.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MainTribox).bValidEdges.field_0x34 = 0;
  *(undefined8 *)&(this->MainTribox).bValidEdges.field_0x40 = 0;
  (this->MainTribox).ConvexId = 0;
  this->NextConvexId = 0;
  return this;
}

// ~FConvexOptimizer @ 143a39fe0

void __thiscall Chaos::Private::FConvexOptimizer::~FConvexOptimizer(FConvexOptimizer *this)

{
  FImplicitBVH *this_00;
  void *pvVar1;
  FCollisionObjects *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar4;
  
  FTriboxNode::~FTriboxNode(&this->MainTribox);
  this_00 = (this->BVH).Ptr;
  if (this_00 != (FImplicitBVH *)0x0) {
    FImplicitBVH::~FImplicitBVH(this_00);
    ::operator_delete(this_00,0x38);
  }
  *(undefined4 *)&(this->RootTriboxes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RootTriboxes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RootTriboxes);
  FVar4 = (this->ShapesArray).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                )0x0) {
    FVar4 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
             )&this->ShapesArray;
  }
  DestructItems<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,int>
            ((TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> *)FVar4,
             (this->ShapesArray).ArrayNum);
  FVar4 = (this->ShapesArray).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                )0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar2 = (this->CollisionObjects).Ptr;
  if (pFVar2 != (FCollisionObjects *)0x0) {
    pFVar3 = (pFVar2->ImplicitObjects).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x10);
  }
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)
             (this->SimplifiedConvexes).AllocatorInstance.Data,(this->SimplifiedConvexes).ArrayNum);
  pFVar3 = (this->SimplifiedConvexes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 143a3d170

void __thiscall
`Chaos::Private::FConvexOptimizer::BuildUnionConnectivity'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,TAABB<double,3> *param_3,FTriboxNode *param_4)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FTriboxNode *this_00;
  TAABB<double,3> *pTVar8;
  TVector<double,3> *pTVar9;
  longlong lVar10;
  undefined1 local_res18 [16];
  undefined1 local_a8 [4];
  undefined1 local_a4 [12];
  bool *local_98;
  undefined8 local_90;
  bool **local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  TAABB<double,3> local_68;
  
  lVar10 = 0;
  lVar3 = *(longlong *)this;
  lVar4 = **(longlong **)((longlong)this + 8);
  uVar7 = 0;
  if (param_2 < *(int *)(lVar4 + 0x28)) {
    uVar7 = (uint)~param_2 >> 0x1f;
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
  this_00 = TMapBase<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
            ::Find((TMapBase<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
                    *)(lVar3 + 0x30),
                   *(FImplicitObject **)(*(longlong *)(lVar4 + 0x20) + (longlong)param_2 * 8));
  if ((this_00 != (FTriboxNode *)0x0) && ((this_00->bValidNode == false || (param_1 < param_2)))) {
    pTVar8 = Chaos::Private::FTribox::GetBounds(&this_00->NodeTribox,&local_68);
    pTVar1 = &pTVar8->MMax;
    pTVar9 = pTVar1;
    do {
      dVar2 = *(double *)((longlong)pTVar9 + ((longlong)param_3 - (longlong)pTVar1));
      if (*(double *)pTVar9 <= dVar2 && dVar2 != *(double *)pTVar9) {
        return;
      }
      if (*(double *)((longlong)pTVar9 + (0x18 - (longlong)pTVar1) + (longlong)param_3) <
          *(double *)&((TAABB<double,3> *)(pTVar9 + -1))->MMin) {
        return;
      }
      lVar10 = lVar10 + 1;
      pTVar9 = (TVector<double,3> *)&pTVar9->field_0x8;
    } while (lVar10 < 3);
    local_res18[0] = 1;
    lVar3 = **(longlong **)((longlong)this + 8);
    uVar7 = 0;
    if (param_2 < *(int *)(lVar3 + 0x28)) {
      uVar7 = (uint)~param_2 >> 0x1f;
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
    local_98 = *(bool **)(*(longlong *)(lVar3 + 0x20) + (longlong)param_2 * 8);
    local_88 = &local_98;
    local_80 = local_res18;
    TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<Chaos::FImplicitObject_*_&&,bool_&&>_>
              ((TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
                *)&param_4->bValidEdges,
               (TPairInitializer<Chaos::FImplicitObject_*_&&,bool_&&> *)local_a4,(bool *)&local_88);
    local_a8[0] = 1;
    lVar3 = **(longlong **)((longlong)this + 8);
    uVar7 = 0;
    if (param_1 < *(int *)(lVar3 + 0x28)) {
      uVar7 = (uint)~param_1 >> 0x1f;
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
    local_90 = *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)param_1 * 8);
    local_78 = &local_90;
    local_70 = local_a8;
    TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<Chaos::FImplicitObject_*_&&,bool_&&>_>
              ((TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
                *)&this_00->bValidEdges,
               (TPairInitializer<Chaos::FImplicitObject_*_&&,bool_&&> *)(local_a4 + 4),
               (bool *)&local_78);
  }
  return;
}

// BuildConvexShapes @ 143a545b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FConvexOptimizer::BuildConvexShapes
          (FConvexOptimizer *this,
          TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  longlong *plVar2;
  byte *pbVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FCollisionObjects *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<Chaos::Private::FStat_STAT_BuildConvexShapes> FVar14;
  FImplicitObjectUnion *this_00;
  TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> TVar15;
  longlong lVar16;
  FCollisionFilterData *pFVar17;
  undefined1 *puVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar19;
  longlong lVar20;
  FName FVar21;
  uint uVar22;
  uint uVar23;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar24;
  FColor_u_0 local_res8 [2];
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
  local_res10;
  FName local_res18;
  FName local_res20;
  undefined8 *local_98;
  LARGE_INTEGER local_90;
  FName local_88;
  FName local_80;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_70;
  FStatMessage local_60 [2];
  
  FVar14 = StatPtr_STAT_BuildConvexShapes;
  local_res10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )param_1;
  if (StatPtr_STAT_BuildConvexShapes ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_BuildConvexShapes>)0x0) {
    pFVar13 = ::FName::FName(&local_88,"STAT_BuildConvexShapes");
    FVar14 = (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_BuildConvexShapes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildConvexShapes,*pFVar13,
                        L"Collisions::BuildConvexShapes","STATGROUP_ChaosCollision",
                        "STATCAT_Advanced",L"ChaosCollision",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_res20.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ConvexOptimizer.cpp"
                   ,0x86);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar9 = true;
      goto LAB_143a546ea;
    }
  }
  bVar9 = false;
  FVar21 = local_80;
LAB_143a546ea:
  iVar12 = (this->ShapesArray).ArrayNum;
  pTVar1 = &this->ShapesArray;
  piVar4 = &(this->ShapesArray).ArrayMax;
  FVar19 = (this->ShapesArray).AllocatorInstance.SecondaryData;
  if (*piVar4 < 0) {
    if (FVar19 == (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                   )0x0) {
      FVar19 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                )pTVar1;
    }
    DestructItems<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,int>
              ((TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> *)FVar19,
               iVar12);
    (this->ShapesArray).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>_>
                (8,8,0,&pTVar1->AllocatorInstance,0,piVar4);
    }
  }
  else {
    if (FVar19 == (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                   )0x0) {
      FVar19 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                )pTVar1;
    }
    DestructItems<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,int>
              ((TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> *)FVar19,
               iVar12);
    (this->ShapesArray).ArrayNum = 0;
  }
  iVar12 = (this->SimplifiedConvexes).ArrayNum;
  pFVar5 = (this->SimplifiedConvexes).AllocatorInstance.Data;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = iVar12;
  if (iVar12 == 0) {
    local_70.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar12,0,&local_70.AllocatorInstance,iVar12,&local_70.ArrayMax);
    ConstructItems<TRefCountPtr<Chaos::FImplicitObject>,TRefCountPtr<Chaos::FImplicitObject>,int>
              (local_70.AllocatorInstance.Data,(TRefCountPtr<Chaos::FImplicitObject> *)pFVar5,iVar12
              );
  }
  this_00 = ::operator_new(0x70);
  if (this_00 == (FImplicitObjectUnion *)0x0) {
    local_res18 = (FName)0x0;
  }
  else {
    local_res18 = (FName)FImplicitObjectUnion::FImplicitObjectUnion(this_00,&local_70);
    if (local_res18 != (FName)0x0) {
      LOCK();
      *(int *)&((FImplicitObjectUnion *)local_res18)->_padding_ =
           (int)((FImplicitObjectUnion *)local_res18)->_padding_ + 1;
      UNLOCK();
    }
  }
  FVar24 = local_res10;
  TVar15 = FShapeInstance::Make
                     ((int)&local_98,
                      (TRefCountPtr<Chaos::FImplicitObject> *)
                      (ulonglong)(uint)*(int *)((longlong)local_res10 + 0x10));
  FVar19 = (this->ShapesArray).AllocatorInstance.SecondaryData;
  if (FVar19 == (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                 )0x0) {
    FVar19 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
              )pTVar1;
  }
  if (((ulonglong)FVar19 <= TVar15.Ptr) &&
     (TVar15.Ptr < (FShapeInstance *)((longlong)FVar19 + (longlong)*piVar4 * 8))) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar12 = (this->ShapesArray).ArrayNum;
  if (iVar12 == *piVar4) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>_>
                       (0x808,&pTVar1->AllocatorInstance,piVar4);
  }
  (this->ShapesArray).ArrayNum = iVar12 + 1;
  FVar19 = (this->ShapesArray).AllocatorInstance.SecondaryData;
  if (FVar19 == (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                 )0x0) {
    FVar19 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
              )pTVar1;
  }
  *(longlong *)((longlong)FVar19 + (longlong)iVar12 * 8) = (TVar15.Ptr)->_padding_;
  (TVar15.Ptr)->_padding_ = 0;
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)(local_98,1);
  }
  if (local_res18 != (FName)0x0) {
    LOCK();
    plVar2 = (longlong *)((longlong)local_res18 + 8);
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (*(int *)((longlong)((longlong)local_res18 + 8) + 4) == 0)) {
      (**(code **)*(longlong *)local_res18)(local_res18,1);
    }
  }
  if (*(int *)((longlong)FVar24 + 0x10) < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar12 = (this->ShapesArray).ArrayNum;
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar24 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar24 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               *)((longlong)FVar24 + 8);
  }
  uVar23 = iVar12 - 1;
  uVar22 = 0;
  if ((int)uVar23 < iVar12) {
    uVar22 = ~uVar23 >> 0x1f;
  }
  if (uVar22 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar19 = (this->ShapesArray).AllocatorInstance.SecondaryData;
  lVar16 = (longlong)(this->ShapesArray).ArrayNum;
  if (FVar19 == (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                 )0x0) {
    FVar19 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
              )pTVar1;
  }
  pFVar6 = ((TUniquePtr<Chaos::Private::FCollisionObjects,TDefaultDelete<Chaos::Private::FCollisionObjects>_>
             *)((longlong)FVar19 + -8))[lVar16].Ptr;
  lVar16 = (longlong)FVar19 + lVar16 * 8;
  lVar20 = 0x50;
  if ((*(byte *)(*(longlong *)FVar24 + 8) & 3) != 0) {
    lVar20 = 0x48;
  }
  pFVar17 = FCollisionData::GetQueryData((FCollisionData *)(lVar20 + *(longlong *)FVar24));
  FCollisionData::SetQueryData((FCollisionData *)&pFVar6[4].ImplicitObjects.ArrayNum,pFVar17);
  lVar20 = *(longlong *)(lVar16 + -8);
  uVar22 = 0x50;
  if ((*(byte *)(*(longlong *)FVar24 + 8) & 3) != 0) {
    uVar22 = 0x48;
  }
  pFVar17 = FCollisionData::GetSimData((FCollisionData *)(*(longlong *)FVar24 + (ulonglong)uVar22));
  FCollisionData::SetSimData((FCollisionData *)(lVar20 + 0x48),pFVar17);
  lVar20 = *(longlong *)FVar24;
  if ((*(byte *)(lVar20 + 8) & 3) == 0) {
    puVar18 = (undefined1 *)(lVar20 + 0x78);
  }
  else {
    puVar18 = (undefined1 *)(lVar20 + 0x70);
  }
  *(undefined1 *)(*(longlong *)(lVar16 + -8) + 0x70) = *puVar18;
  pbVar3 = (byte *)(*(longlong *)(lVar16 + -8) + 0x71);
  *pbVar3 = *pbVar3 | 1;
  pbVar3 = (byte *)(*(longlong *)(lVar16 + -8) + 0x71);
  *pbVar3 = *pbVar3 & 0xfd;
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)local_70.AllocatorInstance.Data,
             local_70.ArrayNum);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,local_60);
      piVar4 = &this_01->ScopeCount;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// BuildMultipleConvex @ 143a54ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FConvexOptimizer::BuildMultipleConvex
          (FConvexOptimizer *this,TRefCountPtr<Chaos::FImplicitObjectUnion> *param_1,
          TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3,TBitArray<FDefaultBitArrayAllocator> *param_4)

{
  TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
  *pTVar1;
  int *piVar2;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  int iVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  FImplicitObjectUnion *pFVar8;
  FName FVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *pTVar12;
  code *pcVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  FConvexOptimizer *pFVar19;
  FConvexOptimizer *pFVar20;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *pTVar21;
  TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
  *pTVar22;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *pTVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  bool bVar28;
  bool bVar29;
  bool bVar30;
  uchar uVar31;
  int iVar32;
  TStatId TVar33;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar34;
  FName *pFVar35;
  FThreadSafeStaticStat<Chaos::Private::FStat_STAT_ResizeCachedTriboxes> FVar36;
  ulonglong *puVar37;
  TRefCountPtr<Chaos::FImplicitObject> TVar38;
  FTriboxNode *pFVar39;
  uint uVar40;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar41;
  longlong lVar42;
  ulonglong *puVar43;
  byte *pbVar44;
  ForElementType<FSetElementId> FVar45;
  FImplicitObject *pFVar46;
  uint uVar47;
  FNameEntryId FVar48;
  longlong lVar49;
  ulonglong uVar50;
  FImplicitObject *pFVar51;
  uint uVar52;
  ForAnyElementType FVar53;
  FTribox *this_00;
  int iVar54;
  undefined1 *puVar55;
  TBitArray<FDefaultBitArrayAllocator> *pTVar56;
  uint *puVar57;
  longlong lVar58;
  FScriptContainerElement *pFVar59;
  ulonglong uVar60;
  uint uVar61;
  FTriboxNode *pFVar62;
  TRefCountPtr<Chaos::FImplicitObjectUnion> *pTVar63;
  float fVar64;
  undefined1 auStackY_648 [32];
  bool local_5e7 [5];
  char local_5e2;
  undefined1 local_5e1;
  TArray<Chaos::Private::FConvexOptimizer::FTriboxNode,TSizedDefaultAllocator<32>_> local_5e0;
  ForAnyElementType local_5d0;
  int local_5c8;
  int iStack_5c4;
  FConvexOptimizer *local_5c0;
  uint local_5b8;
  uint uStack_5b4;
  ForAnyElementType local_5b0;
  int local_5a8;
  int iStack_5a4;
  uint local_5a0 [2];
  TRefCountPtr<Chaos::FImplicitObjectUnion> *local_598;
  FCycleCounter local_590;
  FName local_580;
  FScriptContainerElement *local_578;
  undefined8 uStack_570;
  TBitArray<FDefaultBitArrayAllocator> *local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  int iStack_550;
  undefined4 uStack_54c;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *local_548;
  TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
  *local_540;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_538;
  undefined8 local_518;
  undefined4 local_510;
  undefined4 local_50c;
  undefined1 local_508 [4];
  FColor local_504;
  FTriboxNode *local_500;
  FName local_4f8;
  FName local_4f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4c0;
  int local_4a0;
  int local_49c;
  int local_498;
  undefined8 *local_490;
  FImplicitObject *local_488;
  FImplicitObject *local_480;
  undefined8 *local_478;
  FTriboxNode *local_470;
  int local_468;
  undefined1 local_460 [12];
  uint uStack_454;
  TBitArray<FDefaultBitArrayAllocator> *local_450;
  undefined8 uStack_448;
  longlong local_440;
  int iStack_438;
  undefined4 uStack_434;
  FScriptContainerElement *local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_428;
  undefined8 uStack_408;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *local_400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f8;
  undefined8 uStack_3d8;
  FSourceLocation local_3c8;
  code *local_3a8;
  TUniquePtr<Chaos::Private::FCollisionObjects,TDefaultDelete<Chaos::Private::FCollisionObjects>_>
  **local_3a0;
  FTriboxNode **local_398;
  float *local_390;
  TUniquePtr<Chaos::Private::FCollisionObjects,TDefaultDelete<Chaos::Private::FCollisionObjects>_>
  *local_388;
  undefined1 *local_380;
  bool *local_378;
  uint *local_370;
  int *local_368;
  TBitArray<FDefaultBitArrayAllocator> *local_360;
  FName local_350;
  TRangedForIterator local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_318;
  undefined4 local_2dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2d8;
  undefined4 local_29c;
  undefined1 local_298 [24];
  float afStack_280 [2];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  float local_258 [2];
  undefined2 local_250;
  float local_248 [2];
  float afStack_240 [2];
  float local_238 [2];
  float afStack_230 [2];
  float local_228 [2];
  float afStack_220 [2];
  float local_218 [2];
  float afStack_210 [2];
  float local_208 [2];
  undefined1 local_200;
  undefined1 local_1ff;
  undefined8 *local_1f8;
  uint local_1f0;
  float local_1ec;
  undefined1 local_1e8;
  ForAnyElementType local_1e0;
  undefined8 uStack_1d8;
  TBitArray<FDefaultBitArrayAllocator> local_1d0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  void *local_1a0;
  ulonglong uStack_198;
  undefined4 local_190;
  double local_188 [2];
  double local_178 [2];
  double local_168 [2];
  double local_158 [2];
  double local_148 [2];
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_648;
  pTVar1 = &this->RootTriboxes;
  local_5e2 = param_3;
  local_5c0 = this;
  local_598 = param_1;
  local_548 = (TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
               *)pTVar1;
  TVar33 = FThreadSafeStaticStatInner<Chaos::Private::FStat_STAT_BuildConvexTriboxes,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::Private::FStat_STAT_BuildConvexTriboxes,1>
                       *)&StatPtr_STAT_BuildConvexTriboxes);
  uVar52 = 0;
  local_3c8.Impl._Line = 0xf0;
  local_3c8.Impl._Column = 2;
  local_3c8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ConvexOptimizer.cpp"
  ;
  local_590.StatId.ComparisonIndex.Value = 0;
  local_590.StatId.Number = 0;
  local_3c8.Impl._Function =
       "void __cdecl Chaos::Private::BuildConvexTriboxes(const class TRefCountPtr<class Chaos::FImplicitObjectUnion> &,const class TArray<class TUniquePtr<class Chaos::FPerShapeData,struct TDefaultDelete<class Chaos::FPerShapeData> >,class TSizedInlineAllocator<1,32,class TSizedDefaultAllocator<32> > > &,class TUniquePtr<struct Chaos::Private::FCollisionObjects,struct TDefaultDelete<struct Chaos::Private::FCollisionObjects> > &,class TMap<class Chaos::FImplicitObject *,struct Chaos::Private::FConvexOptimizer::FTriboxNode,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class Chaos::FImplicitObject *,struct Chaos::Private::FConvexOptimizer::FTriboxNode,0> > &,int &,const class TBitArray<class FDefaultBitArrayAllocator> &)"
  ;
  local_590.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_590,*(TStatIdData **)&(TVar33.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_3c8);
  puVar10 = &(this->RootTriboxes).field_0x10;
  local_4e0._padding_._0_4_ = 0;
  local_4e0._padding_._4_4_ = 1;
  local_4e0.UnvisitedBitMask = 0xffffffff;
  local_4e0.CurrentBitIndex = 0;
  local_4e0.BaseBitIndex = 0;
  local_4e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar10;
  if (*(int *)&(this->RootTriboxes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e0);
  }
  TStack_538._padding_ = CONCAT44(local_4e0._padding_._4_4_,(undefined4)local_4e0._padding_);
  TStack_538._16_8_ = CONCAT44(local_4e0.CurrentBitIndex,local_4e0.UnvisitedBitMask);
  TStack_538._24_8_ = CONCAT44(local_4e0._28_4_,local_4e0.BaseBitIndex);
  local_518._0_4_ =
       *(int *)&(this->RootTriboxes).field_0x8 - *(int *)&(this->RootTriboxes).field_0x34;
  TStack_538.Array = local_4e0.Array;
  local_450 = local_4e0.Array;
  uStack_434 = local_518._4_4_;
  local_540 = pTVar1;
  local_460._0_8_ = pTVar1;
  unique0x10002693 = TStack_538._padding_;
  uStack_448 = TStack_538._16_8_;
  local_440 = TStack_538._24_8_;
  iStack_438 = (int)local_518;
  pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_318,(TBitArray<FDefaultBitArrayAllocator> *)puVar10,
                       *(int *)&(this->RootTriboxes).field_0x28);
  TStack_538._padding_ = pTVar34->_padding_;
  TStack_538.Array = pTVar34->Array;
  TStack_538.UnvisitedBitMask = pTVar34->UnvisitedBitMask;
  TStack_538.CurrentBitIndex = pTVar34->CurrentBitIndex;
  TStack_538._24_8_ = *(undefined8 *)&pTVar34->BaseBitIndex;
  local_518._0_4_ =
       *(int *)&(this->RootTriboxes).field_0x8 - *(int *)&(this->RootTriboxes).field_0x34;
  local_348.InitialNum = (int)local_518;
  local_348._44_4_ = local_518._4_4_;
  local_540 = pTVar1;
  local_348._padding_ = (longlong)pTVar1;
  local_348._padding_ = TStack_538._padding_;
  local_348._padding_ = (longlong)TStack_538.Array;
  local_348._padding_ = TStack_538._16_8_;
  local_348._padding_ = TStack_538._24_8_;
  bVar29 = TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_460,&local_348);
  if (bVar29) {
    do {
      uStack_448 = CONCAT44(uStack_448._4_4_,(uint)uStack_448 & ~uStack_454);
      *(undefined1 *)
       ((longlong)uStack_448._4_4_ * 0xd0 + 0x50 + *(longlong *)(undefined1 *)local_460._0_8_) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_460 + 8));
      bVar29 = TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_460,&local_348);
    } while (bVar29);
  }
  auVar18 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  uVar17 = _UNK_150631d98;
  uVar14 = ___xmm_00000000ffffffff0000008000000000;
  pFVar39 = (FTriboxNode *)0x0;
  lVar58 = (longlong)(local_598->Reference->MObjects).ArrayNum;
  pFVar62 = pFVar39;
  if (0 < lVar58) {
    do {
      uVar40 = (uint)pFVar39;
      if (((int)uVar52 < 0) || (uVar61 = 1, param_2->ArrayNum <= (int)uVar52)) {
        uVar61 = uVar40;
      }
      uVar47 = uVar40;
      if (uVar61 != 0) {
        uVar47 = uVar52;
      }
      uVar61 = uVar40;
      if ((int)uVar47 < param_2->ArrayNum) {
        uVar61 = ~uVar47 >> 0x1f;
      }
      local_5a0[0] = uVar47;
      if ((uVar61 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar7 = (param_2->AllocatorInstance).SecondaryData;
      FVar41 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )param_2;
      if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    )0x0) {
        FVar41 = FVar7;
      }
      lVar49 = *(longlong *)((longlong)FVar41 + (longlong)(int)uVar47 * 8);
      if ((*(byte *)(lVar49 + 8) & 3) == 0) {
        pbVar44 = (byte *)(lVar49 + 0x79);
      }
      else {
        pbVar44 = (byte *)(lVar49 + 0x71);
      }
      if ((*pbVar44 & 1) != 0) {
        pFVar8 = local_598->Reference;
        if ((int)uVar52 < (pFVar8->MObjects).ArrayNum) {
          uVar40 = ~uVar52 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar21 = local_548;
        pFVar39 = *(FTriboxNode **)
                   ((pFVar8->MObjects).AllocatorInstance.Data + (longlong)pFVar62 * 8);
        local_500 = pFVar39;
        if (pFVar39 != (FTriboxNode *)0x0) {
          uVar40 = ((uint)((ulonglong)pFVar39 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar39 >> 4)) *
                   -0x7a143595;
          uVar40 = (uVar40 >> 0xd ^ uVar40) * -0x3d4d51cb;
          local_470 = pFVar39;
          iVar32 = TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<Chaos::FImplicitObject_const_*>
                             (local_548,uVar40 >> 0x10 ^ uVar40,(FImplicitObject **)&local_470);
          if (iVar32 == -1) {
            local_5e7[0] = false;
            lVar49 = 0;
          }
          else {
            lVar42 = (longlong)iVar32 * 0xd0 + *(longlong *)&pTVar21->Elements;
            lVar49 = lVar42 + 8;
            if (lVar42 == 0) {
              lVar49 = 0;
            }
            local_5e7[0] = lVar49 != 0;
            if (lVar49 != 0) {
              *(undefined1 *)(lVar49 + 0x60) = 0;
              pFVar39 = local_500;
            }
          }
          local_510 = 0;
          local_50c = 0;
          local_250._0_1_ = false;
          local_250._1_1_ = false;
          local_298._0_16_ = auVar18;
          stack0xfffffffffffffd78 = auVar18;
          local_278 = auVar18;
          local_268 = auVar18;
          local_258 = auVar18._0_8_;
          local_188[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_188[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_178[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_178[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_388 = &local_5c0->CollisionObjects;
          local_380 = local_298;
          local_378 = local_5e7;
          local_370 = local_5a0;
          local_368 = &local_5c0->NextConvexId;
          local_3a0 = &local_388;
          local_168[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_168[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_3a8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Private::BuildConvexTriboxes'::__l10::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                      ::Call;
          local_158[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_158[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_360 = param_4;
          local_148[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_148[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_138[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_138[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          (**(code **)(*(longlong *)(pFVar39->NodeTribox).MaxDists + 0x140))
                    (pFVar39,local_188,uVar52,&local_50c);
          if ((local_5e7[0] == false) && (local_250._1_1_ != false)) {
            FTribox::BuildTribox((FTribox *)local_298);
            auVar27 = local_268;
            auVar26 = local_278;
            auVar25 = stack0xfffffffffffffd78;
            auVar24 = local_298._0_16_;
            local_248[0] = (float)local_298._0_4_;
            local_248[1] = (float)local_298._4_4_;
            afStack_240[0] = (float)local_298._8_4_;
            afStack_240[1] = (float)local_298._12_4_;
            local_200 = local_250._0_1_;
            local_228[0] = (float)local_278._0_4_;
            local_228[1] = (float)local_278._4_4_;
            afStack_220[0] = (float)local_278._8_4_;
            afStack_220[1] = (float)local_278._12_4_;
            local_238[0] = (float)local_298._16_4_;
            local_238[1] = (float)local_298._20_4_;
            afStack_230[0] = afStack_280[0];
            afStack_230[1] = afStack_280[1];
            local_1ff = local_250._1_1_;
            local_208[0] = local_258[0];
            local_208[1] = local_258[1];
            local_218[0] = (float)local_268._0_4_;
            local_218[1] = (float)local_268._4_4_;
            afStack_210[0] = (float)local_268._8_4_;
            afStack_210[1] = (float)local_268._12_4_;
            local_1f8 = (undefined8 *)0x0;
            local_1f0 = local_5a0[0];
            local_298._0_16_ = auVar24;
            unique0x10002723 = auVar25;
            local_278 = auVar26;
            local_268 = auVar27;
            local_1ec = FTribox::ComputeVolume((FTribox *)local_298);
            pTVar21 = local_548;
            uVar16 = ___xmm_00000000ffffffff0000008000000000;
            local_398 = &local_500;
            local_390 = local_248;
            uStack_1a8 = 0;
            local_1e8 = 1;
            local_1d0.AllocatorInstance.InlineData[0] = '\0';
            local_1d0.AllocatorInstance.InlineData[1] = '\0';
            local_1d0.AllocatorInstance.InlineData[2] = '\0';
            local_1d0.AllocatorInstance.InlineData[3] = '\0';
            local_1d0.AllocatorInstance.InlineData[4] = '\0';
            local_1d0.AllocatorInstance.InlineData[5] = '\0';
            local_1d0.AllocatorInstance.InlineData[6] = '\0';
            local_1d0.AllocatorInstance.InlineData[7] = '\0';
            local_1d0.AllocatorInstance.InlineData[8] = '\0';
            local_1d0.AllocatorInstance.InlineData[9] = '\0';
            local_1d0.AllocatorInstance.InlineData[10] = '\0';
            local_1d0.AllocatorInstance.InlineData[0xb] = '\0';
            local_1d0.AllocatorInstance.InlineData[0xc] = '\0';
            local_1d0.AllocatorInstance.InlineData[0xd] = '\0';
            local_1d0.AllocatorInstance.InlineData[0xe] = '\0';
            local_1d0.AllocatorInstance.InlineData[0xf] = '\0';
            local_1e0.Data = (FScriptContainerElement *)0x0;
            uStack_1d8 = 0;
            local_1d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            ___xmm_00000000ffffffff0000008000000000 = (int)uVar14;
            _UNK_150631d94 = SUB84(uVar14,4);
            local_1d0.NumBits = ___xmm_00000000ffffffff0000008000000000;
            local_1d0.MaxBits = _UNK_150631d94;
            local_1b0 = uVar17;
            local_1a0 = (void *)0x0;
            uStack_198 = 0;
            local_190 = 0;
            ___xmm_00000000ffffffff0000008000000000 = uVar16;
            TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<Chaos::FImplicitObject_*_const_&,Chaos::Private::FConvexOptimizer::FTriboxNode_&&>_>
                      (local_548,
                       (TPairInitializer<Chaos::FImplicitObject_*_const_&,Chaos::Private::FConvexOptimizer::FTriboxNode_&&>
                        *)local_508,(bool *)&local_398);
            uStack_198 = uStack_198 & 0xffffffff00000000;
            lVar49 = *(longlong *)&pTVar21->Elements + (longlong)(int)local_508 * 0xd0 + 8;
            if (local_1a0 != (void *)0x0) {
              FMemory::Free(local_1a0);
            }
            uVar50 = uStack_1d8 >> 0x20;
            uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
            if ((int)uVar50 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,&local_1e0,0,(int *)((longlong)&uStack_1d8 + 4));
            }
            iVar32 = local_1d0.MaxBits;
            local_1b0 = 0xffffffff;
            local_1d0._24_8_ = (ulonglong)(uint)local_1d0.MaxBits << 0x20;
            if (0x80 < (uint)iVar32) {
              local_1d0.NumBits = 0;
              local_1d0.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1d0,0);
            }
            if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_1d0.AllocatorInstance.SecondaryData);
            }
            if (local_1e0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data);
            }
            if (local_1f8 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(local_1f8 + 1);
              iVar32 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar32 == 1) && (*(int *)((longlong)local_1f8 + 0xc) == 0)) {
                (**(code **)*local_1f8)(local_1f8,1);
              }
            }
          }
          pFVar39 = (FTriboxNode *)0x0;
          if (lVar49 != 0) {
            *(undefined1 *)(lVar49 + 0x48) = 1;
            *(uint *)(lVar49 + 0x58) = local_5a0[0];
          }
        }
      }
      uVar52 = uVar52 + 1;
      pFVar62 = (FTriboxNode *)((longlong)(pFVar62->NodeTribox).MaxDists + 1);
      this = local_5c0;
    } while ((longlong)pFVar62 < lVar58);
  }
  FVar36 = StatPtr_STAT_ResizeCachedTriboxes;
  if (StatPtr_STAT_ResizeCachedTriboxes ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_ResizeCachedTriboxes>)0x0) {
    pFVar35 = ::FName::FName(&local_350,"STAT_ResizeCachedTriboxes");
    FVar36 = (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_ResizeCachedTriboxes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResizeCachedTriboxes,*pFVar35,
                        L"Collisions::ResizeCachedTriboxes","STATGROUP_ChaosCollision",
                        "STATCAT_Advanced",L"ChaosCollision",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  iVar32 = 0;
  FVar9 = *(FName *)FVar36;
  bVar29 = false;
  bVar15 = false;
  local_4f0.ComparisonIndex.Value = 0;
  local_4f0.Number = 0;
  bVar28 = false;
  bVar30 = false;
  FVar48 = FVar9.ComparisonIndex.Value;
  uVar52 = FVar9.Number;
  if ((FVar48.Value != 0) || (uVar52 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_504.field0_0x0.Bits = (FColor_u_0)0x0;
      FGenericPlatformMisc::BeginNamedEvent(&local_504,(char *)*(FName *)((longlong)FVar36 + 0x10));
      bVar29 = false;
      bVar15 = true;
      bVar28 = false;
      bVar30 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4f8.ComparisonIndex.Value = FVar48.Value;
        local_4f8.Number = uVar52;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4f8,(wchar_t *)*(FName *)((longlong)FVar36 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ConvexOptimizer.cpp"
                   ,0xc9);
        bVar29 = true;
        bVar15 = true;
        bVar28 = true;
        bVar30 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_5b8 = FVar48.Value;
      uStack_5b4 = uVar52;
      local_580 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar28 = true;
      goto LAB_143a55336;
    }
  }
  bVar15 = bVar30;
  bVar29 = bVar28;
  bVar28 = false;
  local_580 = local_4f0;
LAB_143a55336:
  local_578 = (FScriptContainerElement *)&this->RootTriboxes;
  local_5b0.Data = (FScriptContainerElement *)0x0;
  local_568 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RootTriboxes).field_0x10;
  local_5a8 = 0;
  iStack_5a4 = 0;
  local_5d0.Data = (FScriptContainerElement *)0x0;
  local_5c8 = 0;
  iStack_5c4 = 0;
  uVar52 = 1;
  iVar54 = *(int *)&(this->RootTriboxes).field_0x28;
  local_558._0_4_ = 0;
  uStack_560._4_4_ = 0;
  if (iVar54 != 0) {
    puVar57 = *(uint **)&(this->RootTriboxes).field_0x20;
    if (puVar57 == (uint *)0x0) {
      puVar57 = (uint *)local_568;
    }
    uVar40 = *puVar57;
    local_558._0_4_ = iVar32;
    while (uVar40 == 0) {
      lVar58 = (longlong)iVar32;
      local_558._0_4_ = (int)local_558 + 0x20;
      iVar32 = iVar32 + 1;
      uStack_560._4_4_ = iVar54;
      if ((int)(iVar54 + -1 + (iVar54 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar32) goto LAB_143a553d3;
      uVar40 = puVar57[lVar58 + 1];
    }
    uVar52 = -uVar40 & uVar40;
    uVar50 = (ulonglong)uVar52 * 2 + 1;
    lVar58 = 0x3f;
    if (uVar50 != 0) {
      for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
      }
    }
    local_4a0 = (int)lVar58;
    uStack_560._4_4_ = local_4a0 + -1 + (int)local_558;
    if (iVar54 < uStack_560._4_4_) {
      uStack_560._4_4_ = iVar54;
    }
  }
LAB_143a553d3:
  uVar40 = *(uint *)&(this->RootTriboxes).field_0x28;
  iStack_550 = *(int *)&(this->RootTriboxes).field_0x8 - *(int *)&(this->RootTriboxes).field_0x34;
  uVar61 = uVar40 & 0xffffffe0;
  uStack_570 = CONCAT44(uVar52,iVar32);
  pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RootTriboxes).field_0x10;
  uStack_560._0_4_ = 0xffffffff;
  local_558._4_4_ = local_29c;
  TStack_3f8._padding_ = uStack_570;
  iVar32 = (int)uVar40 >> 5;
  uStack_3d8 = CONCAT44(uStack_54c,iStack_550);
  TStack_3f8.BaseBitIndex = (int)local_558;
  TStack_3f8._28_4_ = local_29c;
  TStack_3f8.UnvisitedBitMask = 0xffffffff;
  TStack_3f8.CurrentBitIndex = uStack_560._4_4_;
  local_5b8 = uVar40;
  local_400 = (TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
               *)local_578;
  TStack_3f8.Array = local_568;
  if (((int)uVar40 < 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar30)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar21 = local_548;
  uVar52 = *(uint *)&(this->RootTriboxes).field_0x28;
  if (uVar40 != uVar52) {
    puVar10 = *(undefined1 **)&(this->RootTriboxes).field_0x20;
    puVar55 = (undefined1 *)pTVar56;
    if (puVar10 != (undefined1 *)0x0) {
      puVar55 = puVar10;
    }
    uVar40 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)(puVar55 + (longlong)iVar32 * 4);
    while (uVar40 == 0) {
      lVar58 = (longlong)iVar32;
      uVar61 = uVar61 + 0x20;
      iVar32 = iVar32 + 1;
      uVar40 = uVar52;
      local_5b8 = uVar52;
      if ((int)((uVar52 - 1) + ((int)(uVar52 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
      goto LAB_143a55500;
      uVar40 = *(uint *)(puVar55 + lVar58 * 4 + 4);
    }
    uVar50 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
    lVar58 = 0x3f;
    if (uVar50 != 0) {
      for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
      }
    }
    local_49c = (int)lVar58;
    uVar40 = (uVar61 - 1) + local_49c;
    local_5b8 = uVar40;
    if ((int)uVar52 < (int)uVar40) {
      uVar40 = uVar52;
      local_5b8 = uVar52;
    }
  }
LAB_143a55500:
  while( true ) {
    pTVar23 = local_400;
    if (*(int *)&(local_400->Elements).field_0x8 - *(int *)&(local_400->Elements).field_0x34 !=
        (int)uStack_3d8) {
      local_5e7[1] = false;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5e7 + 1);
    }
    FVar9 = local_580;
    iVar32 = local_5a8;
    if (((TStack_3f8.CurrentBitIndex == uVar40) && (TStack_3f8.Array == pTVar56)) &&
       (pTVar23 == pTVar21)) break;
    pFVar59 = (FScriptContainerElement *)
              ((longlong)TStack_3f8.CurrentBitIndex * 0xd0 + *(longlong *)&pTVar23->Elements);
    if (pFVar59[0x50] == (FScriptContainerElement)0x0) {
      if (((local_5b0.Data <= pFVar59) && (pFVar59 < local_5b0.Data + (longlong)iStack_5a4 * 8)) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar30)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (local_5a8 == iStack_5a4) {
        local_5a8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_5b0,&iStack_5a4);
      }
      lVar58 = (longlong)local_5a8;
      local_5a8 = local_5a8 + 1;
      *(ulonglong *)(local_5b0.Data + lVar58 * 8) = *(ulonglong *)pFVar59;
    }
    else {
      local_5c8 = 0;
      if ((iStack_5c4 < 0) && (iStack_5c4 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_5d0,0,&iStack_5c4);
      }
      local_568 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar59 + 0x80);
      iVar54 = 0;
      iVar32 = *(int *)(pFVar59 + 0x98);
      local_578 = pFVar59 + 0x70;
      uVar52 = 1;
      local_558._0_4_ = 0;
      uStack_560._4_4_ = 0;
      if (iVar32 != 0) {
        pTVar56 = local_568;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar59 + 0x90) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar56 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar59 + 0x90);
        }
        uVar40 = *(uint *)(pTVar56->AllocatorInstance).InlineData;
        local_558._0_4_ = 0;
        while (uVar40 == 0) {
          lVar58 = (longlong)iVar54;
          local_558._0_4_ = (int)local_558 + 0x20;
          iVar54 = iVar54 + 1;
          uStack_560._4_4_ = iVar32;
          if ((int)(iVar32 + -1 + (iVar32 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar54) goto LAB_143a556b2;
          uVar40 = *(uint *)((pTVar56->AllocatorInstance).InlineData + lVar58 * 4 + 4);
        }
        uVar52 = -uVar40 & uVar40;
        uVar50 = (ulonglong)uVar52 * 2 + 1;
        lVar58 = 0x3f;
        if (uVar50 != 0) {
          for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
          }
        }
        local_498 = (int)lVar58;
        uStack_560._4_4_ = local_498 + -1 + (int)local_558;
        if (iVar32 < uStack_560._4_4_) {
          uStack_560._4_4_ = iVar32;
        }
      }
LAB_143a556b2:
      iStack_550 = *(int *)(pFVar59 + 0x78) - *(int *)(pFVar59 + 0xa4);
      uVar40 = *(uint *)(pFVar59 + 0x98);
      uStack_570 = CONCAT44(uVar52,iVar54);
      uStack_560._0_4_ = 0xffffffff;
      uVar52 = uVar40 & 0xffffffe0;
      local_558._4_4_ = local_2dc;
      TStack_428._padding_ = uStack_570;
      iVar32 = (int)uVar40 >> 5;
      uStack_408 = CONCAT44(uStack_54c,iStack_550);
      TStack_428.UnvisitedBitMask = 0xffffffff;
      TStack_428.CurrentBitIndex = uStack_560._4_4_;
      TStack_428.BaseBitIndex = (int)local_558;
      TStack_428._28_4_ = local_2dc;
      local_430 = local_578;
      TStack_428.Array = local_568;
      if (((int)uVar40 < 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar30)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar61 = *(uint *)(pFVar59 + 0x98);
      if (uVar40 != uVar61) {
        pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar59 + 0x80);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar59 + 0x90) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar56 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar59 + 0x90);
        }
        uVar40 = -1 << ((byte)uVar40 & 0x1f) &
                 *(uint *)((pTVar56->AllocatorInstance).InlineData + (longlong)iVar32 * 4);
        while (uVar40 == 0) {
          lVar58 = (longlong)iVar32;
          uVar52 = uVar52 + 0x20;
          iVar32 = iVar32 + 1;
          uVar40 = uVar61;
          if ((int)((uVar61 - 1) + ((int)(uVar61 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
          goto LAB_143a557d2;
          uVar40 = *(uint *)((pTVar56->AllocatorInstance).InlineData + lVar58 * 4 + 4);
        }
        uVar50 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
        lVar58 = 0x3f;
        if (uVar50 != 0) {
          for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
          }
        }
        local_468 = (int)lVar58;
        uVar40 = (uVar52 - 1) + local_468;
        if ((int)uVar61 < (int)uVar40) {
          uVar40 = uVar61;
        }
      }
LAB_143a557d2:
      while( true ) {
        pFVar4 = local_430;
        if (*(int *)(local_430 + 8) - *(int *)(local_430 + 0x34) != (int)uStack_408) {
          local_5e7[2] = false;
          `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5e7 + 2);
        }
        iVar32 = local_5c8;
        if (((TStack_428.CurrentBitIndex == uVar40) &&
            (TStack_428.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar59 + 0x80))) &&
           (pFVar4 == pFVar59 + 0x70)) break;
        uVar50 = *(ulonglong *)&pFVar4->field_0x0;
        uVar60 = *(ulonglong *)(uVar50 + (longlong)TStack_428.CurrentBitIndex * 0x18);
        pFVar4 = (FScriptContainerElement *)(uVar50 + (longlong)TStack_428.CurrentBitIndex * 0x18);
        uVar52 = ((uint)(uVar60 >> 0x14) & 0xffff ^ (uint)(uVar60 >> 4)) * -0x7a143595;
        uVar52 = (uVar52 >> 0xd ^ uVar52) * -0x3d4d51cb;
        if (*(int *)&(pTVar21->Elements).field_0x8 != *(int *)&(pTVar21->Elements).field_0x34) {
          FVar11 = (pTVar21->Hash).SecondaryData;
          FVar45 = (ForElementType<FSetElementId>)&pTVar21->Hash;
          if (FVar11 != (ForElementType<FSetElementId>)0x0) {
            FVar45 = FVar11;
          }
          iVar32 = *(int *)((longlong)FVar45 +
                           (ulonglong)(pTVar21->HashSize - 1U & (uVar52 >> 0x10 ^ uVar52)) * 4);
          if (iVar32 != -1) {
            do {
              puVar37 = (ulonglong *)((longlong)iVar32 * 0xd0 + *(longlong *)&pTVar21->Elements);
              if (*puVar37 == uVar60) {
                puVar43 = puVar37 + 1;
                if (puVar37 == (ulonglong *)0x0) {
                  puVar43 = (ulonglong *)0x0;
                }
                if ((puVar43 != (ulonglong *)0x0) && ((char)puVar43[9] == '\0')) {
                  if ((local_5d0.Data <= pFVar4) &&
                     ((pFVar4 < local_5d0.Data + (longlong)iStack_5c4 * 8 &&
                      (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar30)))) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  if (local_5c8 == iStack_5c4) {
                    local_5c8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x808,&local_5d0,&iStack_5c4);
                  }
                  lVar58 = (longlong)local_5c8;
                  local_5c8 = local_5c8 + 1;
                  *(ulonglong *)(local_5d0.Data + lVar58 * 8) = *(ulonglong *)pFVar4;
                }
                break;
              }
              iVar32 = (int)puVar37[0x19];
            } while (iVar32 != -1);
          }
        }
        TStack_428.UnvisitedBitMask = TStack_428.UnvisitedBitMask & ~TStack_428._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_428);
      }
      pFVar4 = local_5d0.Data + (longlong)local_5c8 * 8;
      FVar53.Data = local_5d0.Data;
      while( true ) {
        if (local_5c8 != iVar32) {
          local_5e7[3] = false;
          `TCheckedPointerIterator<Chaos::FImplicitObject_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_5e7 + 3);
        }
        if (FVar53.Data == pFVar4) break;
        local_480 = *(FImplicitObject **)FVar53.Data;
        if (*(int *)(pFVar59 + 0x78) != *(int *)(pFVar59 + 0xa4)) {
          uVar52 = ((uint)((ulonglong)local_480 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_480 >> 4)) * -0x7a143595;
          uVar52 = (uVar52 >> 0xd ^ uVar52) * -0x3d4d51cb;
          TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
          ::RemoveImpl<Chaos::FImplicitObject_const_*>
                    ((TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
                      *)(pFVar59 + 0x70),uVar52 >> 0x10 ^ uVar52,&local_480);
        }
        FVar53.Data = FVar53.Data + 8;
      }
      pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar21->Elements).field_0x10;
    }
    TStack_3f8.UnvisitedBitMask = TStack_3f8.UnvisitedBitMask & ~TStack_3f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f8);
    uVar40 = local_5b8;
  }
  pFVar59 = local_5b0.Data + (longlong)local_5a8 * 8;
  FVar53.Data = local_5b0.Data;
  while( true ) {
    if (local_5a8 != iVar32) {
      local_5e7[4] = false;
      `TCheckedPointerIterator<Chaos::FImplicitObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_5e7 + 4);
    }
    if (FVar53.Data == pFVar59) break;
    local_488 = *(FImplicitObject **)FVar53.Data;
    if (*(int *)&(local_548->Elements).field_0x8 != *(int *)&(local_548->Elements).field_0x34) {
      uVar52 = ((uint)((ulonglong)local_488 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_488 >> 4)) *
               -0x7a143595;
      uVar52 = (uVar52 >> 0xd ^ uVar52) * -0x3d4d51cb;
      TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::FImplicitObject_const_*>(local_548,uVar52 >> 0x10 ^ uVar52,&local_488);
    }
    FVar53.Data = FVar53.Data + 8;
  }
  if (local_5d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data);
  }
  if (local_5b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data);
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FThreadStats::AddMessage(FVar9,CycleScopeEnd);
  }
  if ((local_590.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_590.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_590.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_590.StatId,CycleScopeEnd);
  }
  pTVar63 = local_598;
  pFVar19 = local_5c0;
  local_590.EmittedEvent = '\0';
  if (local_5e2 == '\0') {
    puVar10 = &(local_5c0->RootTriboxes).field_0x10;
    local_4c0._padding_._0_4_ = 0;
    pTVar1 = &local_5c0->RootTriboxes;
    local_4c0._padding_._4_4_ = 1;
    local_4c0.UnvisitedBitMask = 0xffffffff;
    local_4c0.CurrentBitIndex = 0;
    local_4c0.BaseBitIndex = 0;
    local_4c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar10;
    if (*(int *)&(local_5c0->RootTriboxes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4c0);
    }
    uStack_570 = CONCAT44(local_4c0._padding_._4_4_,(undefined4)local_4c0._padding_);
    uStack_560._4_4_ = local_4c0.CurrentBitIndex;
    uStack_560._0_4_ = local_4c0.UnvisitedBitMask;
    local_558._4_4_ = local_4c0._28_4_;
    local_558._0_4_ = local_4c0.BaseBitIndex;
    iStack_550 = *(int *)&(pFVar19->RootTriboxes).field_0x8 -
                 *(int *)&(pFVar19->RootTriboxes).field_0x34;
    local_568 = local_4c0.Array;
    local_518 = CONCAT44(uStack_54c,iStack_550);
    TStack_538.Array = local_4c0.Array;
    local_578 = (FScriptContainerElement *)pTVar1;
    local_540 = pTVar1;
    TStack_538._padding_ = uStack_570;
    TStack_538._16_8_ = uStack_560;
    TStack_538._24_8_ = local_558;
    pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_2d8,(TBitArray<FDefaultBitArrayAllocator> *)puVar10,
                         *(int *)&(pFVar19->RootTriboxes).field_0x28);
    uStack_570 = pTVar34->_padding_;
    local_580 = (FName)pTVar34->Array;
    uVar14._0_4_ = pTVar34->UnvisitedBitMask;
    uVar14._4_4_ = pTVar34->CurrentBitIndex;
    local_558 = *(undefined8 *)&pTVar34->BaseBitIndex;
    local_568 = (TBitArray<FDefaultBitArrayAllocator> *)local_580;
    uStack_560 = uVar14;
    while( true ) {
      pTVar22 = local_540;
      if (*(int *)&local_540->field_0x8 - *(int *)&local_540->field_0x34 != (int)local_518) {
        local_5e1 = 0;
        `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5e1);
      }
      if (((TStack_538.CurrentBitIndex == uVar14._4_4_) && ((FName)TStack_538.Array == local_580))
         && (pTVar22 == pTVar1)) break;
      lVar58 = *(longlong *)pTVar22;
      lVar49 = (longlong)TStack_538.CurrentBitIndex * 0xd0;
      if (*(char *)(lVar49 + 0x51 + lVar58) != '\0') {
        pFVar51 = *(FImplicitObject **)(lVar49 + 0x58 + lVar58);
        if (pFVar51 == (FImplicitObject *)0x0) {
LAB_143a55c74:
          TVar38 = FTribox::MakeConvex((FTribox *)(lVar49 + lVar58 + 8));
          TRefCountPtr<Chaos::FImplicitObject>::operator=
                    ((TRefCountPtr<Chaos::FImplicitObject> *)(lVar49 + lVar58 + 0x58),
                     (TRefCountPtr<Chaos::FImplicitObject> *)TVar38.Reference);
          if (local_490 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(local_490 + 1);
            iVar32 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((iVar32 == 1) && (*(int *)((longlong)local_490 + 0xc) == 0)) {
              (**(code **)*local_490)(local_490,1);
            }
          }
          iVar32 = local_5c0->NextConvexId;
          local_5c0->NextConvexId = iVar32 + 1;
          *(int *)(lVar49 + 0xc0 + lVar58) = iVar32;
        }
        else {
          uVar31 = FImplicitObject::GetType(pFVar51);
          pFVar46 = (FImplicitObject *)0x0;
          if (uVar31 == '\b') {
            pFVar46 = pFVar51;
          }
          fVar5 = *(float *)&pFVar46[3]._padding_;
          fVar64 = FTribox::ComputeVolume((FTribox *)(lVar49 + lVar58 + 8));
          if (fVar5 != fVar64) goto LAB_143a55c74;
        }
        pFVar19 = local_5c0;
        pFVar59 = (local_5c0->SimplifiedConvexes).AllocatorInstance.Data;
        if (((pFVar59 <= (FScriptContainerElement *)(lVar58 + 0x58 + lVar49)) &&
            ((FScriptContainerElement *)(lVar58 + 0x58 + lVar49) <
             pFVar59 + (longlong)(local_5c0->SimplifiedConvexes).ArrayMax * 8)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar32 = (pFVar19->SimplifiedConvexes).ArrayNum;
        piVar2 = &(pFVar19->SimplifiedConvexes).ArrayMax;
        if (iVar32 == *piVar2) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pFVar19,piVar2);
        }
        (pFVar19->SimplifiedConvexes).ArrayNum = iVar32 + 1;
        pFVar59 = (pFVar19->SimplifiedConvexes).AllocatorInstance.Data;
        *(undefined8 *)(pFVar59 + (longlong)iVar32 * 8) = 0;
        lVar42 = *(longlong *)(lVar49 + 0x58 + lVar58);
        *(longlong *)(pFVar59 + (longlong)iVar32 * 8) = lVar42;
        if (lVar42 != 0) {
          LOCK();
          *(int *)(lVar42 + 8) = *(int *)(lVar42 + 8) + 1;
          UNLOCK();
        }
        iVar32 = (pFVar19->SimplifiedConvexes).ArrayNum;
        iVar54 = *(int *)(lVar49 + 0xc0 + lVar58);
        pTVar12 = &((pFVar19->CollisionObjects).Ptr)->ImplicitObjects;
        uVar40 = iVar32 - 1;
        iVar6 = *(int *)(lVar49 + 0x60 + lVar58);
        local_128[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_128[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_118[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_118[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        uVar52 = 0;
        if ((int)uVar40 < iVar32) {
          uVar52 = ~uVar40 >> 0x1f;
        }
        local_108[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_108[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_f8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_f8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_d8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_d8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        if ((uVar52 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FImplicitBVH::CollectLeafObject
                  (*(FImplicitObject **)
                    ((pFVar19->SimplifiedConvexes).AllocatorInstance.Data +
                    (longlong)(pFVar19->SimplifiedConvexes).ArrayNum * 8 + -8),
                   (TRigidTransform<double,3> *)local_128,iVar6,pTVar12,iVar54);
      }
      TStack_538.UnvisitedBitMask = TStack_538.UnvisitedBitMask & ~TStack_538._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_538);
    }
  }
  else {
    local_5e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5e0.ArrayNum = 0;
    local_5e0.ArrayMax = 0;
    BuildUnionConnectivity(local_5c0,local_598);
    MergeConnectedShapes(pFVar19,pTVar63,&local_5e0);
    uVar50 = (ulonglong)local_5e0.ArrayNum;
    uVar52 = 0;
    iVar32 = local_5e0.ArrayNum;
    if (0 < local_5e0.ArrayNum) {
      lVar58 = 0;
      uVar60 = uVar50;
      do {
        uVar40 = 0;
        if ((int)uVar52 < (int)uVar50) {
          uVar40 = ~uVar52 >> 0x1f;
        }
        if (uVar40 == 0) {
          bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar29) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar50 = local_5e0._8_8_ & 0xffffffff;
        }
        if (local_5e0.AllocatorInstance.Data[lVar58 + 0x49] != (FScriptContainerElement)0x0) {
          uVar40 = 0;
          if ((int)uVar52 < (int)uVar50) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if (uVar40 == 0) {
            bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar29) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar50 = local_5e0._8_8_ & 0xffffffff;
          }
          if (CVars::ChaosConvexMinVolume <
              *(float *)(local_5e0.AllocatorInstance.Data + lVar58 + 0x5c)) {
            pFVar8 = pTVar63->Reference;
            uVar40 = 0;
            if ((int)uVar52 < (int)uVar50) {
              uVar40 = ~uVar52 >> 0x1f;
            }
            iVar32 = (int)uVar50;
            if (uVar40 == 0) {
              bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar29) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar32 = local_5e0.ArrayNum;
            }
            uVar40 = *(uint *)(local_5e0.AllocatorInstance.Data + lVar58 + 0x58);
            uVar61 = 0;
            if ((int)uVar40 < (pFVar8->MObjects).ArrayNum) {
              uVar61 = ~uVar40 >> 0x1f;
            }
            if (uVar61 == 0) {
              bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar29) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar32 = local_5e0.ArrayNum;
            }
            pFVar39 = TMapBase<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
                      ::Find((TMapBase<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
                              *)&pFVar19->RootTriboxes,
                             *(FImplicitObject **)
                              ((pFVar8->MObjects).AllocatorInstance.Data + (longlong)(int)uVar40 * 8
                              ));
            if ((pFVar39->TriboxConvex).Reference == (FImplicitObject *)0x0) {
LAB_143a560cb:
              uVar40 = 0;
              if ((int)uVar52 < iVar32) {
                uVar40 = ~uVar52 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              TVar38 = FTribox::MakeConvex((FTribox *)
                                           (local_5e0.AllocatorInstance.Data +
                                           (longlong)(int)uVar52 * 0xc0));
              TRefCountPtr<Chaos::FImplicitObject>::operator=
                        (&pFVar39->TriboxConvex,
                         (TRefCountPtr<Chaos::FImplicitObject> *)TVar38.Reference);
              if (local_478 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_478 + 1);
                iVar32 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar32 == 1) && (*(int *)((longlong)local_478 + 0xc) == 0)) {
                  (**(code **)*local_478)(local_478,1);
                }
              }
              iVar32 = local_5c0->NextConvexId;
              local_5c0->NextConvexId = iVar32 + 1;
              pFVar39->ConvexId = iVar32;
            }
            else {
              uVar40 = 0;
              if ((int)uVar52 < iVar32) {
                uVar40 = ~uVar52 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar51 = (pFVar39->TriboxConvex).Reference;
              this_00 = (FTribox *)(local_5e0.AllocatorInstance.Data + (longlong)(int)uVar52 * 0xc0)
              ;
              uVar31 = FImplicitObject::GetType(pFVar51);
              if (uVar31 != '\b') {
                pFVar51 = (FImplicitObject *)0x0;
              }
              fVar5 = *(float *)&pFVar51[3]._padding_;
              fVar64 = FTribox::ComputeVolume(this_00);
              if (fVar5 != fVar64) {
                iVar32 = local_5e0.ArrayNum;
                goto LAB_143a560cb;
              }
            }
            pFVar20 = local_5c0;
            pFVar59 = (local_5c0->SimplifiedConvexes).AllocatorInstance.Data;
            pTVar3 = &pFVar39->TriboxConvex;
            if (((pFVar59 <= pTVar3) &&
                (pTVar3 < pFVar59 + (longlong)(local_5c0->SimplifiedConvexes).ArrayMax * 8)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar29)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            iVar32 = (pFVar20->SimplifiedConvexes).ArrayNum;
            piVar2 = &(pFVar20->SimplifiedConvexes).ArrayMax;
            if (iVar32 == *piVar2) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)pFVar20,piVar2);
            }
            (pFVar20->SimplifiedConvexes).ArrayNum = iVar32 + 1;
            pFVar59 = (pFVar20->SimplifiedConvexes).AllocatorInstance.Data;
            *(undefined8 *)(pFVar59 + (longlong)iVar32 * 8) = 0;
            pFVar51 = pTVar3->Reference;
            *(FImplicitObject **)(pFVar59 + (longlong)iVar32 * 8) = pFVar51;
            if (pFVar51 != (FImplicitObject *)0x0) {
              LOCK();
              *(int *)&pFVar51->_padding_ = (int)pFVar51->_padding_ + 1;
              UNLOCK();
            }
            iVar32 = pFVar39->ConvexId;
            pTVar12 = &((pFVar20->CollisionObjects).Ptr)->ImplicitObjects;
            uVar40 = 0;
            if ((int)uVar52 < local_5e0.ArrayNum) {
              uVar40 = ~uVar52 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            iVar54 = *(int *)(local_5e0.AllocatorInstance.Data + lVar58 + 0x58);
            local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            iVar6 = (local_5c0->SimplifiedConvexes).ArrayNum;
            local_b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
            local_b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
            local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
            local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
            uVar61 = iVar6 - 1;
            local_98[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
            local_98[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
            local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
            local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
            local_78[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
            local_78[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
            uVar40 = 0;
            if ((int)uVar61 < iVar6) {
              uVar40 = ~uVar61 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            FImplicitBVH::CollectLeafObject
                      (*(FImplicitObject **)
                        ((local_5c0->SimplifiedConvexes).AllocatorInstance.Data +
                        (longlong)(local_5c0->SimplifiedConvexes).ArrayNum * 8 + -8),
                       (TRigidTransform<double,3> *)local_c8,iVar54,pTVar12,iVar32);
            uVar50 = local_5e0._8_8_ & 0xffffffff;
            pTVar63 = local_598;
          }
        }
        iVar32 = (int)uVar50;
        uVar52 = uVar52 + 1;
        lVar58 = lVar58 + 0xc0;
        uVar60 = uVar60 - 1;
      } while (uVar60 != 0);
    }
    DestructItems<Chaos::Private::FConvexOptimizer::FTriboxNode,int>
              ((FTriboxNode *)local_5e0.AllocatorInstance.Data,iVar32);
    if ((FTriboxNode *)local_5e0.AllocatorInstance.Data != (FTriboxNode *)0x0) {
      FMemory::Free(local_5e0.AllocatorInstance.Data);
    }
  }
  return;
}

// BuildSingleConvex @ 143a563d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FConvexOptimizer::BuildSingleConvex
          (FConvexOptimizer *this,TRefCountPtr<Chaos::FImplicitObjectUnion> *param_1,
          TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2,TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
  *pTVar1;
  int *piVar2;
  longlong *plVar3;
  FTriboxNode *this_00;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  float fVar7;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar8;
  FImplicitObjectUnion *pFVar9;
  FName FVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ForElementType<FSetElementId> FVar13;
  TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *pTVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
  *pTVar22;
  FConvexOptimizer *pFVar23;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *pTVar24;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *pTVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  uchar uVar29;
  int iVar30;
  TStatId TVar31;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar32;
  FName *pFVar33;
  FThreadSafeStaticStat<Chaos::Private::FStat_STAT_ResizeCachedTriboxes> FVar34;
  ulonglong *puVar35;
  TRefCountPtr<Chaos::FImplicitObject> TVar36;
  uint uVar37;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar38;
  longlong lVar39;
  FImplicitObject *pFVar40;
  FImplicitObject *pFVar41;
  byte *pbVar42;
  ForElementType<FSetElementId> FVar43;
  FTribox *pFVar44;
  FNameEntryId FVar45;
  longlong lVar46;
  uint uVar47;
  FImplicitObject *pFVar48;
  ForAnyElementType FVar49;
  int iVar50;
  uint uVar51;
  undefined1 *puVar52;
  TBitArray<FDefaultBitArrayAllocator> *pTVar53;
  uint *puVar54;
  longlong lVar55;
  FScriptContainerElement *pFVar56;
  uint uVar57;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *pTVar58;
  float fVar59;
  undefined1 auStackY_618 [32];
  bool local_5b7 [7];
  ForAnyElementType local_5b0;
  int local_5a8;
  int iStack_5a4;
  uint local_5a0;
  uint uStack_59c;
  ForAnyElementType local_598;
  int local_590;
  int iStack_58c;
  uint local_588 [2];
  FCycleCounter local_580;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *local_570;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *local_568;
  undefined8 uStack_560;
  TBitArray<FDefaultBitArrayAllocator> *local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  int iStack_540;
  undefined4 uStack_53c;
  FName local_538;
  TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
  *local_530;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_528;
  undefined8 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined1 local_4f8 [4];
  FColor local_4f4;
  FConvexOptimizer *local_4f0;
  FImplicitObject *local_4e8;
  FName local_4e0;
  FName local_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4a8;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  FImplicitObject *local_478;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *local_470;
  FImplicitObject *local_468;
  FImplicitObject *local_460;
  undefined8 *local_458;
  FScriptContainerElement *local_450;
  undefined1 local_448 [12];
  uint uStack_43c;
  TBitArray<FDefaultBitArrayAllocator> *local_438;
  undefined8 uStack_430;
  longlong local_428;
  int iStack_420;
  undefined4 uStack_41c;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_410;
  undefined8 uStack_3f0;
  TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
  *local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e0;
  undefined8 uStack_3c0;
  FSourceLocation local_3b8;
  code *local_398;
  TUniquePtr<Chaos::Private::FCollisionObjects,TDefaultDelete<Chaos::Private::FCollisionObjects>_>
  **local_390;
  FImplicitObject **local_388;
  float *local_380;
  TUniquePtr<Chaos::Private::FCollisionObjects,TDefaultDelete<Chaos::Private::FCollisionObjects>_>
  *local_378;
  FTribox *local_370;
  bool *local_368;
  uint *local_360;
  int *local_358;
  TBitArray<FDefaultBitArrayAllocator> *local_350;
  FName local_340;
  float local_338 [2];
  float afStack_330 [2];
  float local_328 [2];
  float afStack_320 [2];
  float local_318 [2];
  float afStack_310 [2];
  float local_308 [2];
  float afStack_300 [2];
  float local_2f8 [2];
  undefined4 local_2f0;
  TRangedForIterator local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b8;
  undefined4 local_27c;
  undefined4 local_25c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_258;
  FTribox local_238;
  float local_1e8 [2];
  float afStack_1e0 [2];
  float local_1d8 [2];
  float afStack_1d0 [2];
  float local_1c8 [2];
  float afStack_1c0 [2];
  float local_1b8 [2];
  float afStack_1b0 [2];
  float local_1a8 [2];
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined8 *local_198;
  uint local_190;
  float local_18c;
  undefined1 local_188;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined4 local_130;
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_618;
  pTVar1 = &this->RootTriboxes;
  local_570 = (TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
               *)pTVar1;
  local_538 = (FName)param_3;
  local_4f0 = this;
  TVar31 = FThreadSafeStaticStatInner<Chaos::Private::FStat_STAT_BuildConvexTriboxes,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::Private::FStat_STAT_BuildConvexTriboxes,1>
                       *)&StatPtr_STAT_BuildConvexTriboxes);
  pFVar48 = (FImplicitObject *)0x0;
  local_3b8.Impl._Line = 0xf0;
  local_3b8.Impl._Column = 2;
  local_3b8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ConvexOptimizer.cpp"
  ;
  local_580.StatId.ComparisonIndex.Value = 0;
  local_580.StatId.Number = 0;
  local_3b8.Impl._Function =
       "void __cdecl Chaos::Private::BuildConvexTriboxes(const class TRefCountPtr<class Chaos::FImplicitObjectUnion> &,const class TArray<class TUniquePtr<class Chaos::FPerShapeData,struct TDefaultDelete<class Chaos::FPerShapeData> >,class TSizedInlineAllocator<1,32,class TSizedDefaultAllocator<32> > > &,class TUniquePtr<struct Chaos::Private::FCollisionObjects,struct TDefaultDelete<struct Chaos::Private::FCollisionObjects> > &,class TMap<class Chaos::FImplicitObject *,struct Chaos::Private::FConvexOptimizer::FTriboxNode,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class Chaos::FImplicitObject *,struct Chaos::Private::FConvexOptimizer::FTriboxNode,0> > &,int &,const class TBitArray<class FDefaultBitArrayAllocator> &)"
  ;
  local_580.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_580,*(TStatIdData **)&(TVar31.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_3b8);
  puVar11 = &(this->RootTriboxes).field_0x10;
  local_4c8._padding_._0_4_ = 0;
  local_4c8._padding_._4_4_ = 1;
  local_4c8.UnvisitedBitMask = 0xffffffff;
  local_4c8.CurrentBitIndex = 0;
  local_4c8.BaseBitIndex = 0;
  local_4c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
  if (*(int *)&(this->RootTriboxes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4c8);
  }
  TStack_528._padding_ = CONCAT44(local_4c8._padding_._4_4_,(undefined4)local_4c8._padding_);
  TStack_528._16_8_ = CONCAT44(local_4c8.CurrentBitIndex,local_4c8.UnvisitedBitMask);
  TStack_528._24_8_ = CONCAT44(local_4c8._28_4_,local_4c8.BaseBitIndex);
  local_508._0_4_ =
       *(int *)&(this->RootTriboxes).field_0x8 - *(int *)&(this->RootTriboxes).field_0x34;
  TStack_528.Array = local_4c8.Array;
  local_438 = local_4c8.Array;
  uStack_41c = local_508._4_4_;
  local_530 = pTVar1;
  local_448._0_8_ = pTVar1;
  unique0x10002007 = TStack_528._padding_;
  uStack_430 = TStack_528._16_8_;
  local_428 = TStack_528._24_8_;
  iStack_420 = (int)local_508;
  pTVar32 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_2b8,(TBitArray<FDefaultBitArrayAllocator> *)puVar11,
                       *(int *)&(this->RootTriboxes).field_0x28);
  TStack_528._padding_ = pTVar32->_padding_;
  TStack_528.Array = pTVar32->Array;
  TStack_528.UnvisitedBitMask = pTVar32->UnvisitedBitMask;
  TStack_528.CurrentBitIndex = pTVar32->CurrentBitIndex;
  TStack_528._24_8_ = *(undefined8 *)&pTVar32->BaseBitIndex;
  local_508._0_4_ =
       *(int *)&(this->RootTriboxes).field_0x8 - *(int *)&(this->RootTriboxes).field_0x34;
  local_2e8.InitialNum = (int)local_508;
  local_2e8._44_4_ = local_508._4_4_;
  local_530 = pTVar1;
  local_2e8._padding_ = (longlong)pTVar1;
  local_2e8._padding_ = TStack_528._padding_;
  local_2e8._padding_ = (longlong)TStack_528.Array;
  local_2e8._padding_ = TStack_528._16_8_;
  local_2e8._padding_ = TStack_528._24_8_;
  bVar27 = TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_448,&local_2e8);
  if (bVar27) {
    do {
      uStack_430 = CONCAT44(uStack_430._4_4_,(uint)uStack_430 & ~uStack_43c);
      *(undefined1 *)
       ((longlong)uStack_430._4_4_ * 0xd0 + 0x50 + *(longlong *)(undefined1 *)local_448._0_8_) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_448 + 8));
      bVar27 = TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_448,&local_2e8);
    } while (bVar27);
  }
  uVar20 = _UNK_150af7a58;
  uVar16 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  uVar12 = _UNK_150631d98;
  uVar6 = ___xmm_00000000ffffffff0000008000000000;
  lVar55 = (longlong)(param_1->Reference->MObjects).ArrayNum;
  pFVar40 = pFVar48;
  pFVar41 = pFVar48;
  if (0 < lVar55) {
    do {
      uVar47 = (uint)pFVar48;
      uVar37 = (uint)pFVar40;
      if (((int)uVar47 < 0) || (uVar51 = 1, param_2->ArrayNum <= (int)uVar47)) {
        uVar51 = uVar37;
      }
      uVar57 = uVar37;
      if (uVar51 != 0) {
        uVar57 = uVar47;
      }
      uVar51 = uVar37;
      if ((int)uVar57 < param_2->ArrayNum) {
        uVar51 = ~uVar57 >> 0x1f;
      }
      local_588[0] = uVar57;
      if ((uVar51 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      FVar8 = (param_2->AllocatorInstance).SecondaryData;
      FVar38 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )param_2;
      if (FVar8 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    )0x0) {
        FVar38 = FVar8;
      }
      lVar46 = *(longlong *)((longlong)FVar38 + (longlong)(int)uVar57 * 8);
      if ((*(byte *)(lVar46 + 8) & 3) == 0) {
        pbVar42 = (byte *)(lVar46 + 0x79);
      }
      else {
        pbVar42 = (byte *)(lVar46 + 0x71);
      }
      if ((*pbVar42 & 1) != 0) {
        pFVar9 = param_1->Reference;
        if ((int)uVar47 < (pFVar9->MObjects).ArrayNum) {
          uVar37 = ~uVar47 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pTVar58 = local_570;
        pFVar40 = *(FImplicitObject **)
                   ((pFVar9->MObjects).AllocatorInstance.Data + (longlong)pFVar41 * 8);
        local_4e8 = pFVar40;
        if (pFVar40 != (FImplicitObject *)0x0) {
          uVar37 = ((uint)((ulonglong)pFVar40 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar40 >> 4)) *
                   -0x7a143595;
          uVar37 = (uVar37 >> 0xd ^ uVar37) * -0x3d4d51cb;
          local_478 = pFVar40;
          iVar30 = TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<Chaos::FImplicitObject_const_*>
                             (local_570,uVar37 >> 0x10 ^ uVar37,&local_478);
          if (iVar30 == -1) {
            lVar46 = 0;
            local_5b7[0] = false;
          }
          else {
            lVar39 = (longlong)iVar30 * 0xd0 + *(longlong *)&pTVar58->Elements;
            lVar46 = lVar39 + 8;
            if (lVar39 == 0) {
              lVar46 = 0;
            }
            local_5b7[0] = lVar46 != 0;
            if (lVar46 != 0) {
              *(undefined1 *)(lVar46 + 0x60) = 0;
              pFVar40 = local_4e8;
            }
          }
          uVar21 = _UNK_150af7a58;
          uVar19 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
          local_500 = 0;
          local_4fc = 0;
          local_238.bIsValid = false;
          local_238.bHasDatas = false;
          ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
          _UNK_150af7a54 = SUB84(uVar16,4);
          local_238.MaxDists[0] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
          local_238.MaxDists[1] = _UNK_150af7a54;
          _UNK_150af7a58 = (float)uVar20;
          _UNK_150af7a5c = SUB84(uVar20,4);
          local_238.MaxDists[2] = _UNK_150af7a58;
          local_238.MaxDists[3] = _UNK_150af7a5c;
          ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
          _UNK_150af7a54 = SUB84(uVar16,4);
          local_238.MaxDists[4] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
          local_238.MaxDists[5] = _UNK_150af7a54;
          _UNK_150af7a58 = (float)uVar20;
          _UNK_150af7a5c = SUB84(uVar20,4);
          local_238.MaxDists[6] = _UNK_150af7a58;
          local_238.MaxDists[7] = _UNK_150af7a5c;
          ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
          _UNK_150af7a54 = SUB84(uVar16,4);
          local_238.MaxDists[8] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
          local_238.MaxDists[9] = _UNK_150af7a54;
          _UNK_150af7a58 = (float)uVar20;
          _UNK_150af7a5c = SUB84(uVar20,4);
          local_238.MaxDists[10] = _UNK_150af7a58;
          local_238.MaxDists[0xb] = _UNK_150af7a5c;
          ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
          _UNK_150af7a54 = SUB84(uVar16,4);
          local_238.MaxDists[0xc] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
          local_238.MaxDists[0xd] = _UNK_150af7a54;
          _UNK_150af7a58 = (float)uVar20;
          _UNK_150af7a5c = SUB84(uVar20,4);
          local_238.MaxDists[0xe] = _UNK_150af7a58;
          local_238.MaxDists[0xf] = _UNK_150af7a5c;
          ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
          _UNK_150af7a54 = SUB84(uVar16,4);
          local_238.MaxDists[0x10] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
          local_238.MaxDists[0x11] = _UNK_150af7a54;
          local_128[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_128[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_118[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_118[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_378 = &local_4f0->CollisionObjects;
          local_370 = &local_238;
          local_368 = local_5b7;
          local_360 = local_588;
          local_358 = &local_4f0->NextConvexId;
          local_350 = (TBitArray<FDefaultBitArrayAllocator> *)local_538;
          local_390 = &local_378;
          local_398 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Private::BuildConvexTriboxes'::__l10::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                      ::Call;
          local_108[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_108[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_f8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_f8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_d8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_d8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          ___xmm_ff7fffffff7fffffff7fffffff7fffff = uVar19;
          _UNK_150af7a58 = uVar21;
          (**(code **)(pFVar40->_padding_ + 0x140))(pFVar40,local_128,pFVar48,&local_4fc);
          if ((local_5b7[0] == false) && (local_238.bHasDatas != false)) {
            FTribox::BuildTribox(&local_238);
            local_1e8[0] = local_238.MaxDists[0];
            local_1e8[1] = local_238.MaxDists[1];
            afStack_1e0[0] = local_238.MaxDists[2];
            afStack_1e0[1] = local_238.MaxDists[3];
            local_1a0 = local_238.bIsValid;
            local_1c8[0] = local_238.MaxDists[8];
            local_1c8[1] = local_238.MaxDists[9];
            afStack_1c0[0] = local_238.MaxDists[10];
            afStack_1c0[1] = local_238.MaxDists[0xb];
            local_1d8[0] = local_238.MaxDists[4];
            local_1d8[1] = local_238.MaxDists[5];
            afStack_1d0[0] = local_238.MaxDists[6];
            afStack_1d0[1] = local_238.MaxDists[7];
            local_19f = local_238.bHasDatas;
            local_1a8[0] = local_238.MaxDists[0x10];
            local_1a8[1] = local_238.MaxDists[0x11];
            local_1b8[0] = local_238.MaxDists[0xc];
            local_1b8[1] = local_238.MaxDists[0xd];
            afStack_1b0[0] = local_238.MaxDists[0xe];
            afStack_1b0[1] = local_238.MaxDists[0xf];
            local_198 = (undefined8 *)0x0;
            local_190 = local_588[0];
            local_18c = FTribox::ComputeVolume(&local_238);
            pTVar58 = local_570;
            local_388 = &local_4e8;
            local_170 = ZEXT416(0);
            local_380 = local_1e8;
            local_188 = 1;
            local_180 = ZEXT816(0);
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar6;
            local_160 = auVar17 << 0x40;
            local_150._8_8_ = 0;
            local_150._0_8_ = uVar12;
            local_140._0_12_ = ZEXT812(0);
            local_140._12_4_ = 0;
            local_130 = 0;
            TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<Chaos::FImplicitObject_*_const_&,Chaos::Private::FConvexOptimizer::FTriboxNode_&&>_>
                      (local_570,
                       (TPairInitializer<Chaos::FImplicitObject_*_const_&,Chaos::Private::FConvexOptimizer::FTriboxNode_&&>
                        *)local_4f8,(bool *)&local_388);
            local_140._8_4_ = 0;
            lVar46 = *(longlong *)&pTVar58->Elements + (longlong)(int)local_4f8 * 0xd0 + 8;
            if ((void *)local_140._0_8_ != (void *)0x0) {
              FMemory::Free((void *)local_140._0_8_);
            }
            local_180._8_4_ = 0;
            if (local_180._12_4_ != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,(ForAnyElementType *)local_180,0,(int *)(local_180 + 0xc));
            }
            local_150._0_8_ = 0xffffffff;
            local_160._8_4_ = 0;
            if (0x80 < (uint)local_160._12_4_) {
              local_160._12_4_ = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)local_170,0);
            }
            if ((ForElementType<unsigned_int>)local_160._0_8_ != (ForElementType<unsigned_int>)0x0)
            {
              FMemory::Free((void *)local_160._0_8_);
            }
            if ((FScriptContainerElement *)local_180._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_180._0_8_);
            }
            if (local_198 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(local_198 + 1);
              iVar30 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar30 == 1) && (*(int *)((longlong)local_198 + 0xc) == 0)) {
                (**(code **)*local_198)(local_198,1);
              }
            }
          }
          pFVar40 = (FImplicitObject *)0x0;
          if (lVar46 != 0) {
            *(undefined1 *)(lVar46 + 0x48) = 1;
            *(uint *)(lVar46 + 0x58) = local_588[0];
          }
        }
      }
      pFVar48 = (FImplicitObject *)(ulonglong)(uVar47 + 1);
      pFVar41 = (FImplicitObject *)((longlong)&pFVar41->_padding_ + 1);
    } while ((longlong)pFVar41 < lVar55);
  }
  FVar34 = StatPtr_STAT_ResizeCachedTriboxes;
  if (StatPtr_STAT_ResizeCachedTriboxes ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_ResizeCachedTriboxes>)0x0) {
    pFVar33 = ::FName::FName(&local_340,"STAT_ResizeCachedTriboxes");
    FVar34 = (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_ResizeCachedTriboxes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResizeCachedTriboxes,*pFVar33,
                        L"Collisions::ResizeCachedTriboxes","STATGROUP_ChaosCollision",
                        "STATCAT_Advanced",L"ChaosCollision",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  pFVar48 = (FImplicitObject *)0x0;
  FVar10 = *(FName *)FVar34;
  bVar27 = false;
  bVar18 = false;
  local_4d8.ComparisonIndex.Value = 0;
  local_4d8.Number = 0;
  bVar26 = false;
  bVar28 = false;
  FVar45 = FVar10.ComparisonIndex.Value;
  uVar37 = FVar10.Number;
  if ((FVar45.Value == 0) && (uVar37 == 0)) {
LAB_143a56c00:
    bVar18 = bVar28;
    bVar27 = bVar26;
    bVar26 = false;
    local_538 = local_4d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4f4.field0_0x0.Bits = (FColor_u_0)0x0;
      FGenericPlatformMisc::BeginNamedEvent(&local_4f4,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar27 = false;
      bVar18 = true;
      bVar26 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4e0.ComparisonIndex.Value = FVar45.Value;
        local_4e0.Number = uVar37;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4e0,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ConvexOptimizer.cpp"
                   ,0xc9);
        bVar27 = true;
        bVar18 = true;
        bVar26 = true;
        bVar28 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143a56c00;
    local_5a0 = FVar45.Value;
    uStack_59c = uVar37;
    local_538 = FVar10;
    FThreadStats::AddMessage(FVar10,CycleScopeStart);
    bVar26 = true;
  }
  pTVar58 = local_570;
  local_558 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_570->Elements).field_0x10;
  local_598.Data = (FScriptContainerElement *)0x0;
  local_590 = 0;
  iStack_58c = 0;
  uVar37 = 1;
  local_5b0.Data = (FScriptContainerElement *)0x0;
  local_5a8 = 0;
  iStack_5a4 = 0;
  uVar47 = 0;
  iVar30 = *(int *)&(local_570->Elements).field_0x28;
  pFVar40 = pFVar48;
  uStack_550._4_4_ = 0;
  local_548._0_4_ = uVar47;
  if (iVar30 != 0) {
    puVar54 = *(uint **)&(local_570->Elements).field_0x20;
    if (puVar54 == (uint *)0x0) {
      puVar54 = (uint *)local_558;
    }
    uVar51 = *puVar54;
    pFVar41 = pFVar48;
    while (local_548._0_4_ = (uint)pFVar41, uVar51 == 0) {
      iVar50 = (int)pFVar40;
      local_548._0_4_ = (uint)local_548 + 0x20;
      pFVar41 = (FImplicitObject *)(ulonglong)(uint)local_548;
      uVar51 = iVar50 + 1;
      pFVar40 = (FImplicitObject *)(ulonglong)uVar51;
      uStack_550._4_4_ = iVar30;
      if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar51) goto LAB_143a56cb2;
      uVar51 = puVar54[(longlong)iVar50 + 1];
    }
    uVar37 = -uVar51 & uVar51;
    uVar6 = (ulonglong)uVar37 * 2 + 1;
    lVar55 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar55 == 0; lVar55 = lVar55 + -1) {
      }
    }
    local_488 = (int)lVar55;
    uStack_550._4_4_ = local_488 + -1 + (uint)local_548;
    if (iVar30 < (int)uStack_550._4_4_) {
      uStack_550._4_4_ = iVar30;
    }
  }
LAB_143a56cb2:
  uVar51 = *(uint *)&(local_570->Elements).field_0x28;
  uVar57 = uVar51 & 0xffffffe0;
  iStack_540 = *(int *)&(local_4f0->RootTriboxes).field_0x8 -
               *(int *)&(local_570->Elements).field_0x34;
  local_568 = local_570;
  uStack_560 = CONCAT44(uVar37,(int)pFVar40);
  uStack_550._0_4_ = 0xffffffff;
  local_548._4_4_ = local_27c;
  local_3e8 = local_570;
  TStack_3e0._padding_ = uStack_560;
  iVar30 = (int)uVar51 >> 5;
  uStack_3c0 = CONCAT44(uStack_53c,iStack_540);
  TStack_3e0.BaseBitIndex = (uint)local_548;
  TStack_3e0._28_4_ = local_27c;
  TStack_3e0.UnvisitedBitMask = 0xffffffff;
  TStack_3e0.CurrentBitIndex = uStack_550._4_4_;
  local_5a0 = uVar51;
  TStack_3e0.Array = local_558;
  if (((int)uVar51 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar28)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar58->Elements).field_0x10;
  uVar37 = *(uint *)&(pTVar58->Elements).field_0x28;
  if (uVar51 != uVar37) {
    puVar11 = *(undefined1 **)&(pTVar58->Elements).field_0x20;
    puVar52 = (undefined1 *)pTVar53;
    if (puVar11 != (undefined1 *)0x0) {
      puVar52 = puVar11;
    }
    uVar51 = -1 << ((byte)uVar51 & 0x1f) & *(uint *)(puVar52 + (longlong)iVar30 * 4);
    while (uVar51 == 0) {
      lVar55 = (longlong)iVar30;
      uVar57 = uVar57 + 0x20;
      iVar30 = iVar30 + 1;
      uVar51 = uVar37;
      local_5a0 = uVar37;
      if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
      goto LAB_143a56de0;
      uVar51 = *(uint *)(puVar52 + lVar55 * 4 + 4);
    }
    uVar6 = (ulonglong)(-uVar51 & uVar51) * 2 + 1;
    lVar55 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar55 == 0; lVar55 = lVar55 + -1) {
      }
    }
    local_484 = (int)lVar55;
    uVar51 = (uVar57 - 1) + local_484;
    local_5a0 = uVar51;
    if ((int)uVar37 < (int)uVar51) {
      uVar51 = uVar37;
      local_5a0 = uVar37;
    }
  }
LAB_143a56de0:
  while( true ) {
    pTVar24 = local_3e8;
    if (*(int *)&(local_3e8->Elements).field_0x8 - *(int *)&(local_3e8->Elements).field_0x34 !=
        (int)uStack_3c0) {
      local_5b7[1] = false;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5b7 + 1);
      pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar58->Elements).field_0x10;
    }
    FVar10 = local_538;
    iVar30 = local_590;
    if (((TStack_3e0.CurrentBitIndex == uVar51) && (TStack_3e0.Array == pTVar53)) &&
       (pTVar24 == pTVar58)) break;
    pFVar56 = (FScriptContainerElement *)
              ((longlong)TStack_3e0.CurrentBitIndex * 0xd0 + *(ulonglong *)&pTVar24->Elements);
    local_450 = pFVar56;
    if (pFVar56[0x50] == (FScriptContainerElement)0x0) {
      if (((local_598.Data <= pFVar56) && (pFVar56 < local_598.Data + (longlong)iStack_58c * 8)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar28)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if (local_590 == iStack_58c) {
        local_590 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_598,&iStack_58c);
      }
      lVar55 = (longlong)local_590;
      local_590 = local_590 + 1;
      *(ulonglong *)(local_598.Data + lVar55 * 8) = *(ulonglong *)pFVar56;
    }
    else {
      local_5a8 = 0;
      if (iStack_5a4 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_5b0,0,&iStack_5a4);
      }
      local_558 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar56 + 0x80);
      uVar37 = *(uint *)(pFVar56 + 0x98);
      local_568 = (TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
                   *)(pFVar56 + 0x70);
      uVar51 = 1;
      pFVar40 = pFVar48;
      uStack_550._4_4_ = uVar47;
      local_548._0_4_ = uVar47;
      if (uVar37 != 0) {
        pTVar53 = local_558;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar56 + 0x90) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar53 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar56 + 0x90);
        }
        uVar57 = *(uint *)(pTVar53->AllocatorInstance).InlineData;
        pFVar41 = pFVar48;
        while (local_548._0_4_ = (uint)pFVar41, uVar57 == 0) {
          iVar30 = (int)pFVar40;
          local_548._0_4_ = (uint)local_548 + 0x20;
          pFVar41 = (FImplicitObject *)(ulonglong)(uint)local_548;
          uVar57 = iVar30 + 1;
          pFVar40 = (FImplicitObject *)(ulonglong)uVar57;
          uStack_550._4_4_ = uVar37;
          if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar57)
          goto LAB_143a56fa2;
          uVar57 = *(uint *)((pTVar53->AllocatorInstance).InlineData + (longlong)iVar30 * 4 + 4);
        }
        uVar51 = -uVar57 & uVar57;
        uVar6 = (ulonglong)uVar51 * 2 + 1;
        lVar55 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar55 == 0; lVar55 = lVar55 + -1) {
          }
        }
        local_480 = (int)lVar55;
        uStack_550._4_4_ = local_480 + -1 + (uint)local_548;
        if ((int)uVar37 < (int)uStack_550._4_4_) {
          uStack_550._4_4_ = uVar37;
        }
      }
LAB_143a56fa2:
      uVar37 = *(uint *)(pFVar56 + 0x98);
      iStack_540 = *(int *)(pFVar56 + 0x78) - *(int *)(pFVar56 + 0xa4);
      uVar57 = uVar37 & 0xffffffe0;
      uStack_560 = CONCAT44(uVar51,(int)pFVar40);
      uStack_550._0_4_ = 0xffffffff;
      local_548._4_4_ = local_25c;
      TStack_410._padding_ = uStack_560;
      iVar30 = (int)uVar37 >> 5;
      uStack_3f0 = CONCAT44(uStack_53c,iStack_540);
      TStack_410.UnvisitedBitMask = 0xffffffff;
      TStack_410.CurrentBitIndex = uStack_550._4_4_;
      TStack_410.BaseBitIndex = (uint)local_548;
      TStack_410._28_4_ = local_25c;
      local_470 = local_568;
      local_418 = local_568;
      TStack_410.Array = local_558;
      if (((int)uVar37 < 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar28)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pTVar24 = local_470;
      pTVar58 = local_570;
      uVar51 = *(uint *)(pFVar56 + 0x98);
      if (uVar37 != uVar51) {
        pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar56 + 0x80);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar56 + 0x90) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar53 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar56 + 0x90);
        }
        uVar37 = -1 << ((byte)uVar37 & 0x1f) &
                 *(uint *)((pTVar53->AllocatorInstance).InlineData + (longlong)iVar30 * 4);
        while (uVar37 == 0) {
          lVar55 = (longlong)iVar30;
          uVar57 = uVar57 + 0x20;
          iVar30 = iVar30 + 1;
          uVar37 = uVar51;
          if ((int)((uVar51 - 1) + ((int)(uVar51 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
          goto LAB_143a570d0;
          uVar37 = *(uint *)((pTVar53->AllocatorInstance).InlineData + lVar55 * 4 + 4);
        }
        uVar6 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
        lVar55 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar55 == 0; lVar55 = lVar55 + -1) {
          }
        }
        local_47c = (int)lVar55;
        uVar37 = (uVar57 - 1) + local_47c;
        if ((int)uVar51 < (int)uVar37) {
          uVar37 = uVar51;
        }
      }
LAB_143a570d0:
      while( true ) {
        pTVar25 = local_418;
        if (*(int *)&(local_418->Elements).field_0x8 - *(int *)&(local_418->Elements).field_0x34 !=
            (int)uStack_3f0) {
          local_5b7[2] = false;
          `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5b7 + 2);
        }
        pFVar5 = local_450;
        iVar30 = local_5a8;
        if (((TStack_410.CurrentBitIndex == uVar37) &&
            (TStack_410.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar56 + 0x80))) &&
           (pTVar25 == pTVar24)) break;
        uVar6 = *(ulonglong *)&pTVar25->Elements;
        uVar12 = *(ulonglong *)(uVar6 + (longlong)TStack_410.CurrentBitIndex * 0x18);
        pFVar5 = (FScriptContainerElement *)(uVar6 + (longlong)TStack_410.CurrentBitIndex * 0x18);
        uVar51 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar51 = (uVar51 >> 0xd ^ uVar51) * -0x3d4d51cb;
        if (*(int *)&(pTVar58->Elements).field_0x8 != *(int *)&(pTVar58->Elements).field_0x34) {
          FVar13 = (pTVar58->Hash).SecondaryData;
          FVar43 = (ForElementType<FSetElementId>)&pTVar58->Hash;
          if (FVar13 != (ForElementType<FSetElementId>)0x0) {
            FVar43 = FVar13;
          }
          iVar30 = *(int *)((longlong)FVar43 +
                           (ulonglong)(pTVar58->HashSize - 1U & (uVar51 >> 0x10 ^ uVar51)) * 4);
          if (iVar30 != -1) {
            do {
              puVar35 = (ulonglong *)((longlong)iVar30 * 0xd0 + *(ulonglong *)&pTVar58->Elements);
              if (*puVar35 == uVar12) {
                pFVar40 = (FImplicitObject *)(puVar35 + 1);
                if (puVar35 == (ulonglong *)0x0) {
                  pFVar40 = pFVar48;
                }
                if ((pFVar40 != (FImplicitObject *)0x0) && ((char)pFVar40[2]._padding_ == '\0')) {
                  if ((local_5b0.Data <= pFVar5) &&
                     ((pFVar5 < local_5b0.Data + (longlong)iStack_5a4 * 8 &&
                      (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar28)))) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  if (local_5a8 == iStack_5a4) {
                    local_5a8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x808,&local_5b0,&iStack_5a4);
                  }
                  lVar55 = (longlong)local_5a8;
                  local_5a8 = local_5a8 + 1;
                  *(ulonglong *)(local_5b0.Data + lVar55 * 8) = *(ulonglong *)pFVar5;
                }
                break;
              }
              iVar30 = (int)puVar35[0x19];
            } while (iVar30 != -1);
          }
        }
        TStack_410.UnvisitedBitMask = TStack_410.UnvisitedBitMask & ~TStack_410._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_410);
      }
      pFVar56 = local_5b0.Data + (longlong)local_5a8 * 8;
      FVar49.Data = local_5b0.Data;
      while( true ) {
        if (local_5a8 != iVar30) {
          local_5b7[3] = false;
          `TCheckedPointerIterator<Chaos::FImplicitObject_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_5b7 + 3);
        }
        pTVar58 = local_570;
        if (FVar49.Data == pFVar56) break;
        local_460 = *(FImplicitObject **)FVar49.Data;
        if (*(int *)(pFVar5 + 0x78) != *(int *)(pFVar5 + 0xa4)) {
          uVar37 = ((uint)((ulonglong)local_460 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_460 >> 4)) * -0x7a143595;
          uVar37 = (uVar37 >> 0xd ^ uVar37) * -0x3d4d51cb;
          TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
          ::RemoveImpl<Chaos::FImplicitObject_const_*>
                    ((TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
                      *)(pFVar5 + 0x70),uVar37 >> 0x10 ^ uVar37,&local_460);
        }
        FVar49.Data = FVar49.Data + 8;
      }
    }
    TStack_3e0.UnvisitedBitMask = TStack_3e0.UnvisitedBitMask & ~TStack_3e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e0);
    pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar58->Elements).field_0x10;
    uVar51 = local_5a0;
  }
  pFVar56 = local_598.Data + (longlong)local_590 * 8;
  FVar49.Data = local_598.Data;
  while( true ) {
    if (local_590 != iVar30) {
      local_5b7[4] = false;
      `TCheckedPointerIterator<Chaos::FImplicitObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_5b7 + 4);
    }
    if (FVar49.Data == pFVar56) break;
    local_468 = *(FImplicitObject **)FVar49.Data;
    if (*(int *)&(pTVar58->Elements).field_0x8 != *(int *)&(pTVar58->Elements).field_0x34) {
      uVar37 = ((uint)((ulonglong)local_468 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_468 >> 4)) *
               -0x7a143595;
      uVar37 = (uVar37 >> 0xd ^ uVar37) * -0x3d4d51cb;
      TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::FImplicitObject_const_*>(pTVar58,uVar37 >> 0x10 ^ uVar37,&local_468);
    }
    FVar49.Data = FVar49.Data + 8;
  }
  if (local_5b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data);
  }
  if (local_598.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data);
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar26) {
    FThreadStats::AddMessage(FVar10,CycleScopeEnd);
  }
  if ((local_580.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_580.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_580.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_580.StatId,CycleScopeEnd);
  }
  pFVar23 = local_4f0;
  uVar21 = _UNK_150af7a58;
  uVar19 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  local_2f0 = (uint)local_2f0._2_2_ << 0x10;
  ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
  _UNK_150af7a54 = SUB84(uVar16,4);
  local_338[0] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  local_338[1] = _UNK_150af7a54;
  _UNK_150af7a58 = (float)uVar20;
  _UNK_150af7a5c = SUB84(uVar20,4);
  afStack_330[0] = _UNK_150af7a58;
  afStack_330[1] = _UNK_150af7a5c;
  this_00 = &local_4f0->MainTribox;
  ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
  _UNK_150af7a54 = SUB84(uVar16,4);
  local_328[0] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  local_328[1] = _UNK_150af7a54;
  _UNK_150af7a58 = (float)uVar20;
  _UNK_150af7a5c = SUB84(uVar20,4);
  afStack_320[0] = _UNK_150af7a58;
  afStack_320[1] = _UNK_150af7a5c;
  ___xmm_ff7fffffff7fffffff7fffffff7fffff = uVar19;
  _UNK_150af7a58 = uVar21;
  *(undefined8 *)(this_00->NodeTribox).MaxDists = uVar16;
  *(undefined8 *)((local_4f0->MainTribox).NodeTribox.MaxDists + 2) = uVar20;
  puVar11 = &(local_4f0->RootTriboxes).field_0x10;
  local_580.EmittedEvent = '\0';
  *(undefined8 *)((local_4f0->MainTribox).NodeTribox.MaxDists + 4) = uVar16;
  *(undefined8 *)((local_4f0->MainTribox).NodeTribox.MaxDists + 6) = uVar20;
  pTVar1 = &local_4f0->RootTriboxes;
  local_4a8._padding_._0_4_ = 0;
  *(undefined8 *)((local_4f0->MainTribox).NodeTribox.MaxDists + 8) = uVar16;
  *(undefined8 *)((local_4f0->MainTribox).NodeTribox.MaxDists + 10) = uVar20;
  local_4a8._padding_._4_4_ = 1;
  *(undefined8 *)((local_4f0->MainTribox).NodeTribox.MaxDists + 0xc) = uVar16;
  *(undefined8 *)((local_4f0->MainTribox).NodeTribox.MaxDists + 0xe) = uVar20;
  *(undefined8 *)((local_4f0->MainTribox).NodeTribox.MaxDists + 0x10) = uVar16;
  (local_4f0->MainTribox).NodeTribox.bIsValid = (bool)(undefined1)local_2f0;
  uVar21 = _UNK_150af7a58;
  uVar19 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  (local_4f0->MainTribox).NodeTribox.bHasDatas = (bool)local_2f0._1_1_;
  *(ushort *)&(local_4f0->MainTribox).NodeTribox.field_0x4a = local_2f0._2_2_;
  ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
  _UNK_150af7a54 = SUB84(uVar16,4);
  local_318[0] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  local_318[1] = _UNK_150af7a54;
  _UNK_150af7a58 = (float)uVar20;
  _UNK_150af7a5c = SUB84(uVar20,4);
  afStack_310[0] = _UNK_150af7a58;
  afStack_310[1] = _UNK_150af7a5c;
  ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
  _UNK_150af7a54 = SUB84(uVar16,4);
  local_308[0] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  local_308[1] = _UNK_150af7a54;
  _UNK_150af7a58 = (float)uVar20;
  _UNK_150af7a5c = SUB84(uVar20,4);
  afStack_300[0] = _UNK_150af7a58;
  afStack_300[1] = _UNK_150af7a5c;
  ___xmm_ff7fffffff7fffffff7fffffff7fffff = (float)uVar16;
  _UNK_150af7a54 = SUB84(uVar16,4);
  local_2f8[0] = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  local_2f8[1] = _UNK_150af7a54;
  local_4a8.UnvisitedBitMask = 0xffffffff;
  local_4a8.CurrentBitIndex = 0;
  local_4a8.BaseBitIndex = 0;
  ___xmm_ff7fffffff7fffffff7fffffff7fffff = uVar19;
  _UNK_150af7a58 = uVar21;
  local_4a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
  if (*(int *)&(local_4f0->RootTriboxes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4a8);
  }
  uStack_560 = CONCAT44(local_4a8._padding_._4_4_,(undefined4)local_4a8._padding_);
  uStack_550._4_4_ = local_4a8.CurrentBitIndex;
  uStack_550._0_4_ = local_4a8.UnvisitedBitMask;
  local_548._4_4_ = local_4a8._28_4_;
  local_548._0_4_ = local_4a8.BaseBitIndex;
  iStack_540 = *(int *)&(pFVar23->RootTriboxes).field_0x8 -
               *(int *)&(pFVar23->RootTriboxes).field_0x34;
  local_558 = local_4a8.Array;
  local_508 = CONCAT44(uStack_53c,iStack_540);
  TStack_528.Array = local_4a8.Array;
  local_568 = (TSet<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>,FDefaultSetAllocator>
               *)pTVar1;
  local_530 = pTVar1;
  TStack_528._padding_ = uStack_560;
  TStack_528._16_8_ = uStack_550;
  TStack_528._24_8_ = local_548;
  pTVar32 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_258,(TBitArray<FDefaultBitArrayAllocator> *)puVar11,
                       *(int *)&(pFVar23->RootTriboxes).field_0x28);
  uStack_560 = pTVar32->_padding_;
  pTVar53 = pTVar32->Array;
  uVar16._0_4_ = pTVar32->UnvisitedBitMask;
  uVar16._4_4_ = pTVar32->CurrentBitIndex;
  local_548 = *(undefined8 *)&pTVar32->BaseBitIndex;
  local_558 = pTVar53;
  uStack_550 = uVar16;
  while( true ) {
    pTVar22 = local_530;
    if (*(int *)&local_530->field_0x8 - *(int *)&local_530->field_0x34 != (int)local_508) {
      local_5b7[5] = false;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5b7 + 5);
    }
    if (((TStack_528.CurrentBitIndex == uVar16._4_4_) && (TStack_528.Array == pTVar53)) &&
       (pTVar22 == pTVar1)) break;
    pFVar44 = (FTribox *)(*(longlong *)pTVar22 + 8 + (longlong)TStack_528.CurrentBitIndex * 0xd0);
    if (pFVar44->bHasDatas != false) {
      FTribox::operator+=(&this_00->NodeTribox,pFVar44);
    }
    TStack_528.UnvisitedBitMask = TStack_528.UnvisitedBitMask & ~TStack_528._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_528);
  }
  if ((pFVar23->MainTribox).NodeTribox.bHasDatas == false) {
    return;
  }
  pTVar4 = &(pFVar23->MainTribox).TriboxConvex;
  pFVar40 = pTVar4->Reference;
  if (pFVar40 != (FImplicitObject *)0x0) {
    uVar29 = FImplicitObject::GetType(pFVar40);
    pFVar41 = pFVar48;
    if (uVar29 == '\b') {
      pFVar41 = pFVar40;
    }
    fVar7 = *(float *)&pFVar41[3]._padding_;
    fVar59 = FTribox::ComputeVolume(&(pFVar23->MainTribox).NodeTribox);
    if (fVar7 == fVar59) goto LAB_143a57685;
  }
  TVar36 = FTribox::MakeConvex(&(pFVar23->MainTribox).NodeTribox);
  if ((FImplicitObject *)pTVar4 != TVar36.Reference) {
    pFVar40 = pTVar4->Reference;
    pTVar4->Reference = (FImplicitObject *)(TVar36.Reference)->_padding_;
    (TVar36.Reference)->_padding_ = 0;
    if (pFVar40 != (FImplicitObject *)0x0) {
      LOCK();
      plVar3 = &pFVar40->_padding_;
      lVar55 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if (((int)lVar55 == 1) && (*(int *)((longlong)&pFVar40->_padding_ + 4) == 0)) {
        (**(code **)pFVar40->_padding_)(pFVar40,1);
      }
    }
  }
  if (local_458 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_458 + 1);
    iVar30 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar30 == 1) && (*(int *)((longlong)local_458 + 0xc) == 0)) {
      (**(code **)*local_458)();
    }
  }
  iVar30 = pFVar23->NextConvexId;
  (pFVar23->MainTribox).ConvexId = iVar30;
  pFVar23->NextConvexId = iVar30 + 1;
LAB_143a57685:
  pFVar56 = (pFVar23->SimplifiedConvexes).AllocatorInstance.Data;
  pTVar4 = &(pFVar23->MainTribox).TriboxConvex;
  if (((pFVar56 <= pTVar4) &&
      (pTVar4 < pFVar56 + (longlong)(pFVar23->SimplifiedConvexes).ArrayMax * 8)) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar27)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar30 = (pFVar23->SimplifiedConvexes).ArrayNum;
  piVar2 = &(pFVar23->SimplifiedConvexes).ArrayMax;
  if (iVar30 == *piVar2) {
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar23,piVar2);
  }
  (pFVar23->SimplifiedConvexes).ArrayNum = iVar30 + 1;
  pFVar56 = (pFVar23->SimplifiedConvexes).AllocatorInstance.Data;
  *(undefined8 *)(pFVar56 + (longlong)iVar30 * 8) = 0;
  pFVar40 = pTVar4->Reference;
  *(FImplicitObject **)(pFVar56 + (longlong)iVar30 * 8) = pFVar40;
  if (pFVar40 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar40->_padding_ = (int)pFVar40->_padding_ + 1;
    UNLOCK();
  }
  iVar30 = (pFVar23->SimplifiedConvexes).ArrayNum;
  iVar50 = (pFVar23->MainTribox).ConvexId;
  pTVar14 = &((pFVar23->CollisionObjects).Ptr)->ImplicitObjects;
  uVar37 = iVar30 - 1;
  local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  if ((int)uVar37 < iVar30) {
    pFVar48 = (FImplicitObject *)(ulonglong)(~uVar37 >> 0x1f);
  }
  local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_98[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_98[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_78[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_78[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  if (((int)pFVar48 == 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  FImplicitBVH::CollectLeafObject
            (*(FImplicitObject **)
              ((pFVar23->SimplifiedConvexes).AllocatorInstance.Data +
              (longlong)(pFVar23->SimplifiedConvexes).ArrayNum * 8 + -8),
             (TRigidTransform<double,3> *)local_c8,0,pTVar14,iVar50);
  return;
}

// BuildUnionConnectivity @ 143a57830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FConvexOptimizer::BuildUnionConnectivity
          (FConvexOptimizer *this,TRefCountPtr<Chaos::FImplicitObjectUnion> *param_1)

{
  FImplicitObjectUnion *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FTribox *pFVar6;
  FName FVar7;
  FConvexOptimizer *pFVar8;
  FTribox *pFVar9;
  TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
  *pTVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<Chaos::Private::FStat_STAT_BuildUnionConnectivity> FVar14;
  ulonglong *puVar15;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> TVar16;
  FTriboxNode *this_00;
  TAABB<double,3> *pTVar17;
  TVector<double,3> *pTVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 *puVar21;
  ulonglong *puVar22;
  FName FVar23;
  int iVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  longlong lVar27;
  ulonglong *puVar28;
  uint *puVar29;
  undefined1 *puVar30;
  ForElementType<unsigned_int> FVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  ulonglong uVar36;
  undefined1 auStackY_388 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  uint local_320;
  uint local_31c;
  FName local_318;
  longlong local_310;
  FTribox *local_308;
  FConvexOptimizer *local_300;
  FName local_2f8;
  TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> local_2f0;
  FColor_u_0 local_2e0 [2];
  TRefCountPtr<Chaos::FImplicitObjectUnion> *local_2d8;
  FTribox *local_2d0;
  FTribox *local_2c8;
  uint uStack_2c0;
  uint uStack_2bc;
  ForElementType<unsigned_int> local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  uint local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  FConvexOptimizer *local_298;
  TRefCountPtr<Chaos::FImplicitObjectUnion> *local_290;
  FName local_288;
  FName local_280;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> local_258;
  TPairInitializer<Chaos::FImplicitObject_*_&&,bool_&&> local_248;
  TPairInitializer<Chaos::FImplicitObject_*_&&,bool_&&> local_238;
  int local_228;
  FTribox *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
  *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  double local_1a8 [3];
  FImplicitBVH *local_190;
  FConvexOptimizer **local_188;
  int *local_180;
  undefined1 *local_178;
  bool **local_170;
  undefined1 *local_168;
  FConvexOptimizer *local_160;
  uint *local_158;
  undefined1 *local_150;
  TRefCountPtr<Chaos::FImplicitObjectUnion> *local_148;
  FTribox **local_140;
  FConvexOptimizer **local_138;
  undefined1 local_130 [44];
  int local_104;
  int local_e4;
  TAABB<double,3> local_e0;
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  FVar14 = StatPtr_STAT_BuildUnionConnectivity;
  local_300 = this;
  local_2d8 = param_1;
  if (StatPtr_STAT_BuildUnionConnectivity ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_BuildUnionConnectivity>)0x0) {
    pFVar13 = ::FName::FName((FName *)(local_130 + 8),"STAT_BuildUnionConnectivity");
    FVar14 = (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_BuildUnionConnectivity>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildUnionConnectivity,*pFVar13,
                        L"Collisions::BuildUnionConnectivity","STATGROUP_ChaosCollision",
                        "STATCAT_Advanced",L"ChaosCollision",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar23 = *(FName *)FVar14;
  bVar3 = false;
  bVar4 = false;
  local_280.ComparisonIndex.Value = 0;
  local_280.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e0[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_288.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_288.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_288,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ConvexOptimizer.cpp"
                   ,0x164);
        bVar3 = true;
        bVar4 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_318 = FVar23;
      local_2f8 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar11 = true;
      goto LAB_143a579a6;
    }
  }
  bVar4 = bVar12;
  bVar3 = bVar11;
  bVar11 = false;
  local_2f8 = local_280;
LAB_143a579a6:
  FVar23 = (FName)0x0;
  local_318 = (FName)0x0;
  local_320 = (param_1->Reference->MObjects).ArrayNum;
  lVar33 = (longlong)(int)local_320;
  local_310 = lVar33;
  if (CVars::ChaosUnionBVHMinShapes < (int)local_320) {
    local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f0.ArrayNum = 0;
    local_2f0.ArrayMax = 0;
    if ((int)local_320 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_320);
    }
    if (0 < (int)local_320) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,local_320,&local_2f0.AllocatorInstance,0,&local_2f0.ArrayMax);
    }
    uVar25 = 0;
    uVar36 = uVar25;
    if (0 < lVar33) {
      do {
        pFVar1 = param_1->Reference;
        uVar32 = (uint)uVar25;
        uVar19 = 0;
        if ((int)uVar32 < (pFVar1->MObjects).ArrayNum) {
          uVar19 = ~uVar32 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar28 = (ulonglong *)0x0;
        uVar25 = *(ulonglong *)((pFVar1->MObjects).AllocatorInstance.Data + uVar36 * 8);
        uVar19 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
        puVar22 = puVar28;
        if (*(int *)&(this->RootTriboxes).field_0x8 != *(int *)&(this->RootTriboxes).field_0x34) {
          puVar30 = *(undefined1 **)&(this->RootTriboxes).field_0x40;
          puVar21 = &(this->RootTriboxes).field_0x38;
          if (puVar30 != (undefined1 *)0x0) {
            puVar21 = puVar30;
          }
          iVar24 = *(int *)(puVar21 +
                           (ulonglong)
                           (*(int *)&(this->RootTriboxes).field_0x48 - 1U &
                           (uVar19 >> 0x10 ^ uVar19)) * 4);
          if (iVar24 != -1) {
            do {
              puVar22 = (ulonglong *)((longlong)iVar24 * 0xd0 + *(longlong *)&this->RootTriboxes);
              if (*puVar22 == uVar25) break;
              iVar24 = (int)puVar22[0x19];
              puVar22 = puVar28;
            } while (iVar24 != -1);
          }
        }
        puVar15 = puVar22 + 1;
        if (puVar22 == (ulonglong *)0x0) {
          puVar15 = puVar28;
        }
        if (puVar15 != (ulonglong *)0x0) {
          iVar24 = local_2f0.ArrayNum;
          local_a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          pFVar1 = local_2d8->Reference;
          local_98[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_98[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_88[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_88[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_78[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_78[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_68[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_68[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          uVar19 = 0;
          if ((int)uVar32 < (pFVar1->MObjects).ArrayNum) {
            uVar19 = ~uVar32 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FImplicitBVH::CollectLeafObject
                    (*(FImplicitObject **)((pFVar1->MObjects).AllocatorInstance.Data + uVar36 * 8),
                     (TRigidTransform<double,3> *)local_a8,uVar32,&local_2f0,iVar24);
          param_1 = local_2d8;
        }
        uVar25 = (ulonglong)(uVar32 + 1);
        uVar36 = uVar36 + 1;
        FVar23 = local_318;
      } while ((longlong)uVar36 < lVar33);
    }
    TVar16 = FImplicitBVH::TryMakeFromLeaves
                       (&local_258,(int)&local_2f0,CVars::ChaosUnionBVHMinShapes);
    if ((FImplicitBVH *)local_130 != TVar16.Ptr) {
      FVar23 = (FName)((TVar16.Ptr)->Objects).AllocatorInstance.Data;
      ((TVar16.Ptr)->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318 = FVar23;
    }
    if ((FImplicitBVH *)local_258.AllocatorInstance.Data != (FImplicitBVH *)0x0) {
      FImplicitBVH::~FImplicitBVH((FImplicitBVH *)local_258.AllocatorInstance.Data);
      ::operator_delete(local_258.AllocatorInstance.Data,0x38);
    }
    if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.AllocatorInstance.Data);
    }
  }
  lVar33 = local_310;
  local_31c = 0;
  local_298 = this;
  local_290 = param_1;
  if (0 < (int)local_320) {
    do {
      uVar19 = local_31c;
      pFVar1 = param_1->Reference;
      uVar32 = 0;
      if ((int)local_31c < (pFVar1->MObjects).ArrayNum) {
        uVar32 = ~local_31c >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar36 = *(ulonglong *)((pFVar1->MObjects).AllocatorInstance.Data + (longlong)(int)uVar19 * 8)
      ;
      uVar19 = ((uint)(uVar36 >> 0x14) & 0xffff ^ (uint)(uVar36 >> 4)) * -0x7a143595;
      uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
      if (*(int *)&(this->RootTriboxes).field_0x8 != *(int *)&(this->RootTriboxes).field_0x34) {
        puVar30 = *(undefined1 **)&(this->RootTriboxes).field_0x40;
        puVar21 = &(this->RootTriboxes).field_0x38;
        if (puVar30 != (undefined1 *)0x0) {
          puVar21 = puVar30;
        }
        iVar24 = *(int *)(puVar21 +
                         (ulonglong)
                         (*(int *)&(this->RootTriboxes).field_0x48 - 1U & (uVar19 >> 0x10 ^ uVar19))
                         * 4);
        if (iVar24 != -1) {
          do {
            puVar22 = (ulonglong *)((longlong)iVar24 * 0xd0 + *(longlong *)&this->RootTriboxes);
            if (*puVar22 == uVar36) {
              local_2d0 = (FTribox *)(puVar22 + 1);
              if (puVar22 == (ulonglong *)0x0) {
                local_2d0 = (FTribox *)0x0;
              }
              if ((local_2d0 != (FTribox *)0x0) && (*(char *)(local_2d0[1].MaxDists + 5) != '\0')) {
                FTribox::GetBounds(local_2d0,(TAABB<double,3> *)local_1c0);
                if (FVar23 == (FName)0x0) {
                  uVar25 = 0;
                  uVar36 = uVar25;
                  if (0 < lVar33) {
                    do {
                      pFVar8 = local_298;
                      uVar32 = (uint)uVar25;
                      local_308 = local_2d0;
                      local_310 = CONCAT44(local_310._4_4_,local_31c);
                      pFVar1 = local_290->Reference;
                      uVar19 = 0;
                      if ((int)uVar32 < (pFVar1->MObjects).ArrayNum) {
                        uVar19 = ~uVar32 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      this_00 = TMapBase<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
                                ::Find((TMapBase<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
                                        *)&pFVar8->RootTriboxes,
                                       *(FImplicitObject **)
                                        ((pFVar1->MObjects).AllocatorInstance.Data + uVar36 * 8));
                      if ((this_00 != (FTriboxNode *)0x0) &&
                         ((this_00->bValidNode == false || ((int)(uint)local_310 < (int)uVar32)))) {
                        pTVar17 = FTribox::GetBounds(&this_00->NodeTribox,&local_e0);
                        pTVar18 = &pTVar17->MMax;
                        lVar20 = 0;
                        lVar34 = -(longlong)pTVar18;
                        lVar27 = (longlong)local_1a8 - (longlong)pTVar18;
                        do {
                          if ((*(double *)pTVar18 <=
                               *(double *)(local_1c0 + lVar34 + (longlong)pTVar18) &&
                               *(double *)(local_1c0 + lVar34 + (longlong)pTVar18) !=
                               *(double *)pTVar18) ||
                             (*(double *)(lVar27 + (longlong)pTVar18) <
                              *(double *)&((TAABB<double,3> *)(pTVar18 + -1))->MMin))
                          goto LAB_143a58509;
                          lVar20 = lVar20 + 1;
                          pTVar18 = (TVector<double,3> *)&pTVar18->field_0x8;
                        } while (lVar20 < 3);
                        local_327 = 1;
                        pFVar1 = local_290->Reference;
                        uVar19 = 0;
                        if ((int)uVar32 < (pFVar1->MObjects).ArrayNum) {
                          uVar19 = ~uVar32 >> 0x1f;
                        }
                        if ((uVar19 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        local_258._8_8_ =
                             *(undefined8 *)((pFVar1->MObjects).AllocatorInstance.Data + uVar36 * 8)
                        ;
                        local_180 = &local_258.ArrayNum;
                        local_178 = &local_327;
                        TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
                        ::Emplace<TPairInitializer<Chaos::FImplicitObject_*_&&,bool_&&>_>
                                  ((TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
                                    *)(local_308[1].MaxDists + 7),&local_248,(bool *)&local_180);
                        lVar34 = (longlong)(int)(uint)local_310;
                        local_326 = 1;
                        pFVar1 = local_290->Reference;
                        uVar19 = 0;
                        if ((int)(uint)local_310 < (pFVar1->MObjects).ArrayNum) {
                          uVar19 = ~(uint)local_310 >> 0x1f;
                        }
                        if ((uVar19 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        local_248.Value =
                             *(bool **)((pFVar1->MObjects).AllocatorInstance.Data + lVar34 * 8);
                        local_170 = &local_248.Value;
                        local_168 = &local_326;
                        TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
                        ::Emplace<TPairInitializer<Chaos::FImplicitObject_*_&&,bool_&&>_>
                                  ((TSet<TTuple<Chaos::FImplicitObject_*,bool>,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>,FDefaultSetAllocator>
                                    *)&this_00->bValidEdges,&local_238,(bool *)&local_170);
                      }
LAB_143a58509:
                      uVar25 = (ulonglong)(uVar32 + 1);
                      uVar36 = uVar36 + 1;
                      param_1 = local_2d8;
                      this = local_300;
                    } while ((longlong)uVar36 < lVar33);
                  }
                }
                else {
                  local_158 = &local_31c;
                  local_270 = (float)(double)local_1c0._0_8_;
                  local_150 = local_1c0;
                  local_140 = &local_2d0;
                  local_138 = &local_298;
                  local_188 = &local_160;
                  local_26c = (float)(double)local_1c0._8_8_;
                  local_268 = (float)local_1b0;
                  local_264 = (float)local_1a8[0];
                  local_260 = (float)local_1a8[1];
                  local_25c = (float)local_1a8[2];
                  local_190 = (FImplicitBVH *)FVar23;
                  local_160 = this;
                  local_148 = param_1;
                  FImplicitBVH::
                  VisitOverlappingNodesStack<_Chaos::Private::FImplicitBVH::VisitAllIntersections<_Chaos::Private::FConvexOptimizer::BuildUnionConnectivity_::__l21::<lambda_2>_>_::__l2::<lambda_1>_>
                            ((FImplicitBVH *)FVar23,(TAABB<float,3> *)&local_270,
                             (<lambda_1> *)&local_190);
                }
              }
              goto LAB_143a57d74;
            }
            iVar24 = (int)puVar22[0x19];
          } while (iVar24 != -1);
        }
      }
      local_2d0 = (FTribox *)0x0;
LAB_143a57d74:
      local_31c = local_31c + 1;
    } while ((int)local_31c < (int)local_320);
  }
  uVar19 = *(uint *)&(this->RootTriboxes).field_0x28;
  local_2b8 = (ForElementType<unsigned_int>)&(this->RootTriboxes).field_0x10;
  local_2c8 = (FTribox *)&this->RootTriboxes;
  uStack_2c0 = 0;
  uStack_2bc = 1;
  uStack_2ac = uStack_2c0;
  local_2a8 = uStack_2c0;
  if (uVar19 != 0) {
    puVar29 = *(uint **)&(this->RootTriboxes).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)local_2b8;
    }
    uVar32 = *puVar29;
    while (uVar32 == 0) {
      lVar33 = (longlong)(int)uStack_2c0;
      local_2a8 = local_2a8 + 0x20;
      uStack_2c0 = uStack_2c0 + 1;
      uStack_2ac = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2c0)
      goto LAB_143a57e10;
      uVar32 = (puVar29 + 1)[lVar33];
    }
    uStack_2bc = -uVar32 & uVar32;
    uVar36 = (ulonglong)uStack_2bc * 2 + 1;
    lVar33 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_238.Key._4_4_ = (int)lVar33;
    uStack_2ac = (local_2a8 - 1) + local_238.Key._4_4_;
    if ((int)uVar19 < (int)uStack_2ac) {
      uStack_2ac = uVar19;
    }
  }
LAB_143a57e10:
  iStack_2a4 = local_104;
  iStack_2a0 = *(int *)&(this->RootTriboxes).field_0x8 - *(int *)&(this->RootTriboxes).field_0x34;
  uVar32 = *(uint *)&(this->RootTriboxes).field_0x28;
  TStack_1e8._padding_ = CONCAT44(uStack_2bc,uStack_2c0);
  uStack_2b0 = 0xffffffff;
  puVar30 = &(this->RootTriboxes).field_0x10;
  TStack_1e8.CurrentBitIndex = uStack_2ac;
  TStack_1e8.UnvisitedBitMask = 0xffffffff;
  uVar35 = uVar32 & 0xffffffe0;
  iVar24 = (int)uVar32 >> 5;
  TStack_1e8._28_4_ = local_104;
  TStack_1e8.BaseBitIndex = local_2a8;
  uStack_1c8 = CONCAT44(uStack_29c,iStack_2a0);
  local_320 = uVar32;
  local_1f0 = (TMap<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
               *)local_2c8;
  TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2b8;
  if ((((int)uVar32 < 0) || ((int)uVar19 < (int)uVar32)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar19 = *(uint *)&(this->RootTriboxes).field_0x28;
  uVar5 = local_320;
  if (uVar32 != uVar19) {
    puVar21 = *(undefined1 **)&(this->RootTriboxes).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar30;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar24 * 4);
    while (uVar32 == 0) {
      lVar33 = (longlong)iVar24;
      uVar35 = uVar35 + 0x20;
      iVar24 = iVar24 + 1;
      local_320 = uVar19;
      uVar5 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_143a57f40;
      uVar32 = *(uint *)(puVar21 + lVar33 * 4 + 4);
    }
    uVar36 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_238.Value._0_4_ = (int)lVar33;
    local_320 = (uVar35 - 1) + (int)local_238.Value;
    uVar5 = local_320;
    if ((int)uVar19 < (int)local_320) {
      local_320 = uVar19;
      uVar5 = uVar19;
    }
  }
LAB_143a57f40:
  do {
    pTVar10 = local_1f0;
    if (*(int *)(&local_1f0->field_0x0 + 8) - *(int *)(&local_1f0->field_0x0 + 0x34) !=
        (int)uStack_1c8) {
      local_325 = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_325);
    }
    FVar7 = local_2f8;
    FVar23 = local_318;
    if (((TStack_1e8.CurrentBitIndex == uVar5) &&
        (TStack_1e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar30)) &&
       (pTVar10 == &local_300->RootTriboxes)) {
      if (local_318 != (FName)0x0) {
        FImplicitBVH::~FImplicitBVH((FImplicitBVH *)local_318);
        ::operator_delete((void *)FVar23,0x38);
      }
      if (bVar4) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar7,CycleScopeEnd);
      }
      return;
    }
    lVar33 = *(longlong *)&pTVar10->field_0x0;
    uStack_2bc = 1;
    lVar34 = (longlong)TStack_1e8.CurrentBitIndex * 0xd0;
    uStack_2c0 = 0;
    local_2b8 = (ForElementType<unsigned_int>)(lVar33 + 0x80 + lVar34);
    local_308 = (FTribox *)(lVar33 + 0x70 + lVar34);
    *(undefined1 *)(lVar34 + 0x68 + lVar33) = 1;
    uVar19 = *(int *)((longlong)local_2b8 + 0x18);
    local_2c8 = local_308;
    uStack_2ac = uStack_2c0;
    local_2a8 = uStack_2c0;
    if (uVar19 != 0) {
      FVar31 = local_2b8;
      if (*(ForElementType<unsigned_int> *)((longlong)local_2b8 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar31 = *(ForElementType<unsigned_int> *)((longlong)local_2b8 + 0x10);
      }
      uVar32 = *(uint *)FVar31;
      while (uVar32 == 0) {
        lVar20 = (longlong)(int)uStack_2c0;
        local_2a8 = local_2a8 + 0x20;
        uStack_2c0 = uStack_2c0 + 1;
        uStack_2ac = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2c0)
        goto LAB_143a5802f;
        uVar32 = ((uint *)((longlong)FVar31 + 4))[lVar20];
      }
      uStack_2bc = -uVar32 & uVar32;
      uVar36 = (ulonglong)uStack_2bc * 2 + 1;
      lVar20 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_238.Value._4_4_ = (int)lVar20;
      uStack_2ac = local_238.Value._4_4_ + -1 + local_2a8;
      if ((int)uVar19 < (int)uStack_2ac) {
        uStack_2ac = uVar19;
      }
LAB_143a5802f:
      local_2c8 = (FTribox *)(lVar33 + 0x70 + lVar34);
    }
    iStack_2a4 = local_e4;
    iStack_2a0 = *(int *)(lVar34 + 0x78 + lVar33) - (int)local_2c8->MaxDists[0xd];
    FVar31 = (ForElementType<unsigned_int>)(lVar33 + 0x80 + lVar34);
    uVar32 = *(uint *)(lVar34 + 0x98 + lVar33);
    TStack_218._padding_ = CONCAT44(uStack_2bc,uStack_2c0);
    uStack_2b0 = 0xffffffff;
    TStack_218.CurrentBitIndex = uStack_2ac;
    TStack_218.UnvisitedBitMask = 0xffffffff;
    uVar35 = uVar32 & 0xffffffe0;
    iVar24 = (int)uVar32 >> 5;
    TStack_218._28_4_ = local_e4;
    TStack_218.BaseBitIndex = local_2a8;
    uStack_1f8 = CONCAT44(uStack_29c,iStack_2a0);
    local_220 = local_2c8;
    TStack_218.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2b8;
    if ((((int)uVar32 < 0) || ((int)uVar19 < (int)uVar32)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = local_308;
    uVar19 = *(int *)((longlong)FVar31 + 0x18);
    if (uVar32 != uVar19) {
      FVar26 = FVar31;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar31 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar26 = *(ForElementType<unsigned_int> *)((longlong)FVar31 + 0x10);
      }
      uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar24 * 4);
      while (uVar32 == 0) {
        lVar33 = (longlong)iVar24;
        uVar35 = uVar35 + 0x20;
        iVar24 = iVar24 + 1;
        uVar32 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_143a58160;
        uVar32 = ((uint *)((longlong)FVar26 + 4))[lVar33];
      }
      uVar36 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
      lVar33 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_228 = (int)lVar33;
      uVar32 = (uVar35 - 1) + local_228;
      if ((int)uVar19 < (int)uVar32) {
        uVar32 = uVar19;
      }
    }
LAB_143a58160:
    while( true ) {
      pFVar9 = local_220;
      if ((int)local_220->MaxDists[2] - (int)local_220->MaxDists[0xd] != (int)uStack_1f8) {
        local_324[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_324);
      }
      if (((TStack_218.CurrentBitIndex == uVar32) &&
          ((ForElementType<unsigned_int>)TStack_218.Array == FVar31)) && (pFVar9 == pFVar6)) break;
      *(undefined1 *)
       (*(longlong *)pFVar9->MaxDists + 8 + (longlong)TStack_218.CurrentBitIndex * 0x18) = 1;
      TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
    }
    TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
  } while( true );
}

// MergeConnectedShapes @ 143a82bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FConvexOptimizer::MergeConnectedShapes
          (FConvexOptimizer *this,TRefCountPtr<Chaos::FImplicitObjectUnion> *param_1,
          TArray<Chaos::Private::FConvexOptimizer::FTriboxNode,TSizedDefaultAllocator<32>_> *param_2
          )

{
  longlong *plVar1;
  FImplicitObjectUnion *pFVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  FConvexOptimizer *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FConvexOptimizer *pFVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<Chaos::Private::FStat_STAT_MergeConnectedShapes> FVar18;
  ulonglong *puVar19;
  float *pfVar20;
  byte bVar21;
  uint uVar22;
  longlong lVar23;
  int *piVar24;
  undefined1 *puVar25;
  FName FVar26;
  uint uVar27;
  ulonglong *puVar28;
  FTribox *pFVar29;
  uint uVar30;
  int iVar31;
  FConvexOptimizer *pFVar32;
  longlong lVar33;
  FTribox *this_00;
  float fVar34;
  undefined1 auStackY_2f8 [32];
  ForAnyElementType local_290;
  undefined8 local_288;
  undefined1 local_280 [4];
  uint local_27c;
  uint local_278;
  FConvexOptimizer *local_270;
  FName local_268;
  undefined8 local_260;
  ulonglong local_258;
  FColor_u_0 local_250 [2];
  FName local_248;
  TRefCountPtr<Chaos::FImplicitObjectUnion> *local_240;
  FName local_238;
  FName local_230;
  int local_220;
  int local_21c;
  ulonglong *local_218;
  FScriptContainerElement *local_210;
  TArray<Chaos::Private::FConvexOptimizer::FTriboxNode,TSizedDefaultAllocator<32>_> *local_208;
  longlong local_200;
  ulonglong *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  ulonglong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  int iStack_1a0;
  undefined4 uStack_19c;
  FName local_198 [6];
  undefined1 local_168 [104];
  ForAnyElementType local_100;
  undefined8 uStack_f8;
  TBitArray<FDefaultBitArrayAllocator> local_f0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulonglong uStack_b8;
  int local_b0;
  FTribox local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FVar18 = StatPtr_STAT_MergeConnectedShapes;
  local_270 = this;
  local_240 = param_1;
  local_208 = param_2;
  if (StatPtr_STAT_MergeConnectedShapes ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_MergeConnectedShapes>)0x0) {
    pFVar17 = ::FName::FName(local_198,"STAT_MergeConnectedShapes");
    FVar18 = (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_MergeConnectedShapes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MergeConnectedShapes,*pFVar17,
                        L"Collisions::MergeConnectedShapes","STATGROUP_ChaosCollision",
                        "STATCAT_Advanced",L"ChaosCollision",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar26 = *(FName *)FVar18;
  bVar8 = false;
  bVar9 = false;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_250[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_250[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_248.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_248.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_248,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ConvexOptimizer.cpp"
                   ,0x1b1);
        bVar8 = true;
        bVar9 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_268 = FVar26;
      local_238 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar14 = true;
      goto LAB_143a82d2c;
    }
  }
  bVar9 = bVar15;
  bVar8 = bVar14;
  bVar14 = false;
  local_238 = local_230;
  FVar26 = local_230;
LAB_143a82d2c:
  uVar30 = *(int *)&(this->RootTriboxes).field_0x8 - *(int *)&(this->RootTriboxes).field_0x34;
  uVar22 = (param_1->Reference->MObjects).ArrayNum;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  if (param_2->ArrayMax < (int)uVar30) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,uVar30,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
  }
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = 0;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if (0 < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar22,&local_290,0,(int *)((longlong)&local_288 + 4));
  }
  pFVar13 = local_270;
  uVar12 = _UNK_150631d98;
  uVar10 = ___xmm_00000000ffffffff0000008000000000;
  local_278 = 0;
  local_200 = (longlong)(int)uVar22;
  if (0 < (int)uVar22) {
    local_268.ComparisonIndex.Value = 0;
    local_268.Number = 0;
    do {
      FVar26 = local_268;
      pFVar2 = param_1->Reference;
      uVar30 = ~local_278;
      uVar22 = 0;
      if ((int)local_278 < (pFVar2->MObjects).ArrayNum) {
        uVar22 = uVar30 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ulonglong *)((pFVar2->MObjects).AllocatorInstance.Data + (longlong)FVar26 * 8);
      uVar22 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
      if (*(int *)&(pFVar13->RootTriboxes).field_0x8 != *(int *)&(pFVar13->RootTriboxes).field_0x34)
      {
        puVar4 = *(undefined1 **)&(pFVar13->RootTriboxes).field_0x40;
        puVar25 = &(pFVar13->RootTriboxes).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar25 = puVar4;
        }
        iVar16 = *(int *)(puVar25 +
                         (ulonglong)
                         (*(int *)&(pFVar13->RootTriboxes).field_0x48 - 1U &
                         (uVar22 >> 0x10 ^ uVar22)) * 4);
        if (iVar16 != -1) {
          do {
            puVar28 = (ulonglong *)((longlong)iVar16 * 0xd0 + *(longlong *)&pFVar13->RootTriboxes);
            if (*puVar28 == uVar3) {
              puVar19 = puVar28 + 1;
              if (puVar28 == (ulonglong *)0x0) {
                puVar19 = (ulonglong *)0x0;
              }
              if ((puVar19 != (ulonglong *)0x0) && ((char)puVar19[0xc] != '\0')) {
                *(undefined1 *)(puVar19 + 0xc) = 0;
                pFVar2 = param_1->Reference;
                uVar22 = 0;
                if ((int)local_278 < (pFVar2->MObjects).ArrayNum) {
                  uVar22 = uVar30 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_260 = *(undefined8 *)
                             ((pFVar2->MObjects).AllocatorInstance.Data + (longlong)FVar26 * 8);
                if (((local_290.Data <= (FScriptContainerElement *)&local_260) &&
                    ((FScriptContainerElement *)&local_260 <
                     local_290.Data + (longlong)local_288._4_4_ * 8)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar16 = (int)local_288;
                if ((int)local_288 == local_288._4_4_) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_290,(int *)((longlong)&local_288 + 4));
                }
                local_288 = CONCAT44(local_288._4_4_,iVar16 + 1);
                *(undefined8 *)(local_290.Data + (longlong)iVar16 * 8) = local_260;
                uVar11 = ___xmm_00000000ffffffff0000008000000000;
                if (((undefined1 *)((longlong)puVar19 + 0x44U) < local_168) ||
                   (local_168 + 0x44 < puVar19)) {
                  local_168._0_8_ = *puVar19;
                  local_168._8_8_ = puVar19[1];
                  local_168._16_8_ = puVar19[2];
                  local_168._24_8_ = puVar19[3];
                  local_168._32_8_ = puVar19[4];
                  local_168._40_8_ = puVar19[5];
                  local_168._48_8_ = puVar19[6];
                  local_168._56_8_ = puVar19[7];
                  local_168._64_8_ = puVar19[8];
                }
                else {
                  local_168._0_8_ = *puVar19;
                  local_168._8_8_ = puVar19[1];
                  local_168._16_8_ = puVar19[2];
                  local_168._24_8_ = puVar19[3];
                  local_168._32_8_ = puVar19[4];
                  local_168._40_8_ = puVar19[5];
                  local_168._48_8_ = puVar19[6];
                  local_168._56_8_ = puVar19[7];
                  local_168._64_8_ = puVar19[8];
                }
                local_168[0x48] = (undefined1)puVar19[9];
                pFVar5 = (param_2->AllocatorInstance).Data;
                local_168[0x49] = *(undefined1 *)((longlong)puVar19 + 0x49);
                puVar19 = puVar28 + 0xc;
                if (puVar28 == (ulonglong *)0x0) {
                  puVar19 = (ulonglong *)&DAT_00000058;
                }
                local_168._80_8_ = (FImplicitObject *)0x0;
                local_168[0x60] = true;
                local_168._88_4_ = (undefined4)*puVar19;
                pfVar20 = (float *)((longlong)puVar28 + 100);
                if (puVar28 == (ulonglong *)0x0) {
                  pfVar20 = (float *)&DAT_0000005c;
                }
                local_100.Data = (FScriptContainerElement *)0x0;
                uStack_f8 = 0;
                piVar24 = &param_2->ArrayMax;
                uStack_c8 = 0;
                local_f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
                local_168._92_4_ = *pfVar20;
                ___xmm_00000000ffffffff0000008000000000 = (int)uVar10;
                _UNK_150631d94 = SUB84(uVar10,4);
                local_f0.NumBits = ___xmm_00000000ffffffff0000008000000000;
                local_f0.MaxBits = _UNK_150631d94;
                local_d0 = uVar12;
                local_c0 = (void *)0x0;
                uStack_b8 = 0;
                local_b0 = 0;
                local_f0.AllocatorInstance.InlineData[0] = '\0';
                local_f0.AllocatorInstance.InlineData[1] = '\0';
                local_f0.AllocatorInstance.InlineData[2] = '\0';
                local_f0.AllocatorInstance.InlineData[3] = '\0';
                local_f0.AllocatorInstance.InlineData[4] = '\0';
                local_f0.AllocatorInstance.InlineData[5] = '\0';
                local_f0.AllocatorInstance.InlineData[6] = '\0';
                local_f0.AllocatorInstance.InlineData[7] = '\0';
                local_f0.AllocatorInstance.InlineData[8] = '\0';
                local_f0.AllocatorInstance.InlineData[9] = '\0';
                local_f0.AllocatorInstance.InlineData[10] = '\0';
                local_f0.AllocatorInstance.InlineData[0xb] = '\0';
                local_f0.AllocatorInstance.InlineData[0xc] = '\0';
                local_f0.AllocatorInstance.InlineData[0xd] = '\0';
                local_f0.AllocatorInstance.InlineData[0xe] = '\0';
                local_f0.AllocatorInstance.InlineData[0xf] = '\0';
                ___xmm_00000000ffffffff0000008000000000 = uVar11;
                if (((pFVar5 <= (FScriptContainerElement *)local_168) &&
                    ((FScriptContainerElement *)local_168 < pFVar5 + (longlong)*piVar24 * 0xc0)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar16 = param_2->ArrayNum;
                if (iVar16 == *piVar24) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8c0,&param_2->AllocatorInstance,piVar24);
                }
                param_2->ArrayNum = iVar16 + 1;
                FTriboxNode::FTriboxNode
                          ((FTriboxNode *)
                           ((param_2->AllocatorInstance).Data + (longlong)iVar16 * 0xc0),
                           (FTriboxNode *)local_168);
                uStack_b8 = uStack_b8 & 0xffffffff00000000;
                if (local_c0 != (void *)0x0) {
                  FMemory::Free(local_c0);
                }
                uVar3 = uStack_f8 >> 0x20;
                uStack_f8 = uStack_f8 & 0xffffffff00000000;
                if ((int)uVar3 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,0,&local_100,0,(int *)((longlong)&uStack_f8 + 4));
                }
                iVar16 = local_f0.MaxBits;
                local_d0 = 0xffffffff;
                local_f0._24_8_ = (ulonglong)(uint)local_f0.MaxBits << 0x20;
                if (0x80 < (uint)iVar16) {
                  local_f0.NumBits = 0;
                  local_f0.MaxBits = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_f0,0);
                }
                if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
                }
                if (local_100.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data);
                }
                if ((FImplicitObject *)local_168._80_8_ != (FImplicitObject *)0x0) {
                  LOCK();
                  plVar1 = (longlong *)(local_168._80_8_ + 8);
                  lVar33 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if (((int)lVar33 == 1) && (*(int *)((longlong)(local_168._80_8_ + 8) + 4) == 0)) {
                    (**(code **)*(longlong *)local_168._80_8_)(local_168._80_8_,1);
                  }
                }
                uVar30 = param_2->ArrayNum - 1;
                uVar22 = 0;
                if ((int)uVar30 < param_2->ArrayNum) {
                  uVar22 = ~uVar30 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_210 = (param_2->AllocatorInstance).Data;
                lVar33 = (longlong)param_2->ArrayNum * 0xc0;
                this_00 = (FTribox *)(local_210 + lVar33 + -0xc0);
                FVar26 = local_268;
                param_1 = local_240;
                while (local_240 = param_1, (int)local_288 != 0) {
                  puVar28 = (ulonglong *)0x0;
                  local_268 = FVar26;
                  if (((int)local_288 < 1) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar16 = (int)local_288 + -1;
                  uVar3 = *(ulonglong *)(local_290.Data + (longlong)iVar16 * 8);
                  iVar31 = ((int)local_288 - iVar16) + -1;
                  if (iVar31 != 0) {
                    memmove(local_290.Data + (longlong)iVar16 * 8,
                            local_290.Data + (longlong)iVar16 * 8 + 8,(longlong)iVar31 << 3);
                  }
                  local_288 = CONCAT44(local_288._4_4_,(int)local_288 + -1);
                  uVar22 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
                  uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                  puVar19 = puVar28;
                  if (*(int *)&(pFVar13->RootTriboxes).field_0x8 !=
                      *(int *)&(pFVar13->RootTriboxes).field_0x34) {
                    puVar4 = *(undefined1 **)&(pFVar13->RootTriboxes).field_0x40;
                    puVar25 = &(pFVar13->RootTriboxes).field_0x38;
                    if (puVar4 != (undefined1 *)0x0) {
                      puVar25 = puVar4;
                    }
                    iVar16 = *(int *)(puVar25 +
                                     (ulonglong)
                                     (*(int *)&(pFVar13->RootTriboxes).field_0x48 - 1U &
                                     (uVar22 >> 0x10 ^ uVar22)) * 4);
                    if (iVar16 != -1) {
                      do {
                        puVar19 = (ulonglong *)
                                  ((longlong)iVar16 * 0xd0 + *(longlong *)&pFVar13->RootTriboxes);
                        if (*puVar19 == uVar3) break;
                        iVar16 = (int)puVar19[0x19];
                        puVar19 = puVar28;
                      } while (iVar16 != -1);
                    }
                  }
                  local_218 = puVar19 + 0xe;
                  local_270 = (FConvexOptimizer *)(puVar19 + 0x10);
                  if (puVar19 == (ulonglong *)0x0) {
                    local_218 = (ulonglong *)&DAT_00000068;
                  }
                  iStack_1f0 = 0;
                  uStack_1ec = 1;
                  if (puVar19 == (ulonglong *)0x0) {
                    local_270 = (FConvexOptimizer *)&DAT_00000078;
                  }
                  local_1d8 = 0;
                  uVar22 = *(uint *)(local_270->ShapesArray).AllocatorInstance.InlineData;
                  uStack_1dc = 0;
                  if (uVar22 != 0) {
                    pFVar6 = (FConvexOptimizer *)(local_270->CollisionObjects).Ptr;
                    pFVar32 = local_270;
                    if (pFVar6 != (FConvexOptimizer *)0x0) {
                      pFVar32 = pFVar6;
                    }
                    uVar30 = *(uint *)&(pFVar32->SimplifiedConvexes).AllocatorInstance.Data;
                    local_1d8 = 0;
                    while (uVar30 == 0) {
                      lVar23 = (longlong)iStack_1f0;
                      local_1d8 = local_1d8 + 0x20;
                      iStack_1f0 = iStack_1f0 + 1;
                      uStack_1dc = uVar22;
                      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <
                          iStack_1f0) goto LAB_143a83532;
                      uVar30 = *(uint *)((pFVar32->ShapesArray).AllocatorInstance.InlineData +
                                        lVar23 * 4 + -0x14);
                    }
                    uStack_1ec = -uVar30 & uVar30;
                    uVar3 = (ulonglong)uStack_1ec * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar3 != 0) {
                      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    local_220 = (int)lVar23;
                    uStack_1dc = local_220 + -1 + local_1d8;
                    if ((int)uVar22 < (int)uStack_1dc) {
                      uStack_1dc = uVar22;
                    }
                  }
LAB_143a83532:
                  piVar24 = (int *)((longlong)puVar19 + 0xa4);
                  uStack_1d4 = local_198[4].Number;
                  puVar28 = puVar19 + 0xf;
                  if (puVar19 == (ulonglong *)0x0) {
                    piVar24 = (int *)&DAT_0000009c;
                    puVar28 = (ulonglong *)&DAT_00000070;
                  }
                  TStack_1c0._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
                  uStack_1e0 = 0xffffffff;
                  iStack_1d0 = (int)*puVar28 - *piVar24;
                  local_1e8._0_4_ = SUB84(local_270,0);
                  local_1e8._4_4_ = (undefined4)((ulonglong)local_270 >> 0x20);
                  puVar28 = puVar19 + 0x13;
                  if (puVar19 == (ulonglong *)0x0) {
                    puVar28 = (ulonglong *)&DAT_00000090;
                  }
                  local_27c = (uint)*puVar28;
                  iVar16 = (int)local_27c >> 5;
                  bVar21 = (byte)local_27c;
                  uVar30 = local_27c & 0xffffffe0;
                  TStack_1c0.Array._0_4_ = (undefined4)local_1e8;
                  TStack_1c0.Array._4_4_ = local_1e8._4_4_;
                  TStack_1c0.UnvisitedBitMask = 0xffffffff;
                  TStack_1c0._28_4_ = local_198[4].Number;
                  uStack_19c = uStack_1cc;
                  local_1f8 = local_218;
                  local_1e8 = local_270;
                  local_1c8 = local_218;
                  TStack_1c0.CurrentBitIndex = uStack_1dc;
                  TStack_1c0.BaseBitIndex = local_1d8;
                  iStack_1a0 = iStack_1d0;
                  if ((((int)local_27c < 0) || ((int)uVar22 < (int)local_27c)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x7af,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  puVar28 = local_218;
                  uVar22 = *(uint *)(local_270->ShapesArray).AllocatorInstance.InlineData;
                  uVar27 = local_27c;
                  if (local_27c != uVar22) {
                    pFVar6 = (FConvexOptimizer *)(local_270->CollisionObjects).Ptr;
                    pFVar32 = local_270;
                    if (pFVar6 != (FConvexOptimizer *)0x0) {
                      pFVar32 = pFVar6;
                    }
                    uVar27 = -1 << (bVar21 & 0x1f) &
                             *(uint *)((longlong)
                                       &(((FConvexOptimizer *)(&pFVar32->ShapesArray + -1))->
                                        SimplifiedConvexes).AllocatorInstance.Data +
                                      (longlong)iVar16 * 4);
                    while (uVar27 == 0) {
                      lVar23 = (longlong)iVar16;
                      uVar30 = uVar30 + 0x20;
                      iVar16 = iVar16 + 1;
                      local_27c = uVar22;
                      uVar27 = uVar22;
                      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                      goto LAB_143a83690;
                      uVar27 = *(uint *)((pFVar32->ShapesArray).AllocatorInstance.InlineData +
                                        lVar23 * 4 + -0x14);
                    }
                    uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar3 != 0) {
                      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    local_21c = (int)lVar23;
                    local_27c = (uVar30 - 1) + local_21c;
                    uVar27 = local_27c;
                    if ((int)uVar22 < (int)local_27c) {
                      local_27c = uVar22;
                      uVar27 = uVar22;
                    }
                  }
LAB_143a83690:
                  while( true ) {
                    puVar19 = local_1c8;
                    if ((int)local_1c8[1] - *(int *)((longlong)local_1c8 + 0x34) != iStack_1a0) {
                      local_280[0] = 0;
                      `TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_280);
                    }
                    pFVar5 = local_210;
                    lVar23 = (longlong)TStack_1c0.CurrentBitIndex;
                    if (((TStack_1c0.CurrentBitIndex == uVar27) &&
                        ((FConvexOptimizer *)CONCAT44(TStack_1c0.Array._4_4_,TStack_1c0.Array._0_4_)
                         == local_270)) && (puVar19 == puVar28)) break;
                    uVar3 = *puVar19;
                    if (*(char *)(uVar3 + 8 + lVar23 * 0x18) != '\0') {
                      *(undefined1 *)(uVar3 + 8 + lVar23 * 0x18) = 0;
                      local_258 = *(ulonglong *)(uVar3 + lVar23 * 0x18);
                      uVar22 = ((uint)(local_258 >> 0x14) & 0xffff ^ (uint)(local_258 >> 4)) *
                               -0x7a143595;
                      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                      if (*(int *)&(pFVar13->RootTriboxes).field_0x8 !=
                          *(int *)&(pFVar13->RootTriboxes).field_0x34) {
                        puVar4 = *(undefined1 **)&(pFVar13->RootTriboxes).field_0x40;
                        puVar25 = &(pFVar13->RootTriboxes).field_0x38;
                        if (puVar4 != (undefined1 *)0x0) {
                          puVar25 = puVar4;
                        }
                        iVar16 = *(int *)(puVar25 +
                                         (ulonglong)
                                         (*(int *)&(pFVar13->RootTriboxes).field_0x48 - 1U &
                                         (uVar22 >> 0x10 ^ uVar22)) * 4);
                        if (iVar16 != -1) {
                          do {
                            puVar19 = (ulonglong *)
                                      ((longlong)iVar16 * 0xd0 + *(longlong *)&pFVar13->RootTriboxes
                                      );
                            if (*puVar19 == local_258) goto LAB_143a8376e;
                            iVar16 = (int)puVar19[0x19];
                          } while (iVar16 != -1);
                        }
                      }
                      puVar19 = (ulonglong *)0x0;
LAB_143a8376e:
                      pFVar29 = (FTribox *)(puVar19 + 1);
                      if (puVar19 == (ulonglong *)0x0) {
                        pFVar29 = (FTribox *)0x0;
                      }
                      if (*(char *)(pFVar29[1].MaxDists + 5) != '\0') {
                        if (((FTribox *)(local_210 + lVar33 + -0x7c) < &local_a8) ||
                           ((FTribox *)(local_a8.MaxDists + 0x11) < this_00)) {
                          local_a8.MaxDists._0_8_ = *(undefined8 *)this_00->MaxDists;
                          local_a8.MaxDists._8_8_ = *(undefined8 *)(this_00->MaxDists + 2);
                          local_a8.MaxDists._16_8_ = *(undefined8 *)(this_00->MaxDists + 4);
                          local_a8.MaxDists._24_8_ = *(undefined8 *)(this_00->MaxDists + 6);
                          local_a8.MaxDists._32_8_ = *(undefined8 *)(this_00->MaxDists + 8);
                          local_a8.MaxDists._40_8_ = *(undefined8 *)(this_00->MaxDists + 10);
                          local_a8.MaxDists._48_8_ = *(undefined8 *)(this_00->MaxDists + 0xc);
                          local_a8.MaxDists._56_8_ = *(undefined8 *)(this_00->MaxDists + 0xe);
                          local_a8.MaxDists._64_8_ = *(undefined8 *)(this_00->MaxDists + 0x10);
                        }
                        else {
                          local_a8.MaxDists._0_8_ = *(undefined8 *)this_00->MaxDists;
                          local_a8.MaxDists._8_8_ = *(undefined8 *)(this_00->MaxDists + 2);
                          local_a8.MaxDists._16_8_ = *(undefined8 *)(this_00->MaxDists + 4);
                          local_a8.MaxDists._24_8_ = *(undefined8 *)(this_00->MaxDists + 6);
                          local_a8.MaxDists._32_8_ = *(undefined8 *)(this_00->MaxDists + 8);
                          local_a8.MaxDists._40_8_ = *(undefined8 *)(this_00->MaxDists + 10);
                          local_a8.MaxDists._48_8_ = *(undefined8 *)(this_00->MaxDists + 0xc);
                          local_a8.MaxDists._56_8_ = *(undefined8 *)(this_00->MaxDists + 0xe);
                          local_a8.MaxDists._64_8_ = *(undefined8 *)(this_00->MaxDists + 0x10);
                        }
                        local_a8.bIsValid = *(bool *)(local_210 + lVar33 + -0x78);
                        local_a8.bHasDatas = *(bool *)(local_210 + lVar33 + -0x77);
                        FTribox::operator+=(&local_a8,pFVar29);
                        fVar34 = FTribox::ComputeVolume(&local_a8);
                        if (fVar34 / (*(float *)(pFVar5 + lVar33 + -100) + pFVar29[1].MaxDists[4]) <
                            CVars::ChaosConvexSplittingThreshold) {
                          FTribox::operator+=(this_00,pFVar29);
                          *(float *)(pFVar5 + lVar33 + -100) =
                               pFVar29[1].MaxDists[4] + *(float *)(pFVar5 + lVar33 + -100);
                          if (((local_290.Data <= (FScriptContainerElement *)&local_258) &&
                              ((FScriptContainerElement *)&local_258 <
                               local_290.Data + (longlong)local_288._4_4_ * 8)) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar15)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          iVar16 = (int)local_288;
                          if ((int)local_288 == local_288._4_4_) {
                            iVar16 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x808,&local_290,(int *)((longlong)&local_288 + 4));
                          }
                          local_288 = CONCAT44(local_288._4_4_,iVar16 + 1);
                          *(ulonglong *)(local_290.Data + (longlong)iVar16 * 8) = local_258;
                          *(undefined1 *)(pFVar29[1].MaxDists + 5) = 0;
                        }
                      }
                    }
                    TStack_1c0.UnvisitedBitMask =
                         TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
                  }
                  param_2 = local_208;
                  FVar26 = local_268;
                  param_1 = local_240;
                }
              }
              break;
            }
            iVar16 = (int)puVar28[0x19];
          } while (iVar16 != -1);
        }
      }
      local_278 = local_278 + 1;
      local_268 = (FName)((longlong)FVar26 + 1);
      FVar26 = local_238;
    } while ((longlong)local_268 < local_200);
  }
  if (local_290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// NumCollisionObjects @ 143a87560

int __thiscall Chaos::Private::FConvexOptimizer::NumCollisionObjects(FConvexOptimizer *this)

{
  FImplicitBVH *pFVar1;
  
  pFVar1 = (this->BVH).Ptr;
  if (pFVar1 == (FImplicitBVH *)0x0) {
    pFVar1 = (FImplicitBVH *)(this->CollisionObjects).Ptr;
  }
  return (pFVar1->Objects).ArrayNum;
}

// SimplifyRootConvexes @ 143a935b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FConvexOptimizer::SimplifyRootConvexes
          (FConvexOptimizer *this,TRefCountPtr<Chaos::FImplicitObjectUnion> *param_1,
          TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2,EObjectStateType param_3,TBitArray<FDefaultBitArrayAllocator> *param_4)

{
  int *piVar1;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FCollisionObjects *pFVar5;
  FImplicitBVH *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collisions_SimplifyConvexes> FVar11;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> TVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  bool bVar16;
  LARGE_INTEGER local_58;
  FStatMessage local_50;
  FName local_40;
  
  FVar11 = StatPtr_STAT_Collisions_SimplifyConvexes;
  if (StatPtr_STAT_Collisions_SimplifyConvexes ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_SimplifyConvexes>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_50,"STAT_Collisions_SimplifyConvexes");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collisions_SimplifyConvexes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SimplifyConvexes,
                        *pFVar10,L"Collisions::SimplifyConvexes","STATGROUP_ChaosCollision",
                        "STATCAT_Advanced",L"ChaosCollision",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar7 = false;
  bVar9 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar13 == 0)) {
LAB_143a93702:
    bVar8 = false;
    FVar15 = local_40;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_58.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_58.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.s.LowPart = FVar14.Value;
        local_58.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_58.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ConvexOptimizer.cpp"
                   ,0x9e);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143a93702;
    local_58.s.LowPart = FVar14.Value;
    local_58.s.HighPart = uVar13;
    local_40 = FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar8 = true;
  }
  if ((((CVars::bChaosConvexSimplifyUnion == false) ||
       (param_1->Reference == (FImplicitObjectUnion *)0x0)) ||
      (iVar3 = param_2->ArrayNum, iVar3 < 1)) ||
     ((iVar3 != param_4->NumBits || ((param_1->Reference->MObjects).ArrayNum < iVar3))))
  goto LAB_143a9382a;
  piVar1 = &(this->SimplifiedConvexes).ArrayMax;
  pFVar4 = (this->SimplifiedConvexes).AllocatorInstance.Data;
  iVar3 = (this->SimplifiedConvexes).ArrayNum;
  if ((this->SimplifiedConvexes).ArrayMax < 0) {
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)pFVar4,iVar3);
    (this->SimplifiedConvexes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)pFVar4,iVar3);
    (this->SimplifiedConvexes).ArrayNum = 0;
  }
  pFVar5 = (this->CollisionObjects).Ptr;
  (pFVar5->ImplicitObjects).ArrayNum = 0;
  if ((pFVar5->ImplicitObjects).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)pFVar5,0,&(pFVar5->ImplicitObjects).ArrayMax);
  }
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::Reset(&this->ShapesArray,0);
  if (param_2->ArrayNum == 1) {
LAB_143a93819:
    BuildSingleConvex(this,param_1,param_2,param_4);
  }
  else {
    if (param_3 == Dynamic) {
      if (CVars::ChaosConvexDynamicMode == 0) goto LAB_143a93819;
      if (CVars::ChaosConvexDynamicMode != 2) goto LAB_143a937ed;
LAB_143a93814:
      bVar16 = true;
    }
    else {
      if (CVars::ChaosConvexKinematicMode == 0) goto LAB_143a93819;
      if (CVars::ChaosConvexKinematicMode == 2) goto LAB_143a93814;
LAB_143a937ed:
      bVar16 = false;
    }
    BuildMultipleConvex(this,param_1,param_2,bVar16,param_4);
  }
LAB_143a9382a:
  if (CVars::bChaosUnionBVHEnabled != false) {
    pTVar2 = &this->BVH;
    pFVar6 = pTVar2->Ptr;
    if (pFVar6 != (FImplicitBVH *)0x0) {
      pTVar2->Ptr = (FImplicitBVH *)0x0;
      FImplicitBVH::~FImplicitBVH(pFVar6);
      ::operator_delete(pFVar6,0x38);
    }
    TVar12 = FImplicitBVH::TryMakeFromLeaves
                       ((TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *)
                        &local_58.s,(int)(this->CollisionObjects).Ptr,CVars::ChaosUnionBVHMinShapes)
    ;
    if ((FImplicitBVH *)pTVar2 != TVar12.Ptr) {
      pFVar6 = pTVar2->Ptr;
      pTVar2->Ptr = (FImplicitBVH *)((TVar12.Ptr)->Objects).AllocatorInstance.Data;
      ((TVar12.Ptr)->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (pFVar6 != (FImplicitBVH *)0x0) {
        FImplicitBVH::~FImplicitBVH(pFVar6);
        ::operator_delete(pFVar6,0x38);
      }
    }
    pFVar6 = (FImplicitBVH *)CONCAT44(local_58.s.HighPart,local_58.s.LowPart);
    if (pFVar6 != (FImplicitBVH *)0x0) {
      FImplicitBVH::~FImplicitBVH(pFVar6);
      ::operator_delete(pFVar6,0x38);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index.Value = local_40.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// VisitCollisionObjects @ 143a9d040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FConvexOptimizer::VisitCollisionObjects
          (FConvexOptimizer *this,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  FImplicitBVH *pFVar9;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *local_c0;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0 [2];
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  uVar7 = _UNK_150689688;
  uVar6 = ___xmm_3ff00000000000003ff0000000000000;
  uVar5 = _UNK_150689518;
  uVar4 = ___xmm_00000000000000003ff0000000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (CVars::bChaosConvexSimplifyUnion) {
    pFVar9 = (this->BVH).Ptr;
    if (pFVar9 == (FImplicitBVH *)0x0) {
      pFVar9 = (FImplicitBVH *)(this->CollisionObjects).Ptr;
    }
    local_b0[0] = 1;
    iVar2 = (pFVar9->Objects).ArrayNum;
    pFVar8 = (pFVar9->Objects).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((pFVar9->Objects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::Private::FImplicitBVHObject_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_b8);
      }
      if (pFVar8 == pFVar1) break;
      dVar3 = (double)(float)((ulonglong)*(undefined8 *)(pFVar8 + 8) >> 0x20);
      local_b4 = *(undefined4 *)(pFVar8 + 0x40);
      local_c8 = &local_b4;
      local_a8 = (double)(float)*(undefined8 *)pFVar8;
      dStack_a0 = (double)(float)((ulonglong)*(undefined8 *)pFVar8 >> 0x20);
      local_98._8_4_ = SUB84(dVar3,0);
      local_98._0_8_ = (double)(float)*(undefined8 *)(pFVar8 + 8);
      local_98._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_78 = (double)*(float *)(pFVar8 + 0x18);
      uStack_70 = 0;
      local_88._8_4_ = SUB84((double)*(float *)(pFVar8 + 0x14),0);
      local_88._0_8_ = (double)*(float *)(pFVar8 + 0x10);
      local_88._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar8 + 0x14) >> 0x20);
      local_68 = uVar6;
      uStack_60 = uVar7;
      local_58 = uVar4;
      uStack_50 = uVar5;
      local_c0 = param_1;
      (**(code **)(**(longlong **)(pFVar8 + 0x38) + 0x140))
                (*(longlong **)(pFVar8 + 0x38),&local_a8,*(undefined4 *)(pFVar8 + 0x34),local_b0);
      pFVar8 = pFVar8 + 0x48;
    }
  }
  return;
}

// VisitOverlappingObjects @ 143a9d2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FConvexOptimizer::VisitOverlappingObjects
          (FConvexOptimizer *this,TAABB<double,3> *param_1,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_2)

{
  int iVar1;
  FImplicitBVH *this_00;
  FCollisionObjects *pFVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_188 [32];
  int *local_168;
  float *local_160;
  TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *local_158;
  undefined1 local_148 [4];
  int local_144;
  float local_140 [2];
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined1 auStack_11c [4];
  int local_118 [2];
  FImplicitBVH *local_110;
  FConvexOptimizer **local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  FConvexOptimizer *local_e8;
  int *local_e0;
  TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *local_d8;
  TAABB<double,3> *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  uVar8 = _UNK_150689688;
  uVar7 = ___xmm_3ff00000000000003ff0000000000000;
  uVar6 = _UNK_150689518;
  uVar5 = ___xmm_00000000000000003ff0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  if (CVars::bChaosConvexSimplifyUnion) {
    this_00 = (this->BVH).Ptr;
    local_e8 = this;
    local_d8 = param_2;
    if (CVars::ChaosConvexUseDirectOverlap) {
      iVar11 = 1;
      local_144 = 1;
      local_138 = (float)*(double *)&param_1->MMin;
      local_134 = (float)*(double *)&(param_1->MMin).field_0x8;
      local_100 = local_138;
      local_fc = local_134;
      local_130 = (float)*(double *)&(param_1->MMin).field_0x10;
      local_12c = (float)*(double *)&param_1->MMax;
      local_f8 = local_130;
      local_f4 = local_12c;
      local_128 = (float)*(double *)&(param_1->MMax).field_0x8;
      local_124 = (float)*(double *)&(param_1->MMax).field_0x10;
      local_f0 = local_128;
      local_ec = local_124;
      if (this_00 == (FImplicitBVH *)0x0) {
        pFVar2 = (this->CollisionObjects).Ptr;
        pFVar14 = (pFVar2->ImplicitObjects).AllocatorInstance.Data;
        iVar1 = (pFVar2->ImplicitObjects).ArrayNum;
        puVar12 = auStack_11c + -(longlong)pFVar14;
        pFVar15 = pFVar14 + 0x28;
        pFVar13 = pFVar14 + (longlong)iVar1 * 0x48;
        while( true ) {
          if ((pFVar2->ImplicitObjects).ArrayNum != iVar1) {
            `TCheckedPointerIterator<Chaos::Private::FImplicitBVHObject,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_148);
            iVar11 = local_144;
          }
          if (pFVar14 == pFVar13) break;
          lVar10 = 0;
          pFVar9 = pFVar15;
          do {
            if ((*(float *)pFVar9 <= *(float *)(pFVar9 + (longlong)(puVar12 + -0xc)) &&
                 *(float *)(pFVar9 + (longlong)(puVar12 + -0xc)) != *(float *)pFVar9) ||
               (*(float *)(pFVar9 + (longlong)puVar12) < *(float *)(pFVar9 + -0xc)))
            goto LAB_143a9d4fe;
            lVar10 = lVar10 + 1;
            pFVar9 = pFVar9 + 4;
          } while (lVar10 < 3);
          local_120 = *(float *)(pFVar15 + 0x18);
          local_160 = &local_120;
          local_168 = local_118;
          local_144 = iVar11 + 1;
          dVar3 = (double)(float)((ulonglong)*(undefined8 *)(pFVar15 + -0x20) >> 0x20);
          local_140[0] = *(float *)(pFVar15 + 0xc);
          local_110 = *(FImplicitBVH **)(pFVar15 + 0x10);
          local_b8._8_4_ = SUB84(dVar3,0);
          local_b8._0_8_ = (double)(float)*(undefined8 *)(pFVar15 + -0x20);
          local_b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          local_98 = (double)*(float *)(pFVar15 + -0x10);
          uStack_90 = 0;
          local_c8._8_4_ = SUB84((double)*(float *)(pFVar15 + -0x24),0);
          local_c8._0_8_ = (double)*(float *)pFVar14;
          local_c8._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar15 + -0x24) >> 0x20);
          local_a8._8_4_ = SUB84((double)*(float *)(pFVar15 + -0x14),0);
          local_a8._0_8_ = (double)*(float *)(pFVar15 + -0x18);
          local_a8._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar15 + -0x14) >> 0x20);
          local_88 = uVar7;
          uStack_80 = uVar8;
          local_78 = uVar5;
          uStack_70 = uVar6;
          local_118[0] = iVar11;
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_110,local_c8,local_140);
          iVar11 = local_144;
LAB_143a9d4fe:
          pFVar14 = pFVar14 + 0x48;
          pFVar15 = pFVar15 + 0x48;
          puVar12 = puVar12 + -0x48;
        }
      }
      else {
        local_e0 = &local_144;
        local_d0 = (TAABB<double,3> *)&local_100;
        local_108 = &local_e8;
        local_110 = this_00;
        FImplicitBVH::
        VisitOverlappingNodesStack<_Chaos::Private::FImplicitBVH::VisitAllIntersections<_Chaos::Private::FConvexOptimizer::VisitOverlappingObjects_::__l11::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TAABB<float,3> *)&local_138,(<lambda_1> *)&local_110);
      }
    }
    else {
      local_144 = 1;
      if (this_00 == (FImplicitBVH *)0x0) {
        pFVar2 = (this->CollisionObjects).Ptr;
        iVar11 = (pFVar2->ImplicitObjects).ArrayNum;
        pFVar13 = (pFVar2->ImplicitObjects).AllocatorInstance.Data;
        pFVar15 = pFVar13 + (longlong)iVar11 * 0x48;
        while( true ) {
          if ((pFVar2->ImplicitObjects).ArrayNum != iVar11) {
            `TCheckedPointerIterator<Chaos::Private::FImplicitBVHObject,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_148);
          }
          if (pFVar13 == pFVar15) break;
          dVar3 = (double)(float)((ulonglong)*(undefined8 *)(pFVar13 + 8) >> 0x20);
          local_140[0] = *(float *)(pFVar13 + 0x40);
          local_160 = local_140;
          dVar4 = (double)(float)((ulonglong)*(undefined8 *)pFVar13 >> 0x20);
          local_168 = &local_144;
          local_b8._8_4_ = SUB84(dVar3,0);
          local_b8._0_8_ = (double)(float)*(undefined8 *)(pFVar13 + 8);
          local_b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          local_98 = (double)*(float *)(pFVar13 + 0x18);
          uStack_90 = 0;
          local_c8._8_4_ = SUB84(dVar4,0);
          local_c8._0_8_ = (double)(float)*(undefined8 *)pFVar13;
          local_c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          local_a8._8_4_ = SUB84((double)*(float *)(pFVar13 + 0x14),0);
          local_a8._0_8_ = (double)*(float *)(pFVar13 + 0x10);
          local_a8._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar13 + 0x14) >> 0x20);
          local_88 = uVar7;
          uStack_80 = uVar8;
          local_78 = uVar5;
          uStack_70 = uVar6;
          local_158 = param_2;
          (**(code **)(**(longlong **)(pFVar13 + 0x38) + 0x138))
                    (*(longlong **)(pFVar13 + 0x38),param_1,local_c8,*(undefined4 *)(pFVar13 + 0x34)
                    );
          pFVar13 = pFVar13 + 0x48;
        }
      }
      else {
        local_138 = (float)*(double *)&param_1->MMin;
        local_e0 = &local_144;
        local_108 = &local_e8;
        local_134 = (float)*(double *)&(param_1->MMin).field_0x8;
        local_130 = (float)*(double *)&(param_1->MMin).field_0x10;
        local_12c = (float)*(double *)&param_1->MMax;
        local_128 = (float)*(double *)&(param_1->MMax).field_0x8;
        local_124 = (float)*(double *)&(param_1->MMax).field_0x10;
        local_110 = this_00;
        local_d0 = param_1;
        FImplicitBVH::
        VisitOverlappingNodesStack<_Chaos::Private::FImplicitBVH::VisitAllIntersections<_Chaos::Private::FConvexOptimizer::VisitOverlappingObjects_::__l25::<lambda_2>_>_::__l2::<lambda_1>_>
                  (this_00,(TAABB<float,3> *)&local_138,(<lambda_1> *)&local_110);
      }
    }
  }
  return;
}

