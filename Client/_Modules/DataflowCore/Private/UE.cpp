// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 524

// ConstructForTests<FConvertIndexArrayToSelectionTypesDataflowNode> @ 1443dc6c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertIndexArrayToSelectionTypesDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertIndexArrayToSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined4 *)((longlong)param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x80;
  return;
}

// Destruct<FConvertIndexArrayToSelectionTypesDataflowNode> @ 1443dc790

void __cdecl
UE::CoreUObject::Private::Destruct<FConvertIndexArrayToSelectionTypesDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 800) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 800));
  }
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Construct<FDataflowSelection> @ 1443dc800

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSelection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// ConstructForTests<FDataflowSelection> @ 1443dc860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSelection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// Destruct<FDataflowSelection> @ 1443dc880

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSelection>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FConvertIndexArrayToSelectionTypesDataflowNode> @ 1443dc8a0

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertIndexArrayToSelectionTypesDataflowNode>
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
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x2f8),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x2f8));
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

// Construct<FDataflowTransformArrayTypes> @ 1443dc990

void __cdecl UE::CoreUObject::Private::Construct<FDataflowTransformArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDataflowTransformArrayTypes> @ 1443dc9a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowTransformArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDataflowTransformArrayTypes> @ 1443dc9b0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowTransformArrayTypes>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDataflowSelection> @ 1443dc9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSelection>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1) + 8);
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1),pTVar1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVectorMultiplyNode> @ 1443dca40

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorMultiplyNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorMultiplyNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// ConstructForTests<FDataflowVectorMultiplyNode> @ 1443dca90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorMultiplyNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorMultiplyNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// Destruct<FDataflowVectorMultiplyNode> @ 1443dcaa0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorMultiplyNode>(void *param_1)

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

// Construct<FDataflowMathReciprocalNode> @ 1443dcab0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathReciprocalNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathReciprocalNode__6B_;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Copy<FDataflowTransformArrayTypes> @ 1443dcaf0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowTransformArrayTypes>
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
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
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
                    (0x60,0x10,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x60);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathReciprocalNode> @ 1443dcbd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathReciprocalNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathReciprocalNode__6B_;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Destruct<FDataflowMathReciprocalNode> @ 1443dcc10

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathReciprocalNode>(void *param_1)

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

// Copy<FDataflowVectorMultiplyNode> @ 1443dcd20

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorMultiplyNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x298) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a8) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2b0);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Copy<FDataflowMathReciprocalNode> @ 1443dce50

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathReciprocalNode>(void *param_1,void *param_2,int param_3)

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
    *(undefined8 *)((longlong)pvVar2 + 600) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x260);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowImageSplitChannelsNode> @ 1443dcf10

void __cdecl UE::CoreUObject::Private::Construct<FDataflowImageSplitChannelsNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowImageSplitChannelsNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x27c) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0x201;
  return;
}

// ConstructForTests<FDataflowImageSplitChannelsNode> @ 1443dcf60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowImageSplitChannelsNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowImageSplitChannelsNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x27c) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0x201;
  return;
}

// Destruct<FDataflowImageSplitChannelsNode> @ 1443dcf70

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowImageSplitChannelsNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  if (*(void **)((longlong)param_1 + 0x2d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2d0));
  }
  if (*(void **)((longlong)param_1 + 0x2a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a8));
  }
  if (*(void **)((longlong)param_1 + 0x280) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x280));
  }
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowImageSplitChannelsNode> @ 1443dd000

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowImageSplitChannelsNode>
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
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x248),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x270),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x270 - (longlong)param_1)));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x298),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x298 - (longlong)param_1)));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x2c0),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x2c0 - (longlong)param_1)));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x2e8),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x2e8 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x310);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowMathSignNode> @ 1443dd3b0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathSignNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSignNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathSignNode> @ 1443dd3f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathSignNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSignNode__6B_;
  return;
}

// Destruct<FDataflowMathSignNode> @ 1443dd470

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathSignNode>(void *param_1)

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

// Copy<FDataflowMathSignNode> @ 1443dd4c0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathSignNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertIndexToSelectionTypesDataflowNode> @ 1443dd570

void __cdecl
UE::CoreUObject::Private::Construct<FConvertIndexToSelectionTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertIndexToSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined4 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 800) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x80;
  return;
}

// ConstructForTests<FConvertIndexToSelectionTypesDataflowNode> @ 1443dd5d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertIndexToSelectionTypesDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertIndexToSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined4 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 800) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x80;
  return;
}

// Destruct<FConvertIndexToSelectionTypesDataflowNode> @ 1443dd630

void __cdecl
UE::CoreUObject::Private::Destruct<FConvertIndexToSelectionTypesDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x318) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x318));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Construct<FDataflowPath> @ 1443dd670

void __cdecl UE::CoreUObject::Private::Construct<FDataflowPath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FDataflowPath> @ 1443dd6a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowPath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FDataflowPath> @ 1443dd6d0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowPath>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FConvertIndexToSelectionTypesDataflowNode> @ 1443dd730

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertIndexToSelectionTypesDataflowNode>
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
      *(undefined4 *)((longlong)pvVar5 + 0x2f8) = *(undefined4 *)((longlong)pvVar1 + 0x2f8);
      *(undefined8 *)((longlong)pvVar5 + 0x300) = *(undefined8 *)((longlong)pvVar1 + 0x300);
      if (pvVar5 != pvVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar5 + 0x308),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar1 + 0x308));
      }
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0x328);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowBoolArrayTypes> @ 1443dd810

void __cdecl UE::CoreUObject::Private::Construct<FDataflowBoolArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDataflowBoolArrayTypes> @ 1443dd820

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowBoolArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDataflowBoolArrayTypes> @ 1443dd830

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowBoolArrayTypes>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDataflowPath> @ 1443dd850

bool __cdecl UE::CoreUObject::Private::Copy<FDataflowPath>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (FString *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FDataflowVectorSubtractNode> @ 1443dd8e0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorSubtractNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorSubtractNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// ConstructForTests<FDataflowVectorSubtractNode> @ 1443dd8f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorSubtractNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorSubtractNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// Destruct<FDataflowVectorSubtractNode> @ 1443dd900

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorSubtractNode>(void *param_1)

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

// Construct<FDataflowMathMaximumNode_v2> @ 1443dd910

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathMaximumNode_v2>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowMathMaximumNode_v2__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Copy<FDataflowBoolArrayTypes> @ 1443dd950

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowBoolArrayTypes>(void *param_1,void *param_2,int param_3)

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
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
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
                    (1,1,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathMaximumNode_v2> @ 1443dda60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathMaximumNode_v2>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowMathMaximumNode_v2__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Destruct<FDataflowMathMaximumNode_v2> @ 1443ddaa0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathMaximumNode_v2>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowVectorSubtractNode> @ 1443ddad0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorSubtractNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x298) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a8) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2b0);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Copy<FDataflowMathMaximumNode_v2> @ 1443ddbc0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathMaximumNode_v2>(void *param_1,void *param_2,int param_3)

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
    TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + 0x248),
               (TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar2 + 600) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x260);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowImageFromColorNode> @ 1443ddc70

void __cdecl UE::CoreUObject::Private::Construct<FDataflowImageFromColorNode>(void *param_1)

{
  FLinearColor FVar1;
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowImageFromColorNode__6B_;
  FVar1 = FLinearColor::Black;
  *(undefined4 *)((longlong)param_1 + 600) = 0x10;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x248))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined4 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined2 *)((longlong)param_1 + 0x26c) = 0x201;
  return;
}

// ConstructForTests<FDataflowImageFromColorNode> @ 1443ddc80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowImageFromColorNode>(void *param_1)

{
  FLinearColor FVar1;
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowImageFromColorNode__6B_;
  FVar1 = FLinearColor::Black;
  *(undefined4 *)((longlong)param_1 + 600) = 0x10;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x248))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined4 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined2 *)((longlong)param_1 + 0x26c) = 0x201;
  return;
}

// Destruct<FDataflowImageFromColorNode> @ 1443ddc90

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowImageFromColorNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowImageFromColorNode> @ 1443ddd00

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowImageFromColorNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 600) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar3 + 0x260),
               (FDataflowImage *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x288);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Construct<FDataflowMathExpNode> @ 1443de000

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathExpNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathExpNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathExpNode> @ 1443de040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathExpNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathExpNode__6B_;
  return;
}

// Destruct<FDataflowMathExpNode> @ 1443de0c0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathExpNode>(void *param_1)

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

// Copy<FDataflowMathExpNode> @ 1443de110

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathExpNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertSelectionTypesToIndexArrayDataflowNode> @ 1443de1c0

void __cdecl
UE::CoreUObject::Private::Construct<FConvertSelectionTypesToIndexArrayDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertSelectionTypesToIndexArrayDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined4 *)((longlong)param_1 + 0x268) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  return;
}

// ConstructForTests<FConvertSelectionTypesToIndexArrayDataflowNode> @ 1443de220

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertSelectionTypesToIndexArrayDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertSelectionTypesToIndexArrayDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined4 *)((longlong)param_1 + 0x268) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  return;
}

// Destruct<FConvertSelectionTypesToIndexArrayDataflowNode> @ 1443de2c0

void __cdecl
UE::CoreUObject::Private::Destruct<FConvertSelectionTypesToIndexArrayDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  if (*(void **)((longlong)param_1 + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x260));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Construct<FDataflowOverrideNode> @ 1443de300

void __cdecl UE::CoreUObject::Private::Construct<FDataflowOverrideNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowOverrideNode__6B_;
  ::FName::FName((FName *)((longlong)param_1 + 0x248),"Key");
  ::FString::FString((FString *)((longlong)param_1 + 0x250),"0");
  *(undefined1 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FDataflowOverrideNode> @ 1443de360

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowOverrideNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowOverrideNode__6B_;
  ::FName::FName((FName *)((longlong)param_1 + 0x248),"Key");
  ::FString::FString((FString *)((longlong)param_1 + 0x250),"0");
  *(undefined1 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FDataflowOverrideNode> @ 1443de400

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowOverrideNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowOverrideNode__6B_;
  if (*(void **)((longlong)param_1 + 0x250) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x250));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FConvertSelectionTypesToIndexArrayDataflowNode> @ 1443de480

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertSelectionTypesToIndexArrayDataflowNode>
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
      *(undefined8 *)((longlong)pvVar5 + 0x248) = *(undefined8 *)((longlong)pvVar1 + 0x248);
      if (pvVar5 != pvVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar5 + 0x250),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar1 + 0x250));
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x270),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x270));
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0x280);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowStringArrayTypes> @ 1443de590

void __cdecl UE::CoreUObject::Private::Construct<FDataflowStringArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDataflowStringArrayTypes> @ 1443de5e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowStringArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDataflowStringArrayTypes> @ 1443de5f0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowStringArrayTypes>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FDataflowOverrideNode> @ 1443de630

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowOverrideNode>(void *param_1,void *param_2,int param_3)

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
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x250),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar2 + 0x260) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x260 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowVectorAddNode> @ 1443de730

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorAddNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorAddNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// ConstructForTests<FDataflowVectorAddNode> @ 1443de740

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorAddNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorAddNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// Destruct<FDataflowVectorAddNode> @ 1443de790

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorAddNode>(void *param_1)

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

// Construct<FDataflowMathMaximumNode> @ 1443de7a0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathMaximumNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathMaximumNode__6B_;
  return;
}

// Copy<FDataflowStringArrayTypes> @ 1443de7e0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowStringArrayTypes>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FString,int>((FString *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FString,FString,int>(pFVar6->Data,(FString *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathMaximumNode> @ 1443de8d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathMaximumNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathMaximumNode__6B_;
  return;
}

// Destruct<FDataflowMathMaximumNode> @ 1443de950

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathMaximumNode>(void *param_1)

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

// Copy<FDataflowVectorAddNode> @ 1443de9a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorAddNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x298) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a8) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2b0);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Copy<FDataflowMathMaximumNode> @ 1443dea90

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathMaximumNode>(void *param_1,void *param_2,int param_3)

{
  FDataflowMathTwoInputsOperatorNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDataflowMathTwoInputsOperatorNode::operator=
                (this,(FDataflowMathTwoInputsOperatorNode *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowImage> @ 1443dec20

void __cdecl UE::CoreUObject::Private::Construct<FDataflowImage>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x201;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FDataflowImage> @ 1443dec90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowImage>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x201;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FDataflowImage> @ 1443decc0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowImage>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// SerializeArchive<FDataflowImage> @ 1443dece0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FDataflowImage>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FDataflowImage::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FDataflowImage> @ 1443dee20

bool __cdecl UE::CoreUObject::Private::Copy<FDataflowImage>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  long64 *plVar3;
  size_t _Size;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar4 = ((undefined8 *)(lVar5 + (longlong)param_1))[1];
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 0x10);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      if (pFVar2 != pFVar1) {
        _Size = *(size_t *)((longlong)param_1 + lVar5 + 0x18);
        plVar3 = (long64 *)((longlong)param_1 + 0x20);
        _Src = pFVar1->Data;
        *(size_t *)((longlong)param_1 + 0x18) = _Size;
        if ((_Size == 0) && (*plVar3 == 0)) {
          *plVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,_Size,*plVar3,pFVar2,_Size,plVar3);
          if (_Size != 0) {
            memcpy(pFVar2->Data,_Src,_Size);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathLogNode> @ 1443defd0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathLogNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathLogNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathLogNode> @ 1443df010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathLogNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathLogNode__6B_;
  return;
}

// Destruct<FDataflowMathLogNode> @ 1443df090

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathLogNode>(void *param_1)

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

// Copy<FDataflowMathLogNode> @ 1443df0a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathLogNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertSelectionTypesDataflowNode> @ 1443df150

void __cdecl UE::CoreUObject::Private::Construct<FConvertSelectionTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined4 *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x80;
  *(undefined1 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0;
  *(undefined4 *)((longlong)param_1 + 0x348) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x80;
  return;
}

// ConstructForTests<FConvertSelectionTypesDataflowNode> @ 1443df160

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertSelectionTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined4 *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x80;
  *(undefined1 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0;
  *(undefined4 *)((longlong)param_1 + 0x348) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x80;
  return;
}

// Destruct<FConvertSelectionTypesDataflowNode> @ 1443df170

void __cdecl UE::CoreUObject::Private::Destruct<FConvertSelectionTypesDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x340) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x340));
  }
  if (*(void **)((longlong)param_1 + 0x310) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x310));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FConvertSelectionTypesDataflowNode> @ 1443df240

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertSelectionTypesDataflowNode>
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
      pvVar1 = (void *)((longlong)pvVar5 + ((longlong)param_2 - (longlong)param_1));
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
      *(undefined8 *)((longlong)pvVar5 + 0x2f8) = *(undefined8 *)((longlong)pvVar1 + 0x2f8);
      if (pvVar5 == pvVar1) {
        *(undefined1 *)((longlong)pvVar5 + 800) = *(undefined1 *)((longlong)pvVar1 + 800);
        *(undefined8 *)((longlong)pvVar5 + 0x328) = *(undefined8 *)((longlong)pvVar1 + 0x328);
      }
      else {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar5 + 0x300),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar1 + 0x300));
        *(undefined1 *)((longlong)pvVar5 + 800) = *(undefined1 *)((longlong)pvVar1 + 800);
        *(undefined8 *)((longlong)pvVar5 + 0x328) = *(undefined8 *)((longlong)pvVar1 + 0x328);
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar5 + 0x330),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar1 + 0x330));
      }
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0x350);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowNumericArrayTypes> @ 1443df380

void __cdecl UE::CoreUObject::Private::Construct<FDataflowNumericArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDataflowNumericArrayTypes> @ 1443df390

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowNumericArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDataflowNumericArrayTypes> @ 1443df3a0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowNumericArrayTypes>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FDataflowVectorBreakNode> @ 1443df3c0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorBreakNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorBreakNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// Construct<FDataflowNode> @ 1443df420

void __cdecl UE::CoreUObject::Private::Construct<FDataflowNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x6c))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x8c),"Invalid");
  *(ulong64 *)((longlong)param_1 + 0x98) = Dataflow::FTimestamp::Invalid;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1c8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e8) = 1;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined1 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined2 *)((longlong)param_1 + 0x218) = 0;
  *(ulong64 *)((longlong)param_1 + 0x220) = Dataflow::FTimestamp::Invalid;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 2;
  return;
}

// ConstructForTests<FDataflowVectorBreakNode> @ 1443df430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorBreakNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorBreakNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// ConstructForTests<FDataflowNode> @ 1443df4d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FDataflowNode__6B_;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x6c))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  ::FName::FName((FName *)((longlong)param_1 + 0x8c),"Invalid");
  *(ulong64 *)((longlong)param_1 + 0x98) = Dataflow::FTimestamp::Invalid;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1c8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e8) = 1;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x1f0));
  *(undefined1 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined2 *)((longlong)param_1 + 0x218) = 0;
  *(ulong64 *)((longlong)param_1 + 0x220) = Dataflow::FTimestamp::Invalid;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 2;
  return;
}

