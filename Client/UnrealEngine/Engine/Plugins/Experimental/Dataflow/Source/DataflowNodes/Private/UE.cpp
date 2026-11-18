// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 109

// ConstructForTests<FSelectionSetDataflowNode> @ 14dab85f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSelectionSetDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSelectionSetDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"1 2 3");
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FSelectionSetDataflowNode> @ 14dab8640

void __cdecl UE::CoreUObject::Private::Destruct<FSelectionSetDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FSelectionSetDataflowNode> @ 14dab8680

bool __cdecl
UE::CoreUObject::Private::Copy<FSelectionSetDataflowNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pvVar2 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar3) break;
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x248),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 600),
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FFloatOverrideDataflowNode> @ 14dab8780

void __cdecl UE::CoreUObject::Private::Construct<FFloatOverrideDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FFloatOverrideDataflowNode__6B_;
  ::FName::FName((FName *)((longlong)param_1 + 0x248),"Overrides");
  ::FName::FName((FName *)((longlong)param_1 + 0x250),"FloatAttr");
  *(undefined4 *)((longlong)param_1 + 600) = 0;
  return;
}

// ConstructForTests<FFloatOverrideDataflowNode> @ 14dab87e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFloatOverrideDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FFloatOverrideDataflowNode__6B_;
  ::FName::FName((FName *)((longlong)param_1 + 0x248),"Overrides");
  ::FName::FName((FName *)((longlong)param_1 + 0x250),"FloatAttr");
  *(undefined4 *)((longlong)param_1 + 600) = 0;
  return;
}

// Destruct<FFloatOverrideDataflowNode> @ 14dab8840

void __cdecl UE::CoreUObject::Private::Destruct<FFloatOverrideDataflowNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FFloatOverrideDataflowNode> @ 14dab8850

bool __cdecl
UE::CoreUObject::Private::Copy<FFloatOverrideDataflowNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pvVar2 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar3) break;
    *(undefined8 *)((longlong)pvVar2 + 0x248) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x250) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 600) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x260);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowCollectionSetSkinningSkeletalMesh> @ 14dab8910

void __cdecl
UE::CoreUObject::Private::Construct<FDataflowCollectionSetSkinningSkeletalMesh>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowCollectionSetSkinningSkeletalMesh__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0;
  *(FName *)((longlong)param_1 + 0x308) = FDataflowGeometrySelection::GeometryGroupName;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined4 *)((longlong)param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x80;
  return;
}

// ConstructForTests<FDataflowCollectionSetSkinningSkeletalMesh> @ 14dab8920

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowCollectionSetSkinningSkeletalMesh>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowCollectionSetSkinningSkeletalMesh__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0;
  *(FName *)((longlong)param_1 + 0x308) = FDataflowGeometrySelection::GeometryGroupName;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined4 *)((longlong)param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x80;
  return;
}

// Destruct<FDataflowCollectionSetSkinningSkeletalMesh> @ 14dab8930

void __cdecl
UE::CoreUObject::Private::Destruct<FDataflowCollectionSetSkinningSkeletalMesh>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 800) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 800));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowCollectionSetSkinningSkeletalMesh> @ 14dab8c80

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowCollectionSetSkinningSkeletalMesh>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  void *pvVar5;
  
  if (param_3 != 0) {
    pvVar5 = param_1;
    do {
      pvVar1 = (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar5);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                         ,0x51,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FManagedArrayCollection::operator=
                ((FManagedArrayCollection *)((longlong)pvVar5 + 0x248),
                 (FManagedArrayCollection *)((longlong)pvVar1 + 0x248));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x2f8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x2f8));
      }
      *(undefined8 *)((longlong)pvVar5 + 0x2f8) = *(undefined8 *)((longlong)pvVar1 + 0x2f8);
      *(undefined4 *)((longlong)pvVar5 + 0x300) = *(undefined4 *)((longlong)pvVar1 + 0x300);
      *(undefined8 *)((longlong)pvVar5 + 0x308) = *(undefined8 *)((longlong)pvVar1 + 0x308);
      if (pvVar5 != pvVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar5 + 0x310),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar1 + 0x310));
      }
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0x330);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowCollectionEditSkinWeightsNode> @ 14dab9c80

void __cdecl
UE::CoreUObject::Private::Construct<FDataflowCollectionEditSkinWeightsNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowCollectionEditSkinWeightsNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(FName *)((longlong)param_1 + 0x318) = FGeometryCollection::VerticesGroup;
  ::FString::FString((FString *)((longlong)param_1 + 800),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x330),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x340),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x350),"");
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined1 *)((longlong)param_1 + 0x368) = 0;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined8 *)((longlong)param_1 + 0x388) = 0;
  *(undefined8 *)((longlong)param_1 + 0x390) = 0;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e0) = 0;
  *(undefined8 *)((longlong)param_1 + 1000) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 2;
  return;
}

// ConstructForTests<FDataflowCollectionEditSkinWeightsNode> @ 14dab9c90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowCollectionEditSkinWeightsNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowCollectionEditSkinWeightsNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(FName *)((longlong)param_1 + 0x318) = FGeometryCollection::VerticesGroup;
  ::FString::FString((FString *)((longlong)param_1 + 800),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x330),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x340),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x350),"");
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined1 *)((longlong)param_1 + 0x368) = 0;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined8 *)((longlong)param_1 + 0x388) = 0;
  *(undefined8 *)((longlong)param_1 + 0x390) = 0;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e0) = 0;
  *(undefined8 *)((longlong)param_1 + 1000) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 2;
  return;
}

// Destruct<FDataflowCollectionEditSkinWeightsNode> @ 14dab9ca0

void __cdecl
UE::CoreUObject::Private::Destruct<FDataflowCollectionEditSkinWeightsNode>(void *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)((longlong)param_1 + 0x3f8);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(void **)((longlong)param_1 + 1000) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 1000));
  }
  if (*(void **)((longlong)param_1 + 0x3d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3d0));
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x3b8),
             *(int *)((longlong)param_1 + 0x3c0));
  if (*(void **)((longlong)param_1 + 0x3b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3b8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x3b0));
  if (*(void **)((longlong)param_1 + 0x390) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x390));
  }
  if (*(void **)((longlong)param_1 + 0x380) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x380));
  }
  DestructItems<FDataflowSkinWeightData,int>
            (*(FDataflowSkinWeightData **)((longlong)param_1 + 0x370),
             *(int *)((longlong)param_1 + 0x378));
  if (*(void **)((longlong)param_1 + 0x370) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x370));
  }
  if (*(void **)((longlong)param_1 + 0x350) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x350));
  }
  if (*(void **)((longlong)param_1 + 0x340) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x340));
  }
  if (*(void **)((longlong)param_1 + 0x330) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x330));
  }
  if (*(void **)((longlong)param_1 + 800) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 800));
  }
  if (*(void **)((longlong)param_1 + 0x308) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x308));
  }
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined ***)param_1 = &___7FDataflowPrimitiveNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Construct<FBreakAttributeKeyDataflowNode> @ 14dab9cb0

void __cdecl UE::CoreUObject::Private::Construct<FBreakAttributeKeyDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FBreakAttributeKeyDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  ::FString::FString((FString *)((longlong)param_1 + 600),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x268),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x278),"");
  return;
}

// ConstructForTests<FBreakAttributeKeyDataflowNode> @ 14dab9cc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBreakAttributeKeyDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FBreakAttributeKeyDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  ::FString::FString((FString *)((longlong)param_1 + 600),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x268),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x278),"");
  return;
}

// Destruct<FBreakAttributeKeyDataflowNode> @ 14dab9cd0

void __cdecl UE::CoreUObject::Private::Destruct<FBreakAttributeKeyDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x278));
  }
  if (*(void **)((longlong)param_1 + 0x268) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x268));
  }
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowCollectionEditSkinWeightsNode> @ 14dab9d30

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowCollectionEditSkinWeightsNode>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar3;
  int iVar4;
  UObject *pUVar5;
  FDataflowSkinWeightData *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  void *pvVar11;
  bool bVar12;
  undefined1 uVar13;
  ForAnyElementType *pFVar14;
  
  pvVar11 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                        ,0x51,L"");
    if (bVar12) break;
    FManagedArrayCollection::operator=
              ((FManagedArrayCollection *)((longlong)pvVar11 + 0x248),
               (FManagedArrayCollection *)
               ((longlong)pvVar11 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar11 + 0x2f8),
               (FString *)((longlong)pvVar11 + (longlong)param_2 + (0x2f8 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar11 + 0x308),
               (FString *)((longlong)pvVar11 + (longlong)param_2 + (0x308 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar11 + 0x318) =
         *(undefined8 *)((longlong)pvVar11 + (longlong)param_2 + (0x318 - (longlong)param_1));
    ::FString::operator=
              ((FString *)((longlong)pvVar11 + 800),
               (FString *)((longlong)pvVar11 + (longlong)param_2 + (800 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar11 + 0x330),
               (FString *)((longlong)pvVar11 + (longlong)param_2 + (0x330 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar11 + 0x340),
               (FString *)((longlong)pvVar11 + (longlong)param_2 + (0x340 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar11 + 0x350),
               (FString *)((longlong)pvVar11 + (longlong)param_2 + (0x350 - (longlong)param_1)));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = *(UObject **)((longlong)pvVar11 + (longlong)param_2 + (0x360 - (longlong)param_1)),
       pUVar5 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar5);
    }
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar11 + (longlong)param_2 + (0x370 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar11 + 0x360) =
         *(undefined8 *)((longlong)pvVar11 + (longlong)param_2 + (0x360 - (longlong)param_1));
    pFVar14 = (ForAnyElementType *)((longlong)pvVar11 + 0x370);
    *(undefined1 *)((longlong)pvVar11 + 0x368) =
         *(undefined1 *)((longlong)pvVar11 + (longlong)param_2 + (0x368 - (longlong)param_1));
    if (pFVar14 != pFVar2) {
      DestructItems<FDataflowSkinWeightData,int>
                ((FDataflowSkinWeightData *)pFVar14->Data,*(int *)((longlong)pvVar11 + 0x378));
      iVar4 = *(int *)((longlong)pvVar11 + (longlong)param_2 + (0x378 - (longlong)param_1));
      piVar1 = (int *)((longlong)pvVar11 + 0x37c);
      pFVar6 = (FDataflowSkinWeightData *)pFVar2->Data;
      *(int *)((longlong)pvVar11 + 0x378) = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar4,*piVar1,pFVar14,iVar4,piVar1);
        ConstructItems<FDataflowSkinWeightData,FDataflowSkinWeightData,int>
                  (pFVar14->Data,pFVar6,iVar4);
      }
    }
    FDataflowVertexSkinWeightData::operator=
              ((FDataflowVertexSkinWeightData *)((longlong)pvVar11 + 0x380),
               (FDataflowVertexSkinWeightData *)
               ((longlong)pvVar11 + (longlong)param_2 + (0x380 - (longlong)param_1)));
    pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar11 + (longlong)param_2 + (0x3b0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar11 + 0x3a8) =
         *(undefined4 *)((longlong)pvVar11 + (longlong)param_2 + (0x3a8 - (longlong)param_1));
    if (pTVar3 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar11 + 0x3b0))
    {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(TArray<FName,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar11 + 0x3b0),
                 pTVar3);
    }
    TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar11 + 0x3d0),
               (TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar11 + (longlong)param_2 + (0x3d0 - (longlong)param_1)));
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar11 + (longlong)param_2 + (1000 - (longlong)param_1));
    pFVar14 = (ForAnyElementType *)((longlong)pvVar11 + 1000);
    *(undefined1 *)((longlong)pvVar11 + 0x3e0) =
         *(undefined1 *)((longlong)pvVar11 + (longlong)param_2 + (0x3e0 - (longlong)param_1));
    if (pFVar14 != pFVar2) {
      iVar4 = *(int *)((longlong)pvVar11 + (longlong)param_2 + (0x3f0 - (longlong)param_1));
      piVar1 = (int *)((longlong)pvVar11 + 0x3f4);
      pFVar7 = pFVar2->Data;
      *(int *)((longlong)pvVar11 + 0x3f0) = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar4,*piVar1,pFVar14,iVar4,piVar1);
        ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
                  (pFVar14->Data,(TObjectPtr<UDynamicMesh> *)pFVar7,iVar4);
      }
    }
    puVar8 = *(undefined8 **)((longlong)pvVar11 + (longlong)param_2 + (0x3f8 - (longlong)param_1));
    puVar9 = *(undefined8 **)((longlong)pvVar11 + 0x3f8);
    if (puVar9 != puVar8) {
      *(undefined8 **)((longlong)pvVar11 + 0x3f8) = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      }
      if (puVar9 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar9 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
    }
    param_3 = param_3 + -1;
    pvVar11 = (void *)((longlong)pvVar11 + 0x400);
  }
  pcVar10 = (code *)swi(3);
  uVar13 = (*pcVar10)();
  return (bool)uVar13;
}

