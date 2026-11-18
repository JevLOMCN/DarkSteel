// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedGraphTag @ 1474b3540

FScopedGraphTag * __thiscall
UE::Anim::FScopedGraphTag::FScopedGraphTag
          (FScopedGraphTag *this,FAnimationBaseContext *param_1,FName param_2)

{
  FAnimationUpdateSharedContext *pFVar1;
  IAnimClassInterface *pIVar2;
  FProperty *this_00;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScopedGraphTag *pFVar8;
  longlong *plVar9;
  void *pvVar10;
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> FVar11;
  TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar12;
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> FVar13;
  TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_01;
  uint uVar14;
  void *pvVar15;
  FName local_res8;
  void *local_28;
  void *pvStack_20;
  
  pFVar1 = param_1->SharedContext;
  this->SharedContext = pFVar1;
  this->Tag = param_2;
  if (pFVar1 == (FAnimationUpdateSharedContext *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SharedContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeMessages.cpp"
                       ,0x10,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FScopedGraphTag *)(*pcVar4)();
      return pFVar8;
    }
  }
  uVar6 = param_1->CurrentNodeId;
  pvVar15 = (void *)0x0;
  pvVar10 = pvVar15;
  if ((uVar6 != 0xffffffff) &&
     (pIVar2 = param_1->AnimInstanceProxy->AnimClassInterface, pvVar10 = (void *)0x0,
     pIVar2 != (IAnimClassInterface *)0x0)) {
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x20))();
    uVar14 = 0;
    if ((int)uVar6 < (int)plVar9[1]) {
      uVar14 = ~uVar6 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FScopedGraphTag *)(*pcVar4)();
        return pFVar8;
      }
    }
    this_00 = *(FProperty **)(*plVar9 + (longlong)(int)uVar6 * 8);
    pvVar15 = (void *)this_00[1]._padding_;
    pvVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (this_00,param_1->AnimInstanceProxy->AnimInstanceObject,0);
  }
  FVar3 = this->Tag;
  pFVar1 = this->SharedContext;
  this_01 = &(pFVar1->MessageStack).TagStacks;
  local_res8 = FVar3;
  uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar6 = FVar3.Number + uVar6;
  iVar7 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FName>
                    ((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)this_01,uVar6,&local_res8);
  if (iVar7 != -1) {
    pTVar12 = *(TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                **)&(pFVar1->MessageStack).TagStacks.field_0x180;
    if (pTVar12 ==
        (TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
         *)0x0) {
      pTVar12 = this_01;
    }
    if (&pTVar12->field_0x0 + (longlong)iVar7 * 0x60 != (undefined1 *)0x0) {
      FVar13 = (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)
               ((longlong)(&pTVar12->field_0x0 + (longlong)iVar7 * 0x60) + 8);
      goto LAB_1474b3693;
    }
  }
  FVar13 = (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)
           TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                       *)this_01,uVar6,&local_res8);
LAB_1474b3693:
  FVar11 = *(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar13 + 0x40);
  if (*(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar13 + 0x40) ==
      (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
    FVar11 = FVar13;
  }
  local_28 = pvVar10;
  pvStack_20 = pvVar15;
  if (((ulonglong)FVar11 <= &local_28) &&
     (&local_28 < (void **)((longlong)*(int *)((longlong)FVar13 + 0x4c) * 0x10 + (longlong)FVar11)))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FScopedGraphTag *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = *(int *)((longlong)FVar13 + 0x48);
  if (iVar7 == *(int *)((longlong)FVar13 + 0x4c)) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FNodeInfo>_>
                      (0x810,(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)FVar13,
                       (int *)((longlong)FVar13 + 0x4c));
  }
  *(int *)((longlong)FVar13 + 0x48) = iVar7 + 1;
  FVar11 = *(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar13 + 0x40);
  if (*(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar13 + 0x40) ==
      (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
    FVar11 = FVar13;
  }
  plVar9 = (longlong *)((longlong)FVar11 + (longlong)iVar7 * 0x10);
  *plVar9 = (longlong)local_28;
  plVar9[1] = (longlong)pvStack_20;
  return this;
}

// ~FScopedGraphTag @ 1474b52c0

void __thiscall UE::Anim::FScopedGraphTag::~FScopedGraphTag(FScopedGraphTag *this)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  undefined1 *puVar6;
  
  if (this->SharedContext == (FAnimationUpdateSharedContext *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SharedContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeMessages.cpp"
                       ,0x24,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&(this->SharedContext->MessageStack).TagStacks,this->Tag);
  if (pTVar5 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)&pTVar5->field_0x50 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar6 = *(undefined1 **)&pTVar5->field_0x48;
  if (*(undefined1 **)&pTVar5->field_0x48 == (undefined1 *)0x0) {
    puVar6 = &pTVar5->field_0x8;
  }
  uVar1 = *(int *)&pTVar5->field_0x50 - 1;
  iVar2 = ~uVar1 + *(int *)&pTVar5->field_0x50;
  if (iVar2 != 0) {
    memmove(puVar6 + (longlong)(int)uVar1 * 0x10,puVar6 + (longlong)(int)uVar1 * 0x10 + 0x10,
            (longlong)iVar2 << 4);
  }
  *(int *)&pTVar5->field_0x50 = *(int *)&pTVar5->field_0x50 + -1;
  Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FNodeInfo>_>
            (0x10,8,(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)&pTVar5->field_0x8,
             *(int *)&pTVar5->field_0x50,(int *)&pTVar5->field_0x54);
  return;
}