// Destruct<FDataflowVectorBreakNode> @ 1443df4e0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorBreakNode>(void *param_1)

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

// Construct<FDataflowMathMinimumNode_v2> @ 1443df4f0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathMinimumNode_v2>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowMathMinimumNode_v2__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Copy<FDataflowNumericArrayTypes> @ 1443df530

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowNumericArrayTypes>(void *param_1,void *param_2,int param_3)

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
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
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
                    (8,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FDataflowNode> @ 1443df610

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowNode>(void *param_1)

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

// ConstructForTests<FDataflowMathMinimumNode_v2> @ 1443df620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathMinimumNode_v2>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowMathMinimumNode_v2__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Destruct<FDataflowMathMinimumNode_v2> @ 1443df660

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathMinimumNode_v2>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowVectorBreakNode> @ 1443df690

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorBreakNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x290);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Copy<FDataflowNode> @ 1443df780

bool __cdecl UE::CoreUObject::Private::Copy<FDataflowNode>(void *param_1,void *param_2,int param_3)

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

// Copy<FDataflowMathMinimumNode_v2> @ 1443df7d0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathMinimumNode_v2>(void *param_1,void *param_2,int param_3)

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
    TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + 0x248),
               (TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar2 + 600) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x260);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowMathLogXNode> @ 1443dfbc0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathLogXNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathLogXNode__6B_;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// ConstructForTests<FDataflowMathLogXNode> @ 1443dfc00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathLogXNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathLogXNode__6B_;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Destruct<FDataflowMathLogXNode> @ 1443dfc40

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathLogXNode>(void *param_1)

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

// Copy<FDataflowMathLogXNode> @ 1443dfc90

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathLogXNode>(void *param_1,void *param_2,int param_3)

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
    *(undefined8 *)((longlong)pvVar2 + 600) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x260);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertUObjectConvertibleTypesDataflowNode> @ 1443dfd50

void __cdecl
UE::CoreUObject::Private::Construct<FConvertUObjectConvertibleTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertUObjectConvertibleTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// ConstructForTests<FConvertUObjectConvertibleTypesDataflowNode> @ 1443dfd90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertUObjectConvertibleTypesDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertUObjectConvertibleTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Destruct<FConvertUObjectConvertibleTypesDataflowNode> @ 1443dfdd0

void __cdecl
UE::CoreUObject::Private::Destruct<FConvertUObjectConvertibleTypesDataflowNode>(void *param_1)

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

// Copy<FConvertUObjectConvertibleTypesDataflowNode> @ 1443dfde0

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertUObjectConvertibleTypesDataflowNode>
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

// Construct<FDataflowVectorArrayTypes> @ 1443dfec0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDataflowVectorArrayTypes> @ 1443dfed0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorArrayTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDataflowVectorArrayTypes> @ 1443dfee0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorArrayTypes>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FDataflowVectorMakeVec4Node> @ 1443dff50

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorMakeVec4Node>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorMakeVec4Node__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// Construct<FDataflowFreezeActions> @ 1443dffb0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowFreezeActions>(void *param_1)

{
  return;
}

// ConstructForTests<FDataflowVectorMakeVec4Node> @ 1443dffc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorMakeVec4Node>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorMakeVec4Node__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// ConstructForTests<FDataflowFreezeActions> @ 1443e0020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowFreezeActions>(void *param_1)

{
  return;
}

// Destruct<FDataflowVectorMakeVec4Node> @ 1443e0030

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorMakeVec4Node>(void *param_1)

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

// Construct<FDataflowMathMinimumNode> @ 1443e0040

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathMinimumNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathMinimumNode__6B_;
  return;
}

// Copy<FDataflowVectorArrayTypes> @ 1443e0080

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorArrayTypes>(void *param_1,void *param_2,int param_3)

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
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
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
                    (0x20,0x10,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 5);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathMinimumNode> @ 1443e0160

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathMinimumNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathMinimumNode__6B_;
  return;
}

// Destruct<FDataflowMathMinimumNode> @ 1443e01a0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathMinimumNode>(void *param_1)

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

// Copy<FDataflowVectorMakeVec4Node> @ 1443e01f0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorMakeVec4Node>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x290);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Copy<FDataflowMathMinimumNode> @ 1443e02e0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathMinimumNode>(void *param_1,void *param_2,int param_3)

{
  FDataflowMathTwoInputsOperatorNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDataflowMathTwoInputsOperatorNode::operator=
                (this,(FDataflowMathTwoInputsOperatorNode *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathPowNode> @ 1443e0670

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathPowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathPowNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathPowNode> @ 1443e06b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathPowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathPowNode__6B_;
  return;
}

// Destruct<FDataflowMathPowNode> @ 1443e06f0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathPowNode>(void *param_1)

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

// Copy<FDataflowMathPowNode> @ 1443e0700

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathPowNode>(void *param_1,void *param_2,int param_3)

{
  FDataflowMathTwoInputsOperatorNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDataflowMathTwoInputsOperatorNode::operator=
                (this,(FDataflowMathTwoInputsOperatorNode *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FConvertStringConvertibleTypesDataflowNode> @ 1443e0750

void __cdecl
UE::CoreUObject::Private::Construct<FConvertStringConvertibleTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertStringConvertibleTypesDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  ::FString::FString((FString *)((longlong)param_1 + 600),"");
  return;
}

// ConstructForTests<FConvertStringConvertibleTypesDataflowNode> @ 1443e07a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertStringConvertibleTypesDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertStringConvertibleTypesDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  ::FString::FString((FString *)((longlong)param_1 + 600),"");
  return;
}

// Destruct<FConvertStringConvertibleTypesDataflowNode> @ 1443e07f0

void __cdecl
UE::CoreUObject::Private::Destruct<FConvertStringConvertibleTypesDataflowNode>(void *param_1)

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

// Copy<FConvertStringConvertibleTypesDataflowNode> @ 1443e0830

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertStringConvertibleTypesDataflowNode>
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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowSelectionTypes> @ 1443e08f0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSelectionTypes>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// ConstructForTests<FDataflowSelectionTypes> @ 1443e0960

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSelectionTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// Destruct<FDataflowSelectionTypes> @ 1443e09c0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSelectionTypes>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FDataflowVectorMakeVec3Node> @ 1443e09e0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorMakeVec3Node>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorMakeVec3Node__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  return;
}

// ConstructForTests<FDataflowVectorMakeVec3Node> @ 1443e0a80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorMakeVec3Node>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorMakeVec3Node__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  return;
}

// Construct<FDataflowForceDependencyNode> @ 1443e0ae0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowForceDependencyNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowForceDependencyNode__6B_;
  return;
}

// Destruct<FDataflowVectorMakeVec3Node> @ 1443e0b10

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorMakeVec3Node>(void *param_1)

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

// Construct<FDataflowMathDivideNode> @ 1443e0b20

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathDivideNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathDivideNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FDataflowForceDependencyNode> @ 1443e0b70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowForceDependencyNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowForceDependencyNode__6B_;
  return;
}

// Copy<FDataflowSelectionTypes> @ 1443e0ba0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSelectionTypes>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1) + 8);
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1),pTVar1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathDivideNode> @ 1443e0c10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathDivideNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathDivideNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FDataflowForceDependencyNode> @ 1443e0c60

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowForceDependencyNode>(void *param_1)

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

// Destruct<FDataflowMathDivideNode> @ 1443e0c70

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathDivideNode>(void *param_1)

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

// Copy<FDataflowVectorMakeVec3Node> @ 1443e1020

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorMakeVec3Node>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x280);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Copy<FDataflowForceDependencyNode> @ 1443e1100

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowForceDependencyNode>
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

// Copy<FDataflowMathDivideNode> @ 1443e1150

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathDivideNode>(void *param_1,void *param_2,int param_3)

{
  FDataflowMathTwoInputsOperatorNode *pFVar1;
  FDataflowMathTwoInputsOperatorNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FDataflowMathTwoInputsOperatorNode *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FDataflowMathTwoInputsOperatorNode::operator=(this,pFVar1);
      this[1]._padding_ = pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FDataflowMathTwoInputsOperatorNode *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathRadToDegNode> @ 1443e1250

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathRadToDegNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathRadToDegNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathRadToDegNode> @ 1443e12d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathRadToDegNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathRadToDegNode__6B_;
  return;
}

// Destruct<FDataflowMathRadToDegNode> @ 1443e1310

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathRadToDegNode>(void *param_1)

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

// Copy<FDataflowMathRadToDegNode> @ 1443e16d0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathRadToDegNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowMathFracNode> @ 1443e1dc0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathFracNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathFracNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathFracNode> @ 1443e1e00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathFracNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathFracNode__6B_;
  return;
}

// Destruct<FDataflowMathFracNode> @ 1443e1e40

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathFracNode>(void *param_1)

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

// Copy<FDataflowMathFracNode> @ 1443e1e90

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathFracNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertTransformTypesDataflowNode> @ 1443e24e0

void __cdecl UE::CoreUObject::Private::Construct<FConvertTransformTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertTransformTypesDataflowNode__6B_;
  *(double (*) [2])((longlong)param_1 + 0x250) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x260) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x270) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x280) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x290) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2a0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2b0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2c0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2d0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2e0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2f0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x300) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ConstructForTests<FConvertTransformTypesDataflowNode> @ 1443e2530

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertTransformTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertTransformTypesDataflowNode__6B_;
  *(double (*) [2])((longlong)param_1 + 0x250) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x260) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x270) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x280) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x290) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2a0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2b0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2c0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2d0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2e0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2f0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x300) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Destruct<FConvertTransformTypesDataflowNode> @ 1443e2580

void __cdecl UE::CoreUObject::Private::Destruct<FConvertTransformTypesDataflowNode>(void *param_1)

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

// Copy<FConvertTransformTypesDataflowNode> @ 1443e2610

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertTransformTypesDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x298) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2b8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2b0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2b0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2b8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2c8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2c0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2c0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2c8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2d8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2d0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2d0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2d8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2e8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2e0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2e0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2e8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2f8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2f0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2f0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2f8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x308 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x300) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x300 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x308) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x310);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Construct<FDataflowUObjectConvertibleTypes> @ 1443e2750

void __cdecl UE::CoreUObject::Private::Construct<FDataflowUObjectConvertibleTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FDataflowUObjectConvertibleTypes> @ 1443e2760

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowUObjectConvertibleTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FDataflowUObjectConvertibleTypes> @ 1443e27b0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowUObjectConvertibleTypes>(void *param_1)

{
  return;
}

// Construct<FDataflowVectorMakeVec2Node> @ 1443e2af0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorMakeVec2Node>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorMakeVec2Node__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  return;
}

// ConstructForTests<FDataflowVectorMakeVec2Node> @ 1443e2d00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorMakeVec2Node>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorMakeVec2Node__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  return;
}

// Construct<FDataflowPrintNode> @ 1443e2d50

void __cdecl UE::CoreUObject::Private::Construct<FDataflowPrintNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowPrintNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  return;
}

// Destruct<FDataflowVectorMakeVec2Node> @ 1443e2de0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorMakeVec2Node>(void *param_1)

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

// Construct<FDataflowMathMultiplyNode> @ 1443e2df0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathMultiplyNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathMultiplyNode__6B_;
  return;
}

// ConstructForTests<FDataflowPrintNode> @ 1443e2e40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowPrintNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowPrintNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  return;
}

// Copy<FDataflowUObjectConvertibleTypes> @ 1443e2ed0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowUObjectConvertibleTypes>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathMultiplyNode> @ 1443e2f70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathMultiplyNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathMultiplyNode__6B_;
  return;
}

// Destruct<FDataflowPrintNode> @ 1443e2fb0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowPrintNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Destruct<FDataflowMathMultiplyNode> @ 1443e2ff0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathMultiplyNode>(void *param_1)

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

// Copy<FDataflowVectorMakeVec2Node> @ 1443e3010

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorMakeVec2Node>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x280);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Copy<FDataflowPrintNode> @ 1443e3120

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowPrintNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  
  if (param_3 != 0) {
    pvVar4 = param_1;
    do {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                         ,0x51,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::operator=
                ((FString *)((longlong)pvVar4 + 0x248),
                 (FString *)((longlong)param_2 + (longlong)pvVar4 + (0x248 - (longlong)param_1)));
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 600);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FDataflowMathMultiplyNode> @ 1443e3200

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathMultiplyNode>(void *param_1,void *param_2,int param_3)

{
  FDataflowMathTwoInputsOperatorNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDataflowMathTwoInputsOperatorNode::operator=
                (this,(FDataflowMathTwoInputsOperatorNode *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathDegToRadNode> @ 1443e3700

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathDegToRadNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathDegToRadNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathDegToRadNode> @ 1443e3740

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathDegToRadNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathDegToRadNode__6B_;
  return;
}

// Destruct<FDataflowMathDegToRadNode> @ 1443e37c0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathDegToRadNode>(void *param_1)

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

// Copy<FDataflowMathDegToRadNode> @ 1443e3c50

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathDegToRadNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowMathTruncNode> @ 1443e4b30

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathTruncNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathTruncNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathTruncNode> @ 1443e4b70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathTruncNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathTruncNode__6B_;
  return;
}

// Destruct<FDataflowMathTruncNode> @ 1443e4bb0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathTruncNode>(void *param_1)

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

// Copy<FDataflowMathTruncNode> @ 1443e4c40

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathTruncNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertBoolTypesDataflowNode> @ 1443e51d0

void __cdecl UE::CoreUObject::Private::Construct<FConvertBoolTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertBoolTypesDataflowNode__6B_;
  *(undefined2 *)((longlong)param_1 + 0x248) = 0x101;
  return;
}

// ConstructForTests<FConvertBoolTypesDataflowNode> @ 1443e5200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertBoolTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertBoolTypesDataflowNode__6B_;
  *(undefined2 *)((longlong)param_1 + 0x248) = 0x101;
  return;
}

// Destruct<FConvertBoolTypesDataflowNode> @ 1443e5230

void __cdecl UE::CoreUObject::Private::Destruct<FConvertBoolTypesDataflowNode>(void *param_1)

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

// Copy<FConvertBoolTypesDataflowNode> @ 1443e52e0

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertBoolTypesDataflowNode>
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
    *(undefined1 *)((longlong)pvVar2 + 0x248) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x249) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x249 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x250);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowStringConvertibleTypes> @ 1443e5390

void __cdecl UE::CoreUObject::Private::Construct<FDataflowStringConvertibleTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  ::FString::FString(param_1,"");
  return;
}

// ConstructForTests<FDataflowStringConvertibleTypes> @ 1443e53b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowStringConvertibleTypes>(void *param_1)

{
  ::FString::FString(param_1,"");
  return;
}

// Destruct<FDataflowStringConvertibleTypes> @ 1443e53d0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowStringConvertibleTypes>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FDataflowTerminalNode> @ 1443e5660

void __cdecl UE::CoreUObject::Private::Construct<FDataflowTerminalNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowTerminalNode__6B_;
  return;
}

// ConstructForTests<FDataflowTerminalNode> @ 1443e5a20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowTerminalNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowTerminalNode__6B_;
  return;
}

// Construct<FDataflowSelectNode> @ 1443e5a50

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSelectNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowSelectNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined4 *)((longlong)param_1 + 600) = 0;
  return;
}

// Destruct<FDataflowTerminalNode> @ 1443e5a90

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowTerminalNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowTerminalNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Construct<FDataflowMathSubtractNode> @ 1443e5ab0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathSubtractNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSubtractNode__6B_;
  return;
}

// ConstructForTests<FDataflowSelectNode> @ 1443e5d50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSelectNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowSelectNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined4 *)((longlong)param_1 + 600) = 0;
  return;
}

// Copy<FDataflowStringConvertibleTypes> @ 1443e5d90

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowStringConvertibleTypes>
          (void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathSubtractNode> @ 1443e5de0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathSubtractNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSubtractNode__6B_;
  return;
}

// Destruct<FDataflowSelectNode> @ 1443e5e20

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSelectNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Destruct<FDataflowMathSubtractNode> @ 1443e5e50

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathSubtractNode>(void *param_1)

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

// Copy<FDataflowTerminalNode> @ 1443e5ec0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowTerminalNode>(void *param_1,void *param_2,int param_3)

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

// Copy<FDataflowSelectNode> @ 1443e5f10

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSelectNode>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  undefined1 uVar7;
  ForAnyElementType *pFVar8;
  
  pvVar5 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar6) break;
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x248 - (longlong)param_1));
    pFVar8 = (ForAnyElementType *)((longlong)pvVar5 + 0x248);
    if (pFVar8 != pFVar2) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x250 - (longlong)param_1));
      piVar1 = (int *)((longlong)pvVar5 + 0x254);
      _Src = pFVar2->Data;
      *(int *)((longlong)pvVar5 + 0x250) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,*piVar1,pFVar8,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy(pFVar8->Data,_Src,(longlong)iVar3);
        }
      }
    }
    *(undefined4 *)((longlong)pvVar5 + 600) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (600 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar5 = (void *)((longlong)pvVar5 + 0x260);
  }
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return (bool)uVar7;
}