// Copy<FBreakAttributeKeyDataflowNode> @ 14daba010

bool __cdecl
UE::CoreUObject::Private::Copy<FBreakAttributeKeyDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pvVar2 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar3) break;
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x248),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 600),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x268),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x268 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x278),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x278 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x288);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowVertexSkinWeightData> @ 14daba750

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVertexSkinWeightData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FDataflowVertexSkinWeightData> @ 14daba770

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowVertexSkinWeightData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FDataflowVertexSkinWeightData> @ 14daba790

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVertexSkinWeightData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Construct<FMakeAttributeKeyDataflowNode> @ 14daba7d0

void __cdecl UE::CoreUObject::Private::Construct<FMakeAttributeKeyDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FMakeAttributeKeyDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  ::FString::FString((FString *)((longlong)param_1 + 600),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x268),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x278),"");
  return;
}

// ConstructForTests<FMakeAttributeKeyDataflowNode> @ 14daba7e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMakeAttributeKeyDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FMakeAttributeKeyDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  ::FString::FString((FString *)((longlong)param_1 + 600),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x268),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x278),"");
  return;
}

// SerializeArchive<FDataflowVertexSkinWeightData> @ 14daba7f0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FDataflowVertexSkinWeightData>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FDataflowVertexSkinWeightData::Serialize(param_2,param_1);
  return bVar1;
}

// Destruct<FMakeAttributeKeyDataflowNode> @ 14daba810

void __cdecl UE::CoreUObject::Private::Destruct<FMakeAttributeKeyDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x278));
  }
  if (*(void **)((longlong)param_1 + 0x268) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x268));
  }
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowVertexSkinWeightData> @ 14dabb000

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVertexSkinWeightData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)((longlong)pFVar5 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar5 + 2),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar2 + 2));
      *(undefined4 *)&pFVar5[4].Data = *(undefined4 *)&pFVar2[4].Data;
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMakeAttributeKeyDataflowNode> @ 14dabb100

bool __cdecl
UE::CoreUObject::Private::Copy<FMakeAttributeKeyDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pvVar2 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar3) break;
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x248),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 600),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x268),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x268 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x278),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x278 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x288);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowCollectionAddScalarVertexPropertyNode> @ 14dabce20

void __cdecl
UE::CoreUObject::Private::Construct<FDataflowCollectionAddScalarVertexPropertyNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowCollectionAddScalarVertexPropertyNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x308),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x318),"");
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(FName *)((longlong)param_1 + 0x338) = FGeometryCollection::VerticesGroup;
  *(undefined1 *)((longlong)param_1 + 0x340) = 0;
  return;
}

// ConstructForTests<FDataflowCollectionAddScalarVertexPropertyNode> @ 14dabce30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowCollectionAddScalarVertexPropertyNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowCollectionAddScalarVertexPropertyNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x308),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x318),"");
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(FName *)((longlong)param_1 + 0x338) = FGeometryCollection::VerticesGroup;
  *(undefined1 *)((longlong)param_1 + 0x340) = 0;
  return;
}

// Destruct<FDataflowCollectionAddScalarVertexPropertyNode> @ 14dabce40

void __cdecl
UE::CoreUObject::Private::Destruct<FDataflowCollectionAddScalarVertexPropertyNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x328) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x328));
  }
  if (*(void **)((longlong)param_1 + 0x318) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x318));
  }
  if (*(void **)((longlong)param_1 + 0x308) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x308));
  }
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowCollectionAddScalarVertexPropertyNode> @ 14dabd300

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowCollectionAddScalarVertexPropertyNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pvVar2 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar3) break;
    FManagedArrayCollection::operator=
              ((FManagedArrayCollection *)((longlong)pvVar2 + 0x248),
               (FManagedArrayCollection *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x2f8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x2f8 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x308),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x308 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x318),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x318 - (longlong)param_1)));
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0x328),
               (TArray<float,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x328 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar2 + 0x338) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x338 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x340) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x340 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x348);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowSkinWeightData> @ 14dabe930

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSkinWeightData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FDataflowSkinWeightData> @ 14dabe950

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSkinWeightData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FDataflowSkinWeightData> @ 14dabe970

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSkinWeightData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FDataflowSkinWeightData> @ 14dabe9b0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSkinWeightData>(void *param_1,void *param_2,int param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVertexAttributeEditableNode> @ 14dabf150

void __cdecl
UE::CoreUObject::Private::Construct<FDataflowVertexAttributeEditableNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVertexAttributeEditableNode__6B_;
  return;
}

// ConstructForTests<FDataflowVertexAttributeEditableNode> @ 14dabf180

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowVertexAttributeEditableNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVertexAttributeEditableNode__6B_;
  return;
}

// Destruct<FDataflowVertexAttributeEditableNode> @ 14dabf1b0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVertexAttributeEditableNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FDataflowVertexAttributeEditableNode> @ 14dabf1c0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVertexAttributeEditableNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar2) break;
    param_3 = param_3 + -1;
  }
  pcVar1 = (code *)swi(3);
  bVar2 = (bool)(*pcVar1)();
  return bVar2;
}

// Construct<FGetStaticMeshBoundingBoxDataflowNode> @ 14dac04e0

void __cdecl
UE::CoreUObject::Private::Construct<FGetStaticMeshBoundingBoxDataflowNode>(void *param_1)

{
  undefined8 uVar1;
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetStaticMeshBoundingBoxDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined1 *)((longlong)param_1 + 0x280) = 0;
  *(undefined4 *)((longlong)param_1 + 0x281) = 0;
  *(undefined2 *)((longlong)param_1 + 0x285) = 0;
  *(undefined1 *)((longlong)param_1 + 0x287) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x288) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x290) = uVar1;
  *(double *)((longlong)param_1 + 0x298) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x2a0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = uVar1;
  *(double *)((longlong)param_1 + 0x2b0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FGetStaticMeshBoundingBoxDataflowNode> @ 14dac04f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGetStaticMeshBoundingBoxDataflowNode>(void *param_1)

{
  undefined8 uVar1;
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetStaticMeshBoundingBoxDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined1 *)((longlong)param_1 + 0x280) = 0;
  *(undefined4 *)((longlong)param_1 + 0x281) = 0;
  *(undefined2 *)((longlong)param_1 + 0x285) = 0;
  *(undefined1 *)((longlong)param_1 + 0x287) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x288) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x290) = uVar1;
  *(double *)((longlong)param_1 + 0x298) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x2a0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = uVar1;
  *(double *)((longlong)param_1 + 0x2b0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FGetStaticMeshBoundingBoxDataflowNode> @ 14dac0500

void __cdecl
UE::CoreUObject::Private::Destruct<FGetStaticMeshBoundingBoxDataflowNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Construct<FScalarVertexPropertyGroup> @ 14dac0510

void __cdecl UE::CoreUObject::Private::Construct<FScalarVertexPropertyGroup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(FName *)param_1 = FGeometryCollection::VerticesGroup;
  return;
}

// ConstructForTests<FScalarVertexPropertyGroup> @ 14dac0530

void __cdecl UE::CoreUObject::Private::ConstructForTests<FScalarVertexPropertyGroup>(void *param_1)

{
  *(FName *)param_1 = FGeometryCollection::VerticesGroup;
  return;
}

// Destruct<FScalarVertexPropertyGroup> @ 14dac0550

void __cdecl UE::CoreUObject::Private::Destruct<FScalarVertexPropertyGroup>(void *param_1)

{
  return;
}

// Copy<FGetStaticMeshBoundingBoxDataflowNode> @ 14dac0560

bool __cdecl
UE::CoreUObject::Private::Copy<FGetStaticMeshBoundingBoxDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pvVar4 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar5) break;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar4 + (longlong)param_2 + (0x248 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar4 + 0x248) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x248 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x250) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 600) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x260) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x268) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x270) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x278) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0x280) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x280 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x288) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x290) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0x298) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x298 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x2a0) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x2a8) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0x2b0) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x2b0 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar4 = (void *)((longlong)pvVar4 + 0x2b8);
  }
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return (bool)uVar6;
}

// Copy<FScalarVertexPropertyGroup> @ 14dac0690

bool __cdecl
UE::CoreUObject::Private::Copy<FScalarVertexPropertyGroup>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGetStaticMeshDataflowNode> @ 14dac1da0