// Copy<FDataflowMathSubtractNode> @ 1443e6020

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathSubtractNode>(void *param_1,void *param_2,int param_3)

{
  FDataflowMathTwoInputsOperatorNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDataflowMathTwoInputsOperatorNode::operator=
                (this,(FDataflowMathTwoInputsOperatorNode *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathArcTan2Node> @ 1443e68e0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathArcTan2Node>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathArcTan2Node__6B_;
  return;
}

// ConstructForTests<FDataflowMathArcTan2Node> @ 1443e6920

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathArcTan2Node>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathArcTan2Node__6B_;
  return;
}

// Destruct<FDataflowMathArcTan2Node> @ 1443e69a0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathArcTan2Node>(void *param_1)

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

// Copy<FDataflowMathArcTan2Node> @ 1443e69f0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathArcTan2Node>(void *param_1,void *param_2,int param_3)

{
  FDataflowMathTwoInputsOperatorNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDataflowMathTwoInputsOperatorNode::operator=
                (this,(FDataflowMathTwoInputsOperatorNode *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathRoundNode> @ 1443e79b0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathRoundNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathRoundNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathRoundNode> @ 1443e7af0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathRoundNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathRoundNode__6B_;
  return;
}

// Destruct<FDataflowMathRoundNode> @ 1443e7b90

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathRoundNode>(void *param_1)

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

// Copy<FDataflowMathRoundNode> @ 1443e7c20

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathRoundNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowVectorNormalize> @ 1443e7cd0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorNormalize>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorNormalize__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// ConstructForTests<FDataflowVectorNormalize> @ 1443e7d30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorNormalize>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorNormalize__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// Destruct<FDataflowVectorNormalize> @ 1443e7dd0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorNormalize>(void *param_1)

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

// Construct<FConvertStringTypesDataflowNode> @ 1443e7e50

void __cdecl UE::CoreUObject::Private::Construct<FConvertStringTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertStringTypesDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  ::FString::FString((FString *)((longlong)param_1 + 600),"");
  return;
}

// ConstructForTests<FConvertStringTypesDataflowNode> @ 1443e80d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertStringTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertStringTypesDataflowNode__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 0x248),"");
  ::FString::FString((FString *)((longlong)param_1 + 600),"");
  return;
}

// Destruct<FConvertStringTypesDataflowNode> @ 1443e8390

void __cdecl UE::CoreUObject::Private::Destruct<FConvertStringTypesDataflowNode>(void *param_1)

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

// Copy<FDataflowVectorNormalize> @ 1443e87e0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorNormalize>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x290);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Copy<FConvertStringTypesDataflowNode> @ 1443e88f0

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertStringTypesDataflowNode>
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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowTransformTypes> @ 1443e89b0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowTransformTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(double (*) [2])param_1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ConstructForTests<FDataflowTransformTypes> @ 1443e8a20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowTransformTypes>(void *param_1)

{
  *(double (*) [2])param_1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Destruct<FDataflowTransformTypes> @ 1443e8a70

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowTransformTypes>(void *param_1)

{
  return;
}

// Construct<FTransformLevelColors> @ 1443e8a80

void __cdecl UE::CoreUObject::Private::Construct<FTransformLevelColors>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x437f0000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x437f0000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x437f0000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x437f0000;
  return;
}

// ConstructForTests<FTransformLevelColors> @ 1443e8af0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransformLevelColors>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x437f0000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x437f0000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x437f0000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x437f0000;
  return;
}

// Construct<FDataflowBranchNode> @ 1443e8b20

void __cdecl UE::CoreUObject::Private::Construct<FDataflowBranchNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined1 *)((longlong)param_1 + 0x24a) = 1;
  *(undefined ***)param_1 = &___7FDataflowBranchNode__6B_;
  return;
}

// Destruct<FTransformLevelColors> @ 1443e8b80

void __cdecl UE::CoreUObject::Private::Destruct<FTransformLevelColors>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FDataflowMathAddNode> @ 1443e8be0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathAddNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathAddNode__6B_;
  return;
}

// ConstructForTests<FDataflowBranchNode> @ 1443e8d60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowBranchNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined1 *)((longlong)param_1 + 0x24a) = 1;
  *(undefined ***)param_1 = &___7FDataflowBranchNode__6B_;
  return;
}

// Copy<FDataflowTransformTypes> @ 1443e8e50

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowTransformTypes>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_3 != 0) {
    lVar13 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar13 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar13 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      param_1 = (void *)((longlong)param_1 + 0x60);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathAddNode> @ 1443e8ee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathAddNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathAddNode__6B_;
  return;
}

// Destruct<FDataflowBranchNode> @ 1443e8fc0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowBranchNode>(void *param_1)

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

// Destruct<FDataflowMathAddNode> @ 1443e91e0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathAddNode>(void *param_1)

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

// Copy<FTransformLevelColors> @ 1443e95d0

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformLevelColors>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,iVar4,pFVar6,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar6->Data,pFVar5,(longlong)iVar3 << 4);
          }
        }
      }
      pFVar5 = pFVar2[3].Data;
      pFVar6[2].Data = pFVar2[2].Data;
      pFVar6[3].Data = pFVar5;
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FDataflowBranchNode> @ 1443e9700

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowBranchNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  
  if (param_3 != 0) {
    pvVar4 = param_1;
    do {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                         ,0x51,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(undefined1 *)((longlong)pvVar4 + 0x24a) =
           *(undefined1 *)((longlong)param_2 + (0x24a - (longlong)param_1) + (longlong)pvVar4);
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x250);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FDataflowMathAddNode> @ 1443e97a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathAddNode>(void *param_1,void *param_2,int param_3)

{
  FDataflowMathTwoInputsOperatorNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDataflowMathTwoInputsOperatorNode::operator=
                (this,(FDataflowMathTwoInputsOperatorNode *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathArcTanNode> @ 1443ea140

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathArcTanNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathArcTanNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathArcTanNode> @ 1443ea180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathArcTanNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathArcTanNode__6B_;
  return;
}

// Destruct<FDataflowMathArcTanNode> @ 1443ea2a0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathArcTanNode>(void *param_1)

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

// Copy<FDataflowMathArcTanNode> @ 1443ea560

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathArcTanNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowBaseElement> @ 1443eae30

void __cdecl UE::CoreUObject::Private::Construct<FDataflowBaseElement>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowBaseElement__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 8),L"None");
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x58) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  return;
}

// ConstructForTests<FDataflowBaseElement> @ 1443eaf40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowBaseElement>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowBaseElement__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 8),L"None");
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x58) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  return;
}

// Destruct<FDataflowBaseElement> @ 1443eafc0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowBaseElement>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FDataflowBaseElement__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDataflowBaseElement> @ 1443eb2d0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowBaseElement>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined1 *)((longlong)param_1 + 0x58) = *(undefined1 *)((longlong)param_2 + 0x58);
    *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
    *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
    param_1 = (void *)((longlong)param_1 + 0x60);
    param_2 = (void *)((longlong)param_2 + 0x60);
  }
  return true;
}

// Construct<FDataflowMathCeilNode> @ 1443ec030

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathCeilNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathCeilNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathCeilNode> @ 1443ec070

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathCeilNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathCeilNode__6B_;
  return;
}

// Destruct<FDataflowMathCeilNode> @ 1443ec170

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathCeilNode>(void *param_1)

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

// Copy<FDataflowMathCeilNode> @ 1443ec4a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathCeilNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertVectorTypesDataflowNode> @ 1443ec800

void __cdecl UE::CoreUObject::Private::Construct<FConvertVectorTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertVectorTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// ConstructForTests<FConvertVectorTypesDataflowNode> @ 1443ec900

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertVectorTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertVectorTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// Destruct<FConvertVectorTypesDataflowNode> @ 1443ec9a0

void __cdecl UE::CoreUObject::Private::Destruct<FConvertVectorTypesDataflowNode>(void *param_1)

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

// Copy<FConvertVectorTypesDataflowNode> @ 1443ed0f0

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertVectorTypesDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x290);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Construct<FDataflowBoolTypes> @ 1443ed230

void __cdecl UE::CoreUObject::Private::Construct<FDataflowBoolTypes>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FDataflowBoolTypes> @ 1443ed290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowBoolTypes>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FDataflowBoolTypes> @ 1443ed2e0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowBoolTypes>(void *param_1)

{
  return;
}

// Construct<FPinSettings> @ 1443ed3c0

void __cdecl UE::CoreUObject::Private::Construct<FPinSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  return;
}

// ConstructForTests<FPinSettings> @ 1443ed410

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPinSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  return;
}

// Construct<FDataflowReRouteNode> @ 1443ed570

void __cdecl UE::CoreUObject::Private::Construct<FDataflowReRouteNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowReRouteNode__6B_;
  return;
}

// Destruct<FPinSettings> @ 1443ed660

void __cdecl UE::CoreUObject::Private::Destruct<FPinSettings>(void *param_1)

{
  return;
}

// Construct<FDataflowMathTwoInputsOperatorNode> @ 1443ed6a0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathTwoInputsOperatorNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowMathTwoInputsOperatorNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// ConstructForTests<FDataflowReRouteNode> @ 1443ed790

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowReRouteNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowReRouteNode__6B_;
  return;
}

// Copy<FDataflowBoolTypes> @ 1443ed7c0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowBoolTypes>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathTwoInputsOperatorNode> @ 1443ed7f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowMathTwoInputsOperatorNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowMathTwoInputsOperatorNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Destruct<FDataflowReRouteNode> @ 1443ed830

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowReRouteNode>(void *param_1)

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

// Destruct<FDataflowMathTwoInputsOperatorNode> @ 1443ed960

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathTwoInputsOperatorNode>(void *param_1)

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

// Copy<FPinSettings> @ 1443edce0

bool __cdecl UE::CoreUObject::Private::Copy<FPinSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FDataflowReRouteNode> @ 1443eddc0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowReRouteNode>(void *param_1,void *param_2,int param_3)

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

// Copy<FDataflowMathTwoInputsOperatorNode> @ 1443ede60

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathTwoInputsOperatorNode>
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
    *(undefined8 *)((longlong)pvVar2 + 0x248) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x250) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 600) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x260);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowMathArcCosNode> @ 1443ee730

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathArcCosNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathArcCosNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathArcCosNode> @ 1443ee770

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathArcCosNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathArcCosNode__6B_;
  return;
}

// Destruct<FDataflowMathArcCosNode> @ 1443ee7f0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathArcCosNode>(void *param_1)

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

// Copy<FDataflowMathArcCosNode> @ 1443eeb50

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathArcCosNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowVectorScaleNode> @ 1443ef500

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorScaleNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorScaleNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  return;
}

// ConstructForTests<FDataflowVectorScaleNode> @ 1443ef550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorScaleNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorScaleNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  return;
}

// Destruct<FDataflowVectorScaleNode> @ 1443ef560

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorScaleNode>(void *param_1)

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

// Construct<FDataflowMathFloorNode> @ 1443ef570

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathFloorNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathFloorNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathFloorNode> @ 1443ef5f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathFloorNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathFloorNode__6B_;
  return;
}

// Destruct<FDataflowMathFloorNode> @ 1443ef630

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathFloorNode>(void *param_1)

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

// Copy<FDataflowVectorScaleNode> @ 1443ef6b0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorScaleNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x298) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2a0);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Construct<FNodeColors> @ 1443ef7d0

void __cdecl UE::CoreUObject::Private::Construct<FNodeColors>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  return;
}

// Copy<FDataflowMathFloorNode> @ 1443ef830

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathFloorNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// ConstructForTests<FNodeColors> @ 1443ef8e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodeColors>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  return;
}

// Destruct<FNodeColors> @ 1443efb40

void __cdecl UE::CoreUObject::Private::Destruct<FNodeColors>(void *param_1)

{
  return;
}

// Construct<FConvertNumericTypesDataflowNode> @ 1443efd30

void __cdecl UE::CoreUObject::Private::Construct<FConvertNumericTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertNumericTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// ConstructForTests<FConvertNumericTypesDataflowNode> @ 1443efdb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertNumericTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertNumericTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Destruct<FConvertNumericTypesDataflowNode> @ 1443efe30

void __cdecl UE::CoreUObject::Private::Destruct<FConvertNumericTypesDataflowNode>(void *param_1)

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

// Copy<FNodeColors> @ 1443efe40

bool __cdecl UE::CoreUObject::Private::Copy<FNodeColors>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FConvertNumericTypesDataflowNode> @ 1443efec0

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertNumericTypesDataflowNode>
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
    *(undefined8 *)((longlong)pvVar2 + 0x248) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x250) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowStringTypes> @ 1443eff70

void __cdecl UE::CoreUObject::Private::Construct<FDataflowStringTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  ::FString::FString(param_1,"");
  return;
}

// ConstructForTests<FDataflowStringTypes> @ 1443eff90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowStringTypes>(void *param_1)

{
  ::FString::FString(param_1,"");
  return;
}

// Destruct<FDataflowStringTypes> @ 1443efff0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowStringTypes>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FDataflowMathOneInputOperatorNode> @ 1443f0420

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathOneInputOperatorNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowMathOneInputOperatorNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Copy<FDataflowStringTypes> @ 1443f04a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowStringTypes>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathOneInputOperatorNode> @ 1443f04f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowMathOneInputOperatorNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowMathOneInputOperatorNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Destruct<FDataflowMathOneInputOperatorNode> @ 1443f0530

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathOneInputOperatorNode>(void *param_1)

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

// Copy<FDataflowMathOneInputOperatorNode> @ 1443f0540

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathOneInputOperatorNode>
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
    *(undefined8 *)((longlong)pvVar2 + 0x248) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x250) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowMathArcSinNode> @ 1443f0e10

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathArcSinNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathArcSinNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathArcSinNode> @ 1443f0f20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathArcSinNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathArcSinNode__6B_;
  return;
}

// Destruct<FDataflowMathArcSinNode> @ 1443f0f60

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathArcSinNode>(void *param_1)

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

// Copy<FDataflowMathArcSinNode> @ 1443f0fb0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathArcSinNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertRotationDataflowNode> @ 1443f10f0

void __cdecl UE::CoreUObject::Private::Construct<FConvertRotationDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertRotationDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// ConstructForTests<FConvertRotationDataflowNode> @ 1443f1180

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertRotationDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertRotationDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// Destruct<FConvertRotationDataflowNode> @ 1443f1340

void __cdecl UE::CoreUObject::Private::Destruct<FConvertRotationDataflowNode>(void *param_1)

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

// Construct<FDataflowCurveSelection> @ 1443f15e0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowCurveSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowCurveSelection::CurveGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// ConstructForTests<FDataflowCurveSelection> @ 1443f1610

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowCurveSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowCurveSelection::CurveGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// Destruct<FDataflowCurveSelection> @ 1443f1640

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowCurveSelection>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FConvertRotationDataflowNode> @ 1443f16a0

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertRotationDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 600) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x278);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Copy<FDataflowCurveSelection> @ 1443f2020

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowCurveSelection>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1) + 8);
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1),pTVar1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVectorCrossProductNode> @ 1443f2090

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorCrossProductNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorCrossProductNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// ConstructForTests<FDataflowVectorCrossProductNode> @ 1443f20e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowVectorCrossProductNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorCrossProductNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// Destruct<FDataflowVectorCrossProductNode> @ 1443f20f0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorCrossProductNode>(void *param_1)

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

// Construct<FDataflowMathAbsNode> @ 1443f2190

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathAbsNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathAbsNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathAbsNode> @ 1443f21d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathAbsNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathAbsNode__6B_;
  return;
}

// Destruct<FDataflowMathAbsNode> @ 1443f2410

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathAbsNode>(void *param_1)

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

// Copy<FDataflowVectorCrossProductNode> @ 1443f2680

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorCrossProductNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x298) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a8) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2b0);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Copy<FDataflowMathAbsNode> @ 1443f27f0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathAbsNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowVectorTypes> @ 1443f2c40

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FDataflowVectorTypes> @ 1443f2c60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FDataflowVectorTypes> @ 1443f2c80

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorTypes>(void *param_1)

{
  return;
}

// Copy<FDataflowVectorTypes> @ 1443f3630

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorTypes>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathTanNode> @ 1443f3dc0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathTanNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathTanNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathTanNode> @ 1443f3e00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathTanNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathTanNode__6B_;
  return;
}

// Destruct<FDataflowMathTanNode> @ 1443f3e80

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathTanNode>(void *param_1)

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

// Copy<FDataflowMathTanNode> @ 1443f41e0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathTanNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertTransformArrayTypesDataflowNode> @ 1443f42e0

void __cdecl
UE::CoreUObject::Private::Construct<FConvertTransformArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertTransformArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FConvertTransformArrayTypesDataflowNode> @ 1443f4330

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertTransformArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertTransformArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Construct<FDataflowArrayOutput> @ 1443f4380