void __cdecl UE::CoreUObject::Private::Construct<FGetStaticMeshDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetStaticMeshDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x250),"StaticMesh");
  return;
}

// ConstructForTests<FGetStaticMeshDataflowNode> @ 14dac1df0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGetStaticMeshDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetStaticMeshDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x250),"StaticMesh");
  return;
}

// Destruct<FGetStaticMeshDataflowNode> @ 14dac1e40

void __cdecl UE::CoreUObject::Private::Destruct<FGetStaticMeshDataflowNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FGetStaticMeshDataflowNode> @ 14dac1e50

bool __cdecl
UE::CoreUObject::Private::Copy<FGetStaticMeshDataflowNode>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pvVar3 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar4) break;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 600);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FSkeletonAssetTerminalNode> @ 14dac3fb0

void __cdecl UE::CoreUObject::Private::Construct<FSkeletonAssetTerminalNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSkeletonAssetTerminalNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// ConstructForTests<FSkeletonAssetTerminalNode> @ 14dac3ff0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSkeletonAssetTerminalNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSkeletonAssetTerminalNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Destruct<FSkeletonAssetTerminalNode> @ 14dac4030

void __cdecl UE::CoreUObject::Private::Destruct<FSkeletonAssetTerminalNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowTerminalNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FSkeletonAssetTerminalNode> @ 14dac4050

bool __cdecl
UE::CoreUObject::Private::Copy<FSkeletonAssetTerminalNode>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pvVar3 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar4) break;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 600);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FDataflowPrimitiveNode> @ 14dac4270

void __cdecl UE::CoreUObject::Private::Construct<FDataflowPrimitiveNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowPrimitiveNode__6B_;
  return;
}

// ConstructForTests<FDataflowPrimitiveNode> @ 14dac42e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowPrimitiveNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowPrimitiveNode__6B_;
  return;
}

// Destruct<FDataflowPrimitiveNode> @ 14dac4310

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowPrimitiveNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowPrimitiveNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowPrimitiveNode> @ 14dac4330

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowPrimitiveNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar2) break;
    param_3 = param_3 + -1;
  }
  pcVar1 = (code *)swi(3);
  bVar2 = (bool)(*pcVar1)();
  return bVar2;
}

// Construct<FGetPhysicsAssetFromSkeletalMeshDataflowNode> @ 14dac46b0

void __cdecl
UE::CoreUObject::Private::Construct<FGetPhysicsAssetFromSkeletalMeshDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetPhysicsAssetFromSkeletalMeshDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// ConstructForTests<FGetPhysicsAssetFromSkeletalMeshDataflowNode> @ 14dac46f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGetPhysicsAssetFromSkeletalMeshDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetPhysicsAssetFromSkeletalMeshDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Destruct<FGetPhysicsAssetFromSkeletalMeshDataflowNode> @ 14dac4730

void __cdecl
UE::CoreUObject::Private::Destruct<FGetPhysicsAssetFromSkeletalMeshDataflowNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FGetPhysicsAssetFromSkeletalMeshDataflowNode> @ 14dac4740

bool __cdecl
UE::CoreUObject::Private::Copy<FGetPhysicsAssetFromSkeletalMeshDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pvVar3 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar4) break;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 600);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FSkeletalMeshReferenceTransformDataflowNode> @ 14dac4820

void __cdecl
UE::CoreUObject::Private::Construct<FSkeletalMeshReferenceTransformDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined4 *)((longlong)param_1 + 0x250) = 0xffffffff;
  *(undefined ***)param_1 = &___7FSkeletalMeshReferenceTransformDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(double (*) [2])((longlong)param_1 + 0x260) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x270) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x280) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x290) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2a0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2b0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ConstructForTests<FSkeletalMeshReferenceTransformDataflowNode> @ 14dac4830

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSkeletalMeshReferenceTransformDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined4 *)((longlong)param_1 + 0x250) = 0xffffffff;
  *(undefined ***)param_1 = &___7FSkeletalMeshReferenceTransformDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(double (*) [2])((longlong)param_1 + 0x260) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x270) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x280) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x290) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2a0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2b0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Destruct<FSkeletalMeshReferenceTransformDataflowNode> @ 14dac4840

void __cdecl
UE::CoreUObject::Private::Destruct<FSkeletalMeshReferenceTransformDataflowNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FSkeletalMeshReferenceTransformDataflowNode> @ 14dac4850

bool __cdecl
UE::CoreUObject::Private::Copy<FSkeletalMeshReferenceTransformDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pvVar4 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar5) break;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar4 + (longlong)param_2 + (0x248 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar4 + 0x248) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0x250) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x250 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x260) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x268) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x270) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x278) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x280) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x288) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x290) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x298) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x2a0) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x2a8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x2b8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x2b0) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x2b0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x2b8) = uVar3;
    param_3 = param_3 + -1;
    pvVar4 = (void *)((longlong)pvVar4 + 0x2c0);
  }
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return (bool)uVar6;
}

// Construct<FSkeletalMeshBoneDataflowNode> @ 14dac4970

void __cdecl UE::CoreUObject::Private::Construct<FSkeletalMeshBoneDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined4 *)((longlong)param_1 + 600) = 0xffffffff;
  *(undefined ***)param_1 = &___7FSkeletalMeshBoneDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x25c),"Overrides");
  return;
}

// ConstructForTests<FSkeletalMeshBoneDataflowNode> @ 14dac49c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSkeletalMeshBoneDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined4 *)((longlong)param_1 + 600) = 0xffffffff;
  *(undefined ***)param_1 = &___7FSkeletalMeshBoneDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x25c),"Overrides");
  return;
}

// Destruct<FSkeletalMeshBoneDataflowNode> @ 14dac4a10

void __cdecl UE::CoreUObject::Private::Destruct<FSkeletalMeshBoneDataflowNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FSkeletalMeshBoneDataflowNode> @ 14dac4a20

bool __cdecl
UE::CoreUObject::Private::Copy<FSkeletalMeshBoneDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pvVar3 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar4) break;
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 600) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x25c) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x25c - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x268);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FGetSkeletonDataflowNode> @ 14dac4d10

void __cdecl UE::CoreUObject::Private::Construct<FGetSkeletonDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetSkeletonDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x250),"Skeleton");
  return;
}

// ConstructForTests<FGetSkeletonDataflowNode> @ 14dac4d60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGetSkeletonDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetSkeletonDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x250),"Skeleton");
  return;
}

// Destruct<FGetSkeletonDataflowNode> @ 14dac4db0

void __cdecl UE::CoreUObject::Private::Destruct<FGetSkeletonDataflowNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FGetSkeletonDataflowNode> @ 14dac4e00

bool __cdecl
UE::CoreUObject::Private::Copy<FGetSkeletonDataflowNode>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pvVar3 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar4) break;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 600);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FDataflowFunctionProperty> @ 14dac4f90

void __cdecl UE::CoreUObject::Private::Construct<FDataflowFunctionProperty>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDataflowFunctionProperty> @ 14dac4fb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowFunctionProperty>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FDataflowFunctionProperty> @ 14dac4fd0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowFunctionProperty>(void *param_1)

{
  FDestructionSentinel FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_1,(FWriteAccessScope *)&FStack_28);
  if ((*(int *)((longlong)param_1 + 0x10) != 0) &&
     (*(undefined8 **)((longlong)param_1 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)((longlong)param_1 + 8))();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 8),0,0,0x10);
    *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  }
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Copy<FDataflowFunctionProperty> @ 14dac4fe0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowFunctionProperty>(void *param_1,void *param_2,int param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  atomic<unsigned___int64> aVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  int local_58;
  FDestructionSentinel local_50;
  
  if (param_3 != 0) {
    this_00 = param_1;
    do {
      this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             (((longlong)param_2 - (longlong)param_1) + (longlong)this_00);
      if (this != this_00) {
        local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_58 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (this,(FReadAccessScope *)&local_50);
        if ((*(int *)&this[2].AccessDetector.State != 0) &&
           (aVar1 = this[1].AccessDetector.State, aVar1 != (atomic<unsigned___int64>)0x0)) {
          (**(code **)(*(longlong *)aVar1 + 0x50))(aVar1,&local_68);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_50);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_68,(FWriteAccessScope *)&local_50);
        iVar3 = local_58;
        TVar2.AccessDetector.State = local_60.AccessDetector.State;
        local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_58 = 0;
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (this_00,(FWriteAccessScope *)&local_50);
        if (*(int *)&this_00[2].AccessDetector.State != 0) {
          aVar1 = this_00[1].AccessDetector.State;
          if (aVar1 != (atomic<unsigned___int64>)0x0) {
            (*(code *)**(undefined8 **)aVar1)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)(this_00 + 1),0,0,0x10);
            *(undefined4 *)&this_00[2].AccessDetector.State = 0;
          }
        }
        aVar1 = this_00[1].AccessDetector.State;
        if (aVar1 != (atomic<unsigned___int64>)0x0) {
          FMemory::Free((void *)aVar1);
        }
        this_00[1].AccessDetector.State = (atomic<unsigned___int64>)TVar2.AccessDetector.State;
        *(int *)&this_00[2].AccessDetector.State = iVar3;
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_68,(FWriteAccessScope *)&local_50);
        if ((local_58 != 0) && (local_60.AccessDetector.State != (atomic<unsigned___int64>)0x0)) {
          (*(code *)**(undefined8 **)local_60.AccessDetector.State)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_60,0,0,0x10);
          local_58 = 0;
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        if (local_60.AccessDetector.State != (atomic<unsigned___int64>)0x0) {
          FMemory::Free((void *)local_60.AccessDetector.State);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
      }
      param_3 = param_3 + -1;
      this_00 = this_00 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGetSkeletalMeshDataflowNode> @ 14dac5240

void __cdecl UE::CoreUObject::Private::Construct<FGetSkeletalMeshDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetSkeletalMeshDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x250),"SkeletalMesh");
  return;
}

// ConstructForTests<FGetSkeletalMeshDataflowNode> @ 14dac5290

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGetSkeletalMeshDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetSkeletalMeshDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x250),"SkeletalMesh");
  return;
}

// Destruct<FGetSkeletalMeshDataflowNode> @ 14dac52e0

void __cdecl UE::CoreUObject::Private::Destruct<FGetSkeletalMeshDataflowNode>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  FDataflowNode::ClearInputs(param_1);
  FDataflowNode::ClearOutputs(param_1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x230),
             *(int *)((longlong)param_1 + 0x238));
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x228));
  plVar3 = *(longlong **)((longlong)param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x148));
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArrayProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  plVar3 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FGetSkeletalMeshDataflowNode> @ 14dac52f0