void __cdecl UE::CoreUObject::Private::Construct<FDataflowArrayOutput>(void *param_1)

{
  FGuid *pFVar1;
  FGuid local_68;
  FOutputParameters local_58;
  undefined8 local_20;
  undefined4 local_18;
  
  pFVar1 = FGuid::NewGuid(&local_68);
  local_58._32_4_ = 0xffffffff;
  local_58._16_8_ = 0;
  local_58._24_8_ = 0;
  local_58._0_8_ = 0;
  local_58._36_4_ = pFVar1->A;
  local_58._40_4_ = pFVar1->B;
  local_58._44_4_ = pFVar1->C;
  local_58._48_4_ = pFVar1->D;
  local_58._8_8_ = 0;
  local_20 = 0;
  local_18 = 0xffffffff;
  FDataflowOutput::FDataflowOutput(param_1,&local_58);
  *(undefined8 *)((longlong)param_1 + 0x90) = 0xffffffffffffffff;
  *(undefined ***)param_1 = &___7FDataflowArrayOutput__6B_;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FConvertTransformArrayTypesDataflowNode> @ 1443f4420

void __cdecl
UE::CoreUObject::Private::Destruct<FConvertTransformArrayTypesDataflowNode>(void *param_1)

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

// ConstructForTests<FDataflowArrayOutput> @ 1443f4460

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowArrayOutput>(void *param_1)

{
  FGuid *pFVar1;
  FGuid local_68;
  FOutputParameters local_58;
  undefined8 local_20;
  undefined4 local_18;
  
  pFVar1 = FGuid::NewGuid(&local_68);
  local_58._32_4_ = 0xffffffff;
  local_58._16_8_ = 0;
  local_58._24_8_ = 0;
  local_58._0_8_ = 0;
  local_58._36_4_ = pFVar1->A;
  local_58._40_4_ = pFVar1->B;
  local_58._44_4_ = pFVar1->C;
  local_58._48_4_ = pFVar1->D;
  local_58._8_8_ = 0;
  local_20 = 0;
  local_18 = 0xffffffff;
  FDataflowOutput::FDataflowOutput(param_1,&local_58);
  *(undefined8 *)((longlong)param_1 + 0x90) = 0xffffffffffffffff;
  *(undefined ***)param_1 = &___7FDataflowArrayOutput__6B_;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FDataflowArrayOutput> @ 1443f4500

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowArrayOutput>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined ***)param_1 = &___7FDataflowConnection__6B_;
  return;
}

// Construct<FDataflowMaterialSelection> @ 1443f4540

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMaterialSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowMaterialSelection::MaterialGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// ConstructForTests<FDataflowMaterialSelection> @ 1443f4570

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMaterialSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowMaterialSelection::MaterialGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// Destruct<FDataflowMaterialSelection> @ 1443f45a0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMaterialSelection>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FConvertTransformArrayTypesDataflowNode> @ 1443f4600

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertTransformArrayTypesDataflowNode>
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
    FDataflowTransformArrayTypes::operator=
              ((FDataflowTransformArrayTypes *)((longlong)pvVar2 + 0x248),
               (FDataflowTransformArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    FDataflowTransformArrayTypes::operator=
              ((FDataflowTransformArrayTypes *)((longlong)pvVar2 + 600),
               (FDataflowTransformArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Copy<FDataflowMaterialSelection> @ 1443f49b0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMaterialSelection>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1) + 8);
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1),pTVar1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVectorDistanceNode> @ 1443f4aa0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorDistanceNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorDistanceNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  return;
}

// ConstructForTests<FDataflowVectorDistanceNode> @ 1443f4ab0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorDistanceNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorDistanceNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  return;
}

// Destruct<FDataflowVectorDistanceNode> @ 1443f4ac0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorDistanceNode>(void *param_1)

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

// Construct<FDataflowMathNegateNode> @ 1443f4ad0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathNegateNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathNegateNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathNegateNode> @ 1443f4b10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathNegateNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathNegateNode__6B_;
  return;
}

// Destruct<FDataflowMathNegateNode> @ 1443f4b90

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathNegateNode>(void *param_1)

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

// Copy<FDataflowVectorDistanceNode> @ 1443f4ba0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorDistanceNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2a0);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Copy<FDataflowMathNegateNode> @ 1443f4e30

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathNegateNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowNumericTypes> @ 1443f5920

void __cdecl UE::CoreUObject::Private::Construct<FDataflowNumericTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FDataflowNumericTypes> @ 1443f5970

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowNumericTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FDataflowNumericTypes> @ 1443f5af0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowNumericTypes>(void *param_1)

{
  return;
}

// Copy<FDataflowNumericTypes> @ 1443f5d90

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowNumericTypes>(void *param_1,void *param_2,int param_3)

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

// Construct<FDataflowMathCosNode> @ 1443f69e0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathCosNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathCosNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathCosNode> @ 1443f6c20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathCosNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathCosNode__6B_;
  return;
}

// Destruct<FDataflowMathCosNode> @ 1443f6d30

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathCosNode>(void *param_1)

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

// Copy<FDataflowMathCosNode> @ 1443f6de0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathCosNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertBoolArrayTypesDataflowNode> @ 1443f6ed0

void __cdecl UE::CoreUObject::Private::Construct<FConvertBoolArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertBoolArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FConvertBoolArrayTypesDataflowNode> @ 1443f6f20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertBoolArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertBoolArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FConvertBoolArrayTypesDataflowNode> @ 1443f6fb0

void __cdecl UE::CoreUObject::Private::Destruct<FConvertBoolArrayTypesDataflowNode>(void *param_1)

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

// Construct<FDataflowGeometrySelection> @ 1443f7280

void __cdecl UE::CoreUObject::Private::Construct<FDataflowGeometrySelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowGeometrySelection::GeometryGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// ConstructForTests<FDataflowGeometrySelection> @ 1443f72f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowGeometrySelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowGeometrySelection::GeometryGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// Destruct<FDataflowGeometrySelection> @ 1443f7340

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowGeometrySelection>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FConvertBoolArrayTypesDataflowNode> @ 1443f73a0

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertBoolArrayTypesDataflowNode>
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
    FDataflowBoolArrayTypes::operator=
              ((FDataflowBoolArrayTypes *)((longlong)pvVar2 + 0x248),
               (FDataflowBoolArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    FDataflowBoolArrayTypes::operator=
              ((FDataflowBoolArrayTypes *)((longlong)pvVar2 + 600),
               (FDataflowBoolArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Copy<FDataflowGeometrySelection> @ 1443f74a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowGeometrySelection>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1) + 8);
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1),pTVar1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVectorSquaredLengthNode> @ 1443f75d0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorSquaredLengthNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorSquaredLengthNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// ConstructForTests<FDataflowVectorSquaredLengthNode> @ 1443f7620

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowVectorSquaredLengthNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorSquaredLengthNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// Construct<FDataflowArrayTypes> @ 1443f7670

void __cdecl UE::CoreUObject::Private::Construct<FDataflowArrayTypes>(void *param_1)

{
  return;
}

// Destruct<FDataflowVectorSquaredLengthNode> @ 1443f7680

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorSquaredLengthNode>(void *param_1)

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

// Construct<FDataflowMathInverseSquareRootNode> @ 1443f7690

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathInverseSquareRootNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathInverseSquareRootNode__6B_;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// ConstructForTests<FDataflowArrayTypes> @ 1443f76d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowArrayTypes>(void *param_1)

{
  return;
}

// ConstructForTests<FDataflowMathInverseSquareRootNode> @ 1443f7760

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowMathInverseSquareRootNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathInverseSquareRootNode__6B_;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  return;
}

// Destruct<FDataflowMathInverseSquareRootNode> @ 1443f77a0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathInverseSquareRootNode>(void *param_1)

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

// Copy<FDataflowVectorSquaredLengthNode> @ 1443f7ab0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorSquaredLengthNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x280);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Copy<FDataflowMathInverseSquareRootNode> @ 1443f7bf0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathInverseSquareRootNode>
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
    *(undefined8 *)((longlong)pvVar2 + 0x248) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x250) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 600) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x260);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowOutput> @ 1443f8060

void __cdecl UE::CoreUObject::Private::Construct<FDataflowOutput>(void *param_1)

{
  FGuid *pFVar1;
  FGuid local_58;
  FOutputParameters local_48;
  
  pFVar1 = FGuid::NewGuid(&local_58);
  local_48._32_4_ = 0xffffffff;
  local_48._16_8_ = 0;
  local_48._24_8_ = 0;
  local_48._0_8_ = 0;
  local_48._36_4_ = pFVar1->A;
  local_48._40_4_ = pFVar1->B;
  local_48._44_4_ = pFVar1->C;
  local_48._48_4_ = pFVar1->D;
  local_48._8_8_ = 0;
  FDataflowOutput::FDataflowOutput(param_1,&local_48);
  return;
}

// ConstructForTests<FDataflowOutput> @ 1443f8110

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowOutput>(void *param_1)

{
  FGuid *pFVar1;
  FGuid local_58;
  FOutputParameters local_48;
  
  pFVar1 = FGuid::NewGuid(&local_58);
  local_48._32_4_ = 0xffffffff;
  local_48._16_8_ = 0;
  local_48._24_8_ = 0;
  local_48._0_8_ = 0;
  local_48._36_4_ = pFVar1->A;
  local_48._40_4_ = pFVar1->B;
  local_48._44_4_ = pFVar1->C;
  local_48._48_4_ = pFVar1->D;
  local_48._8_8_ = 0;
  FDataflowOutput::FDataflowOutput(param_1,&local_48);
  return;
}

// Destruct<FDataflowOutput> @ 1443f81c0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowOutput>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined ***)param_1 = &___7FDataflowConnection__6B_;
  return;
}

// Construct<FDataflowMathSinNode> @ 1443f8990

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathSinNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSinNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathSinNode> @ 1443f89d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathSinNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSinNode__6B_;
  return;
}

// Destruct<FDataflowMathSinNode> @ 1443f8a10

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathSinNode>(void *param_1)

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

// Copy<FDataflowMathSinNode> @ 1443f8a20

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathSinNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertStringArrayTypesDataflowNode> @ 1443f8e20

void __cdecl
UE::CoreUObject::Private::Construct<FConvertStringArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertStringArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FConvertStringArrayTypesDataflowNode> @ 1443f8e90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertStringArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertStringArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FConvertStringArrayTypesDataflowNode> @ 1443f8ee0

void __cdecl UE::CoreUObject::Private::Destruct<FConvertStringArrayTypesDataflowNode>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 600),*(int *)((longlong)param_1 + 0x260));
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x248),*(int *)((longlong)param_1 + 0x250));
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Construct<FDataflowAllTypes> @ 1443f8f90

void __cdecl UE::CoreUObject::Private::Construct<FDataflowAllTypes>(void *param_1)

{
  return;
}

// Construct<FDataflowFaceSelection> @ 1443f8fa0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowFaceSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowFaceSelection::FacesGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// ConstructForTests<FDataflowAllTypes> @ 1443f8fd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowAllTypes>(void *param_1)

{
  return;
}

// ConstructForTests<FDataflowFaceSelection> @ 1443f8fe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowFaceSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowFaceSelection::FacesGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// Destruct<FDataflowFaceSelection> @ 1443f9010

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowFaceSelection>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FConvertStringArrayTypesDataflowNode> @ 1443f9030

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertStringArrayTypesDataflowNode>
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
    FDataflowStringArrayTypes::operator=
              ((FDataflowStringArrayTypes *)((longlong)pvVar2 + 0x248),
               (FDataflowStringArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    FDataflowStringArrayTypes::operator=
              ((FDataflowStringArrayTypes *)((longlong)pvVar2 + 600),
               (FDataflowStringArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Copy<FDataflowFaceSelection> @ 1443f9170

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowFaceSelection>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1) + 8);
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1),pTVar1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVectorLengthNode> @ 1443f93e0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorLengthNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorLengthNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// ConstructForTests<FDataflowVectorLengthNode> @ 1443f9500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorLengthNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorLengthNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// Destruct<FDataflowVectorLengthNode> @ 1443f95d0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorLengthNode>(void *param_1)

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

// Construct<FDataflowMathSquareRootNode> @ 1443f95e0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathSquareRootNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSquareRootNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathSquareRootNode> @ 1443f9620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathSquareRootNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSquareRootNode__6B_;
  return;
}

// Destruct<FDataflowMathSquareRootNode> @ 1443f9660

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathSquareRootNode>(void *param_1)

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

// Copy<FDataflowVectorLengthNode> @ 1443f96b0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorLengthNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x280);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Copy<FDataflowMathSquareRootNode> @ 1443f97b0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathSquareRootNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowArrayInput> @ 1443f9b80

void __cdecl UE::CoreUObject::Private::Construct<FDataflowArrayInput>(void *param_1)

{
  FGuid *pFVar1;
  FGuid local_68;
  FConnectionParameters local_58;
  undefined8 local_20;
  undefined4 local_18;
  
  pFVar1 = FGuid::NewGuid(&local_68);
  local_58.Offset = 0xffffffff;
  local_58.Type.ComparisonIndex.Value = 0;
  local_58.Type.Number = 0;
  local_58.Owner = (FDataflowNode *)0x0;
  local_58.Property = (FProperty *)0x0;
  local_58.Name.ComparisonIndex.Value = 0;
  local_58.Name.Number = 0;
  local_58.Guid.A = pFVar1->A;
  local_58.Guid.B = pFVar1->B;
  local_58.Guid.C = pFVar1->C;
  local_58.Guid.D = pFVar1->D;
  local_20 = 0;
  local_18 = 0xffffffff;
  FDataflowConnection::FDataflowConnection(param_1,INPUT,&local_58);
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FDataflowArrayInput__6B_;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FDataflowArrayInput> @ 1443f9c30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowArrayInput>(void *param_1)

{
  FGuid *pFVar1;
  FGuid local_68;
  FConnectionParameters local_58;
  undefined8 local_20;
  undefined4 local_18;
  
  pFVar1 = FGuid::NewGuid(&local_68);
  local_58.Offset = 0xffffffff;
  local_58.Type.ComparisonIndex.Value = 0;
  local_58.Type.Number = 0;
  local_58.Owner = (FDataflowNode *)0x0;
  local_58.Property = (FProperty *)0x0;
  local_58.Name.ComparisonIndex.Value = 0;
  local_58.Name.Number = 0;
  local_58.Guid.A = pFVar1->A;
  local_58.Guid.B = pFVar1->B;
  local_58.Guid.C = pFVar1->C;
  local_58.Guid.D = pFVar1->D;
  local_20 = 0;
  local_18 = 0xffffffff;
  FDataflowConnection::FDataflowConnection(param_1,INPUT,&local_58);
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FDataflowArrayInput__6B_;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FDataflowArrayInput> @ 1443f9ce0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowArrayInput>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowConnection__6B_;
  return;
}

// Copy<FDataflowArrayInput> @ 1443f9d40

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowArrayInput>(void *param_1,void *param_2,int param_3)

{
  FDataflowInput *pFVar1;
  FDataflowInput *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FDataflowInput *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FDataflowInput::operator=(this,pFVar1);
      *(int *)&this[1]._padding_ = (int)pFVar1[1]._padding_;
      *(undefined4 *)((longlong)&this[1]._padding_ + 4) =
           *(undefined4 *)((longlong)&pFVar1[1]._padding_ + 4);
      this[1]._padding_ = pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FDataflowInput *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowMathClampNode> @ 1443fa4b0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathClampNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathClampNode__6B_;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FDataflowMathClampNode> @ 1443fa500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathClampNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathClampNode__6B_;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FDataflowMathClampNode> @ 1443fa550

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathClampNode>(void *param_1)

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

// Construct<FDataflowAnyType> @ 1443fa5a0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowAnyType>(void *param_1)

{
  return;
}

// ConstructForTests<FDataflowAnyType> @ 1443fa5e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowAnyType>(void *param_1)

{
  return;
}

// Copy<FDataflowMathClampNode> @ 1443fa8b0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathClampNode>(void *param_1,void *param_2,int param_3)

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
    *(undefined8 *)((longlong)pvVar2 + 600) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x260) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x260 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertNumericArrayTypesDataflowNode> @ 1443fa9c0

void __cdecl
UE::CoreUObject::Private::Construct<FConvertNumericArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertNumericArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FConvertNumericArrayTypesDataflowNode> @ 1443faa10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertNumericArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertNumericArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FConvertNumericArrayTypesDataflowNode> @ 1443faa60

void __cdecl
UE::CoreUObject::Private::Destruct<FConvertNumericArrayTypesDataflowNode>(void *param_1)

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

// Construct<FDataflowVertexSelection> @ 1443faaa0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVertexSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowVertexSelection::VerticesGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// ConstructForTests<FDataflowVertexSelection> @ 1443faad0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVertexSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowVertexSelection::VerticesGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// Destruct<FDataflowVertexSelection> @ 1443fab00

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVertexSelection>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FDataflowConnection> @ 1443fab20

void __cdecl UE::CoreUObject::Private::Construct<FDataflowConnection>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x35) = *(byte *)((longlong)param_1 + 0x35) & 0xf0;
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xfe;
  *(undefined ***)param_1 = &___7FDataflowConnection__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  return;
}