bool __cdecl
UE::CoreUObject::Private::Copy<FGetSkeletalMeshDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pvVar3 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar4) break;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 600);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FDataflowCollectionEditSkeletonBonesNode> @ 14dac5400

void __cdecl
UE::CoreUObject::Private::Construct<FDataflowCollectionEditSkeletonBonesNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowCollectionEditSkeletonBonesNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(FName *)((longlong)param_1 + 0x2f8) = FGeometryCollection::VerticesGroup;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(undefined8 *)((longlong)param_1 + 0x338) = 0;
  *(undefined1 *)((longlong)param_1 + 0x340) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 2;
  return;
}

// ConstructForTests<FDataflowCollectionEditSkeletonBonesNode> @ 14dac5410

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowCollectionEditSkeletonBonesNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowCollectionEditSkeletonBonesNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(FName *)((longlong)param_1 + 0x2f8) = FGeometryCollection::VerticesGroup;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(undefined8 *)((longlong)param_1 + 0x338) = 0;
  *(undefined1 *)((longlong)param_1 + 0x340) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 2;
  return;
}

// Destruct<FDataflowCollectionEditSkeletonBonesNode> @ 14dac5420

void __cdecl
UE::CoreUObject::Private::Destruct<FDataflowCollectionEditSkeletonBonesNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x330) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x330));
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x318),
             *(int *)((longlong)param_1 + 800));
  if (*(void **)((longlong)param_1 + 0x318) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x318));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x310));
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined ***)param_1 = &___7FDataflowPrimitiveNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowCollectionEditSkeletonBonesNode> @ 14dac5430

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowCollectionEditSkeletonBonesNode>
          (void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pvVar4 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar5) break;
    FManagedArrayCollection::operator=
              ((FManagedArrayCollection *)((longlong)pvVar4 + 0x248),
               (FManagedArrayCollection *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar4 + 0x2f8) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x2f8 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)((longlong)pvVar4 + (longlong)param_2 + (0x300 - (longlong)param_1)),
       pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    *(undefined8 *)((longlong)pvVar4 + 0x300) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x300 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)((longlong)pvVar4 + (longlong)param_2 + (0x308 - (longlong)param_1)),
       pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x310 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x308) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x308 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar4 + 0x310))
    {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(TArray<FName,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar4 + 0x310),
                 pTVar1);
    }
    TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar4 + 0x330),
               (TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x330 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar4 + 0x340) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0x340 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar4 = (void *)((longlong)pvVar4 + 0x348);
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return (bool)uVar6;
}

// Construct<FSelectionSetDataflowNode> @ 14dac55b0

void __cdecl UE::CoreUObject::Private::Construct<FSelectionSetDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSelectionSetDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"1 2 3");
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// CheckStructType<FCollectionAttributeKey> @ 14dac6ba0

void __cdecl UE::StructUtils::CheckStructType<FCollectionAttributeKey>(void)

{
  return;
}