// Copy<FConvertNumericArrayTypesDataflowNode> @ 1443fab60

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertNumericArrayTypesDataflowNode>
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
    FDataflowNumericArrayTypes::operator=
              ((FDataflowNumericArrayTypes *)((longlong)pvVar2 + 0x248),
               (FDataflowNumericArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    FDataflowNumericArrayTypes::operator=
              ((FDataflowNumericArrayTypes *)((longlong)pvVar2 + 600),
               (FDataflowNumericArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// ConstructForTests<FDataflowConnection> @ 1443fac60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowConnection>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x35) = *(byte *)((longlong)param_1 + 0x35) & 0xf0;
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xfe;
  *(undefined ***)param_1 = &___7FDataflowConnection__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  return;
}

// Destruct<FDataflowConnection> @ 1443facd0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowConnection>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowConnection__6B_;
  return;
}

// Copy<FDataflowVertexSelection> @ 1443fb000

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVertexSelection>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1) + 8);
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1),pTVar1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVectorDotProductNode> @ 1443fb460

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorDotProductNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorDotProductNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  return;
}

// ConstructForTests<FDataflowVectorDotProductNode> @ 1443fb470

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowVectorDotProductNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorDotProductNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  return;
}

// Destruct<FDataflowVectorDotProductNode> @ 1443fb610

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorDotProductNode>(void *param_1)

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

// Copy<FDataflowConnection> @ 1443fb620

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowConnection>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  byte bVar3;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x30) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x34) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x34 - (longlong)param_1));
    bVar3 = (*(byte *)((longlong)pvVar2 + 0x35) ^
            *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x35 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar2 + 0x35);
    *(byte *)((longlong)pvVar2 + 0x35) = bVar3;
    bVar3 = (bVar3 ^ *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x35 - (longlong)param_1))) &
            2 ^ bVar3;
    *(byte *)((longlong)pvVar2 + 0x35) = bVar3;
    bVar3 = (bVar3 ^ *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x35 - (longlong)param_1))) &
            4 ^ bVar3;
    *(byte *)((longlong)pvVar2 + 0x35) = bVar3;
    *(byte *)((longlong)pvVar2 + 0x35) =
         (bVar3 ^ *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x35 - (longlong)param_1))) & 8
         ^ bVar3;
    *(undefined8 *)((longlong)pvVar2 + 0x38) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(byte *)((longlong)pvVar2 + 0x50) =
         *(byte *)((longlong)pvVar2 + 0x50) ^
         (*(byte *)((longlong)pvVar2 + 0x50) ^
         *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1))) & 1;
    *(undefined8 *)((longlong)pvVar2 + 0x54) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x54 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x60);
  }
  return true;
}

// Construct<FDataflowMathCubeNode> @ 1443fb710

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathCubeNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathCubeNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathCubeNode> @ 1443fb750

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathCubeNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathCubeNode__6B_;
  return;
}

// Destruct<FDataflowMathCubeNode> @ 1443fb7e0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathCubeNode>(void *param_1)

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

// Copy<FDataflowVectorDotProductNode> @ 1443fb7f0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorDotProductNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2a0);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// Copy<FDataflowMathCubeNode> @ 1443fb8d0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathCubeNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowInput> @ 1443fc080

void __cdecl UE::CoreUObject::Private::Construct<FDataflowInput>(void *param_1)

{
  FGuid *pFVar1;
  FGuid local_58;
  FConnectionParameters local_48;
  
  pFVar1 = FGuid::NewGuid(&local_58);
  local_48.Offset = 0xffffffff;
  local_48.Type.ComparisonIndex.Value = 0;
  local_48.Type.Number = 0;
  local_48.Owner = (FDataflowNode *)0x0;
  local_48.Property = (FProperty *)0x0;
  local_48.Name.ComparisonIndex.Value = 0;
  local_48.Name.Number = 0;
  local_48.Guid.A = pFVar1->A;
  local_48.Guid.B = pFVar1->B;
  local_48.Guid.C = pFVar1->C;
  local_48.Guid.D = pFVar1->D;
  FDataflowConnection::FDataflowConnection(param_1,INPUT,&local_48);
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FDataflowInput__6B_;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FDataflowInput> @ 1443fc1e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowInput>(void *param_1)

{
  FGuid *pFVar1;
  FGuid local_58;
  FConnectionParameters local_48;
  
  pFVar1 = FGuid::NewGuid(&local_58);
  local_48.Offset = 0xffffffff;
  local_48.Type.ComparisonIndex.Value = 0;
  local_48.Type.Number = 0;
  local_48.Owner = (FDataflowNode *)0x0;
  local_48.Property = (FProperty *)0x0;
  local_48.Name.ComparisonIndex.Value = 0;
  local_48.Name.Number = 0;
  local_48.Guid.A = pFVar1->A;
  local_48.Guid.B = pFVar1->B;
  local_48.Guid.C = pFVar1->C;
  local_48.Guid.D = pFVar1->D;
  FDataflowConnection::FDataflowConnection(param_1,INPUT,&local_48);
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FDataflowInput__6B_;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FDataflowInput> @ 1443fc270

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowInput>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowConnection__6B_;
  return;
}

// Copy<FDataflowInput> @ 1443fc2d0

bool __cdecl UE::CoreUObject::Private::Copy<FDataflowInput>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  byte bVar3;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x30) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x34) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x34 - (longlong)param_1));
    bVar3 = (*(byte *)((longlong)pvVar2 + 0x35) ^
            *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x35 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar2 + 0x35);
    *(byte *)((longlong)pvVar2 + 0x35) = bVar3;
    bVar3 = (bVar3 ^ *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x35 - (longlong)param_1))) &
            2 ^ bVar3;
    *(byte *)((longlong)pvVar2 + 0x35) = bVar3;
    bVar3 = (bVar3 ^ *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x35 - (longlong)param_1))) &
            4 ^ bVar3;
    *(byte *)((longlong)pvVar2 + 0x35) = bVar3;
    *(byte *)((longlong)pvVar2 + 0x35) =
         (bVar3 ^ *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x35 - (longlong)param_1))) & 8
         ^ bVar3;
    *(undefined8 *)((longlong)pvVar2 + 0x38) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(byte *)((longlong)pvVar2 + 0x50) =
         *(byte *)((longlong)pvVar2 + 0x50) ^
         (*(byte *)((longlong)pvVar2 + 0x50) ^
         *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1))) & 1;
    *(undefined8 *)((longlong)pvVar2 + 0x54) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x54 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x60) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x68) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x68 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x70);
  }
  return true;
}

// Construct<FDataflowMathConstantNode> @ 1443fd5c0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathConstantNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined1 *)((longlong)param_1 + 0x248) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathConstantNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// ConstructForTests<FDataflowMathConstantNode> @ 1443fd600

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathConstantNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined1 *)((longlong)param_1 + 0x248) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathConstantNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Destruct<FDataflowMathConstantNode> @ 1443fd6c0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathConstantNode>(void *param_1)

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

// Copy<FDataflowMathConstantNode> @ 1443fdec0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathConstantNode>(void *param_1,void *param_2,int param_3)

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
    *(undefined1 *)((longlong)pvVar2 + 0x248) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x250) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertVectorArrayTypesDataflowNode> @ 1443fe370

void __cdecl
UE::CoreUObject::Private::Construct<FConvertVectorArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertVectorArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FConvertVectorArrayTypesDataflowNode> @ 1443fe3c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConvertVectorArrayTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertVectorArrayTypesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FConvertVectorArrayTypesDataflowNode> @ 1443fe410

void __cdecl UE::CoreUObject::Private::Destruct<FConvertVectorArrayTypesDataflowNode>(void *param_1)

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

// Construct<FDataflowTransformSelection> @ 1443fe450

void __cdecl UE::CoreUObject::Private::Construct<FDataflowTransformSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowTransformSelection::TransformGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// ConstructForTests<FDataflowTransformSelection> @ 1443fe4c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowTransformSelection>(void *param_1)

{
  *(FName *)param_1 = FDataflowTransformSelection::TransformGroupName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  return;
}

// Destruct<FDataflowTransformSelection> @ 1443fe660

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowTransformSelection>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FConvertVectorArrayTypesDataflowNode> @ 1443fe820

bool __cdecl
UE::CoreUObject::Private::Copy<FConvertVectorArrayTypesDataflowNode>
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
    FDataflowVectorArrayTypes::operator=
              ((FDataflowVectorArrayTypes *)((longlong)pvVar2 + 0x248),
               (FDataflowVectorArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    FDataflowVectorArrayTypes::operator=
              ((FDataflowVectorArrayTypes *)((longlong)pvVar2 + 600),
               (FDataflowVectorArrayTypes *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowRotationTypes> @ 1443fe970

void __cdecl UE::CoreUObject::Private::Construct<FDataflowRotationTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FDataflowRotationTypes> @ 1443fe990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowRotationTypes>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FDataflowRotationTypes> @ 1443fe9f0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowRotationTypes>(void *param_1)

{
  return;
}

// Copy<FDataflowTransformSelection> @ 1443fea80

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowTransformSelection>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1) + 8);
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar2 + 1),pTVar1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVectorDivideNode> @ 1443feaf0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVectorDivideNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorDivideNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  return;
}

// ConstructForTests<FDataflowVectorDivideNode> @ 1443feb00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVectorDivideNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowVectorDivideNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  return;
}

// Destruct<FDataflowVectorDivideNode> @ 1443feb10

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVectorDivideNode>(void *param_1)

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

// Construct<FDataflowMathSquareNode> @ 1443feb20

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathSquareNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSquareNode__6B_;
  return;
}

// Copy<FDataflowRotationTypes> @ 1443feb60

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowRotationTypes>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FDataflowMathSquareNode> @ 1443feba0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathSquareNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathSquareNode__6B_;
  return;
}

// Destruct<FDataflowMathSquareNode> @ 1443febf0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathSquareNode>(void *param_1)

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

// Copy<FDataflowVectorDivideNode> @ 1443feed0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVectorDivideNode>(void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  
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
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 600) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x278) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x288 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x280) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x280 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x288) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x298 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x290) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x290 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x298) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2a8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2b8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2b0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2b0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2b8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2c8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2c0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2c0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2c8) = uVar2;
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2d0);
  }
  pcVar1 = (code *)swi(3);
  bVar4 = (bool)(*pcVar1)();
  return bVar4;
}

// Copy<FDataflowMathSquareNode> @ 1443ff040

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathSquareNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowImageCombineChannelsNode> @ 1443ff870

void __cdecl UE::CoreUObject::Private::Construct<FDataflowImageCombineChannelsNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined4 *)((longlong)param_1 + 0x310) = 1;
  *(undefined ***)param_1 = &___7FDataflowImageCombineChannelsNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x27c) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0x201;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x200;
  return;
}

// ConstructForTests<FDataflowImageCombineChannelsNode> @ 1443ff890

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowImageCombineChannelsNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined4 *)((longlong)param_1 + 0x310) = 1;
  *(undefined ***)param_1 = &___7FDataflowImageCombineChannelsNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x27c) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0x201;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x200;
  return;
}

// Destruct<FDataflowImageCombineChannelsNode> @ 1443ff8e0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowImageCombineChannelsNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  if (*(void **)((longlong)param_1 + 0x2d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2d0));
  }
  if (*(void **)((longlong)param_1 + 0x2a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a8));
  }
  if (*(void **)((longlong)param_1 + 0x280) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x280));
  }
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowImageCombineChannelsNode> @ 1443ff970

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowImageCombineChannelsNode>
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
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x248),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x270),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x270 - (longlong)param_1)));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x298),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x298 - (longlong)param_1)));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x2c0),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x2c0 - (longlong)param_1)));
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar2 + 0x2e8),
               (FDataflowImage *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x2e8 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar2 + 0x310) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x310 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x314) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x314 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x318);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowMathOneMinusNode> @ 144400530

void __cdecl UE::CoreUObject::Private::Construct<FDataflowMathOneMinusNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathOneMinusNode__6B_;
  return;
}

// ConstructForTests<FDataflowMathOneMinusNode> @ 144400570

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowMathOneMinusNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined ***)param_1 = &___7FDataflowMathOneMinusNode__6B_;
  return;
}

// Destruct<FDataflowMathOneMinusNode> @ 1444005f0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowMathOneMinusNode>(void *param_1)

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

// Copy<FDataflowMathOneMinusNode> @ 144400610

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowMathOneMinusNode>(void *param_1,void *param_2,int param_3)

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
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FConvertIndexArrayToSelectionTypesDataflowNode> @ 144400770

void __cdecl
UE::CoreUObject::Private::Construct<FConvertIndexArrayToSelectionTypesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FConvertIndexArrayToSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined4 *)((longlong)param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x80;
  return;
}

// CheckStructType<UE::Math::TIntPoint<int>_> @ 14440dd60

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TIntPoint<int>_>(void)

{
  return;
}

// CheckStructType<UE::Math::TIntVector3<int>_> @ 14440dd70

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TIntVector3<int>_>(void)

{
  return;
}

// CheckStructType<UE::Math::TIntVector4<int>_> @ 14440dd80

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TIntVector4<int>_>(void)

{
  return;
}

// CheckStructType<UE::Math::TQuat<double>_> @ 14440dd90

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TQuat<double>_>(void)

{
  return;
}

// CheckStructType<UE::Math::TRotator<double>_> @ 14440dda0

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TRotator<double>_>(void)

{
  return;
}

// CheckStructType<UE::Math::TTransform<double>_> @ 14440ddb0

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TTransform<double>_>(void)

{
  return;
}

// CheckStructType<UE::Math::TVector2<double>_> @ 14440ddc0

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TVector2<double>_>(void)

{
  return;
}

// CheckStructType<UE::Math::TVector4<double>_> @ 14440ddd0

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TVector4<double>_>(void)

{
  return;
}

// CheckStructType<UE::Math::TVector<double>_> @ 14440dde0

void __cdecl UE::StructUtils::CheckStructType<UE::Math::TVector<double>_>(void)

{
  return;
}

// CheckStructType<FDataflowCurveSelection> @ 14440ddf0

void __cdecl UE::StructUtils::CheckStructType<FDataflowCurveSelection>(void)

{
  return;
}

// CheckStructType<FDataflowFaceSelection> @ 14440de00

void __cdecl UE::StructUtils::CheckStructType<FDataflowFaceSelection>(void)

{
  return;
}

// CheckStructType<FDataflowGeometrySelection> @ 14440de10

void __cdecl UE::StructUtils::CheckStructType<FDataflowGeometrySelection>(void)

{
  return;
}

// CheckStructType<FDataflowImage> @ 14440de20

void __cdecl UE::StructUtils::CheckStructType<FDataflowImage>(void)

{
  return;
}

// CheckStructType<FDataflowMaterialSelection> @ 14440de30

void __cdecl UE::StructUtils::CheckStructType<FDataflowMaterialSelection>(void)

{
  return;
}

// CheckStructType<FDataflowTransformSelection> @ 14440de40

void __cdecl UE::StructUtils::CheckStructType<FDataflowTransformSelection>(void)

{
  return;
}

// CheckStructType<FDataflowVertexSelection> @ 14440de50

void __cdecl UE::StructUtils::CheckStructType<FDataflowVertexSelection>(void)

{
  return;
}

// CheckStructType<FLinearColor> @ 14440de60

void __cdecl UE::StructUtils::CheckStructType<FLinearColor>(void)

{
  return;
}

// CheckStructType<FManagedArrayCollection> @ 14440de70

void __cdecl UE::StructUtils::CheckStructType<FManagedArrayCollection>(void)

{
  return;
}

// DereferenceIfNecessary<UE::Dataflow::FNodeColorsRegistry,UE::Dataflow::FNodeColorsRegistry_*_&> @ 14440dfe0

FNodeColorsRegistry * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Dataflow::FNodeColorsRegistry,UE::Dataflow::FNodeColorsRegistry_*_&>
          (FNodeColorsRegistry **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Dataflow::FPinSettingsRegistry,UE::Dataflow::FPinSettingsRegistry_*_&> @ 14440e000

FPinSettingsRegistry * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Dataflow::FPinSettingsRegistry,UE::Dataflow::FPinSettingsRegistry_*_&>
          (FPinSettingsRegistry **param_1)

{
  return *param_1;
}

// GetStructRef<UE::Math::TIntPoint<int>_> @ 144412b00

TIntPoint<int> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TIntPoint<int>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TIntPoint<int> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TIntPoint<int> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TIntPoint<int> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
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
      pTVar4 = (TIntPoint<int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<UE::Math::TIntVector3<int>_> @ 144412c60

TIntVector3<int> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TIntVector3<int>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TIntVector3<int> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TIntVector3<int> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TIntVector3<int> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
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
      pTVar4 = (TIntVector3<int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<UE::Math::TIntVector4<int>_> @ 144412dc0

TIntVector4<int> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TIntVector4<int>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TIntVector4<int> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TIntVector4<int> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TIntVector4<int> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
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
      pTVar4 = (TIntVector4<int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<UE::Math::TQuat<double>_> @ 144412f20

TQuat<double> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TQuat<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TQuat<double> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TQuat<double> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TQuat<double> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
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
      pTVar4 = (TQuat<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<UE::Math::TRotator<double>_> @ 144413080

TRotator<double> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TRotator<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TRotator<double> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TRotator<double> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TRotator<double> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
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
      pTVar4 = (TRotator<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<UE::Math::TTransform<double>_> @ 1444131e0

TTransform<double> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TTransform<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TTransform<double> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TTransform<double> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
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
      pTVar4 = (TTransform<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<UE::Math::TVector2<double>_> @ 144413340

TVector2<double> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TVector2<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector2<double> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector2<double> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
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
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<UE::Math::TVector4<double>_> @ 1444134a0

TVector4<double> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TVector4<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TVector4<double> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector4<double> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector4<double> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
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
      pTVar4 = (TVector4<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<UE::Math::TVector<double>_> @ 144413600

TVector<double> * __cdecl
UE::StructUtils::GetStructRef<UE::Math::TVector<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar2)();
    return pTVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<UE::Math::TVector<double>_>::Get();
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
    pUVar5 = TBaseStructure<UE::Math::TVector<double>_>::Get();
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
      pTVar4 = (TVector<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return param_2;
}

// GetStructRef<FDataflowCurveSelection> @ 144413760

FDataflowCurveSelection * __cdecl
UE::StructUtils::GetStructRef<FDataflowCurveSelection>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowCurveSelection *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowCurveSelection *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowCurveSelection *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCurveSelection,(UObject *)pUVar5,
                         L"DataflowCurveSelection");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCurveSelection,(UObject *)pUVar5,
                         L"DataflowCurveSelection");
    if (Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14441385b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton)->_padding_
  ;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14441385b:
  if (Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCurveSelection,(UObject *)pUVar5,
                         L"DataflowCurveSelection");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton,&local_18,
             (UObject *)0x0);
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
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDataflowCurveSelection *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FDataflowFaceSelection> @ 144413940

FDataflowFaceSelection * __cdecl
UE::StructUtils::GetStructRef<FDataflowFaceSelection>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowFaceSelection *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowFaceSelection *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowFaceSelection *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowFaceSelection,(UObject *)pUVar5,
                         L"DataflowFaceSelection");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowFaceSelection,(UObject *)pUVar5,
                         L"DataflowFaceSelection");
    if (Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_144413a3b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_144413a3b:
  if (Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowFaceSelection,(UObject *)pUVar5,
                         L"DataflowFaceSelection");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton,&local_18,
             (UObject *)0x0);
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
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDataflowFaceSelection *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FDataflowGeometrySelection> @ 144413b20

FDataflowGeometrySelection * __cdecl
UE::StructUtils::GetStructRef<FDataflowGeometrySelection>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowGeometrySelection *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowGeometrySelection *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowGeometrySelection *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGeometrySelection,(UObject *)pUVar5,
                         L"DataflowGeometrySelection");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGeometrySelection,(UObject *)pUVar5,
                         L"DataflowGeometrySelection");
    if (Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_144413c1b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_144413c1b:
  if (Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGeometrySelection,(UObject *)pUVar5,
                         L"DataflowGeometrySelection");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton,&local_18,
             (UObject *)0x0);
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
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDataflowGeometrySelection *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FDataflowImage> @ 144413d00

FDataflowImage * __cdecl
UE::StructUtils::GetStructRef<FDataflowImage>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowImage *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowImage *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowImage *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImage,(UObject *)pUVar5,L"DataflowImage"
                        );
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImage,(UObject *)pUVar5,L"DataflowImage"
                        );
    if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_144413dfb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_144413dfb:
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImage,(UObject *)pUVar5,L"DataflowImage"
                        );
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton,
             &local_18,(UObject *)0x0);
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
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDataflowImage *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FDataflowMaterialSelection> @ 144413ee0

FDataflowMaterialSelection * __cdecl
UE::StructUtils::GetStructRef<FDataflowMaterialSelection>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowMaterialSelection *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowMaterialSelection *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowMaterialSelection *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMaterialSelection,(UObject *)pUVar5,
                         L"DataflowMaterialSelection");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMaterialSelection,(UObject *)pUVar5,
                         L"DataflowMaterialSelection");
    if (Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_144413fdb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_144413fdb:
  if (Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMaterialSelection,(UObject *)pUVar5,
                         L"DataflowMaterialSelection");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton,&local_18,
             (UObject *)0x0);
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
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDataflowMaterialSelection *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FDataflowTransformSelection> @ 1444140c0

FDataflowTransformSelection * __cdecl
UE::StructUtils::GetStructRef<FDataflowTransformSelection>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowTransformSelection *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowTransformSelection *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowTransformSelection *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTransformSelection,(UObject *)pUVar5,
                         L"DataflowTransformSelection");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTransformSelection,(UObject *)pUVar5,
                         L"DataflowTransformSelection");
    if (Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1444141bb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1444141bb:
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTransformSelection,(UObject *)pUVar5,
                         L"DataflowTransformSelection");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton,&local_18,
             (UObject *)0x0);
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
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDataflowTransformSelection *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FDataflowVertexSelection> @ 1444142a0

FDataflowVertexSelection * __cdecl
UE::StructUtils::GetStructRef<FDataflowVertexSelection>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowVertexSelection *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowVertexSelection *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowVertexSelection *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVertexSelection,(UObject *)pUVar5,
                         L"DataflowVertexSelection");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVertexSelection,(UObject *)pUVar5,
                         L"DataflowVertexSelection");
    if (Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14441439b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14441439b:
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVertexSelection,(UObject *)pUVar5,
                         L"DataflowVertexSelection");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton,&local_18,
             (UObject *)0x0);
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
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDataflowVertexSelection *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FLinearColor> @ 144414480

FLinearColor * __cdecl
UE::StructUtils::GetStructRef<FLinearColor>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FLinearColor *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLinearColor *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLinearColor *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = TBaseStructure<FLinearColor>::Get();
  if (param_1 != pUVar5) {
    pUVar5 = TBaseStructure<FLinearColor>::Get();
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
    pUVar5 = TBaseStructure<FLinearColor>::Get();
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
      pFVar4 = (FLinearColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FManagedArrayCollection> @ 1444145e0

FManagedArrayCollection * __cdecl
UE::StructUtils::GetStructRef<FManagedArrayCollection>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FManagedArrayCollection *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FManagedArrayCollection *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FManagedArrayCollection *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FManagedArrayCollection::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FManagedArrayCollection::StaticStruct();
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
    pUVar5 = FManagedArrayCollection::StaticStruct();
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
      pFVar4 = (FManagedArrayCollection *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetTypeName<FDataflowCurveSelection> @ 144414740

FName __cdecl UE::Dataflow::GetTypeName<FDataflowCurveSelection>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"FDataflowCurveSelection");
  return in_RCX;
}

// GetTypeName<FDataflowFaceSelection> @ 144414770

FName __cdecl UE::Dataflow::GetTypeName<FDataflowFaceSelection>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"FDataflowFaceSelection");
  return in_RCX;
}

// GetTypeName<FDataflowGeometrySelection> @ 1444147a0

FName __cdecl UE::Dataflow::GetTypeName<FDataflowGeometrySelection>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"FDataflowGeometrySelection");
  return in_RCX;
}

// GetTypeName<FDataflowTransformSelection> @ 1444147d0

FName __cdecl UE::Dataflow::GetTypeName<FDataflowTransformSelection>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"FDataflowTransformSelection");
  return in_RCX;
}

// GetTypeName<FDataflowVertexSelection> @ 144414800

FName __cdecl UE::Dataflow::GetTypeName<FDataflowVertexSelection>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"FDataflowVertexSelection");
  return in_RCX;
}

// SetMatchingSelectionHelper<FDataflowFaceSelection> @ 14441e5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Private::DataflowConvertNodesLocal::SetMatchingSelectionHelper<FDataflowFaceSelection>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FManagedArrayCollection *param_2,
          FContext *param_3,FDataflowOutput *param_4,FDataflowSelectionTypes *param_5,
          FDataflowNode *param_6)

{
  undefined1 auStack_88 [32];
  FName local_68;
  FDataflowSelection local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_4 != (FDataflowOutput *)0x0) &&
     (::FName::FName(&local_68,L"FDataflowFaceSelection"), (FName)param_4->_padding_ == local_68)) {
    local_60.GroupName = FDataflowFaceSelection::FacesGroupName;
    local_60.SelectionArray.MaxBits = 0x80;
    local_60.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.SelectionArray.NumBits = 0;
    FDataflowSelection::InitFromArray(&local_60,param_2,param_1);
    FDataflowNode::SetValue<FDataflowSelectionTypes>(param_6,param_3,&local_60,param_5);
    if (local_60.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_60.SelectionArray.AllocatorInstance.SecondaryData);
    }
    return true;
  }
  return false;
}

// SetMatchingSelectionHelper<FDataflowGeometrySelection> @ 14441e6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Private::DataflowConvertNodesLocal::SetMatchingSelectionHelper<FDataflowGeometrySelection>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FManagedArrayCollection *param_2,
          FContext *param_3,FDataflowOutput *param_4,FDataflowSelectionTypes *param_5,
          FDataflowNode *param_6)

{
  undefined1 auStack_88 [32];
  FName local_68;
  FDataflowSelection local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_4 != (FDataflowOutput *)0x0) &&
     (::FName::FName(&local_68,L"FDataflowGeometrySelection"), (FName)param_4->_padding_ == local_68
     )) {
    local_60.GroupName = FDataflowGeometrySelection::GeometryGroupName;
    local_60.SelectionArray.MaxBits = 0x80;
    local_60.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.SelectionArray.NumBits = 0;
    FDataflowSelection::InitFromArray(&local_60,param_2,param_1);
    FDataflowNode::SetValue<FDataflowSelectionTypes>(param_6,param_3,&local_60,param_5);
    if (local_60.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_60.SelectionArray.AllocatorInstance.SecondaryData);
    }
    return true;
  }
  return false;
}

// SetMatchingSelectionHelper<FDataflowTransformSelection> @ 14441e7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Private::DataflowConvertNodesLocal::SetMatchingSelectionHelper<FDataflowTransformSelection>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FManagedArrayCollection *param_2,
          FContext *param_3,FDataflowOutput *param_4,FDataflowSelectionTypes *param_5,
          FDataflowNode *param_6)

{
  undefined1 auStack_88 [32];
  FName local_68;
  FDataflowSelection local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_4 != (FDataflowOutput *)0x0) &&
     (::FName::FName(&local_68,L"FDataflowTransformSelection"),
     (FName)param_4->_padding_ == local_68)) {
    local_60.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_60.SelectionArray.MaxBits = 0x80;
    local_60.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.SelectionArray.NumBits = 0;
    FDataflowSelection::InitFromArray(&local_60,param_2,param_1);
    FDataflowNode::SetValue<FDataflowSelectionTypes>(param_6,param_3,&local_60,param_5);
    if (local_60.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_60.SelectionArray.AllocatorInstance.SecondaryData);
    }
    return true;
  }
  return false;
}

// SetMatchingSelectionHelper<FDataflowVertexSelection> @ 14441e890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Private::DataflowConvertNodesLocal::SetMatchingSelectionHelper<FDataflowVertexSelection>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FManagedArrayCollection *param_2,
          FContext *param_3,FDataflowOutput *param_4,FDataflowSelectionTypes *param_5,
          FDataflowNode *param_6)

{
  undefined1 auStack_88 [32];
  FName local_68;
  FDataflowSelection local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_4 != (FDataflowOutput *)0x0) &&
     (::FName::FName(&local_68,L"FDataflowVertexSelection"), (FName)param_4->_padding_ == local_68))
  {
    local_60.GroupName = FDataflowVertexSelection::VerticesGroupName;
    local_60.SelectionArray.MaxBits = 0x80;
    local_60.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.SelectionArray.NumBits = 0;
    FDataflowSelection::InitFromArray(&local_60,param_2,param_1);
    FDataflowNode::SetValue<FDataflowSelectionTypes>(param_6,param_3,&local_60,param_5);
    if (local_60.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_60.SelectionArray.AllocatorInstance.SecondaryData);
    }
    return true;
  }
  return false;
}

// AreTypesCompatible @ 144437900

bool __cdecl UE::Dataflow::AreTypesCompatible(FName param_1,FName param_2)

{
  bool bVar1;
  FAnyTypesRegistry *this;
  
  this = FAnyTypesRegistry::GetInstance();
  bVar1 = FAnyTypesRegistry::AreTypesCompatible(this,param_1,param_2);
  return bVar1;
}

// FindProperty @ 1444490f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FProperty * __cdecl
UE::Dataflow::Private::FindProperty
          (UStruct *param_1,void *param_2,void *param_3,FName *param_4,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FFieldClass *pFVar5;
  TTuple<FProperty_const_*,void_const_*> *pTVar6;
  FString *pFVar7;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar8;
  FProperty *pFVar9;
  FProperty *pFVar10;
  undefined1 auStackY_7e8 [32];
  FString local_7b0;
  FScriptContainerElement *local_798;
  int iStack_790;
  undefined4 uStack_78c;
  TStringView<wchar_t> local_788;
  FString local_778;
  FPropertyValueIterator local_768;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_7e8;
  pFVar9 = (FProperty *)0x0;
  pFVar5 = FProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_768,pFVar5,param_1,param_2,FullRecursion,IncludeDeprecated);
  pFVar10 = pFVar9;
  do {
    if (local_768.PropertyIteratorStack.ArrayNum < 1) {
LAB_14444927b:
      FVar8 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_768;
      if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar8 = local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar8,local_768.PropertyIteratorStack.ArrayNum);
      if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      return pFVar9;
    }
    pTVar6 = FPropertyValueIterator::operator->(&local_768);
    if (param_3 == *(void **)&pTVar6->field_0x8) {
      if (*param_4 != (FName)0x0) {
        pTVar6 = FPropertyValueIterator::operator->(&local_768);
        pFVar10 = (FProperty *)&DAT_00000001;
        pvVar2 = *(void **)pTVar6;
        bVar4 = IsThisNotNull(pvVar2,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)((longlong)pvVar2 + 0x20),&local_7b0);
        }
        else {
          ::FString::FString(&local_7b0,L"None");
        }
        pFVar7 = ::FString::FString(&local_778,&local_7b0);
        local_798 = (pFVar7->Data).AllocatorInstance.Data;
        iVar1 = (pFVar7->Data).ArrayNum;
        iStack_790 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_790 = 0;
        }
        local_788._12_4_ = uStack_78c;
        local_788.Size = iStack_790;
        local_788.DataPtr = (wchar_t *)local_798;
        bVar4 = ::FName::Equals(*param_4,&local_788);
        pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        if (!bVar4) goto LAB_14444922e;
      }
      bVar4 = true;
    }
    else {
LAB_14444922e:
      bVar4 = false;
    }
    if (pFVar10 != (FProperty *)0x0) {
      pFVar10 = (FProperty *)0x0;
      if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
      }
    }
    if (bVar4) {
      pTVar6 = FPropertyValueIterator::operator->(&local_768);
      pFVar9 = *(FProperty **)pTVar6;
      if (param_5 != (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
        FPropertyValueIterator::GetPropertyChain(&local_768,param_5);
      }
      goto LAB_14444927b;
    }
    FPropertyValueIterator::IterateToNext(&local_768);
  } while( true );
}

// GetArrayElementOffsetFromReference @ 14444a420

uint __cdecl
UE::Dataflow::Private::GetArrayElementOffsetFromReference
          (FArrayProperty *param_1,FConnectionReference *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  
  if (param_1 == (FArrayProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  pvVar4 = (void *)(**(code **)(param_1->_padding_ + 0xd8))
                             (param_1,param_1->Inner,param_2->ContainerReference,param_2->Index);
  if (pvVar4 != (void *)0x0) {
    if (param_2->Reference < pvVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(size_t)Reference.Reference >= (size_t)AddressAtIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x26,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    if (param_1->Inner->ElementSize <= *(int *)&param_2->Reference - (int)pvVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int32)((size_t)Reference.Reference - (size_t)AddressAtIndex) < ArrayProperty->Inner->GetElementSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x27,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return *(int *)&param_2->Reference - (int)pvVar4;
  }
  return 0xffffffff;
}

// GetConnectionFullName @ 14444ad70

FString * __cdecl
UE::Dataflow::Private::GetConnectionFullName
          (FString *__return_storage_ptr__,FDataflowConnection *param_1)

{
  FString *pFVar1;
  FName local_res8;
  FName local_res10;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&InvalidName,"Invalid");
    _Init_thread_footer(&::_TSS0);
  }
  local_res8 = InvalidName;
  if (param_1->OwningNode != (FDataflowNode *)0x0) {
    local_res8 = param_1->OwningNode->Name;
  }
  local_res10 = param_1->Name;
  pFVar1 = ::FName::ToString(&local_res8,&local_68);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar1);
  pFVar1 = ::FName::ToString(&local_res10,&local_58);
  FStringFormatArg::FStringFormatArg(&local_28,pFVar1);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 2;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_78.AllocatorInstance,2,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"{0}:{1}",&local_78);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeConnectionLink @ 144451bc0