// FillAttributeValues<int,UE::Math::TIntVector4<int>,4> @ 14dac75b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::Dataflow::Private::FillAttributeValues<int,UE::Math::TIntVector4<int>,4>
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FName FVar3;
  FName FVar4;
  longlong lVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  iVar12 = (param_2->Attribute).Data.ArrayNum;
  if ((1 < iVar12) && (1 < (param_2->Group).Data.ArrayNum)) {
    pFVar14 = ::FName::FName(&local_68,iVar12 + -1,
                             (wchar_t *)(param_2->Attribute).Data.AllocatorInstance.Data,FNAME_Add);
    pcVar18 = (char *)0x0;
    FVar3 = *pFVar14;
    iVar12 = (param_2->Group).Data.ArrayNum;
    iVar16 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar16 = 0;
    }
    pFVar14 = ::FName::FName(&local_60,iVar16,
                             (wchar_t *)(param_2->Group).Data.AllocatorInstance.Data,FNAME_Add);
    FVar4 = *pFVar14;
    local_58 = FVar3;
    local_50 = FVar4;
    pTVar15 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
    pcVar20 = &pTVar15->field_0x10;
    if (pTVar15 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar20 = pcVar18;
    }
    if ((pcVar20 != (char *)0x0) && (*pcVar20 == '%')) {
      lVar5 = *(longlong *)(pcVar20 + 0x20);
      if (lVar5 != 0) {
        if (param_3 ==
            (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
            (lVar5 + 0x10)) {
          return true;
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_3->AllocatorInstance).Data,
                   param_3->ArrayNum);
        iVar12 = *(int *)(lVar5 + 0x18);
        piVar1 = &param_3->ArrayMax;
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 (((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                  (lVar5 + 0x10))->AllocatorInstance).Data;
        param_3->ArrayNum = iVar12;
        if ((iVar12 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
          return true;
        }
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar12,*piVar1,&param_3->AllocatorInstance,iVar12,piVar1);
        ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((param_3->AllocatorInstance).Data,pTVar8,iVar12);
        return true;
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x306,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
    }
    local_48 = FVar3;
    local_40 = FVar4;
    pTVar15 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
    pcVar20 = &pTVar15->field_0x10;
    if (pTVar15 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar20 = pcVar18;
    }
    if ((pcVar20 != (char *)0x0) && (*pcVar20 == '!')) {
      plVar6 = *(longlong **)(pcVar20 + 0x20);
      if (plVar6 != (longlong *)0x0) {
        iVar12 = (**(code **)(*plVar6 + 0x60))(plVar6);
        TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                  (param_3,iVar12,Default);
        iVar12 = (**(code **)(*plVar6 + 0x60))(plVar6);
        pcVar20 = pcVar18;
        pcVar21 = pcVar18;
        if (0 < (longlong)iVar12) {
          do {
            uVar19 = (uint)pcVar20;
            uVar17 = ~uVar19 >> 0x1f;
            uVar13 = 0;
            if ((int)uVar19 < (int)plVar6[3]) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            pcVar20 = pcVar21 + plVar6[2];
            uVar13 = 0;
            if ((int)uVar19 < param_3->ArrayNum) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)
                       (pcVar21 + (longlong)(param_3->AllocatorInstance).Data),4,Default);
            uVar2 = *(undefined4 *)pcVar20;
            uVar13 = 0;
            if ((int)uVar19 < param_3->ArrayNum) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            pFVar7 = (param_3->AllocatorInstance).Data;
            if ((*(int *)(pcVar21 + (longlong)(pFVar7 + 8)) < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            **(undefined4 **)(pcVar21 + (longlong)pFVar7) = uVar2;
            uVar2 = *(undefined4 *)(pcVar20 + 4);
            uVar13 = 0;
            if ((int)uVar19 < param_3->ArrayNum) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            pFVar7 = (param_3->AllocatorInstance).Data;
            if ((*(int *)(pcVar21 + (longlong)(pFVar7 + 8)) < 2) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            *(undefined4 *)(*(longlong *)(pcVar21 + (longlong)pFVar7) + 4) = uVar2;
            uVar2 = *(undefined4 *)(pcVar20 + 8);
            uVar13 = 0;
            if ((int)uVar19 < param_3->ArrayNum) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            pFVar7 = (param_3->AllocatorInstance).Data;
            if ((*(int *)(pcVar21 + (longlong)(pFVar7 + 8)) < 3) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            *(undefined4 *)(*(longlong *)(pcVar21 + (longlong)pFVar7) + 8) = uVar2;
            uVar2 = *(undefined4 *)(pcVar20 + 0xc);
            uVar13 = 0;
            if ((int)uVar19 < param_3->ArrayNum) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            pFVar7 = (param_3->AllocatorInstance).Data;
            if ((*(int *)(pcVar21 + (longlong)(pFVar7 + 8)) < 4) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            pcVar18 = pcVar18 + 1;
            *(undefined4 *)(*(longlong *)(pcVar21 + (longlong)pFVar7) + 0xc) = uVar2;
            pcVar20 = (char *)(ulonglong)(uVar19 + 1);
            pcVar21 = pcVar21 + 0x10;
          } while ((longlong)pcVar18 < (longlong)iVar12);
        }
        return true;
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x306,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
    }
  }
  return false;
}

// FillAttributeValues<float,UE::Math::TVector4<float>,4> @ 14dac7af0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::Dataflow::Private::FillAttributeValues<float,UE::Math::TVector4<float>,4>
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  FName FVar4;
  FName FVar5;
  longlong lVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FName *pFVar16;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  FName local_res20;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  
  iVar13 = (param_2->Attribute).Data.ArrayNum;
  if ((1 < iVar13) && (1 < (param_2->Group).Data.ArrayNum)) {
    pFVar16 = ::FName::FName(&local_res20,iVar13 + -1,
                             (wchar_t *)(param_2->Attribute).Data.AllocatorInstance.Data,FNAME_Add);
    pcVar20 = (char *)0x0;
    FVar4 = *pFVar16;
    iVar13 = (param_2->Group).Data.ArrayNum;
    iVar19 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar19 = 0;
    }
    pFVar16 = ::FName::FName(&local_78,iVar19,
                             (wchar_t *)(param_2->Group).Data.AllocatorInstance.Data,FNAME_Add);
    FVar5 = *pFVar16;
    local_70 = FVar4;
    local_68 = FVar5;
    pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
    pcVar18 = &pTVar17->field_0x10;
    if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar18 = pcVar20;
    }
    if ((pcVar18 != (char *)0x0) && (*pcVar18 == '&')) {
      lVar6 = *(longlong *)(pcVar18 + 0x20);
      if (lVar6 != 0) {
        if (param_3 ==
            (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
            (lVar6 + 0x10)) {
          return true;
        }
        DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)(param_3->AllocatorInstance).Data,
                   param_3->ArrayNum);
        iVar13 = *(int *)(lVar6 + 0x18);
        piVar1 = &param_3->ArrayMax;
        pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                 (((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                  (lVar6 + 0x10))->AllocatorInstance).Data;
        param_3->ArrayNum = iVar13;
        if ((iVar13 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
          return true;
        }
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar13,*piVar1,&param_3->AllocatorInstance,iVar13,piVar1);
        ConstructItems<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,int>
                  ((param_3->AllocatorInstance).Data,pTVar9,iVar13);
        return true;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x306,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    local_60 = FVar4;
    local_58 = FVar5;
    pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
    pcVar18 = &pTVar17->field_0x10;
    if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar18 = pcVar20;
    }
    if ((pcVar18 != (char *)0x0) && (*pcVar18 == '\'')) {
      plVar7 = *(longlong **)(pcVar18 + 0x20);
      if (plVar7 != (longlong *)0x0) {
        iVar13 = (**(code **)(*plVar7 + 0x60))(plVar7);
        TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                  (param_3,iVar13,Default);
        iVar13 = (**(code **)(*plVar7 + 0x60))(plVar7);
        pcVar18 = pcVar20;
        pcVar23 = pcVar20;
        if (0 < (longlong)iVar13) {
          do {
            uVar21 = (uint)pcVar18;
            uVar22 = ~uVar21 >> 0x1f;
            uVar14 = 0;
            uVar15 = uVar14;
            if ((int)uVar21 < (int)plVar7[3]) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            lVar6 = plVar7[2];
            uVar15 = uVar14;
            if ((int)uVar21 < param_3->ArrayNum) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            TArray<float,TSizedDefaultAllocator<32>_>::SetNum
                      ((TArray<float,TSizedDefaultAllocator<32>_> *)
                       (pcVar20 + (longlong)(param_3->AllocatorInstance).Data),4,Default);
            uVar3 = *(undefined4 *)(pcVar20 + lVar6);
            if ((int)uVar21 < param_3->ArrayNum) {
              uVar14 = uVar22;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            pFVar8 = (param_3->AllocatorInstance).Data;
            if ((*(int *)(pcVar20 + (longlong)(pFVar8 + 8)) < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            **(undefined4 **)(pcVar20 + (longlong)pFVar8) = uVar3;
            uVar3 = *(undefined4 *)(pcVar20 + lVar6 + 4);
            uVar15 = 0;
            if ((int)uVar21 < param_3->ArrayNum) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            pFVar8 = (param_3->AllocatorInstance).Data;
            if ((*(int *)(pcVar20 + (longlong)(pFVar8 + 8)) < 2) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            *(undefined4 *)(*(longlong *)(pcVar20 + (longlong)pFVar8) + 4) = uVar3;
            uVar3 = *(undefined4 *)(pcVar20 + lVar6 + 8);
            uVar15 = 0;
            if ((int)uVar21 < param_3->ArrayNum) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            pFVar8 = (param_3->AllocatorInstance).Data;
            if ((*(int *)(pcVar20 + (longlong)(pFVar8 + 8)) < 3) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            *(undefined4 *)(*(longlong *)(pcVar20 + (longlong)pFVar8) + 8) = uVar3;
            uVar3 = *(undefined4 *)(pcVar20 + lVar6 + 0xc);
            uVar15 = 0;
            if ((int)uVar21 < param_3->ArrayNum) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            pFVar8 = (param_3->AllocatorInstance).Data;
            if ((*(int *)(pcVar20 + (longlong)(pFVar8 + 8)) < 4) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            plVar2 = (longlong *)(pcVar20 + (longlong)pFVar8);
            pcVar23 = pcVar23 + 1;
            pcVar20 = pcVar20 + 0x10;
            *(undefined4 *)(*plVar2 + 0xc) = uVar3;
            pcVar18 = (char *)(ulonglong)(uVar21 + 1);
          } while ((longlong)pcVar23 < (longlong)iVar13);
        }
        return true;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x306,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
  }
  return false;
}

// FindObjectPtrProperty<USkeletalMesh> @ 14dac8140

USkeletalMesh * __cdecl
UE::Dataflow::Reflection::FindObjectPtrProperty<USkeletalMesh>(UObject *param_1,FName param_2)

{
  int iVar1;
  FProperty *this;
  void *pvVar2;
  USkeletalMesh *pUVar3;
  UClass *pUVar4;
  
  if ((param_1 != (UObject *)0x0) && (*(UStruct **)&param_1->field_0x10 != (UStruct *)0x0)) {
    this = UStruct::FindPropertyByName(*(UStruct **)&param_1->field_0x10,param_2);
    if ((this != (FProperty *)0x0) && ((*(uint *)(this->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
      pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
      if (pvVar2 != (void *)0x0) {
        pUVar3 = (USkeletalMesh *)(**(code **)(this->_padding_ + 0x1f8))(this,pvVar2);
        if (pUVar3 != (USkeletalMesh *)0x0) {
          pUVar4 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            pUVar3 = (USkeletalMesh *)0x0;
          }
          return pUVar3;
        }
      }
    }
  }
  return (USkeletalMesh *)0x0;
}

// FindObjectPtrProperty<USkeleton> @ 14dac81f0

USkeleton * __cdecl
UE::Dataflow::Reflection::FindObjectPtrProperty<USkeleton>(UObject *param_1,FName param_2)

{
  int iVar1;
  FProperty *this;
  void *pvVar2;
  USkeleton *pUVar3;
  UClass *pUVar4;
  
  if ((param_1 != (UObject *)0x0) && (*(UStruct **)&param_1->field_0x10 != (UStruct *)0x0)) {
    this = UStruct::FindPropertyByName(*(UStruct **)&param_1->field_0x10,param_2);
    if ((this != (FProperty *)0x0) && ((*(uint *)(this->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
      pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
      if (pvVar2 != (void *)0x0) {
        pUVar3 = (USkeleton *)(**(code **)(this->_padding_ + 0x1f8))(this,pvVar2);
        if (pUVar3 != (USkeleton *)0x0) {
          pUVar4 = Z_Construct_UClass_USkeleton_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            pUVar3 = (USkeleton *)0x0;
          }
          return pUVar3;
        }
      }
    }
  }
  return (USkeleton *)0x0;
}

// FindObjectPtrProperty<UStaticMesh> @ 14dac82a0

UStaticMesh * __cdecl
UE::Dataflow::Reflection::FindObjectPtrProperty<UStaticMesh>(UObject *param_1,FName param_2)

{
  int iVar1;
  FProperty *this;
  void *pvVar2;
  UStaticMesh *pUVar3;
  UClass *pUVar4;
  
  if ((param_1 != (UObject *)0x0) && (*(UStruct **)&param_1->field_0x10 != (UStruct *)0x0)) {
    this = UStruct::FindPropertyByName(*(UStruct **)&param_1->field_0x10,param_2);
    if ((this != (FProperty *)0x0) && ((*(uint *)(this->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
      pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
      if (pvVar2 != (void *)0x0) {
        pUVar3 = (UStaticMesh *)(**(code **)(this->_padding_ + 0x1f8))(this,pvVar2);
        if (pUVar3 != (UStaticMesh *)0x0) {
          pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            pUVar3 = (UStaticMesh *)0x0;
          }
          return pUVar3;
        }
      }
    }
  }
  return (UStaticMesh *)0x0;
}

// FindOverrideProperty<FString> @ 14dac8350

FString * __cdecl
UE::Dataflow::Reflection::FindOverrideProperty<FString>
          (FString *__return_storage_ptr__,UObject *param_1,FName param_2,FName param_3,
          FString *param_4)

{
  int iVar1;
  UStruct *pUVar2;
  longlong lVar3;
  code *pcVar4;
  FField *this;
  bool bVar5;
  int iVar6;
  FName FVar7;
  UScriptStruct *pUVar8;
  longlong *plVar9;
  FString *pFVar10;
  undefined8 *puVar11;
  FName FVar12;
  undefined8 *puVar13;
  undefined1 local_res10 [16];
  FName local_res20;
  FString local_50;
  TFieldIterator<FArrayProperty> local_40;
  
  local_res20 = param_3;
  if (((param_1 != (UObject *)0x0) &&
      (pUVar2 = *(UStruct **)&param_1->field_0x10, pUVar2 != (UStruct *)0x0)) &&
     (param_2 != (FName)0x0)) {
    local_40.Field = pUVar2->ChildProperties;
    local_40.InterfaceIndex = -1;
    local_40.bIncludeSuper = true;
    local_40.bIncludeDeprecated = true;
    local_40.bIncludeInterface = false;
    local_40.Struct = pUVar2;
    TFieldIterator<FArrayProperty>::IterateToNext(&local_40);
    if ((FProperty *)local_40.Field != (FProperty *)0x0) {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      do {
        this = local_40.Field;
        bVar5 = IsThisNotNull(local_40.Field,"FField::GetFName");
        FVar7 = FVar12;
        if (bVar5) {
          FVar7 = this->NamePrivate;
        }
        if (FVar7 == param_2) {
          if ((FProperty *)this != (FProperty *)0x0) {
            lVar3 = ((FProperty *)((longlong)this + 0x70))->_padding_;
            if ((lVar3 == 0) || ((*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) >> 0x14 & 1) == 0)) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x472,L"CastFieldChecked failed with 0x%016llx");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                pFVar10 = (FString *)(*pcVar4)();
                return pFVar10;
              }
            }
            else {
              pUVar8 = FStringValuePair::StaticStruct();
              if (*(UScriptStruct **)(lVar3 + 0x70) == (UScriptStruct *)0x0) {
                bVar5 = pUVar8 == (UScriptStruct *)0x0;
              }
              else {
                bVar5 = *(UScriptStruct **)(lVar3 + 0x70) == pUVar8;
              }
              if ((bVar5) &&
                 (plVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     ((FProperty *)this,param_1,0), plVar9 != (longlong *)0x0)) {
                lVar3 = plVar9[1];
                puVar11 = (undefined8 *)*plVar9;
                puVar13 = puVar11 + (longlong)(int)lVar3 * 4;
                goto LAB_14dac8493;
              }
            }
          }
          break;
        }
        local_40.Field = this->Next;
        TFieldIterator<FArrayProperty>::IterateToNext(&local_40);
      } while ((FProperty *)local_40.Field != (FProperty *)0x0);
    }
  }
LAB_14dac8545:
  ::FString::FString(__return_storage_ptr__,param_4);
  return __return_storage_ptr__;
LAB_14dac8493:
  if ((int)plVar9[1] != (int)lVar3) {
    `TCheckedPointerIterator<FStringValuePair_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res10);
  }
  if (puVar11 == puVar13) goto LAB_14dac8545;
  pFVar10 = ::FName::ToString(&local_res20,&local_50);
  iVar6 = *(int *)(puVar11 + 1);
  iVar1 = (pFVar10->Data).ArrayNum;
  if (iVar6 == iVar1) {
    if (iVar6 < 2) {
      bVar5 = true;
    }
    else {
      iVar6 = wcscmp((wchar_t *)*puVar11,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
    }
  }
  else {
    bVar5 = iVar1 + iVar6 == 1;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (bVar5) goto LAB_14dac850c;
  puVar11 = puVar11 + 4;
  goto LAB_14dac8493;
LAB_14dac850c:
  param_4 = (FString *)(puVar11 + 2);
  goto LAB_14dac8545;
}

// GetAttributeValues<int,UE::Math::TIntVector4<int>,4> @ 14dac8570

bool __cdecl
UE::Dataflow::Private::GetAttributeValues<int,UE::Math::TIntVector4<int>,4>
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar9;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar10;
  int iVar11;
  undefined2 local_90;
  undefined2 uStack_8e;
  undefined2 local_84;
  undefined2 uStack_82;
  FConstructionParameters local_78;
  FConstructionParameters local_68;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  iVar11 = (param_2->Attribute).Data.ArrayNum;
  if ((1 < iVar11) && (1 < (param_2->Group).Data.ArrayNum)) {
    pFVar7 = ::FName::FName(&local_38,iVar11 + -1,
                            (wchar_t *)(param_2->Attribute).Data.AllocatorInstance.Data,FNAME_Add);
    FVar2 = *pFVar7;
    iVar1 = (param_2->Group).Data.ArrayNum;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    pFVar7 = ::FName::FName(&local_30,iVar11,(wchar_t *)(param_2->Group).Data.AllocatorInstance.Data
                            ,FNAME_Add);
    FVar3 = *pFVar7;
    pTVar8 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (param_1,FVar2,FVar3);
    if ((pTVar8 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       (pTVar9 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TIntVector4<int>_>
                           (param_1,FVar2,FVar3),
       pTVar9 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0)) {
      if (param_4) {
        local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
        local_78.GroupIndexDependency.Number = 0;
        local_78.Saved = true;
        local_78.bAllowCircularDependency = false;
        local_78._10_2_ = uStack_8e;
        bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar2,FVar3);
        if (!bVar5) {
          FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>
                    (param_1,FVar2,FVar3,&local_78);
        }
        bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar2,FVar3);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("HasAttribute(Name, Group)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                               ,0x164,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_58 = FVar2;
        local_50 = FVar3;
        pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
        if ((pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TIntVector4<int>_>
                  ((FValueType *)&pTVar10->field_0x10);
      }
      else {
        local_68.GroupIndexDependency.ComparisonIndex.Value = 0;
        local_68.GroupIndexDependency.Number = 0;
        local_68.Saved = true;
        local_68.bAllowCircularDependency = false;
        local_68._10_2_ = uStack_82;
        bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar2,FVar3);
        if (!bVar5) {
          FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
                    (param_1,FVar2,FVar3,&local_68);
        }
        bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar2,FVar3);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("HasAttribute(Name, Group)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                               ,0x164,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_48 = FVar2;
        local_40 = FVar3;
        pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
        if ((pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FManagedArrayCollection::FValueType::
        ModifyTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>((FValueType *)&pTVar10->field_0x10)
        ;
      }
    }
  }
  bVar5 = FillAttributeValues<int,UE::Math::TIntVector4<int>,4>(param_1,param_2,param_3);
  return bVar5;
}

// GetAttributeValues<float,UE::Math::TVector4<float>,4> @ 14dac8800

bool __cdecl
UE::Dataflow::Private::GetAttributeValues<float,UE::Math::TVector4<float>,4>
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar9;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar10;
  int iVar11;
  undefined2 local_90;
  undefined2 uStack_8e;
  undefined2 local_84;
  undefined2 uStack_82;
  FConstructionParameters local_78;
  FConstructionParameters local_68;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  iVar11 = (param_2->Attribute).Data.ArrayNum;
  if ((1 < iVar11) && (1 < (param_2->Group).Data.ArrayNum)) {
    pFVar7 = ::FName::FName(&local_38,iVar11 + -1,
                            (wchar_t *)(param_2->Attribute).Data.AllocatorInstance.Data,FNAME_Add);
    FVar2 = *pFVar7;
    iVar1 = (param_2->Group).Data.ArrayNum;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    pFVar7 = ::FName::FName(&local_30,iVar11,(wchar_t *)(param_2->Group).Data.AllocatorInstance.Data
                            ,FNAME_Add);
    FVar3 = *pFVar7;
    pTVar8 = FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (param_1,FVar2,FVar3);
    if ((pTVar8 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       (pTVar9 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector4<float>_>
                           (param_1,FVar2,FVar3),
       pTVar9 == (TManagedArray<UE::Math::TVector4<float>_> *)0x0)) {
      if (param_4) {
        local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
        local_78.GroupIndexDependency.Number = 0;
        local_78.Saved = true;
        local_78.bAllowCircularDependency = false;
        local_78._10_2_ = uStack_8e;
        bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar2,FVar3);
        if (!bVar5) {
          FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>
                    (param_1,FVar2,FVar3,&local_78);
        }
        bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar2,FVar3);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("HasAttribute(Name, Group)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                               ,0x164,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_58 = FVar2;
        local_50 = FVar3;
        pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
        if ((pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector4<float>_>
                  ((FValueType *)&pTVar10->field_0x10);
      }
      else {
        local_68.GroupIndexDependency.ComparisonIndex.Value = 0;
        local_68.GroupIndexDependency.Number = 0;
        local_68.Saved = true;
        local_68.bAllowCircularDependency = false;
        local_68._10_2_ = uStack_82;
        bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar2,FVar3);
        if (!bVar5) {
          FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>
                    (param_1,FVar2,FVar3,&local_68);
        }
        bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar2,FVar3);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("HasAttribute(Name, Group)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                               ,0x164,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_48 = FVar2;
        local_40 = FVar3;
        pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
        if ((pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FManagedArrayCollection::FValueType::
        ModifyTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_>
                  ((FValueType *)&pTVar10->field_0x10);
      }
    }
  }
  bVar5 = FillAttributeValues<float,UE::Math::TVector4<float>,4>(param_1,param_2,param_3);
  return bVar5;
}

// GetStructRef<FCollectionAttributeKey> @ 14dac8a90

FCollectionAttributeKey * __cdecl
UE::StructUtils::GetStructRef<FCollectionAttributeKey>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FCollectionAttributeKey *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCollectionAttributeKey *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCollectionAttributeKey *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FCollectionAttributeKey::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FCollectionAttributeKey::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FCollectionAttributeKey::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCollectionAttributeKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// SetAttributeValues<int,UE::Math::TIntVector4<int>,4> @ 14daca1a0

bool __cdecl
UE::Dataflow::Private::SetAttributeValues<int,UE::Math::TIntVector4<int>,4>
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          int *param_4,bool param_5)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar12;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  uint local_res18;
  longlong local_90;
  FName local_70;
  FName local_68 [6];
  
  if (((param_3->ArrayNum == 0) || (iVar9 = (param_2->Attribute).Data.ArrayNum, iVar9 < 2)) ||
     ((param_2->Group).Data.ArrayNum < 2)) {
LAB_14daca655:
    bVar6 = false;
  }
  else {
    pFVar11 = ::FName::FName(&local_70,iVar9 + -1,
                             (wchar_t *)(param_2->Attribute).Data.AllocatorInstance.Data,FNAME_Add);
    uVar19 = 0;
    FVar2 = *pFVar11;
    iVar9 = (param_2->Group).Data.ArrayNum;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    pFVar11 = ::FName::FName(local_68,iVar8,(wchar_t *)(param_2->Group).Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar3 = *pFVar11;
    pTVar12 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (param_1,FVar2,FVar3);
    if (pTVar12 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar13 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TIntVector4<int>_>
                          (param_1,FVar2,FVar3);
      if (pTVar13 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) goto LAB_14daca655;
      iVar9 = param_3->ArrayNum;
      iVar8 = (**(code **)(*(longlong *)pTVar13 + 0x60))(pTVar13);
      if (iVar8 == iVar9) {
        local_res18 = 0;
        iVar9 = (**(code **)(*(longlong *)pTVar13 + 0x60))(pTVar13);
        if (0 < (longlong)iVar9) {
          local_90 = 0;
          uVar17 = uVar19;
          do {
            uVar14 = (uint)uVar17;
            piVar15 = (int *)(*(longlong *)&pTVar13->field_0x10 + uVar19);
            uVar16 = 0;
            if ((int)uVar14 < param_3->ArrayNum) {
              uVar16 = ~uVar14 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            fVar21 = 0.0;
            iVar8 = *(int *)((param_3->AllocatorInstance).Data + uVar19 + 8);
            if (4 < iVar8) {
              iVar8 = 4;
            }
            uVar16 = 0;
            lVar18 = 0;
            if (iVar8 < 1) {
LAB_14daca4b7:
              local_res18 = uVar14;
              *piVar15 = (int)(float)*param_4;
              piVar15[1] = (int)(float)*param_4;
              piVar15[2] = (int)(float)*param_4;
              iVar8 = *param_4;
LAB_14daca5fb:
              fVar21 = (float)iVar8;
            }
            else {
              do {
                uVar10 = 0;
                if ((int)uVar17 < param_3->ArrayNum) {
                  uVar10 = ~uVar14 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                pFVar4 = (param_3->AllocatorInstance).Data;
                uVar10 = 0;
                if ((int)uVar16 < *(int *)(pFVar4 + uVar19 + 8)) {
                  uVar10 = ~uVar16 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                uVar16 = uVar16 + 1;
                uVar17 = (ulonglong)local_res18;
                iVar1 = *(int *)(*(longlong *)(pFVar4 + uVar19) + lVar18 * 4);
                piVar15[lVar18] = iVar1;
                lVar18 = lVar18 + 1;
                fVar21 = fVar21 + (float)iVar1;
              } while (lVar18 < iVar8);
              uVar14 = local_res18;
              if (iVar8 < 1) goto LAB_14daca4b7;
              if ((param_5) && (fVar21 != 0.0)) {
                fVar20 = (float)*piVar15 / fVar21;
              }
              else {
                fVar20 = (float)*piVar15;
              }
              *piVar15 = (int)fVar20;
              if (iVar8 < 2) {
                piVar15[1] = (int)(float)*param_4;
                piVar15[2] = (int)(float)*param_4;
                iVar8 = *param_4;
                goto LAB_14daca5fb;
              }
              if ((param_5) && (fVar21 != 0.0)) {
                fVar20 = (float)piVar15[1] / fVar21;
              }
              else {
                fVar20 = (float)piVar15[1];
              }
              piVar15[1] = (int)fVar20;
              if (iVar8 < 3) {
                piVar15[2] = (int)(float)*param_4;
                iVar8 = *param_4;
                goto LAB_14daca5fb;
              }
              if ((param_5) && (fVar21 != 0.0)) {
                fVar20 = (float)piVar15[2] / fVar21;
              }
              else {
                fVar20 = (float)piVar15[2];
              }
              piVar15[2] = (int)fVar20;
              if (iVar8 < 4) {
                iVar8 = *param_4;
                goto LAB_14daca5fb;
              }
              if ((!param_5) || (fVar21 == 0.0)) {
                iVar8 = piVar15[3];
                goto LAB_14daca5fb;
              }
              fVar21 = (float)piVar15[3] / fVar21;
            }
            local_res18 = local_res18 + 1;
            uVar17 = (ulonglong)local_res18;
            local_90 = local_90 + 1;
            uVar19 = uVar19 + 0x10;
            piVar15[3] = (int)fVar21;
          } while (local_90 < iVar9);
        }
      }
    }
    else {
      iVar9 = param_3->ArrayNum;
      iVar8 = (**(code **)(*(longlong *)pTVar12 + 0x60))(pTVar12);
      if ((iVar8 == iVar9) &&
         (iVar9 = (**(code **)(*(longlong *)pTVar12 + 0x60))(pTVar12), uVar17 = uVar19, 0 < iVar9))
      {
        while( true ) {
          uVar14 = (uint)uVar19;
          uVar16 = 0;
          if ((int)uVar14 < param_3->ArrayNum) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) break;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)&pTVar12->field_0x10 + uVar17),
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     ((param_3->AllocatorInstance).Data + uVar17));
          uVar19 = (ulonglong)(uVar14 + 1);
          uVar17 = uVar17 + 0x10;
          if (iVar9 <= (int)(uVar14 + 1)) {
            return true;
          }
        }
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    bVar6 = true;
  }
  return bVar6;
}

// SetAttributeValues<float,UE::Math::TVector4<float>,4> @ 14daca670

bool __cdecl
UE::Dataflow::Private::SetAttributeValues<float,UE::Math::TVector4<float>,4>
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          float *param_4,bool param_5)

{
  FName FVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar11;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  uint local_res18;
  longlong local_a0;
  longlong local_98;
  FName local_80;
  FName local_78 [8];
  
  if (((param_3->ArrayNum == 0) || (iVar8 = (param_2->Attribute).Data.ArrayNum, iVar8 < 2)) ||
     ((param_2->Group).Data.ArrayNum < 2)) {
LAB_14dacab64:
    bVar5 = false;
  }
  else {
    pFVar10 = ::FName::FName(&local_80,iVar8 + -1,
                             (wchar_t *)(param_2->Attribute).Data.AllocatorInstance.Data,FNAME_Add);
    uVar14 = 0;
    FVar1 = *pFVar10;
    iVar8 = (param_2->Group).Data.ArrayNum;
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    pFVar10 = ::FName::FName(local_78,iVar7,(wchar_t *)(param_2->Group).Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar2 = *pFVar10;
    pTVar11 = FManagedArrayCollection::
              FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>(param_1,FVar1,FVar2);
    if (pTVar11 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar12 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector4<float>_>
                          (param_1,FVar1,FVar2);
      if (pTVar12 == (TManagedArray<UE::Math::TVector4<float>_> *)0x0) goto LAB_14dacab64;
      iVar8 = param_3->ArrayNum;
      iVar7 = (**(code **)(*(longlong *)pTVar12 + 0x60))(pTVar12);
      if (iVar7 == iVar8) {
        local_res18 = 0;
        iVar8 = (**(code **)(*(longlong *)pTVar12 + 0x60))(pTVar12);
        if (0 < (longlong)iVar8) {
          local_a0 = 0;
          local_98 = 0;
          do {
            uVar13 = (uint)uVar14;
            pfVar16 = (float *)(*(longlong *)&pTVar12->field_0x10 + local_98);
            uVar17 = 0;
            if ((int)uVar13 < param_3->ArrayNum) {
              uVar17 = ~uVar13 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            fVar21 = 0.0;
            iVar7 = *(int *)((param_3->AllocatorInstance).Data + local_98 + 8);
            if (4 < iVar7) {
              iVar7 = 4;
            }
            uVar17 = 0;
            lVar19 = (longlong)iVar7;
            pfVar15 = pfVar16;
            if (iVar7 < 1) {
LAB_14dacaa0b:
              local_res18 = uVar13;
              *pfVar16 = *param_4;
              pfVar16[1] = *param_4;
              pfVar16[2] = *param_4;
              fVar21 = *param_4;
            }
            else {
              do {
                uVar9 = 0;
                if ((int)uVar14 < param_3->ArrayNum) {
                  uVar9 = ~uVar13 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                pFVar3 = (param_3->AllocatorInstance).Data;
                uVar9 = 0;
                if ((int)uVar17 < *(int *)(pFVar3 + local_98 + 8)) {
                  uVar9 = ~uVar17 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                fVar20 = *(float *)((*(longlong *)(pFVar3 + local_98) - (longlong)pfVar16) +
                                   (longlong)pfVar15);
                if ((3 < uVar17) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidIndex(Index)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                       ,0x310,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                *pfVar15 = fVar20;
                if ((3 < uVar17) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidIndex(Index)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                       ,0x310,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                fVar21 = fVar21 + *pfVar15;
                uVar14 = (ulonglong)local_res18;
                pfVar15 = pfVar15 + 1;
                uVar17 = uVar17 + 1;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
              uVar13 = local_res18;
              if (iVar7 < 1) goto LAB_14dacaa0b;
              if ((param_5) && (fVar21 != 0.0)) {
                fVar20 = *pfVar16 / fVar21;
              }
              else {
                fVar20 = *pfVar16;
              }
              *pfVar16 = fVar20;
              if (iVar7 < 2) {
                pfVar16[1] = *param_4;
                pfVar16[2] = *param_4;
                fVar21 = *param_4;
              }
              else {
                if ((param_5) && (fVar21 != 0.0)) {
                  fVar20 = pfVar16[1] / fVar21;
                }
                else {
                  fVar20 = pfVar16[1];
                }
                pfVar16[1] = fVar20;
                if (iVar7 < 3) {
                  pfVar16[2] = *param_4;
                  fVar21 = *param_4;
                }
                else {
                  if ((param_5) && (fVar21 != 0.0)) {
                    fVar20 = pfVar16[2] / fVar21;
                  }
                  else {
                    fVar20 = pfVar16[2];
                  }
                  pfVar16[2] = fVar20;
                  if (iVar7 < 4) {
                    fVar21 = *param_4;
                  }
                  else if ((param_5) && (fVar21 != 0.0)) {
                    fVar21 = pfVar16[3] / fVar21;
                  }
                  else {
                    fVar21 = pfVar16[3];
                  }
                }
              }
            }
            local_res18 = local_res18 + 1;
            uVar14 = (ulonglong)local_res18;
            local_a0 = local_a0 + 1;
            local_98 = local_98 + 0x10;
            pfVar16[3] = fVar21;
          } while (local_a0 < iVar8);
        }
      }
    }
    else {
      iVar8 = param_3->ArrayNum;
      iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
      if ((iVar7 == iVar8) &&
         (iVar8 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11), uVar18 = uVar14, 0 < iVar8))
      {
        while( true ) {
          uVar13 = (uint)uVar14;
          uVar17 = 0;
          if ((int)uVar13 < param_3->ArrayNum) {
            uVar17 = ~uVar13 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) break;
          TArray<float,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)&pTVar11->field_0x10 + uVar18),
                     (TArray<float,TSizedDefaultAllocator<32>_> *)
                     ((param_3->AllocatorInstance).Data + uVar18));
          uVar14 = (ulonglong)(uVar13 + 1);
          uVar18 = uVar18 + 0x10;
          if (iVar8 <= (int)(uVar13 + 1)) {
            return true;
          }
        }
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

// BuildSkeletalMeshes @ 14dacf840

bool __cdecl
UE::Dataflow::Private::BuildSkeletalMeshes
          (TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_2,FReferenceSkeleton *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ForAnyElementType local_998;
  int local_990;
  int local_98c;
  FDynamicMesh3 local_988;
  FDynamicMesh3 local_758;
  FRenderingFacade local_528;
  
  if (param_2->Object != (FManagedArrayCollection *)0x0) {
    GeometryCollection::Facades::FRenderingFacade::FRenderingFacade(&local_528,param_2->Object);
    bVar2 = GeometryCollection::Facades::FRenderingFacade::IsValid(&local_528);
    if (bVar2) {
      if (local_528.GeometryNameAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) {
        iVar4 = FManagedArrayCollection::NumElements
                          (local_528.GeometryNameAttribute.ConstCollection,
                           local_528.GeometryNameAttribute.Group);
      }
      else {
        iVar4 = (**(code **)(*(longlong *)local_528.GeometryNameAttribute.ConstAttributeArray + 0x60
                            ))();
      }
      bVar2 = true;
      if ((iVar4 == param_1->ArrayNum) && (uVar6 = 0, bVar2 = true, 0 < iVar4)) {
        do {
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_988);
          Conversion::RenderingFacadeToDynamicMesh(&local_528,uVar6,&local_988,true);
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_758,&local_988);
          local_998.Data = (FScriptContainerElement *)0x0;
          local_990 = 1;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x230,8,1,0,&local_998,1,&local_98c);
          ConstructItems<UE::Geometry::FDynamicMesh3,UE::Geometry::FDynamicMesh3,int>
                    (local_998.Data,&local_758,1);
          uVar5 = 0;
          if ((int)uVar6 < param_1->ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          DestructItems<UE::Geometry::FDynamicMesh3,int>((FDynamicMesh3 *)local_998.Data,local_990);
          if ((FDynamicMesh3 *)local_998.Data != (FDynamicMesh3 *)0x0) {
            FMemory::Free(local_998.Data);
          }
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_758);
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_988);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar4);
        bVar2 = false;
      }
      return bVar2;
    }
  }
  return false;
}

// ComputeHasFromRefSkeleton @ 14dad0790

int __cdecl UE::Dataflow::Private::ComputeHasFromRefSkeleton(FReferenceSkeleton *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  iVar2 = (param_1->FinalRefBoneInfo).ArrayNum;
  pFVar7 = (param_1->FinalRefBoneInfo).AllocatorInstance.Data;
  uVar8 = 0;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((param_1->FinalRefBoneInfo).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMeshBoneInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    uVar3 = *(undefined8 *)pFVar7;
    uVar5 = *(uint *)(pFVar7 + 8);
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar6 = ((int)((ulonglong)uVar3 >> 0x20) - uVar5) + uVar4 ^ uVar5 >> 0xd;
    uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
    uVar9 = (uVar5 - uVar6) - uVar4 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar9) - uVar4 ^ uVar9 >> 0xc;
    uVar5 = (uVar4 - uVar6) - uVar9 ^ uVar6 << 0x10;
    uVar9 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar4 = (uVar6 - uVar9) - uVar5 ^ uVar9 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar9 ^ uVar4 << 10;
    uVar4 = (uVar9 - uVar5) - uVar4 ^ uVar5 >> 0xf;
    uVar8 = uVar8 - uVar4 ^ uVar4 >> 0xd;
    uVar5 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
    uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xd;
    uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 0xc;
    uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 << 0x10;
    uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 5;
    uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 3;
    uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 << 10;
    uVar8 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xf;
    pFVar7 = pFVar7 + 0xc;
  }
  return uVar8;
}

// CorrectSkinWeights @ 14dad0980

void __cdecl
UE::Dataflow::Private::CorrectSkinWeights
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong local_res18;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  int local_58;
  int aiStack_54 [5];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoneIndices.Num() == BoneWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                         ,0x92,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = param_2->ArrayNum;
  uVar15 = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  aiStack_54[0] = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  if (0 < iVar1) {
    local_res18 = 0;
    uVar18 = uVar15;
    do {
      uVar17 = 0;
      uVar14 = (uint)uVar15;
      uVar16 = ~uVar14 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (param_2->AllocatorInstance).Data;
      uVar12 = 0;
      uVar7 = uVar12;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(pFVar13 + uVar18 + 8) == *(int *)((param_1->AllocatorInstance).Data + uVar18 + 8)
         ) {
        uVar7 = uVar12;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(uint *)((param_1->AllocatorInstance).Data + uVar18 + 8);
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        local_58 = 0;
        if (aiStack_54[0] < (int)uVar7) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar7,&local_60,0,aiStack_54);
        }
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(uint *)((param_2->AllocatorInstance).Data + uVar18 + 8);
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        uVar15 = local_68 >> 0x20;
        local_68 = local_68 & 0xffffffff00000000;
        if ((int)uVar15 < (int)uVar7) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar7,&local_70,0,(int *)((longlong)&local_68 + 4));
        }
        lVar11 = 0;
        uVar7 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar9 = (longlong)*(int *)((param_2->AllocatorInstance).Data + uVar18 + 8);
        if (0 < lVar9) {
          do {
            uVar7 = 0;
            if ((int)uVar14 < param_1->ArrayNum) {
              uVar7 = uVar16;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar13 = (param_1->AllocatorInstance).Data;
            uVar12 = ~uVar17 >> 0x1f;
            uVar7 = 0;
            if ((int)uVar17 < *(int *)(pFVar13 + uVar18 + 8)) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)(*(longlong *)(pFVar13 + uVar18) + lVar11 * 4) != -1) {
              uVar7 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar7 = uVar16;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar13 = (param_1->AllocatorInstance).Data;
              uVar7 = 0;
              if ((int)uVar17 < *(int *)(pFVar13 + uVar18 + 8)) {
                uVar7 = uVar12;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar13 = (FScriptContainerElement *)(*(longlong *)(pFVar13 + uVar18) + lVar11 * 4);
              if (((local_60.Data <= pFVar13) &&
                  (pFVar13 < local_60.Data + (longlong)aiStack_54[0] * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (local_58 == aiStack_54[0]) {
                local_58 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_60,aiStack_54);
              }
              lVar10 = (longlong)local_58;
              local_58 = local_58 + 1;
              *(undefined4 *)(local_60.Data + lVar10 * 4) = *(undefined4 *)pFVar13;
              uVar7 = 0;
              if ((int)uVar14 < param_2->ArrayNum) {
                uVar7 = uVar16;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar13 = (param_2->AllocatorInstance).Data;
              uVar7 = 0;
              if ((int)uVar17 < *(int *)(pFVar13 + uVar18 + 8)) {
                uVar7 = uVar12;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar13 = (FScriptContainerElement *)(*(longlong *)(pFVar13 + uVar18) + lVar11 * 4);
              if (((local_70.Data <= pFVar13) &&
                  (pFVar13 < local_70.Data + (longlong)local_68._4_4_ * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar8 = (int)local_68;
              if ((int)local_68 == local_68._4_4_) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_70,(int *)((longlong)&local_68 + 4));
              }
              local_68 = CONCAT44(local_68._4_4_,iVar8 + 1);
              *(undefined4 *)(local_70.Data + (longlong)iVar8 * 4) = *(undefined4 *)pFVar13;
            }
            uVar17 = uVar17 + 1;
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar9);
        }
        uVar7 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = local_58;
        FVar5.Data = local_60.Data;
        pFVar13 = (param_1->AllocatorInstance).Data + uVar18;
        if (pFVar13 != (FScriptContainerElement *)&local_60) {
          lVar11 = (longlong)local_58;
          pFVar4 = pFVar13 + 0xc;
          iVar2 = *(int *)pFVar4;
          *(int *)&pFVar13[8].field_0x0 = local_58;
          if ((local_58 == 0) && (iVar2 == 0)) {
            *(int *)pFVar4 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_58,iVar2,(ForAnyElementType *)pFVar13,local_58,(int *)pFVar4);
            if (iVar8 != 0) {
              memcpy(*(void **)&pFVar13->field_0x0,FVar5.Data,lVar11 << 2);
            }
          }
        }
        uVar7 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar5.Data = local_70.Data;
        pFVar13 = (param_2->AllocatorInstance).Data + uVar18;
        if (pFVar13 != (FScriptContainerElement *)&local_70) {
          iVar2 = (int)local_68;
          lVar11 = (longlong)(int)local_68;
          pFVar4 = pFVar13 + 0xc;
          iVar8 = *(int *)pFVar4;
          *(int *)&pFVar13[8].field_0x0 = (int)local_68;
          if (((int)local_68 == 0) && (iVar8 == 0)) {
            *(int *)pFVar4 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(int)local_68,iVar8,(ForAnyElementType *)pFVar13,(int)local_68,
                       (int *)pFVar4);
            if (iVar2 != 0) {
              memcpy(*(void **)&pFVar13->field_0x0,FVar5.Data,lVar11 << 2);
            }
          }
        }
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      local_res18 = local_res18 + 1;
      uVar18 = uVar18 + 0x10;
    } while (local_res18 < iVar1);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// DataflowCollectionAttributeKeyNodes @ 14dad3400

void __cdecl UE::Dataflow::DataflowCollectionAttributeKeyNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FMakeAttributeKeyDataflowNode");
  FVar1 = local_res8[0];
  if (Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode,(UObject *)pUVar2,
                         L"MakeAttributeKeyDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton,FVar1,
             "MakeAttributeKey","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeAttributeKeyDataflowNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FBreakAttributeKeyDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode,(UObject *)pUVar2,
                         L"BreakAttributeKeyDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton,
             local_res8[0],"BreakAttributeKey","Dataflow",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBreakAttributeKeyDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterContextOverridesNodes @ 14dad7990

void __cdecl UE::Dataflow::RegisterContextOverridesNodes(void)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FFloatOverrideDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode,(UObject *)pUVar1,
                         L"FloatOverrideDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton,
             local_res8[0],"FloatOverride","Dataflow",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatOverrideDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterSelectionNodes @ 14dad7a40

void __cdecl UE::Dataflow::RegisterSelectionNodes(void)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FSelectionSetDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectionSetDataflowNode,(UObject *)pUVar1,
                         L"SelectionSetDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton,
             local_res8[0],"SelectionSet","Dataflow",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSelectionSetDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterSkeletalMeshNodes @ 14dad7af0

void __cdecl UE::Dataflow::RegisterSkeletalMeshNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FNodeFactory *pFVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FName local_res8;
  FString local_18;
  
  ::FString::FString(&local_18,"Skeletal Mesh");
  ::FName::FName(&local_res8,"FGetSkeletalMeshDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FGetSkeletalMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode,(UObject *)pUVar2,
                         L"GetSkeletalMeshDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetSkeletalMeshDataflowNode.OuterSingleton,FVar1,
             "SkeletalMesh","General",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetSkeletalMeshDataflowNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Skeletal Mesh");
  ::FName::FName(&local_res8,"FGetSkeletonDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode,(UObject *)pUVar2,
                         L"GetSkeletonDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton,FVar1,
             "Skeleton","General",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetSkeletonDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Skeletal Mesh");
  ::FName::FName(&local_res8,"FSkeletalMeshBoneDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode,(UObject *)pUVar2,
                         L"SkeletalMeshBoneDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton,FVar1,
             "SkeletalMeshBone","General",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSkeletalMeshBoneDataflowNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Skeletal Mesh");
  ::FName::FName(&local_res8,"FSkeletalMeshReferenceTransformDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode,
                         (UObject *)pUVar2,L"SkeletalMeshReferenceTransformDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.
             OuterSingleton,FVar1,"SkeletalMeshReferenceTransform","General",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FSkeletalMeshReferenceTransformDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Get Physics Asset Skeletal Mesh");
  ::FName::FName(&local_res8,"FGetPhysicsAssetFromSkeletalMeshDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode,
                         (UObject *)pUVar2,L"GetPhysicsAssetFromSkeletalMeshDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetPhysicsAssetFromSkeletalMeshDataflowNode.
             OuterSingleton,local_res8,"GetPhysicsAssetFromSkeletalMesh","General",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FGetPhysicsAssetFromSkeletalMeshDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar3 = FNodeFactory::GetInstance();
  pFVar4 = ::FName::FName(&local_res8,"FGetSkeletalMeshDataflowNode");
  FVar1 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  FNodeFactory::RegisterGetterNodeForAssetType(pFVar3,(FName)pUVar5->_padding_,FVar1);
  pFVar3 = FNodeFactory::GetInstance();
  pFVar4 = ::FName::FName(&local_res8,"FGetSkeletonDataflowNode");
  FVar1 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USkeleton_NoRegister();
  FNodeFactory::RegisterGetterNodeForAssetType(pFVar3,(FName)pUVar5->_padding_,FVar1);
  return;
}

// RegisterStaticMeshNodes @ 14dad7e40

void __cdecl UE::Dataflow::RegisterStaticMeshNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FNodeFactory *this;
  FName *pFVar3;
  UClass *pUVar4;
  FName local_res8;
  FString local_18;
  
  ::FString::FString(&local_18,"Static Mesh");
  ::FName::FName(&local_res8,"FGetStaticMeshDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode,(UObject *)pUVar2,
                         L"GetStaticMeshDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton,FVar1,
             "StaticMesh","General",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetStaticMeshDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Bounds Size Dimensions Extents Center");
  ::FName::FName(&local_res8,"FGetStaticMeshBoundingBoxDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode,
                         (UObject *)pUVar2,L"GetStaticMeshBoundingBoxDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton,
             local_res8,"GetStaticMeshBoundingBox","Static Mesh",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FGetStaticMeshBoundingBoxDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this = FNodeFactory::GetInstance();
  pFVar3 = ::FName::FName(&local_res8,"FGetStaticMeshDataflowNode");
  FVar1 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
  FNodeFactory::RegisterGetterNodeForAssetType(this,(FName)pUVar4->_padding_,FVar1);
  return;
}