FLink * __cdecl
UE::Dataflow::Private::MakeConnectionLink
          (FLink *__return_storage_ptr__,FDataflowOutput *param_1,FDataflowInput *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(undefined8 *)(param_2->_padding_ + 0x7c);
  uVar3 = *(undefined8 *)(param_2->_padding_ + 0x84);
  lVar1 = param_1->_padding_;
  (__return_storage_ptr__->InputNode).A = (int)uVar2;
  (__return_storage_ptr__->InputNode).B = (int)((ulonglong)uVar2 >> 0x20);
  (__return_storage_ptr__->InputNode).C = (int)uVar3;
  (__return_storage_ptr__->InputNode).D = (int)((ulonglong)uVar3 >> 0x20);
  uVar4 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar5 = *(undefined4 *)&param_2->_padding_;
  uVar6 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  (__return_storage_ptr__->Input).A = *(undefined4 *)&param_2->_padding_;
  (__return_storage_ptr__->Input).B = uVar4;
  (__return_storage_ptr__->Input).C = uVar5;
  (__return_storage_ptr__->Input).D = uVar6;
  uVar2 = *(undefined8 *)(lVar1 + 0x7c);
  uVar3 = *(undefined8 *)(lVar1 + 0x84);
  (__return_storage_ptr__->OutputNode).A = (int)uVar2;
  (__return_storage_ptr__->OutputNode).B = (int)((ulonglong)uVar2 >> 0x20);
  (__return_storage_ptr__->OutputNode).C = (int)uVar3;
  (__return_storage_ptr__->OutputNode).D = (int)((ulonglong)uVar3 >> 0x20);
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar5 = *(undefined4 *)&param_1->_padding_;
  uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (__return_storage_ptr__->Output).A = *(undefined4 *)&param_1->_padding_;
  (__return_storage_ptr__->Output).B = uVar4;
  (__return_storage_ptr__->Output).C = uVar5;
  (__return_storage_ptr__->Output).D = uVar6;
  return __return_storage_ptr__;
}

// RegisterAnyTypes @ 144453aa0

void __cdecl UE::Dataflow::RegisterAnyTypes(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnyTypesRegistry *pFVar4;
  TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&> local_res8;
  FName local_res18;
  FTypeInfo **local_68;
  FName local_60;
  FTypeInfo **local_58;
  FName local_50;
  TFunction<bool___cdecl(FName,FName)> local_48;
  
  pFVar3 = ::FName::FName(&local_res18,"FDataflowAnyType");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_68 = (FTypeInfo **)FDataflowAllTypesPolicy::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_60,L"");
  local_58 = &local_res8.Value;
  local_50 = (FName)&local_68;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_58);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowAllTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)FDataflowAllTypesPolicy::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowArrayTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)FDataflowArrayTypePolicy::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowNumericTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"double");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowVectorTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"FVector4");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowStringTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)TDataflowMultiTypePolicy<FString,FName,FText>::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"FString");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowBoolTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)TDataflowSingleTypePolicy<bool>::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"bool");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowTransformTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"FTransform");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowStringConvertibleTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)FDataflowStringConvertibleTypePolicy::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"FString");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowUObjectConvertibleTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)FDataflowUObjectConvertibleTypePolicy::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"TObjectPtr<UObject>");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowSelectionTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"FDataflowSelection");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowRotationTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TRotator<double>_>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"FRotator");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowVectorArrayTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"TArray<FVector4>");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowNumericArrayTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"TArray<double>");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowStringArrayTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowMultiTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"TArray<FString>");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowBoolArrayTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"TArray<bool>");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  pFVar3 = ::FName::FName(&local_res18,"FDataflowTransformArrayTypes");
  FVar1 = *pFVar3;
  pFVar4 = FAnyTypesRegistry::GetInstance();
  local_58 = (FTypeInfo **)
             TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
             ::SupportsTypeStatic;
  local_res8.Value = (FTypeInfo *)FVar1;
  ::FName::FName(&local_50,L"TArray<FTransform>");
  local_68 = &local_res8.Value;
  local_60 = (FName)&local_58;
  TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Dataflow::FAnyTypesRegistry::FTypeInfo_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              *)pFVar4,&local_res8,(bool *)&local_68);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertNumericTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowNumericTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowNumericTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertVectorTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowVectorTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowVectorTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertStringTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowStringTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowStringTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertBoolTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowBoolTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowBoolTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertTransformTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowTransformTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowTransformTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertRotationDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowRotationTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowRotationTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertVectorArrayTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowVectorArrayTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowVectorArrayTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertNumericArrayTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowNumericArrayTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowNumericArrayTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertStringArrayTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowStringArrayTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowStringArrayTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertBoolArrayTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowBoolArrayTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowBoolArrayTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar3 = ::FName::FName((FName *)&local_res8,"FConvertTransformArrayTypesDataflowNode");
  FVar1 = *pFVar3;
  pFVar3 = ::FName::FName((FName *)&local_res8.Value,"FDataflowTransformArrayTypes");
  FVar2 = *pFVar3;
  pFVar3 = ::FName::FName(&local_res18,"FDataflowTransformArrayTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar3,FVar2,FVar1,&local_48);
  return;
}

// RegisterCoreNodes @ 144454860

void __cdecl UE::Dataflow::RegisterCoreNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res8;
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowReRouteNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowReRouteNode,(UObject *)pUVar2,
                         L"DataflowReRouteNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton,FVar1,
             "ReRouteNode","Core",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowReRouteNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowBranchNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowBranchNode,(UObject *)pUVar2,
                         L"DataflowBranchNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton,FVar1,"Branch",
             "FlowControl",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowBranchNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowSelectNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelectNode,(UObject *)pUVar2,
                         L"DataflowSelectNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton,FVar1,"Select",
             "FlowControl",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowSelectNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowPrintNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPrintNode,(UObject *)pUVar2,
                         L"DataflowPrintNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton,FVar1,"Print",
             "Core",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowPrintNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowForceDependencyNode");
  if (Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowForceDependencyNode,(UObject *)pUVar2,
                         L"DataflowForceDependencyNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton,
             local_res8,"ForceDependency","FlowControl",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowForceDependencyNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterDataflowConvertNodes @ 144454b50

void __cdecl UE::Dataflow::RegisterDataflowConvertNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res8;
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertNumericTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertNumericTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertNumericTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertNumericTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertNumericTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertNumericTypesDataflowNode.OuterSingleton,FVar1
             ,"ConvertNumericTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertNumericTypesDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertVectorTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode,(UObject *)pUVar2
                         ,L"ConvertVectorTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton,FVar1,
             "ConvertVectorTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertVectorTypesDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertStringTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode,(UObject *)pUVar2
                         ,L"ConvertStringTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton,FVar1,
             "ConvertStringTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertStringTypesDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertBoolTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode,(UObject *)pUVar2,
                         L"ConvertBoolTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton,FVar1,
             "ConvertBoolTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertBoolTypesDataflowNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertTransformTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertTransformTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton,
             FVar1,"ConvertTransformTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertTransformTypesDataflowNode>'
             ::__l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertStringConvertibleTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertStringConvertibleTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.
             OuterSingleton,FVar1,"ConvertStringConvertibleTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FConvertStringConvertibleTypesDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertSelectionTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertSelectionTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton,
             FVar1,"ConvertSelectionTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertSelectionTypesDataflowNode>'
             ::__l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertSelectionTypesToIndexArrayDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode,
                           (UObject *)pUVar2,L"ConvertSelectionTypesToIndexArrayDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
             OuterSingleton,FVar1,"ConvertSelectionToIndexArray","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FConvertSelectionTypesToIndexArrayDataflowNode>'::__l2::<lambda_1>
             ::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertIndexToSelectionTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertIndexToSelectionTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode.
             OuterSingleton,FVar1,"ConvertIndexToSelection","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FConvertIndexToSelectionTypesDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertIndexArrayToSelectionTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertIndexArrayToSelectionTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
             OuterSingleton,FVar1,"ConvertIndexArrayToSelection","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FConvertIndexArrayToSelectionTypesDataflowNode>'::__l2::<lambda_1>
             ::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertVectorArrayTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertVectorArrayTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertVectorArrayTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertVectorArrayTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertVectorArrayTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertVectorArrayTypesDataflowNode.OuterSingleton,
             FVar1,"ConvertVectorArrayTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FConvertVectorArrayTypesDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertNumericArrayTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertNumericArrayTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertNumericArrayTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertNumericArrayTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertNumericArrayTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertNumericArrayTypesDataflowNode.OuterSingleton,
             FVar1,"ConvertNumericArrayTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FConvertNumericArrayTypesDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertStringArrayTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertStringArrayTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton,
             FVar1,"ConvertStringArrayTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FConvertStringArrayTypesDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertBoolArrayTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertBoolArrayTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertBoolArrayTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertBoolArrayTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertBoolArrayTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertBoolArrayTypesDataflowNode.OuterSingleton,
             FVar1,"ConvertBoolArrayTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertBoolArrayTypesDataflowNode>'
             ::__l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertTransformArrayTypesDataflowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FConvertTransformArrayTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertTransformArrayTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertTransformArrayTypesDataflowNode,
                         (UObject *)pUVar2,L"ConvertTransformArrayTypesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertTransformArrayTypesDataflowNode.
             OuterSingleton,FVar1,"ConvertTransformArrayTypes","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FConvertTransformArrayTypesDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FConvertRotationDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FConvertRotationDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertRotationDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertRotationDataflowNode,(UObject *)pUVar2,
                         L"ConvertRotationDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FConvertRotationDataflowNode.OuterSingleton,
             local_res8,"ConvertRotation","Convert",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertRotationDataflowNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterDataflowCoreColors @ 144455450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::Dataflow::RegisterDataflowCoreColors(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FNodeColorsRegistry *pFVar5;
  FPinSettingsRegistry *pFVar6;
  FName local_res8;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38;
  
  pFVar5 = FNodeColorsRegistry::Get();
  local_48._0_8_ = ___xmm_3f8000003ee800003ee800003ee80000;
  local_48._8_8_ = _UNK_150be3b58;
  local_38 = CDefaultNodeBodyTintColor.field0_0x0;
  ::FName::FName(&local_res8,"Math");
  FNodeColorsRegistry::RegisterNodeColors(pFVar5,&local_res8,(FNodeColors *)&local_48._s_0);
  pFVar5 = FNodeColorsRegistry::Get();
  local_48._0_8_ = ___xmm_3f8000003f4ccccd3ecccccd00000000;
  local_48._8_8_ = _UNK_150be3b78;
  local_38 = CDefaultNodeBodyTintColor.field0_0x0;
  ::FName::FName(&local_res8,"Image");
  FNodeColorsRegistry::RegisterNodeColors(pFVar5,&local_res8,(FNodeColors *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f80000000000000000000003e99999a;
  local_48._8_8_ = _UNK_150be3aa8;
  ::FName::FName(&local_res8,"bool");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  uVar2 = _UNK_150be3b48;
  uVar1 = ___xmm_3f8000003edbf5b63f451eb83c5e69ad;
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003edbf5b63f451eb83c5e69ad;
  local_48._8_8_ = _UNK_150be3b48;
  ::FName::FName(&local_res8,"uint8");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"uint16");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"uint32");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"uint64");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"int8");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"int16");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"int32");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"int64");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003d75c28f3f8000003eb72021;
  local_48._8_8_ = _UNK_150be3b08;
  ::FName::FName(&local_res8,"float");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f800000000000003f2aaab03d20a0f5;
  local_48._8_8_ = _UNK_150be3ac8;
  ::FName::FName(&local_res8,"double");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003f8000003e6662353f1b9357;
  local_48._8_8_ = _UNK_150be3b88;
  ::FName::FName(&local_res8,"FName");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003f2918f4000000003f800000;
  local_48._8_8_ = _UNK_150be3b68;
  ::FName::FName(&local_res8,"FString");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003ecccccd3e4ccccd3f4ccccd;
  local_48._8_8_ = _UNK_150be3b38;
  ::FName::FName(&local_res8,"FText");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  uVar2 = _UNK_150be3ae8;
  uVar1 = ___xmm_3f8000003c87442c3f175c7d3f800000;
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003c87442c3f175c7d3f800000;
  local_48._8_8_ = _UNK_150be3ae8;
  ::FName::FName(&local_res8,"FVector2D");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FVector");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FVector4");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FVector2f");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FVector3f");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FVector4f");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FQuat");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FQuat4f");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FLinearColor");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FIntPoint");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FIntVector3");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FIntVector4");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003f8000003ee889a03eb4efed;
  local_48._8_8_ = _UNK_150be3b98;
  ::FName::FName(&local_res8,"FRotator");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f800000000000003e30ba1f3f800000;
  local_48._8_8_ = _UNK_150be3ab8;
  ::FName::FName(&local_res8,"FTransform");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  uVar2 = _UNK_150be3ad8;
  uVar1 = ___xmm_3f8000003b46e6da3eb8fd3b3f54ad58;
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003b46e6da3eb8fd3b3f54ad58;
  local_48._8_8_ = _UNK_150be3ad8;
  ::FName::FName(&local_res8,"FDataflowTransformSelection");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FDataflowVertexSelection");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FDataflowFaceSelection");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FDataflowGeometrySelection");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FDataflowCurvesSelection");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003e99999a3e99999a3e99999a;
  local_48._8_8_ = _UNK_150be3b28;
  ::FName::FName(&local_res8,"FDataflowMaterialSelection");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  uVar4 = _UNK_150be3b18;
  uVar3 = ___xmm_3f8000003e487fcc3e487fcc3e6147ae;
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003e487fcc3e487fcc3e6147ae;
  local_48._8_8_ = _UNK_150be3b18;
  ::FName::FName(&local_res8,"FDataflowAnyType");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowAllTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowNumericTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowVectorTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowStringTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowBoolTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowTransformTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowStringConvertibleTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowUObjectConvertibleTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar1;
  local_48._8_8_ = uVar2;
  ::FName::FName(&local_res8,"FDataflowSelectionTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowVectorArrayTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowNumericArrayTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowStringArrayTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowBoolArrayTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  ::FName::FName(&local_res8,"FDataflowTransformArrayTypes");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  pFVar6 = FPinSettingsRegistry::Get();
  local_38._s_0.R = 1.5;
  local_48._0_8_ = ___xmm_3f8000003d4353723d4353723ec3e554;
  local_48._8_8_ = _UNK_150be3af8;
  ::FName::FName(&local_res8,"FDataflowImage");
  FPinSettingsRegistry::RegisterPinSettings(pFVar6,&local_res8,(FPinSettings *)&local_48._s_0);
  return;
}

// RegisterDataflowImageNodes @ 144455f70

void __cdecl UE::Dataflow::RegisterDataflowImageNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FDataflowImageFromColorNode");
  FVar1 = local_res8[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageFromColorNode,(UObject *)pUVar2,
                         L"DataflowImageFromColorNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton,FVar1,
             "ImageFromColor","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageFromColorNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FDataflowImageSplitChannelsNode");
  FVar1 = local_res8[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode,(UObject *)pUVar2
                         ,L"DataflowImageSplitChannelsNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton,FVar1,
             "ImageSplitChannels","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageSplitChannelsNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FDataflowImageCombineChannelsNode");
  if (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode,
                         (UObject *)pUVar2,L"DataflowImageCombineChannelsNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton,
             local_res8[0],"ImageCombineChannels","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageCombineChannelsNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterDataflowMathNodes @ 144456140

void __cdecl UE::Dataflow::RegisterDataflowMathNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res8;
  FString local_18;
  
  ::FString::FString(&local_18,"Absolute Positive");
  ::FName::FName(&local_res8,"FDataflowMathAbsNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAbsNode,(UObject *)pUVar2,
                         L"DataflowMathAbsNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton,FVar1,"Abs",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathAbsNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"+ Addition Plus");
  ::FName::FName(&local_res8,"FDataflowMathAddNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAddNode,(UObject *)pUVar2,
                         L"DataflowMathAddNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton,FVar1,"Add",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathAddNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Round Higher Integer");
  ::FName::FName(&local_res8,"FDataflowMathCeilNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCeilNode,(UObject *)pUVar2,
                         L"DataflowMathCeilNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton,FVar1,"Ceil",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathCeilNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Saturate Limits");
  ::FName::FName(&local_res8,"FDataflowMathClampNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathClampNode,(UObject *)pUVar2,
                         L"DataflowMathClampNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton,FVar1,"Clamp",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathClampNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,
                     "Pi Half Two Four Inverse SquareRoot Sqrt Cube Square e Gamma Golden Ratio");
  ::FName::FName(&local_res8,"FDataflowMathConstantNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathConstantNode,(UObject *)pUVar2,
                         L"DataflowMathConstantNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton,FVar1,
             "Constants","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathConstantNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowMathCubeNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCubeNode,(UObject *)pUVar2,
                         L"DataflowMathCubeNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton,FVar1,"Cube",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathCubeNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"/ Division");
  ::FName::FName(&local_res8,"FDataflowMathDivideNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathDivideNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathDivideNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathDivideNode,(UObject *)pUVar2,
                         L"DataflowMathDivideNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathDivideNode.OuterSingleton,FVar1,"Divide"
             ,"Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathDivideNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Exponential");
  ::FName::FName(&local_res8,"FDataflowMathExpNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathExpNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathExpNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathExpNode,(UObject *)pUVar2,
                         L"DataflowMathExpNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathExpNode.OuterSingleton,FVar1,"Exp",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathExpNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Round Lowest Integer");
  ::FName::FName(&local_res8,"FDataflowMathFloorNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFloorNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathFloorNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathFloorNode,(UObject *)pUVar2,
                         L"DataflowMathFloorNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathFloorNode.OuterSingleton,FVar1,"Floor",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathFloorNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Fractional Decimal Point");
  ::FName::FName(&local_res8,"FDataflowMathFracNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathFracNode,(UObject *)pUVar2,
                         L"DataflowMathFracNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton,FVar1,"Frac",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathFracNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"OneOverSquareRoot");
  ::FName::FName(&local_res8,"FDataflowMathInverseSquareRootNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathInverseSquareRootNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathInverseSquareRootNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode,
                         (UObject *)pUVar2,L"DataflowMathInverseSquareRootNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathInverseSquareRootNode.OuterSingleton,
             FVar1,"InverseSquareRoot","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathInverseSquareRootNode>'
             ::__l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Logarithm");
  ::FName::FName(&local_res8,"FDataflowMathLogNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathLogNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathLogNode,(UObject *)pUVar2,
                         L"DataflowMathLogNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathLogNode.OuterSingleton,FVar1,"Log",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathLogNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Logarithm");
  ::FName::FName(&local_res8,"FDataflowMathLogXNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathLogXNode,(UObject *)pUVar2,
                         L"DataflowMathLogXNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton,FVar1,"LogX",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathLogXNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Lowest Smallest");
  ::FName::FName(&local_res8,"FDataflowMathMinimumNode_v2");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMinimumNode_v2,(UObject *)pUVar2,
                         L"DataflowMathMinimumNode_v2");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode_v2.OuterSingleton,FVar1,
             "Minimum","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMinimumNode_v2>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Highest Larger");
  ::FName::FName(&local_res8,"FDataflowMathMaximumNode_v2");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2,(UObject *)pUVar2,
                         L"DataflowMathMaximumNode_v2");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton,FVar1,
             "Maximum","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMaximumNode_v2>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"* Multiplication Time");
  ::FName::FName(&local_res8,"FDataflowMathMultiplyNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMultiplyNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathMultiplyNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMultiplyNode,(UObject *)pUVar2,
                         L"DataflowMathMultiplyNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathMultiplyNode.OuterSingleton,FVar1,
             "Multiply","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMultiplyNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Minus Negative");
  ::FName::FName(&local_res8,"FDataflowMathNegateNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathNegateNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathNegateNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathNegateNode,(UObject *)pUVar2,
                         L"DataflowMathNegateNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathNegateNode.OuterSingleton,FVar1,"Negate"
             ,"Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathNegateNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowMathOneMinusNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathOneMinusNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathOneMinusNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathOneMinusNode,(UObject *)pUVar2,
                         L"DataflowMathOneMinusNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathOneMinusNode.OuterSingleton,FVar1,
             "OneMinus","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathOneMinusNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Power Exponent");
  ::FName::FName(&local_res8,"FDataflowMathPowNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathPowNode,(UObject *)pUVar2,
                         L"DataflowMathPowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton,FVar1,"Pow",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathPowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"OneOver OneDividedBy");
  ::FName::FName(&local_res8,"FDataflowMathReciprocalNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathReciprocalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathReciprocalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathReciprocalNode,(UObject *)pUVar2,
                         L"DataflowMathReciprocalNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathReciprocalNode.OuterSingleton,FVar1,
             "Reciprocal","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathReciprocalNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Round Mid 0.5");
  ::FName::FName(&local_res8,"FDataflowMathRoundNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRoundNode,(UObject *)pUVar2,
                         L"DataflowMathRoundNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton,FVar1,"Round",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathRoundNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Minus Plus Positive Negative");
  ::FName::FName(&local_res8,"FDataflowMathSignNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSignNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSignNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSignNode,(UObject *)pUVar2,
                         L"DataflowMathSignNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathSignNode.OuterSingleton,FVar1,"Sign",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSignNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowMathSquareNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSquareNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSquareNode,(UObject *)pUVar2,
                         L"DataflowMathSquareNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathSquareNode.OuterSingleton,FVar1,"Square"
             ,"Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSquareNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res8,"FDataflowMathSquareRootNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSquareRootNode,(UObject *)pUVar2,
                         L"DataflowMathSquareRootNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton,FVar1,
             "SquareRoot","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSquareRootNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"- Subtraction Minus");
  ::FName::FName(&local_res8,"FDataflowMathSubtractNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSubtractNode,(UObject *)pUVar2,
                         L"DataflowMathSubtractNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton,FVar1,
             "Subtract","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSubtractNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Integer Truncate");
  ::FName::FName(&local_res8,"FDataflowMathTruncNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTruncNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathTruncNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTruncNode,(UObject *)pUVar2,
                         L"DataflowMathTruncNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathTruncNode.OuterSingleton,FVar1,"Trunc",
             "Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathTruncNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Cosine Trigonometry Circle Angle Degrees Radians");
  ::FName::FName(&local_res8,"FDataflowMathCosNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCosNode,(UObject *)pUVar2,
                         L"DataflowMathCosNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton,FVar1,"Cos",
             "Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathCosNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Sine Trigonometry Circle Angle Degrees Radians");
  ::FName::FName(&local_res8,"FDataflowMathSinNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSinNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSinNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSinNode,(UObject *)pUVar2,
                         L"DataflowMathSinNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathSinNode.OuterSingleton,FVar1,"Sin",
             "Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSinNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Tangent Trigonometry Circle Angle Degrees Radians");
  ::FName::FName(&local_res8,"FDataflowMathTanNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTanNode,(UObject *)pUVar2,
                         L"DataflowMathTanNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton,FVar1,"Tan",
             "Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathTanNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Cosine Trigonometry Circle Angle Degrees Radians");
  ::FName::FName(&local_res8,"FDataflowMathArcCosNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcCosNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathArcCosNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcCosNode,(UObject *)pUVar2,
                         L"DataflowMathArcCosNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathArcCosNode.OuterSingleton,FVar1,"ArcCos"
             ,"Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathArcCosNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Sine Trigonometry Circle Angle Degrees Radians");
  ::FName::FName(&local_res8,"FDataflowMathArcSinNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcSinNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathArcSinNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcSinNode,(UObject *)pUVar2,
                         L"DataflowMathArcSinNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathArcSinNode.OuterSingleton,FVar1,"ArcSin"
             ,"Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathArcSinNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Tangent Trigonometry Circle Angle Degrees Radians");
  ::FName::FName(&local_res8,"FDataflowMathArcTanNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTanNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathArcTanNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcTanNode,(UObject *)pUVar2,
                         L"DataflowMathArcTanNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathArcTanNode.OuterSingleton,FVar1,"ArcTan"
             ,"Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathArcTanNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Tangent Trigonometry Circle Angle Degrees Radians");
  ::FName::FName(&local_res8,"FDataflowMathArcTan2Node");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcTan2Node,(UObject *)pUVar2,
                         L"DataflowMathArcTan2Node");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton,FVar1,
             "ArcTan2","Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathArcTan2Node>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Trigonometry Circle Angle Degrees Radians Convert Unit");
  ::FName::FName(&local_res8,"FDataflowMathDegToRadNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathDegToRadNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathDegToRadNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathDegToRadNode,(UObject *)pUVar2,
                         L"DataflowMathDegToRadNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathDegToRadNode.OuterSingleton,FVar1,
             "DegToRad","Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathDegToRadNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Trigonometry Circle Angle Degrees Radians Convert Unit");
  ::FName::FName(&local_res8,"FDataflowMathRadToDegNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRadToDegNode,(UObject *)pUVar2,
                         L"DataflowMathRadToDegNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton,FVar1,
             "RadToDeg","Math|Trig",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathRadToDegNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Lowest Smallest");
  ::FName::FName(&local_res8,"FDataflowMathMinimumNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMinimumNode,(UObject *)pUVar2,
                         L"DataflowMathMinimumNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode.OuterSingleton,FVar1,
             "Minimum","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMinimumNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Highest Larger");
  ::FName::FName(&local_res8,"FDataflowMathMaximumNode");
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMaximumNode,(UObject *)pUVar2,
                         L"DataflowMathMaximumNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode.OuterSingleton,local_res8,
             "Maximum","Math|Scalar",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMaximumNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterDataflowVectorNodes @ 1444575f0

void __cdecl UE::Dataflow::RegisterDataflowVectorNodes(void)

{
  FName FVar1;
  FName FVar2;
  UPackage *pUVar3;
  FName *pFVar4;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_58;
  TFunction<bool___cdecl(FName,FName)> local_48;
  
  ::FString::FString(&local_58,"Create Add 2D XY");
  ::FName::FName(&local_res8,"FDataflowVectorMakeVec2Node");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec2Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec2Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node,(UObject *)pUVar3,
                         L"DataflowVectorMakeVec2Node");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec2Node.OuterSingleton,FVar1,
             "MakeVector2","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorMakeVec2Node>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"Create Add 3D XYZ");
  ::FName::FName(&local_res8,"FDataflowVectorMakeVec3Node");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node,(UObject *)pUVar3,
                         L"DataflowVectorMakeVec3Node");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton,FVar1,
             "MakeVector3","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorMakeVec3Node>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"Create Add 4D XYZW");
  ::FName::FName(&local_res8,"FDataflowVectorMakeVec4Node");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec4Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec4Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node,(UObject *)pUVar3,
                         L"DataflowVectorMakeVec4Node");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec4Node.OuterSingleton,FVar1,
             "MakeVector4","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorMakeVec4Node>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"Expand Split X Y Z W Components");
  ::FName::FName(&local_res8,"FDataflowVectorBreakNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorBreakNode,(UObject *)pUVar3,
                         L"DataflowVectorBreakNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton,FVar1,
             "BreakVector","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorBreakNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"+ Plus Addition");
  ::FName::FName(&local_res8,"FDataflowVectorAddNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorAddNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorAddNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorAddNode,(UObject *)pUVar3,
                         L"DataflowVectorAddNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorAddNode.OuterSingleton,FVar1,
             "AddVector","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorAddNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"- Minus Subtraction");
  ::FName::FName(&local_res8,"FDataflowVectorSubtractNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorSubtractNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorSubtractNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorSubtractNode,(UObject *)pUVar3,
                         L"DataflowVectorSubtractNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorSubtractNode.OuterSingleton,FVar1,
             "SubtractVector","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorSubtractNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"* Multiplication Times");
  ::FName::FName(&local_res8,"FDataflowVectorMultiplyNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMultiplyNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorMultiplyNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMultiplyNode,(UObject *)pUVar3,
                         L"DataflowVectorMultiplyNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorMultiplyNode.OuterSingleton,FVar1,
             "MultiplyVector","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorMultiplyNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"/ Division Over");
  ::FName::FName(&local_res8,"FDataflowVectorDivideNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDivideNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorDivideNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDivideNode,(UObject *)pUVar3,
                         L"DataflowVectorDivideNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorDivideNode.OuterSingleton,FVar1,
             "DivideVector","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorDivideNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"Project");
  ::FName::FName(&local_res8,"FDataflowVectorDotProductNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDotProductNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorDotProductNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDotProductNode,(UObject *)pUVar3,
                         L"DataflowVectorDotProductNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorDotProductNode.OuterSingleton,FVar1,
             "VectorDotProduct","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorDotProductNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"Size Magnitude");
  ::FName::FName(&local_res8,"FDataflowVectorLengthNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorLengthNode,(UObject *)pUVar3,
                         L"DataflowVectorLengthNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton,FVar1,
             "VectorLength","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorLengthNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"Size Magnitude");
  ::FName::FName(&local_res8,"FDataflowVectorSquaredLengthNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorSquaredLengthNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorSquaredLengthNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode,
                         (UObject *)pUVar3,L"DataflowVectorSquaredLengthNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorSquaredLengthNode.OuterSingleton,FVar1
             ,"VectorSquaredLength","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorSquaredLengthNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"");
  ::FName::FName(&local_res8,"FDataflowVectorDistanceNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode,(UObject *)pUVar3,
                         L"DataflowVectorDistanceNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton,FVar1,
             "VectorDistance","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorDistanceNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"");
  ::FName::FName(&local_res8,"FDataflowVectorCrossProductNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorCrossProductNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorCrossProductNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode,(UObject *)pUVar3
                         ,L"DataflowVectorCrossProductNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorCrossProductNode.OuterSingleton,FVar1,
             "VectorCrossProduct","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorCrossProductNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"Scalar Float Double");
  ::FName::FName(&local_res8,"FDataflowVectorScaleNode");
  FVar1 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorScaleNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorScaleNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorScaleNode,(UObject *)pUVar3,
                         L"DataflowVectorScaleNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorScaleNode.OuterSingleton,FVar1,
             "ScaleVector","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorScaleNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"");
  ::FName::FName(&local_res8,"FDataflowVectorNormalize");
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorNormalize,(UObject *)pUVar3,
                         L"DataflowVectorNormalize");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton,local_res8,
             "NormalizeVector","Math|Vectors",&local_58,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorNormalize>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar4 = ::FName::FName(&local_res8,"FDataflowVectorBreakNode");
  FVar1 = *pFVar4;
  pFVar4 = ::FName::FName(&local_res10,"FDataflowNumericTypes");
  FVar2 = *pFVar4;
  pFVar4 = ::FName::FName(&local_res18,"FDataflowVectorTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar4,FVar2,FVar1,&local_48);
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  pFVar4 = ::FName::FName(&local_res8,"FDataflowVectorMakeVec3Node");
  FVar1 = *pFVar4;
  pFVar4 = ::FName::FName(&local_res10,"FDataflowVectorTypes");
  FVar2 = *pFVar4;
  pFVar4 = ::FName::FName(&local_res18,"FDataflowNumericTypes");
  FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic(*pFVar4,FVar2,FVar1,&local_48);
  return;
}

// RegisterNodeFilter @ 1444599a0

void __cdecl UE::Dataflow::RegisterNodeFilter(FName *param_1)

{
  FName local_res10 [3];
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&FGraph::RegisteredFilters,local_res10,(bool *)param_1);
  return;
}

// SetMatchingSelection @ 144464390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Private::DataflowConvertNodesLocal::SetMatchingSelection
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FManagedArrayCollection *param_2,
          FContext *param_3,FDataflowOutput *param_4,FDataflowSelectionTypes *param_5,
          FDataflowNode *param_6)

{
  bool bVar1;
  undefined1 auStack_98 [32];
  FName local_78;
  FDataflowSelection local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_4 == (FDataflowOutput *)0x0) ||
     ((((::FName::FName(&local_78,L"FDataflowTransformSelection"),
        local_70.GroupName = FDataflowTransformSelection::TransformGroupName,
        (FName)param_4->_padding_ != local_78 &&
        (::FName::FName(&local_78,L"FDataflowGeometrySelection"),
        local_70.GroupName = FDataflowGeometrySelection::GeometryGroupName,
        (FName)param_4->_padding_ != local_78)) &&
       (::FName::FName(&local_78,L"FDataflowFaceSelection"),
       local_70.GroupName = FDataflowFaceSelection::FacesGroupName,
       (FName)param_4->_padding_ != local_78)) &&
      (::FName::FName(&local_78,L"FDataflowVertexSelection"),
      local_70.GroupName = FDataflowVertexSelection::VerticesGroupName,
      (FName)param_4->_padding_ != local_78)))) {
    bVar1 = false;
  }
  else {
    local_70.SelectionArray.MaxBits = 0x80;
    local_70.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70.SelectionArray.NumBits = 0;
    FDataflowSelection::InitFromArray(&local_70,param_2,param_1);
    FDataflowNode::SetValue<FDataflowSelectionTypes>(param_6,param_3,&local_70,param_5);
    if (local_70.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
    }
    bVar1 = true;
  }
  return bVar1;
}

