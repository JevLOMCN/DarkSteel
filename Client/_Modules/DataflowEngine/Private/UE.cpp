// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 118

// Construct<FDataflowCallSubGraphNode> @ 1462bfe90

void __cdecl UE::CoreUObject::Private::Construct<FDataflowCallSubGraphNode>(void *param_1)

{
  FWeakObjectPtr *pFVar1;
  undefined8 uStackX_8;
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &FDataflowCallSubGraphNode::_vftable__for__FDataflowNode__;
  pFVar1 = (FWeakObjectPtr *)((longlong)param_1 + 0x2e0);
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)((longlong)param_1 + 0x248) =
       &FDataflowCallSubGraphNode::_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined ***)((longlong)param_1 + 0x250) =
       &FDataflowCallSubGraphNode::_vftable__for__UE__Dataflow__ISubGraphContextCallback__;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  pFVar1->ObjectIndex = 0;
  pFVar1->ObjectSerialNumber = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(pFVar1,(FObjectPtr)&uStackX_8);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x2e8));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  pFVar1 = (FWeakObjectPtr *)((longlong)param_1 + 0x368);
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x330) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x338) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined4 *)((longlong)param_1 + 0x350) = 0;
  *(undefined1 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  pFVar1->ObjectIndex = 0;
  pFVar1->ObjectSerialNumber = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(pFVar1,(FObjectPtr)&uStackX_8);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x370));
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined8 *)((longlong)param_1 + 0x388) = 0;
  return;
}

// ConstructForTests<FDataflowCallSubGraphNode> @ 1462bfea0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowCallSubGraphNode>(void *param_1)

{
  FWeakObjectPtr *pFVar1;
  undefined8 uStackX_8;
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &FDataflowCallSubGraphNode::_vftable__for__FDataflowNode__;
  pFVar1 = (FWeakObjectPtr *)((longlong)param_1 + 0x2e0);
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined ***)((longlong)param_1 + 0x248) =
       &FDataflowCallSubGraphNode::_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined ***)((longlong)param_1 + 0x250) =
       &FDataflowCallSubGraphNode::_vftable__for__UE__Dataflow__ISubGraphContextCallback__;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  pFVar1->ObjectIndex = 0;
  pFVar1->ObjectSerialNumber = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(pFVar1,(FObjectPtr)&uStackX_8);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x2e8));
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  pFVar1 = (FWeakObjectPtr *)((longlong)param_1 + 0x368);
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x330) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x338) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined4 *)((longlong)param_1 + 0x350) = 0;
  *(undefined1 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  pFVar1->ObjectIndex = 0;
  pFVar1->ObjectSerialNumber = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(pFVar1,(FObjectPtr)&uStackX_8);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x370));
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined8 *)((longlong)param_1 + 0x388) = 0;
  return;
}

// Destruct<FDataflowCallSubGraphNode> @ 1462bfeb0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowCallSubGraphNode>(void *param_1)

{
  UDataflow *this;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar1;
  UDataflowSubGraph *this_00;
  UObject *pUStackX_8;
  
  *(undefined ***)param_1 = &FDataflowCallSubGraphNode::_vftable__for__FDataflowNode__;
  this_00 = (UDataflowSubGraph *)0x0;
  *(undefined ***)((longlong)param_1 + 0x248) =
       &FDataflowCallSubGraphNode::_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  *(undefined ***)((longlong)param_1 + 0x250) =
       &FDataflowCallSubGraphNode::_vftable__for__UE__Dataflow__ISubGraphContextCallback__;
  TVar1 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)param_1 + 0x380));
  this = *(UDataflow **)TVar1.Object;
  *(undefined8 *)TVar1.Object = 0;
  if (pUStackX_8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUStackX_8);
  }
  if (this != (UDataflow *)0x0) {
    this_00 = UDataflow::FindSubGraphByGuid(this,(FGuid *)((longlong)param_1 + 600));
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDataflowAssetDelegates::OnSubGraphsChanged,param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDataflowSubGraphDelegates::OnSubGraphLoaded,param_1);
  if (this_00 != (UDataflowSubGraph *)0x0) {
    UEdGraph::RemoveOnGraphChangedHandler
              ((UEdGraph *)this_00,(FDelegateHandle)*(ulong64 *)((longlong)param_1 + 0x388));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x370));
  *(undefined4 *)((longlong)param_1 + 0x350) = 0;
  if (*(void **)((longlong)param_1 + 0x348) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x348));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x308));
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x2e8));
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  if (*(void **)((longlong)param_1 + 0x2c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2c0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x280));
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowCallSubGraphNode> @ 1462bfec0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowCallSubGraphNode>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
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
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 600) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x260) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0x268) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x268 - (longlong)param_1));
    FDataflowDynamicConnections::operator=
              ((FDataflowDynamicConnections *)((longlong)pvVar4 + 0x270),
               (FDataflowDynamicConnections *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x270 - (longlong)param_1)));
    pFVar1 = (FInstancedStruct *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x2e8 - (longlong)param_1));
    if ((FInstancedStruct *)((longlong)pvVar4 + 0x2e8) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar4 + 0x2e8),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar4 + (longlong)param_2 + (0x2f0 - (longlong)param_1)));
    }
    FDataflowDynamicConnections::operator=
              ((FDataflowDynamicConnections *)((longlong)pvVar4 + 0x2f8),
               (FDataflowDynamicConnections *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x2f8 - (longlong)param_1)));
    pFVar1 = (FInstancedStruct *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x370 - (longlong)param_1));
    if ((FInstancedStruct *)((longlong)pvVar4 + 0x370) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar4 + 0x370),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar4 + (longlong)param_2 + (0x378 - (longlong)param_1)));
    }
    *(undefined8 *)((longlong)pvVar4 + 0x380) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x380 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x388) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x388 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar4 = (void *)((longlong)pvVar4 + 0x390);
  }
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return (bool)uVar6;
}

// Construct<FDataflowSubGraphGetCurrentIndexNode> @ 1462c0180

void __cdecl
UE::CoreUObject::Private::Construct<FDataflowSubGraphGetCurrentIndexNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined4 *)((longlong)param_1 + 0x248) = 0;
  *(undefined ***)param_1 = &___7FDataflowSubGraphGetCurrentIndexNode__6B_;
  return;
}

// ConstructForTests<FDataflowSubGraphGetCurrentIndexNode> @ 1462c01b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowSubGraphGetCurrentIndexNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined4 *)((longlong)param_1 + 0x248) = 0;
  *(undefined ***)param_1 = &___7FDataflowSubGraphGetCurrentIndexNode__6B_;
  return;
}

// Destruct<FDataflowSubGraphGetCurrentIndexNode> @ 1462c01e0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSubGraphGetCurrentIndexNode>(void *param_1)

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

// Copy<FDataflowSubGraphGetCurrentIndexNode> @ 1462c01f0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSubGraphGetCurrentIndexNode>
          (void *param_1,void *param_2,int param_3)

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
      *(undefined4 *)((longlong)pvVar4 + 0x248) =
           *(undefined4 *)((longlong)param_2 + (0x248 - (longlong)param_1) + (longlong)pvVar4);
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x250);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowSubGraphOutputNode> @ 1462c0350

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSubGraphOutputNode>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 auStackX_8 [4];
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &FDataflowSubGraphOutputNode::_vftable__for__FDataflowNode__;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x2c0);
  *(undefined ***)((longlong)param_1 + 0x248) =
       &FDataflowSubGraphOutputNode::_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined4 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  auStackX_8[0] = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)auStackX_8);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x2c8));
  return;
}

// ConstructForTests<FDataflowSubGraphOutputNode> @ 1462c0360

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSubGraphOutputNode>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 auStackX_8 [4];
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &FDataflowSubGraphOutputNode::_vftable__for__FDataflowNode__;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x2c0);
  *(undefined ***)((longlong)param_1 + 0x248) =
       &FDataflowSubGraphOutputNode::_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined4 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  auStackX_8[0] = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)auStackX_8);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x2c8));
  return;
}

// Destruct<FDataflowSubGraphOutputNode> @ 1462c03b0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSubGraphOutputNode>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x2c8));
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  if (*(void **)((longlong)param_1 + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x260));
  if (*(void **)((longlong)param_1 + 0x250) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x250));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowSubGraphOutputNode> @ 1462c0400

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSubGraphOutputNode>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
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
    FDataflowDynamicConnections::operator=
              ((FDataflowDynamicConnections *)((longlong)pvVar3 + 0x250),
               (FDataflowDynamicConnections *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1)));
    pFVar1 = (FInstancedStruct *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x2c8 - (longlong)param_1));
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x2c8) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x2c8),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x2d0 - (longlong)param_1)));
    }
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2d8);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FDataflowSubGraphInputNode> @ 1462c0600

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSubGraphInputNode>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 auStackX_8 [4];
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &FDataflowSubGraphInputNode::_vftable__for__FDataflowNode__;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x2c0);
  *(undefined ***)((longlong)param_1 + 0x248) =
       &FDataflowSubGraphInputNode::_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined4 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  auStackX_8[0] = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)auStackX_8);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x2c8));
  return;
}

// ConstructForTests<FDataflowSubGraphInputNode> @ 1462c0610

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSubGraphInputNode>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 auStackX_8 [4];
  
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &FDataflowSubGraphInputNode::_vftable__for__FDataflowNode__;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x2c0);
  *(undefined ***)((longlong)param_1 + 0x248) =
       &FDataflowSubGraphInputNode::_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined4 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  auStackX_8[0] = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)auStackX_8);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x2c8));
  return;
}

// Destruct<FDataflowSubGraphInputNode> @ 1462c0620

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSubGraphInputNode>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x2c8));
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  if (*(void **)((longlong)param_1 + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x260));
  if (*(void **)((longlong)param_1 + 0x250) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x250));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowSubGraphInputNode> @ 1462c0730

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSubGraphInputNode>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
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
    FDataflowDynamicConnections::operator=
              ((FDataflowDynamicConnections *)((longlong)pvVar3 + 0x250),
               (FDataflowDynamicConnections *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1)));
    pFVar1 = (FInstancedStruct *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x2c8 - (longlong)param_1));
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x2c8) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x2c8),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x2d0 - (longlong)param_1)));
    }
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x2d8);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FDataflowInstance> @ 1462c0810

void __cdecl UE::CoreUObject::Private::Construct<FDataflowInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(void **)((longlong)param_1 + 0x30) = param_1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FDataflowInstance> @ 1462c0870

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(void **)((longlong)param_1 + 0x30) = param_1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FDataflowInstance> @ 1462c08d0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowInstance>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FDataflowInstance> @ 1462c0900

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowInstance>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      FDataflowVariableOverrides::operator=
                ((FDataflowVariableOverrides *)(puVar2 + 2),
                 (FDataflowVariableOverrides *)(puVar1 + 2));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[7] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[7]);
      }
      puVar2[7] = puVar1[7];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowVariableOverrides> @ 1462c0c40

void __cdecl UE::CoreUObject::Private::Construct<FDataflowVariableOverrides>(void *param_1)

{
  FInstancedStruct::FInstancedStruct(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FDataflowVariableOverrides> @ 1462c0c70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowVariableOverrides>(void *param_1)

{
  FInstancedStruct::FInstancedStruct(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FDataflowVariableOverrides> @ 1462c0ca0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowVariableOverrides>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  FInstancedStruct::Reset(param_1);
  return;
}

// Copy<FDataflowVariableOverrides> @ 1462c0cd0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowVariableOverrides>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FInstancedStruct *pFVar2;
  FGuid *pFVar3;
  FInstancedStruct *this;
  longlong *plVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ForAnyElementType *pFVar12;
  FPropertyBagPropertyDesc *pFVar13;
  longlong lVar14;
  UScriptStruct *pUVar15;
  undefined1 local_res8 [8];
  longlong local_res10;
  int local_res18;
  ForAnyElementType *local_res20;
  FGuid local_58;
  
  if (param_3 != 0) {
    lVar14 = (longlong)param_2 - (longlong)param_1;
    pFVar12 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    local_res18 = param_3;
    local_res10 = lVar14;
    do {
      this = (FInstancedStruct *)
             ((longlong)&(((FInstancedStruct *)param_1)->ScriptStruct).field0_0x0 + lVar14);
      local_res20 = pFVar12 + 5;
      if (param_1 != this) {
        FInstancedStruct::InitializeAs
                  (param_1,(((FInstancedStruct *)&this->ScriptStruct)->ScriptStruct).field0_0x0.
                           DebugPtr,this->StructMemory);
        iVar5 = *(int *)((longlong)&pFVar12[1].Data + 4);
        piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
        *(undefined4 *)&pFVar12[1].Data = 0;
        if (iVar5 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,pFVar12,0,piVar1);
        }
        iVar5 = *(int *)&this[1].StructMemory;
        pFVar2 = (FInstancedStruct *)((longlong)param_1 + 0x10);
        pUVar15 = (((FInstancedStruct *)&this[1].ScriptStruct)->ScriptStruct).field0_0x0.DebugPtr;
        plVar8 = &pUVar15->_padding_;
        while( true ) {
          if (*(int *)&this[1].StructMemory != iVar5) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          lVar14 = local_res10;
          if (pUVar15 == (UScriptStruct *)(plVar8 + (longlong)iVar5 * 2)) break;
          local_58._0_8_ = pUVar15->_padding_;
          local_58._8_8_ = pUVar15->_padding_;
          pFVar13 = FInstancedPropertyBag::FindPropertyDescByID
                              ((FInstancedPropertyBag *)this,&local_58);
          if (pFVar13 != (FPropertyBagPropertyDesc *)0x0) {
            pUVar6 = (pFVar2->ScriptStruct).field0_0x0.DebugPtr;
            pFVar3 = &pFVar13->ID;
            if (((pUVar6 <= pFVar3) &&
                (pFVar3 < &pUVar6->_padding_ +
                          (longlong)
                          *(int *)((longlong)
                                   &((FInstancedStruct *)((longlong)param_1 + 0x10))->StructMemory +
                                  4) * 2)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            iVar11 = *(int *)&((FInstancedStruct *)((longlong)param_1 + 0x10))->StructMemory;
            if (iVar11 == *(int *)((longlong)
                                   &((FInstancedStruct *)((longlong)param_1 + 0x10))->StructMemory +
                                  4)) {
              iVar11 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,(ForAnyElementType *)pFVar2,piVar1);
            }
            *(int *)&((FInstancedStruct *)((longlong)param_1 + 0x10))->StructMemory = iVar11 + 1;
            lVar14 = *(longlong *)&(pFVar13->ID).C;
            plVar4 = &((pFVar2->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + (longlong)iVar11 * 2
            ;
            *plVar4 = *(longlong *)pFVar3;
            plVar4[1] = lVar14;
          }
          pUVar15 = (UScriptStruct *)&pUVar15->_padding_;
        }
      }
      local_res18 = local_res18 + -1;
      pFVar12 = local_res20;
      param_1 = &((FInstancedStruct *)((longlong)param_1 + 0x20))->StructMemory;
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FDataflowDynamicConnections> @ 1462c0f60

void __cdecl UE::CoreUObject::Private::Construct<FDataflowDynamicConnections>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 local_res8 [4];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x70);
  local_res8[0] = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)local_res8);
  return;
}

// ConstructForTests<FDataflowDynamicConnections> @ 1462c0fc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowDynamicConnections>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 local_res8 [4];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x70);
  local_res8[0] = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)local_res8);
  return;
}

// Destruct<FDataflowDynamicConnections> @ 1462c1020

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowDynamicConnections>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FDataflowDynamicConnections> @ 1462c1070

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowDynamicConnections>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
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
      this = (TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(pFVar5 + 2);
      if (this != (TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(pFVar2 + 2)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(pFVar5 + 9),(int *)(pFVar5 + 0xb),
                   (ForElementType<FSetElementId> *)(pFVar2 + 9),*(int *)&pFVar2[0xb].Data);
        iVar3 = *(int *)&pFVar2[3].Data;
        TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar3);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,4,iVar3,(ForAnyElementType *)this,(int *)(pFVar5 + 3),
                   (int *)((longlong)&pFVar5[3].Data + 4));
        *(undefined4 *)&pFVar5[8].Data = *(undefined4 *)&pFVar2[8].Data;
        *(undefined4 *)((longlong)&pFVar5[8].Data + 4) =
             *(undefined4 *)((longlong)&pFVar2[8].Data + 4);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar5 + 4) !=
            (TBitArray<FDefaultBitArrayAllocator> *)(pFVar2 + 4)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar5 + 4),
                     (TBitArray<FDefaultBitArrayAllocator> *)(pFVar2 + 4));
        }
        if (iVar3 != 0) {
          memcpy(*(void **)this,*(void **)(pFVar2 + 2),(longlong)iVar3 << 5);
        }
      }
      *(undefined1 *)&pFVar5[0xc].Data = *(undefined1 *)&pFVar2[0xc].Data;
      pFVar5[0xd].Data = pFVar2[0xd].Data;
      pFVar5[0xe].Data = pFVar2[0xe].Data;
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 0xf;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowPreviewCacheParams> @ 1462c1530

void __cdecl UE::CoreUObject::Private::Construct<FDataflowPreviewCacheParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)param_1 = 0x1e;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FDataflowPreviewCacheParams> @ 1462c1570

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowPreviewCacheParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40a00000;
  return;
}

// Destruct<FDataflowPreviewCacheParams> @ 1462c15a0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowPreviewCacheParams>(void *param_1)

{
  return;
}

// Copy<FDataflowPreviewCacheParams> @ 1462c1630

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowPreviewCacheParams>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowProxyElement> @ 1462c17b0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowProxyElement>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowBaseElement__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 8),L"None");
  *(undefined2 *)((longlong)param_1 + 0x58) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined ***)param_1 = &___7FDataflowProxyElement__6B_;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FDataflowProxyElement> @ 1462c1800

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowProxyElement>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowBaseElement__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 8),L"None");
  *(undefined2 *)((longlong)param_1 + 0x58) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined ***)param_1 = &___7FDataflowProxyElement__6B_;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FDataflowProxyElement> @ 1462c1850

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowProxyElement>(void *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)((longlong)param_1 + 0x60);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined ***)param_1 = &___7FDataflowBaseElement__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FDataflowProxyElement> @ 1462c18a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowProxyElement>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    uVar7 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
    uVar7 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar7;
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x48);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x48) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined1 *)((longlong)param_1 + 0x58) = *(undefined1 *)((longlong)param_2 + 0x58);
    *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
    *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
    puVar2 = *(undefined8 **)((longlong)param_2 + 0x60);
    puVar3 = *(undefined8 **)((longlong)param_1 + 0x60);
    if (puVar3 != puVar2) {
      *(undefined8 **)((longlong)param_1 + 0x60) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      }
      if (puVar3 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    param_2 = (void *)((longlong)param_2 + 0x68);
    param_1 = (void *)((longlong)param_1 + 0x68);
  }
  return true;
}

// Construct<FStringValuePair> @ 1462c2de0

void __cdecl UE::CoreUObject::Private::Construct<FStringValuePair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FStringValuePair> @ 1462c2e00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStringValuePair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FStringValuePair> @ 1462c2e20

void __cdecl UE::CoreUObject::Private::Destruct<FStringValuePair>(void *param_1)

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

// Copy<FStringValuePair> @ 1462c2f70

bool __cdecl
UE::CoreUObject::Private::Copy<FStringValuePair>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowNodeSphereCoveringDebugDrawSettings> @ 1462c35b0

void __cdecl
UE::CoreUObject::Private::Construct<FDataflowNodeSphereCoveringDebugDrawSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xc))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  return;
}

// ConstructForTests<FDataflowNodeSphereCoveringDebugDrawSettings> @ 1462c3600

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowNodeSphereCoveringDebugDrawSettings>
          (void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  FVar1 = FLinearColor::Red;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xc))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  return;
}

// Destruct<FDataflowNodeSphereCoveringDebugDrawSettings> @ 1462c3650

void __cdecl
UE::CoreUObject::Private::Destruct<FDataflowNodeSphereCoveringDebugDrawSettings>(void *param_1)

{
  return;
}

// Copy<FDataflowNodeSphereCoveringDebugDrawSettings> @ 1462c3720

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowNodeSphereCoveringDebugDrawSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowNodeDebugDrawSettings> @ 1462c4c90

void __cdecl UE::CoreUObject::Private::Construct<FDataflowNodeDebugDrawSettings>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  FVar1 = FLinearColor::Gray;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ConstructForTests<FDataflowNodeDebugDrawSettings> @ 1462c4e30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowNodeDebugDrawSettings>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined2 *)param_1 = 0x100;
  FVar1 = FLinearColor::Gray;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FDataflowNodeDebugDrawSettings> @ 1462c4fb0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowNodeDebugDrawSettings>(void *param_1)

{
  return;
}

// Copy<FDataflowNodeDebugDrawSettings> @ 1462c58e0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowNodeDebugDrawSettings>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FGetDataflowVariableNode> @ 1462c5df0

void __cdecl UE::CoreUObject::Private::Construct<FGetDataflowVariableNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetDataflowVariableNode__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x250));
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined1 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  return;
}

// ConstructForTests<FGetDataflowVariableNode> @ 1462c5e40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGetDataflowVariableNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetDataflowVariableNode__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x250));
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined1 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  return;
}

// Destruct<FGetDataflowVariableNode> @ 1462c5e90

void __cdecl UE::CoreUObject::Private::Destruct<FGetDataflowVariableNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FGetDataflowVariableNode__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x250));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FGetDataflowVariableNode> @ 1462c5ef0

bool __cdecl
UE::CoreUObject::Private::Copy<FGetDataflowVariableNode>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
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
    pFVar1 = (FInstancedStruct *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x250) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x250),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1)));
    }
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x270) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x274) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x274 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x280);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FDataflowImageToTextureNode> @ 1462c63f0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowImageToTextureNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowImageToTextureNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0x201;
  return;
}

// ConstructForTests<FDataflowImageToTextureNode> @ 1462c6510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowImageToTextureNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowImageToTextureNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0x201;
  return;
}

// Destruct<FDataflowImageToTextureNode> @ 1462c6570

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowImageToTextureNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowImageToTextureNode> @ 1462c65a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowImageToTextureNode>(void *param_1,void *param_2,int param_3)

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
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar3 + 0x248),
               (FDataflowImage *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x278) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x280);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FDataflowColorRamp> @ 1462c6740

void __cdecl UE::CoreUObject::Private::Construct<FDataflowColorRamp>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FDataflowColorCurveOwner::FDataflowColorCurveOwner(param_1);
  return;
}

// Construct<FDataflowTextureToImageNode> @ 1462c6770

void __cdecl UE::CoreUObject::Private::Construct<FDataflowTextureToImageNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowTextureToImageNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined4 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0x201;
  return;
}

// ConstructForTests<FDataflowColorRamp> @ 1462c67d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowColorRamp>(void *param_1)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  TArray<FRichCurve,TSizedDefaultAllocator<32>_> *this;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  this = (TArray<FRichCurve,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined ***)param_1 = &___7FDataflowColorCurveOwner__6B_;
  piVar3 = (int *)((longlong)param_1 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *piVar3 = 0;
  piVar4 = (int *)((longlong)param_1 + 0x44);
  *piVar4 = 0;
  piVar5 = (int *)((longlong)param_1 + 0x60);
  *piVar5 = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)param_1 + 0x34) = 0;
  pFVar2->Data = (FScriptContainerElement *)0x0;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,4,pFVar1,(int *)((longlong)param_1 + 0x30),
                     (int *)((longlong)param_1 + 0x34));
  DefaultConstructItems<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int>
            (pFVar1->Data + (longlong)iVar9 * 0x10,4);
  iVar9 = *piVar3;
  if (iVar9 < 4) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,4 - iVar9,pFVar2,piVar3,piVar4);
    DefaultConstructItems<FRichCurveEditInfoTemplate<FRealCurve_*>,int>
              (pFVar2->Data + (longlong)iVar10 * 0x10,4 - iVar9);
  }
  else if (4 < iVar9) {
    iVar9 = iVar9 + -4;
    if (iVar9 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else if (iVar9 == 0) goto LAB_1462cd9e6;
    iVar10 = (*piVar3 - iVar9) + -4;
    if (iVar10 != 0) {
      memmove(pFVar2->Data + 0x40,pFVar2->Data + 0x40 + (longlong)iVar9 * 0x10,(longlong)iVar10 << 4
             );
    }
    *piVar3 = *piVar3 - iVar9;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,pFVar2,*piVar3,piVar4);
  }
LAB_1462cd9e6:
  iVar9 = *piVar5;
  if (iVar9 < 4) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x80,8,4 - iVar9,(ForAnyElementType *)this,piVar5,
                        (int *)((longlong)param_1 + 100));
    DefaultConstructItems<FRichCurve,int>
              ((this->AllocatorInstance).Data + (longlong)iVar10 * 0x80,4 - iVar9);
  }
  else if (4 < iVar9) {
    iVar9 = iVar9 + -4;
    if (iVar9 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else if (iVar9 == 0) goto LAB_1462cda91;
    TArray<FRichCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this,4,iVar9);
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,(ForAnyElementType *)this,*piVar5,(int *)((longlong)param_1 + 100));
  }
LAB_1462cda91:
  if ((*piVar5 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->AllocatorInstance).Data;
  if ((*piVar3 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FScriptContainerElement **)(pFVar2->Data + 8) = pFVar6;
  if ((*piVar5 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->AllocatorInstance).Data;
  if ((*(int *)((longlong)param_1 + 0x30) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FScriptContainerElement **)(pFVar1->Data + 8) = pFVar6;
  if ((*piVar5 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->AllocatorInstance).Data;
  if ((*piVar3 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FScriptContainerElement **)(pFVar2->Data + 0x18) = pFVar6 + 0x80;
  if ((*piVar5 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->AllocatorInstance).Data;
  if ((*(int *)((longlong)param_1 + 0x30) < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FScriptContainerElement **)(pFVar1->Data + 0x18) = pFVar6 + 0x80;
  if ((*piVar5 < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->AllocatorInstance).Data;
  if ((*piVar3 < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FScriptContainerElement **)(pFVar2->Data + 0x28) = pFVar6 + 0x100;
  if ((*piVar5 < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->AllocatorInstance).Data;
  if ((*(int *)((longlong)param_1 + 0x30) < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FScriptContainerElement **)(pFVar1->Data + 0x28) = pFVar6 + 0x100;
  if ((*piVar5 < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->AllocatorInstance).Data;
  if ((*piVar3 < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FScriptContainerElement **)(pFVar2->Data + 0x38) = pFVar6 + 0x180;
  if ((*piVar5 < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->AllocatorInstance).Data;
  if ((*(int *)((longlong)param_1 + 0x30) < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FScriptContainerElement **)(pFVar1->Data + 0x38) = pFVar6 + 0x180;
  return;
}

// ConstructForTests<FDataflowTextureToImageNode> @ 1462c67e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowTextureToImageNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowTextureToImageNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined4 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0x201;
  return;
}

// Destruct<FDataflowColorRamp> @ 1462c6840

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowColorRamp>(void *param_1)

{
  DestructItems<FRichCurve,int>
            (*(FRichCurve **)((longlong)param_1 + 0x58),*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 8));
  *(undefined ***)param_1 = &___7FCurveOwnerInterface__6B_;
  return;
}

// Destruct<FDataflowTextureToImageNode> @ 1462c6850

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowTextureToImageNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x260));
  }
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowColorRamp> @ 1462c6880

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowColorRamp>(void *param_1,void *param_2,int param_3)

{
  FDataflowColorCurveOwner *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FDataflowColorCurveOwner::operator=
                (this,(FDataflowColorCurveOwner *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FDataflowTextureToImageNode> @ 1462c68d0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowTextureToImageNode>(void *param_1,void *param_2,int param_3)

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
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar3 + 0x250),
               (FDataflowImage *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x278);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// Construct<FDataflowTextureTerminalNode> @ 1462c69a0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowTextureTerminalNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowTextureTerminalNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0x201;
  return;
}

// ConstructForTests<FDataflowTextureTerminalNode> @ 1462c6a00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowTextureTerminalNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowTextureTerminalNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0x201;
  return;
}

// Destruct<FDataflowTextureTerminalNode> @ 1462c6a60

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowTextureTerminalNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  *(undefined ***)param_1 = &___7FDataflowTerminalNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowTextureTerminalNode> @ 1462c6aa0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowTextureTerminalNode>
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
    FDataflowImage::operator=
              ((FDataflowImage *)((longlong)pvVar3 + 0x248),
               (FDataflowImage *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x270) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x278);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// CreateNewDataflowContent<UDataflowBaseContent> @ 1462c89d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDataflowBaseContent> __cdecl
UE::DataflowContextHelpers::CreateNewDataflowContent<UDataflowBaseContent>
          (TObjectPtr<UObject> *param_1)

{
  int iVar1;
  UDataflow *this;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TObjectPtr<UDataflowBaseContent> TVar6;
  UClass *pUVar7;
  longlong *plVar8;
  FProperty *this_00;
  undefined8 *puVar9;
  UPackage *pUVar10;
  size_t sVar11;
  FString *pFVar12;
  FName *pFVar13;
  TObjectPtr<UObject>_u_0 this_01;
  UClass *pUVar14;
  ForAnyElementType FVar15;
  int iVar16;
  TObjectPtr<UObject>_u_0 *in_RDX;
  UDataflow *pUVar17;
  UDataflow *pUVar18;
  undefined1 auStackY_218 [32];
  FString local_1d8;
  TObjectPtr<UObject>_u_0 local_1c8;
  FString local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  UDataflow *local_180;
  UDataflow *local_178;
  FString local_170;
  FString local_160;
  wchar_t *local_148;
  undefined8 uStack_140;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FString local_128;
  FString local_118;
  undefined1 local_108 [16];
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((in_RDX->DebugPtr == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContentOwner.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowContent.cpp"
                         ,0xaa,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6.field0_0x0 = (TObjectPtr<UDataflowBaseContent>_u_0)(*pcVar3)();
    return (TObjectPtr<UDataflowBaseContent>)TVar6.field0_0x0;
  }
  this = (UDataflow *)in_RDX->DebugPtr;
  pUVar17 = (UDataflow *)0x0;
  bVar4 = true;
  if (this == (UDataflow *)0x0) {
LAB_1462c8a79:
    pUVar18 = pUVar17;
    if (this != (UDataflow *)0x0) {
      pUVar7 = UDataflowInstanceInterface::StaticClass();
      plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar7);
      if (plVar8 != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8);
        pUVar17 = (UDataflow *)*plVar8;
        pUVar18 = pUVar17;
        if (pUVar17 != (UDataflow *)0x0) goto LAB_1462c8ad5;
      }
      pUVar18 = pUVar17;
      if (((UStruct *)this->_padding_ != (UStruct *)0x0) &&
         (this_00 = UStruct::FindPropertyByName
                              ((UStruct *)this->_padding_,
                               Dataflow::InstanceUtils::DataflowAssetPropertyName),
         this_00 != (FProperty *)0x0)) {
        puVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
        pUVar18 = (UDataflow *)*puVar9;
      }
    }
  }
  else {
    pUVar7 = UDataflow::StaticClass();
    iVar16 = (int)pUVar7->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar16) ||
       (pUVar18 = this,
       (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
       &pUVar7->_padding_)) goto LAB_1462c8a79;
  }
LAB_1462c8ad5:
  if (bDataflowEnableContextCaching == false) {
    local_1a8 = 0;
    pUVar7 = UDataflowBaseContent::StaticClass();
    pUVar10 = GetTransientPackage();
    local_1a0 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar14 = UDataflowBaseContent::StaticClass();
    CheckIsClassChildOf_Internal(pUVar14,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar10;
    this_01.DebugPtr = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (GC::GIsIncrementalReachabilityPending == false) {
      if ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0)
      goto LAB_1462c8fdd;
    }
    else if ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0) {
      GC::MarkAsReachable(this_01.DebugPtr);
LAB_1462c8fdd:
      pUVar7 = UDataflowBaseContent::StaticClass();
      iVar16 = (int)pUVar7->_padding_;
      if ((iVar16 <= *(int *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x30) +
           (longlong)iVar16 * 8) == &pUVar7->_padding_)) {
        this_01.DebugPtr[4].field_0x1a = 0;
        UDataflowBaseContent::SetDataflowOwner
                  ((UDataflowBaseContent *)this_01.DebugPtr,
                   (TObjectPtr<UObject> *)&in_RDX->ObjectPtr);
        pcVar3 = *(code **)(*(longlong *)this_01.DebugPtr + 0x2b8);
        local_178 = pUVar18;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UDataflow *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar18);
        }
        (*pcVar3)(this_01.DebugPtr,&local_178);
      }
    }
  }
  else {
    pUVar7 = UDataflowBaseContent::StaticClass();
    pUVar10 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)in_RDX->DebugPtr);
    local_198 = (FName)pUVar10->_padding_;
    ::FName::ToString(&local_198,&local_118);
    FPackageName::GetLongPackagePath(&local_128,&local_118);
    if (in_RDX->DebugPtr == (UObject *)0x0) {
      local_190 = (FName)&local_1b0;
      local_1b0 = 0;
    }
    else {
      local_190 = CoreUObject::Private::GetFName((UObject *)local_108);
    }
    local_190 = *(FName *)local_190;
    ::FName::ToString(&local_190,&local_170);
    ::FString::PrintfImpl(&local_1d8,L"%s/Cache/Dataflow/DataflowContext_%s");
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (pUVar18 != (UDataflow *)0x0) {
      local_188 = (FName)pUVar18->_padding_;
      ::FName::ToString(&local_188,&local_160);
      ::FString::PrintfImpl(&local_1c0,L"%s_%s");
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      local_1d8.Data.AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
      local_1d8.Data.ArrayNum = local_1c0.Data.ArrayNum;
      local_1d8.Data.ArrayMax = local_1c0.Data.ArrayMax;
      local_1c0.Data.ArrayNum = 0;
      local_1c0.Data.ArrayMax = 0;
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      FVar15.Data = local_1d8.Data.AllocatorInstance.Data;
    }
    pUVar10 = FindPackage((UObject *)0x0,(wchar_t *)FVar15.Data);
    if (pUVar10 == (UPackage *)0x0) {
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_1d8.Data.ArrayNum != 0) {
        FVar15.Data = local_1d8.Data.AllocatorInstance.Data;
      }
      pUVar10 = CreatePackage((wchar_t *)FVar15.Data);
    }
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    local_148 = (wchar_t *)0x0;
    iStack_130 = 0;
    if (local_1d8.Data.ArrayNum == 0) {
      local_138 = (FScriptContainerElement *)0x15060d16c;
LAB_1462c8c66:
      sVar11 = wcslen((wchar_t *)local_138);
      iStack_130 = (int)sVar11;
    }
    else {
      local_138 = local_1d8.Data.AllocatorInstance.Data;
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1462c8c66;
    }
    local_e8._12_4_ = uStack_12c;
    local_e8.Size = iStack_130;
    local_f8.DataPtr = local_148;
    local_f8.Size = (int)uStack_140;
    local_f8._12_4_ = uStack_140._4_4_;
    local_e8.DataPtr = (wchar_t *)local_138;
    local_1c8.DebugPtr =
         StaticLoadObject(pUVar7,(UObject *)pUVar10,&local_e8,&local_f8,0,(UPackageMap *)0x0,true,
                          (FLinkerInstancingContext *)0x0);
    if ((GC::GIsIncrementalReachabilityPending == false) ||
       ((UDataflowBaseContent *)local_1c8.DebugPtr == (UDataflowBaseContent *)0x0)) {
      if ((UDataflowBaseContent *)local_1c8.DebugPtr != (UDataflowBaseContent *)0x0)
      goto LAB_1462c8cd5;
LAB_1462c8d23:
      pFVar12 = FPackageName::GetLongPackageAssetName(&local_d8,&local_1d8);
      iVar1 = (pFVar12->Data).ArrayNum;
      iVar16 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar16 = 0;
      }
      pFVar13 = ::FName::FName((FName *)(local_108 + 8),iVar16,
                               (wchar_t *)(pFVar12->Data).AllocatorInstance.Data,FNAME_Add);
      FVar2 = *pFVar13;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      this_01.DebugPtr =
           NewObject<UObject>((UObject *)pUVar10,pUVar7,FVar2,
                              RF_Transactional|RF_Standalone|RF_Public,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((GC::GIsIncrementalReachabilityPending == false) ||
         ((UDataflowBaseContent *)this_01.DebugPtr == (UDataflowBaseContent *)0x0)) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_01.DebugPtr);
        if ((UDataflowBaseContent *)this_01.DebugPtr == (UDataflowBaseContent *)0x0)
        goto LAB_1462c8e24;
      }
      else {
        GC::MarkAsReachable(this_01.DebugPtr);
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_01.DebugPtr);
      }
      pUVar7 = UDataflowBaseContent::StaticClass();
      iVar16 = (int)pUVar7->_padding_;
      if ((iVar16 <= *(int *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x30) +
           (longlong)iVar16 * 8) == &pUVar7->_padding_)) {
        this_01.DebugPtr[4].field_0x1a = 1;
        UDataflowBaseContent::SetDataflowOwner
                  ((UDataflowBaseContent *)this_01.DebugPtr,
                   (TObjectPtr<UObject> *)&in_RDX->ObjectPtr);
        pcVar3 = *(code **)(*(longlong *)this_01.DebugPtr + 0x2b8);
        local_180 = pUVar18;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UDataflow *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar18);
        }
        (*pcVar3)(this_01.DebugPtr,&local_180);
      }
    }
    else {
      GC::MarkAsReachable(local_1c8.DebugPtr);
LAB_1462c8cd5:
      if ((((pUVar18 != (UDataflow *)0x0) &&
           (bVar5 = BindContextToGraph((TObjectPtr<UObject> *)&local_1c8.ObjectPtr,pUVar18), bVar5))
          && (bVar5 = ValidateCachedNodeHash((TObjectPtr<UObject> *)&local_1c8.ObjectPtr,pUVar18),
             bVar5)) &&
         (bVar5 = ResetCacheTimestamp((TObjectPtr<UObject> *)&local_1c8.ObjectPtr,pUVar18), bVar5))
      {
        bVar4 = false;
      }
      if (((UDataflowBaseContent *)local_1c8.DebugPtr == (UDataflowBaseContent *)0x0) ||
         (this_01 = local_1c8, bVar4)) goto LAB_1462c8d23;
    }
LAB_1462c8e24:
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0) {
    pUVar7 = UDataflowBaseContent::StaticClass();
    iVar16 = (int)pUVar7->_padding_;
    if (((iVar16 <= *(int *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar16 * 8
          ) == &pUVar7->_padding_)) &&
       ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0)) {
      UDataflowBaseContent::SetDataflowOwner
                ((UDataflowBaseContent *)this_01.DebugPtr,(TObjectPtr<UObject> *)&in_RDX->ObjectPtr)
      ;
    }
  }
  if ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0) {
    pUVar7 = UDataflowBaseContent::StaticClass();
    iVar16 = (int)pUVar7->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar16 * 8)
        == &pUVar7->_padding_)) goto LAB_1462c8ed6;
  }
  this_01.DebugPtr = (UObject *)0x0;
LAB_1462c8ed6:
  (param_1->field0_0x0).DebugPtr = (UObject *)this_01;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0)) {
    GC::MarkAsReachable(this_01.DebugPtr);
  }
  return (TObjectPtr<UDataflowBaseContent>)(TObjectPtr<UDataflowBaseContent>_u_0)param_1;
}

// CreateNewDataflowContent<UDataflowSkeletalContent> @ 1462c9060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDataflowSkeletalContent> __cdecl
UE::DataflowContextHelpers::CreateNewDataflowContent<UDataflowSkeletalContent>
          (TObjectPtr<UObject> *param_1)

{
  int iVar1;
  UDataflow *this;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TObjectPtr<UDataflowSkeletalContent> TVar6;
  UClass *pUVar7;
  longlong *plVar8;
  FProperty *this_00;
  undefined8 *puVar9;
  UPackage *pUVar10;
  size_t sVar11;
  FString *pFVar12;
  FName *pFVar13;
  TObjectPtr<UObject>_u_0 this_01;
  UClass *pUVar14;
  ForAnyElementType FVar15;
  int iVar16;
  TObjectPtr<UObject>_u_0 *in_RDX;
  UDataflow *pUVar17;
  UDataflow *pUVar18;
  undefined1 auStackY_218 [32];
  FString local_1d8;
  TObjectPtr<UObject>_u_0 local_1c8;
  FString local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  UDataflow *local_180;
  UDataflow *local_178;
  FString local_170;
  FString local_160;
  wchar_t *local_148;
  undefined8 uStack_140;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FString local_128;
  FString local_118;
  undefined1 local_108 [16];
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((in_RDX->DebugPtr == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContentOwner.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowContent.cpp"
                         ,0xaa,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6.field0_0x0 = (TObjectPtr<UDataflowSkeletalContent>_u_0)(*pcVar3)();
    return (TObjectPtr<UDataflowSkeletalContent>)TVar6.field0_0x0;
  }
  this = (UDataflow *)in_RDX->DebugPtr;
  pUVar17 = (UDataflow *)0x0;
  bVar4 = true;
  if (this == (UDataflow *)0x0) {
LAB_1462c9109:
    pUVar18 = pUVar17;
    if (this != (UDataflow *)0x0) {
      pUVar7 = UDataflowInstanceInterface::StaticClass();
      plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar7);
      if (plVar8 != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8);
        pUVar17 = (UDataflow *)*plVar8;
        pUVar18 = pUVar17;
        if (pUVar17 != (UDataflow *)0x0) goto LAB_1462c9165;
      }
      pUVar18 = pUVar17;
      if (((UStruct *)this->_padding_ != (UStruct *)0x0) &&
         (this_00 = UStruct::FindPropertyByName
                              ((UStruct *)this->_padding_,
                               Dataflow::InstanceUtils::DataflowAssetPropertyName),
         this_00 != (FProperty *)0x0)) {
        puVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
        pUVar18 = (UDataflow *)*puVar9;
      }
    }
  }
  else {
    pUVar7 = UDataflow::StaticClass();
    iVar16 = (int)pUVar7->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar16) ||
       (pUVar18 = this,
       (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
       &pUVar7->_padding_)) goto LAB_1462c9109;
  }
LAB_1462c9165:
  if (bDataflowEnableContextCaching == false) {
    local_1a8 = 0;
    pUVar7 = UDataflowSkeletalContent::StaticClass();
    pUVar10 = GetTransientPackage();
    local_1a0 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar14 = UDataflowSkeletalContent::StaticClass();
    CheckIsClassChildOf_Internal(pUVar14,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar10;
    this_01.DebugPtr = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (GC::GIsIncrementalReachabilityPending == false) {
      if ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0)
      goto LAB_1462c966d;
    }
    else if ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0) {
      GC::MarkAsReachable(this_01.DebugPtr);
LAB_1462c966d:
      pUVar7 = UDataflowBaseContent::StaticClass();
      iVar16 = (int)pUVar7->_padding_;
      if ((iVar16 <= *(int *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x30) +
           (longlong)iVar16 * 8) == &pUVar7->_padding_)) {
        this_01.DebugPtr[4].field_0x1a = 0;
        UDataflowBaseContent::SetDataflowOwner
                  ((UDataflowBaseContent *)this_01.DebugPtr,
                   (TObjectPtr<UObject> *)&in_RDX->ObjectPtr);
        pcVar3 = *(code **)(*(longlong *)this_01.DebugPtr + 0x2b8);
        local_178 = pUVar18;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UDataflow *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar18);
        }
        (*pcVar3)(this_01.DebugPtr,&local_178);
      }
    }
  }
  else {
    pUVar7 = UDataflowSkeletalContent::StaticClass();
    pUVar10 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)in_RDX->DebugPtr);
    local_198 = (FName)pUVar10->_padding_;
    ::FName::ToString(&local_198,&local_118);
    FPackageName::GetLongPackagePath(&local_128,&local_118);
    if (in_RDX->DebugPtr == (UObject *)0x0) {
      local_190 = (FName)&local_1b0;
      local_1b0 = 0;
    }
    else {
      local_190 = CoreUObject::Private::GetFName((UObject *)local_108);
    }
    local_190 = *(FName *)local_190;
    ::FName::ToString(&local_190,&local_170);
    ::FString::PrintfImpl(&local_1d8,L"%s/Cache/Dataflow/DataflowContext_%s");
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (pUVar18 != (UDataflow *)0x0) {
      local_188 = (FName)pUVar18->_padding_;
      ::FName::ToString(&local_188,&local_160);
      ::FString::PrintfImpl(&local_1c0,L"%s_%s");
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      local_1d8.Data.AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
      local_1d8.Data.ArrayNum = local_1c0.Data.ArrayNum;
      local_1d8.Data.ArrayMax = local_1c0.Data.ArrayMax;
      local_1c0.Data.ArrayNum = 0;
      local_1c0.Data.ArrayMax = 0;
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      FVar15.Data = local_1d8.Data.AllocatorInstance.Data;
    }
    pUVar10 = FindPackage((UObject *)0x0,(wchar_t *)FVar15.Data);
    if (pUVar10 == (UPackage *)0x0) {
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_1d8.Data.ArrayNum != 0) {
        FVar15.Data = local_1d8.Data.AllocatorInstance.Data;
      }
      pUVar10 = CreatePackage((wchar_t *)FVar15.Data);
    }
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    local_148 = (wchar_t *)0x0;
    iStack_130 = 0;
    if (local_1d8.Data.ArrayNum == 0) {
      local_138 = (FScriptContainerElement *)0x15060d16c;
LAB_1462c92f6:
      sVar11 = wcslen((wchar_t *)local_138);
      iStack_130 = (int)sVar11;
    }
    else {
      local_138 = local_1d8.Data.AllocatorInstance.Data;
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1462c92f6;
    }
    local_e8._12_4_ = uStack_12c;
    local_e8.Size = iStack_130;
    local_f8.DataPtr = local_148;
    local_f8.Size = (int)uStack_140;
    local_f8._12_4_ = uStack_140._4_4_;
    local_e8.DataPtr = (wchar_t *)local_138;
    local_1c8.DebugPtr =
         StaticLoadObject(pUVar7,(UObject *)pUVar10,&local_e8,&local_f8,0,(UPackageMap *)0x0,true,
                          (FLinkerInstancingContext *)0x0);
    if ((GC::GIsIncrementalReachabilityPending == false) ||
       ((UDataflowBaseContent *)local_1c8.DebugPtr == (UDataflowBaseContent *)0x0)) {
      if ((UDataflowBaseContent *)local_1c8.DebugPtr != (UDataflowBaseContent *)0x0)
      goto LAB_1462c9365;
LAB_1462c93b3:
      pFVar12 = FPackageName::GetLongPackageAssetName(&local_d8,&local_1d8);
      iVar1 = (pFVar12->Data).ArrayNum;
      iVar16 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar16 = 0;
      }
      pFVar13 = ::FName::FName((FName *)(local_108 + 8),iVar16,
                               (wchar_t *)(pFVar12->Data).AllocatorInstance.Data,FNAME_Add);
      FVar2 = *pFVar13;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      this_01.DebugPtr =
           NewObject<UObject>((UObject *)pUVar10,pUVar7,FVar2,
                              RF_Transactional|RF_Standalone|RF_Public,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((GC::GIsIncrementalReachabilityPending == false) ||
         ((UDataflowBaseContent *)this_01.DebugPtr == (UDataflowBaseContent *)0x0)) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_01.DebugPtr);
        if ((UDataflowBaseContent *)this_01.DebugPtr == (UDataflowBaseContent *)0x0)
        goto LAB_1462c94b4;
      }
      else {
        GC::MarkAsReachable(this_01.DebugPtr);
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_01.DebugPtr);
      }
      pUVar7 = UDataflowBaseContent::StaticClass();
      iVar16 = (int)pUVar7->_padding_;
      if ((iVar16 <= *(int *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x30) +
           (longlong)iVar16 * 8) == &pUVar7->_padding_)) {
        this_01.DebugPtr[4].field_0x1a = 1;
        UDataflowBaseContent::SetDataflowOwner
                  ((UDataflowBaseContent *)this_01.DebugPtr,
                   (TObjectPtr<UObject> *)&in_RDX->ObjectPtr);
        pcVar3 = *(code **)(*(longlong *)this_01.DebugPtr + 0x2b8);
        local_180 = pUVar18;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UDataflow *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar18);
        }
        (*pcVar3)(this_01.DebugPtr,&local_180);
      }
    }
    else {
      GC::MarkAsReachable(local_1c8.DebugPtr);
LAB_1462c9365:
      if ((((pUVar18 != (UDataflow *)0x0) &&
           (bVar5 = BindContextToGraph((TObjectPtr<UObject> *)&local_1c8.ObjectPtr,pUVar18), bVar5))
          && (bVar5 = ValidateCachedNodeHash((TObjectPtr<UObject> *)&local_1c8.ObjectPtr,pUVar18),
             bVar5)) &&
         (bVar5 = ResetCacheTimestamp((TObjectPtr<UObject> *)&local_1c8.ObjectPtr,pUVar18), bVar5))
      {
        bVar4 = false;
      }
      if (((UDataflowBaseContent *)local_1c8.DebugPtr == (UDataflowBaseContent *)0x0) ||
         (this_01 = local_1c8, bVar4)) goto LAB_1462c93b3;
    }
LAB_1462c94b4:
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0) {
    pUVar7 = UDataflowBaseContent::StaticClass();
    iVar16 = (int)pUVar7->_padding_;
    if (((iVar16 <= *(int *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar16 * 8
          ) == &pUVar7->_padding_)) &&
       ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0)) {
      UDataflowBaseContent::SetDataflowOwner
                ((UDataflowBaseContent *)this_01.DebugPtr,(TObjectPtr<UObject> *)&in_RDX->ObjectPtr)
      ;
    }
  }
  if ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0) {
    pUVar7 = UDataflowSkeletalContent::StaticClass();
    iVar16 = (int)pUVar7->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(this_01.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar16 * 8)
        == &pUVar7->_padding_)) goto LAB_1462c9566;
  }
  this_01.DebugPtr = (UObject *)0x0;
LAB_1462c9566:
  (param_1->field0_0x0).DebugPtr = (UObject *)this_01;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UDataflowBaseContent *)this_01.DebugPtr != (UDataflowBaseContent *)0x0)) {
    GC::MarkAsReachable(this_01.DebugPtr);
  }
  return (TObjectPtr<UDataflowSkeletalContent>)(TObjectPtr<UDataflowSkeletalContent>_u_0)param_1;
}

// DereferenceIfNecessary<FDataflowCallSubGraphNode,FDataflowCallSubGraphNode_*_&> @ 1462c97d0

FDataflowCallSubGraphNode * __cdecl
UE::Core::Private::DereferenceIfNecessary<FDataflowCallSubGraphNode,FDataflowCallSubGraphNode_*_&>
          (FDataflowCallSubGraphNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UDataflowBaseContent,UDataflowBaseContent_*_&> @ 1462c97f0

UDataflowBaseContent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UDataflowBaseContent,UDataflowBaseContent_*_&>
          (UDataflowBaseContent **param_1)

{
  return *param_1;
}

// GetDataflowAssetFromObjectTemplate<UDataflow_const_,UObject_const_> @ 1462c9f80

UDataflow * __cdecl
UE::Dataflow::InstanceUtils::GetDataflowAssetFromObjectTemplate<UDataflow_const_,UObject_const_>
          (UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FProperty *this;
  undefined8 *puVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflow::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UDataflow *)param_1;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
      if ((UDataflow *)*plVar3 != (UDataflow *)0x0) {
        return (UDataflow *)*plVar3;
      }
    }
    if ((*(UStruct **)&param_1->field_0x10 != (UStruct *)0x0) &&
       (this = UStruct::FindPropertyByName
                         (*(UStruct **)&param_1->field_0x10,DataflowAssetPropertyName),
       this != (FProperty *)0x0)) {
      puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
      return (UDataflow *)*puVar4;
    }
  }
  return (UDataflow *)0x0;
}

// GetDataflowAssetFromObjectTemplate<UDataflow,UObject> @ 1462ca040

UDataflow * __cdecl
UE::Dataflow::InstanceUtils::GetDataflowAssetFromObjectTemplate<UDataflow,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FProperty *this;
  undefined8 *puVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflow::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UDataflow *)param_1;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
      if ((UDataflow *)*plVar3 != (UDataflow *)0x0) {
        return (UDataflow *)*plVar3;
      }
    }
    if ((*(UStruct **)&param_1->field_0x10 != (UStruct *)0x0) &&
       (this = UStruct::FindPropertyByName
                         (*(UStruct **)&param_1->field_0x10,DataflowAssetPropertyName),
       this != (FProperty *)0x0)) {
      puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
      return (UDataflow *)*puVar4;
    }
  }
  return (UDataflow *)0x0;
}

// GetNodeByType<FDataflowSubGraphInputNode> @ 1462ca100

FDataflowSubGraphInputNode * __cdecl
UE::Dataflow::DataflowSubGraph::Private::GetNodeByType<FDataflowSubGraphInputNode>
          (UEdGraph *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGraph *this;
  FDataflowNode *pFVar6;
  char cVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  TSharedPtr<FDataflowNode,1> local_48;
  FGuid local_38;
  
  pFVar9 = (param_1->Nodes).AllocatorInstance.Data;
  iVar2 = (param_1->Nodes).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UEdGraphNode>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    lVar4 = *(longlong *)pFVar9;
    if (lVar4 != 0) {
      pUVar8 = UDataflowEdNode::StaticClass();
      iVar3 = (int)pUVar8->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar8->_padding_)) {
        pTVar5 = *(TReferenceControllerBase<1> **)(lVar4 + 0xb0);
        this = *(FGraph **)(lVar4 + 0xa8);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this == (FGraph *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          local_48.Object = (FDataflowNode *)0x0;
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_38._0_8_ = *(undefined8 *)(lVar4 + 0x98);
          local_38._8_8_ = *(undefined8 *)(lVar4 + 0xa0);
          FGraph::FindBaseNode(this,&local_48,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          pFVar6 = local_48.Object;
          if ((FDataflowSubGraphInputNode *)local_48.Object != (FDataflowSubGraphInputNode *)0x0) {
            ::FName::FName(&local_res10,"FDataflowSubGraphInputNode");
            cVar7 = (**(code **)(pFVar6->_padding_ + 0x128))(pFVar6,local_res10);
            if ((cVar7 != '\0') &&
               ((FDataflowSubGraphInputNode *)pFVar6 != (FDataflowSubGraphInputNode *)0x0)) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_48.SharedReferenceCount.ReferenceController);
              return (FDataflowSubGraphInputNode *)pFVar6;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  return (FDataflowSubGraphInputNode *)0x0;
}

// GetNodeByType<FDataflowSubGraphOutputNode> @ 1462ca240

FDataflowSubGraphOutputNode * __cdecl
UE::Dataflow::DataflowSubGraph::Private::GetNodeByType<FDataflowSubGraphOutputNode>
          (UEdGraph *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGraph *this;
  FDataflowNode *pFVar6;
  char cVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  TSharedPtr<FDataflowNode,1> local_48;
  FGuid local_38;
  
  pFVar9 = (param_1->Nodes).AllocatorInstance.Data;
  iVar2 = (param_1->Nodes).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UEdGraphNode>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    lVar4 = *(longlong *)pFVar9;
    if (lVar4 != 0) {
      pUVar8 = UDataflowEdNode::StaticClass();
      iVar3 = (int)pUVar8->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar8->_padding_)) {
        pTVar5 = *(TReferenceControllerBase<1> **)(lVar4 + 0xb0);
        this = *(FGraph **)(lVar4 + 0xa8);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this == (FGraph *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          local_48.Object = (FDataflowNode *)0x0;
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_38._0_8_ = *(undefined8 *)(lVar4 + 0x98);
          local_38._8_8_ = *(undefined8 *)(lVar4 + 0xa0);
          FGraph::FindBaseNode(this,&local_48,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          pFVar6 = local_48.Object;
          if ((FDataflowSubGraphOutputNode *)local_48.Object != (FDataflowSubGraphOutputNode *)0x0)
          {
            ::FName::FName(&local_res10,"FDataflowSubGraphOutputNode");
            cVar7 = (**(code **)(pFVar6->_padding_ + 0x128))(pFVar6,local_res10);
            if ((cVar7 != '\0') &&
               ((FDataflowSubGraphOutputNode *)pFVar6 != (FDataflowSubGraphOutputNode *)0x0)) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_48.SharedReferenceCount.ReferenceController);
              return (FDataflowSubGraphOutputNode *)pFVar6;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  return (FDataflowSubGraphOutputNode *)0x0;
}

// GetTypeName<unsigned_char> @ 1462ca380

FName __cdecl UE::Dataflow::GetTypeName<unsigned_char>(bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  wchar_t *pwVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  pwVar2 = L"TArray<uint8>";
  if (in_DL == '\0') {
    pwVar2 = L"uint8";
  }
  ::FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pwVar2);
  return FVar1;
}

// GetTypeName<int> @ 1462ca3b0

FName __cdecl UE::Dataflow::GetTypeName<int>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"int32");
  return in_RCX;
}

// GetTypeName<int> @ 1462ca3e0

FName __cdecl UE::Dataflow::GetTypeName<int>(bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  wchar_t *pwVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  pwVar2 = L"TArray<int32>";
  if (in_DL == '\0') {
    pwVar2 = L"int32";
  }
  ::FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pwVar2);
  return FVar1;
}

// GetTypeName<unsigned_int> @ 1462ca410

FName __cdecl UE::Dataflow::GetTypeName<unsigned_int>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"uint32");
  return in_RCX;
}

// GetTypeName<float> @ 1462ca440

FName __cdecl UE::Dataflow::GetTypeName<float>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"float");
  return in_RCX;
}

// GetTypeName<float> @ 1462ca470

FName __cdecl UE::Dataflow::GetTypeName<float>(bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  wchar_t *pwVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  pwVar2 = L"TArray<float>";
  if (in_DL == '\0') {
    pwVar2 = L"float";
  }
  ::FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pwVar2);
  return FVar1;
}

// GetTypeName<double> @ 1462ca4a0

FName __cdecl UE::Dataflow::GetTypeName<double>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"double");
  return in_RCX;
}

// GetTypeName<TArray<float,TSizedDefaultAllocator<32>_>_> @ 1462ca4d0

FName __cdecl UE::Dataflow::GetTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"TArray<float>");
  return in_RCX;
}

// GetTypeName<FName> @ 1462ca500

FName __cdecl UE::Dataflow::GetTypeName<FName>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"FName");
  return in_RCX;
}

// GetTypeName<FName> @ 1462ca530

FName __cdecl UE::Dataflow::GetTypeName<FName>(bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  wchar_t *pwVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  pwVar2 = L"TArray<FName>";
  if (in_DL == '\0') {
    pwVar2 = L"FName";
  }
  ::FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pwVar2);
  return FVar1;
}

// GetTypeName<FString> @ 1462ca560

FName __cdecl UE::Dataflow::GetTypeName<FString>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"FString");
  return in_RCX;
}

// GetTypeName<FString> @ 1462ca590

FName __cdecl UE::Dataflow::GetTypeName<FString>(bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  wchar_t *pwVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  pwVar2 = L"TArray<FString>";
  if (in_DL == '\0') {
    pwVar2 = L"FString";
  }
  ::FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pwVar2);
  return FVar1;
}

// GetTypeName<FText> @ 1462ca5c0

FName __cdecl UE::Dataflow::GetTypeName<FText>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"FText");
  return in_RCX;
}

// GetTypeName<FText> @ 1462ca5f0

FName __cdecl UE::Dataflow::GetTypeName<FText>(bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  wchar_t *pwVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  pwVar2 = L"TArray<FText>";
  if (in_DL == '\0') {
    pwVar2 = L"FText";
  }
  ::FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pwVar2);
  return FVar1;
}

// GetTypeName<__int64> @ 1462ca720

FName __cdecl UE::Dataflow::GetTypeName<__int64>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"int64");
  return in_RCX;
}

// GetTypeName<__int64> @ 1462ca750

FName __cdecl UE::Dataflow::GetTypeName<__int64>(bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  wchar_t *pwVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  pwVar2 = L"TArray<int64>";
  if (in_DL == '\0') {
    pwVar2 = L"int64";
  }
  ::FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pwVar2);
  return FVar1;
}

// GetTypeName<unsigned___int64> @ 1462ca780

FName __cdecl UE::Dataflow::GetTypeName<unsigned___int64>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"uint64");
  return in_RCX;
}

// GetTypeName<bool> @ 1462ca7b0

FName __cdecl UE::Dataflow::GetTypeName<bool>(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"bool");
  return in_RCX;
}

// GetTypeName<bool> @ 1462ca7e0

FName __cdecl UE::Dataflow::GetTypeName<bool>(bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  wchar_t *pwVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  pwVar2 = L"TArray<bool>";
  if (in_DL == '\0') {
    pwVar2 = L"bool";
  }
  ::FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pwVar2);
  return FVar1;
}

// BindContextToGraph @ 1462d2ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::DataflowContextHelpers::BindContextToGraph(TObjectPtr<UObject> *param_1,UDataflow *param_2)

{
  undefined1 *this;
  ulonglong uVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *pUVar3;
  FContextCacheElementBase *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FGraph *this_00;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  UClass *pUVar11;
  TEngineContext<UE::Dataflow::FContextSingle> *pTVar12;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar13;
  FDataflowOutput *pFVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  int local_ec;
  FGraph *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  TSharedPtr<FDataflowNode,1> local_b0;
  FGuid local_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar2 = (param_2->Dataflow).SharedReferenceCount.ReferenceController;
  local_e8 = (param_2->Dataflow).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_e8 != (FGraph *)0x0) &&
     (pUVar3 = (param_1->field0_0x0).DebugPtr, pUVar3 != (UObject *)0x0)) {
    pUVar11 = UDataflowBaseContent::StaticClass();
    iVar16 = (int)pUVar11->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       (((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
         &pUVar11->_padding_ &&
        (this = &pUVar3[1].field_0x20, *(longlong *)&pUVar3[1].field_0x20 != 0)))) {
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_68 = (uint *)0x0;
      uVar18 = 0;
      local_60 = 0;
      local_54 = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      pTVar12 = TSharedPtr<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1>::operator->
                          ((TSharedPtr<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1>
                            *)this);
      (**(code **)(pTVar12->_padding_ + 0x48))(pTVar12,local_88);
      uVar20 = local_60;
      uStack_114 = 1;
      local_100 = 0;
      uStack_104 = local_100;
      if (local_60 != 0) {
        puVar19 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar19 = local_68;
        }
        uVar17 = *puVar19;
        uVar18 = 0;
        local_100 = 0;
        while (uVar17 == 0) {
          uVar18 = uVar18 + 1;
          local_100 = local_100 + 0x20;
          uStack_104 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
          goto LAB_1462d2c50;
          uVar17 = puVar19[(int)uVar18];
        }
        uStack_114 = -uVar17 & uVar17;
        uVar1 = (ulonglong)uStack_114 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_f0 = (int)lVar5;
        uStack_104 = local_f0 + -1 + local_100;
        if ((int)local_60 < (int)uStack_104) {
          uStack_104 = local_60;
        }
      }
LAB_1462d2c50:
      local_120 = (longlong *)local_88;
      local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar17 = local_60 & 0xffffffe0;
      iStack_f8 = local_88._8_4_ - local_54;
      uStack_108 = 0xffffffff;
      TStack_d8.CurrentBitIndex = uStack_104;
      TStack_d8.UnvisitedBitMask = 0xffffffff;
      TStack_d8._padding_ = CONCAT44(uStack_114,uVar18);
      iVar16 = (int)local_60 >> 5;
      TStack_d8._28_4_ = uStack_104;
      TStack_d8.BaseBitIndex = local_100;
      uStack_b8 = CONCAT44(uStack_f4,iStack_f8);
      bVar15 = (byte)local_60;
      uStack_118 = uVar18;
      uStack_fc = uStack_104;
      local_e0 = local_120;
      TStack_d8.Array = local_110;
      if (((int)local_60 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      this_00 = local_e8;
      if (uVar20 != local_60) {
        puVar19 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar19 = local_68;
        }
        uVar18 = -1 << (bVar15 & 0x1f) & puVar19[iVar16];
        while (uVar18 == 0) {
          iVar16 = iVar16 + 1;
          uVar17 = uVar17 + 0x20;
          uVar20 = local_60;
          if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar16)
          goto LAB_1462d2d70;
          uVar18 = puVar19[iVar16];
        }
        uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_ec = (int)lVar5;
        uVar20 = local_ec + -1 + uVar17;
        if ((int)local_60 < (int)uVar20) {
          uVar20 = local_60;
        }
      }
LAB_1462d2d70:
      do {
        plVar7 = local_e0;
        if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
          local_128[0] = 0;
          `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
        }
        if (((TStack_d8.CurrentBitIndex == uVar20) &&
            (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar7 == (longlong *)local_88)) {
          bVar8 = true;
          goto LAB_1462d2e8c;
        }
        bVar8 = false;
        uVar18 = *(uint *)(*plVar7 + (longlong)TStack_d8.CurrentBitIndex * 0xc);
        if ((*(longlong *)this == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pTVar13 = Dataflow::FContext::GetDataImpl(*(FContext **)this,uVar18);
        if (pTVar13 ==
            (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
             *)0x0) goto LAB_1462d2e8a;
        pFVar4 = pTVar13->Ptr;
        if ((pFVar4 != (FContextCacheElementBase *)0x0) && (pFVar4->Property == (FProperty *)0x0)) {
          local_98.A = (pFVar4->NodeGuid).A;
          local_98.B = (pFVar4->NodeGuid).B;
          local_98.C = (pFVar4->NodeGuid).C;
          local_98.D = (pFVar4->NodeGuid).D;
          Dataflow::FGraph::FindBaseNode(this_00,&local_b0,&local_98);
          if ((local_b0.Object != (FDataflowNode *)0x0) &&
             ((pFVar14 = FDataflowNode::FindOutput(local_b0.Object,uVar18),
              pFVar14 != (FDataflowOutput *)0x0 &&
              ((FProperty *)pFVar14->_padding_ != (FProperty *)0x0)))) {
            bVar8 = true;
            pTVar13->Ptr->Property = (FProperty *)pFVar14->_padding_;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0.SharedReferenceCount.ReferenceController);
          if (!bVar8) goto LAB_1462d2e8a;
        }
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      } while( true );
    }
  }
  bVar8 = false;
LAB_1462d2ece:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar8;
LAB_1462d2e8a:
  bVar8 = false;
LAB_1462d2e8c:
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  goto LAB_1462d2ece;
}

// BuildOverlayBoundsInfoString @ 1462d2fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Dataflow::Overlay::BuildOverlayBoundsInfoString
          (FString *__return_storage_ptr__,FManagedArrayCollection *param_1)

{
  int iVar1;
  undefined1 auStack_228 [32];
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FBoundsFacade local_1a8;
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_228;
  GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_1a8,param_1);
  GeometryCollection::Facades::FBoundsFacade::GetBoundingBoxInCollectionSpace(&local_1a8,&local_48);
  local_208 = (FScriptContainerElement *)
              ((local_48.Max.field0_0x0._s_0.Z + local_48.Min.field0_0x0._s_0.Z) *
              __real_3fe0000000000000);
  ::FString::PrintfImpl(&local_1b8,L"%3.3f, %3.3f, %3.3f");
  local_208 = (FScriptContainerElement *)local_48.Min.field0_0x0._s_0.Z;
  ::FString::PrintfImpl(&local_1c8,L"%3.3f, %3.3f, %3.3f");
  local_208 = (FScriptContainerElement *)local_48.Max.field0_0x0._s_0.Z;
  ::FString::PrintfImpl(&local_1d8,L"%3.3f, %3.3f, %3.3f");
  local_208 = (FScriptContainerElement *)
              (local_48.Max.field0_0x0._s_0.Z - local_48.Min.field0_0x0._s_0.Z);
  ::FString::PrintfImpl(&local_1e8,L"%3.3f, %3.3f, %3.3f");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200 = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    local_200 = local_1e8.Data.AllocatorInstance.Data;
  }
  local_208 = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    local_208 = local_1d8.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_1f8,L"Center: %s\nMin: %s\nMax: %s\nSize: %s\n");
  iVar1 = local_1f8.Data.ArrayNum + -1;
  if (local_1f8.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,iVar1);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildOverlayCollectionInfoString @ 1462d3200

FString * __cdecl
UE::Dataflow::Overlay::BuildOverlayCollectionInfoString
          (FString *__return_storage_ptr__,FManagedArrayCollection *param_1)

{
  int iVar1;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  iVar1 = FManagedArrayCollection::NumElements(param_1,FGeometryCollection::VerticesGroup);
  ::FString::FormatAsNumber(&local_28,iVar1);
  iVar1 = FManagedArrayCollection::NumElements(param_1,FGeometryCollection::FacesGroup);
  ::FString::FormatAsNumber(&local_38,iVar1);
  iVar1 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
  ::FString::FormatAsNumber(&local_48,iVar1);
  iVar1 = FManagedArrayCollection::NumElements(param_1,FGeometryCollection::GeometryGroup);
  ::FString::FormatAsNumber(&local_18,iVar1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_58,L"Vertices: %s\nFaces: %s\nTransforms: %s\nGeometry: %s\n");
  iVar1 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildOverlayFinalString @ 1462d3350

FString * __cdecl
UE::Dataflow::Overlay::BuildOverlayFinalString
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar4 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar5 = *(int *)(pFVar2 + 8) + -1;
    if (*(int *)(pFVar2 + 8) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)pFVar2,iVar5);
    if (iVar4 < param_1->ArrayNum + -1) {
      iVar5 = COverlaySeparator.Data.ArrayNum + -1;
      if (COverlaySeparator.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)COverlaySeparator.Data.AllocatorInstance.Data,
                 iVar5);
    }
    iVar4 = iVar4 + 1;
    pFVar2 = pFVar2 + 0x10;
  }
  return __return_storage_ptr__;
}

// BuildOverlayMemInfoString @ 1462d3410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Dataflow::Overlay::BuildOverlayMemInfoString
          (FString *__return_storage_ptr__,FDataflowNode *param_1)

{
  UStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  int iVar5;
  undefined1 auStackY_788 [32];
  FString local_758;
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_788;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pUVar1 = (UStruct *)(**(code **)(param_1->_padding_ + 0xb8))(param_1);
  pFVar2 = FProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_748,pFVar2,pUVar1,param_1,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
    pTVar3 = FPropertyValueIterator::operator->(&local_748);
    if ((*(longlong *)pTVar3 == 0) ||
       ((*(ulonglong *)(*(longlong *)(*(longlong *)pTVar3 + 8) + 0x18) & 0x1000000000000) == 0)) {
      FPropertyValueIterator::IterateToNext(&local_748);
    }
    else {
      FPropertyValueIterator::IterateToNext(&local_748);
    }
  }
  FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
  if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar4 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar4,local_748.PropertyIteratorStack.ArrayNum);
  if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  ::FString::PrintfImpl(&local_758,L"Memory: %03fKB\n");
  iVar5 = local_758.Data.ArrayNum + -1;
  if (local_758.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_758.Data.AllocatorInstance.Data,iVar5);
  if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_758.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildOverlayNodeInfoString @ 1462d3590

FString * __cdecl
UE::Dataflow::Overlay::BuildOverlayNodeInfoString
          (FString *__return_storage_ptr__,FDataflowNode *param_1)

{
  FName *this;
  int iVar1;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_18,"/Construction/");
  local_res8 = param_1->Name;
  ::FName::ToString(&local_res8,&local_28);
  this = (FName *)(**(code **)(param_1->_padding_ + 8))(param_1,&local_res8);
  ::FName::ToString(this,&local_38);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_48,L"%s\n%s\n%s\n");
  iVar1 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildOverlaySelectionEvaluateResultString @ 1462d36b0

FString * __cdecl
UE::Dataflow::Overlay::BuildOverlaySelectionEvaluateResultString
          (FString *__return_storage_ptr__,FDataflowSelection *param_1)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FDataflowSelection::ToString(param_1,&local_18);
  ::FString::PrintfImpl(&local_28,L"%s\n");
  iVar1 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDataflowAssetFromObject @ 1462dc5e0

UDataflow * __cdecl UE::Dataflow::InstanceUtils::GetDataflowAssetFromObject(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FProperty *this;
  undefined8 *puVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflow::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UDataflow *)param_1;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
      if ((UDataflow *)*plVar3 != (UDataflow *)0x0) {
        return (UDataflow *)*plVar3;
      }
    }
    if ((*(UStruct **)&param_1->field_0x10 != (UStruct *)0x0) &&
       (this = UStruct::FindPropertyByName
                         (*(UStruct **)&param_1->field_0x10,DataflowAssetPropertyName),
       this != (FProperty *)0x0)) {
      puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
      return (UDataflow *)*puVar4;
    }
  }
  return (UDataflow *)0x0;
}

// GetDataflowAssetFromObject @ 1462dc6a0

UDataflow * __cdecl UE::Dataflow::InstanceUtils::GetDataflowAssetFromObject(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FProperty *this;
  undefined8 *puVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflow::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UDataflow *)param_1;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
      if ((UDataflow *)*plVar3 != (UDataflow *)0x0) {
        return (UDataflow *)*plVar3;
      }
    }
    if ((*(UStruct **)&param_1->field_0x10 != (UStruct *)0x0) &&
       (this = UStruct::FindPropertyByName
                         (*(UStruct **)&param_1->field_0x10,DataflowAssetPropertyName),
       this != (FProperty *)0x0)) {
      puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
      return (UDataflow *)*puVar4;
    }
  }
  return (UDataflow *)0x0;
}

// GetPropertyBagPropertyDescFromDataflowConnection @ 1462de250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPropertyBagPropertyDesc * __cdecl
UE::Dataflow::Type::GetPropertyBagPropertyDescFromDataflowConnection
          (FPropertyBagPropertyDesc *__return_storage_ptr__,FDataflowConnection *param_1)

{
  int iVar1;
  FFieldClass *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FPropertyBagPropertyDesc *pFVar6;
  FFieldClass *pFVar7;
  UScriptStruct *pUVar8;
  FProperty *pFVar9;
  undefined1 auStack_a8 [32];
  FName local_88;
  TFieldIterator<FProperty> local_80;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  FName local_50;
  EPropertyBagPropertyType local_48;
  undefined2 local_47;
  uchar local_45;
  ulong64 local_40;
  FProperty *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar9 = param_1->Property;
  if ((pFVar9 == (FProperty *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConnectionProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowEngineUtil.cpp"
                         ,0x9a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FPropertyBagPropertyDesc *)(*pcVar4)();
    return pFVar6;
  }
  if (param_1->bIsAnyType) {
    if ((param_1->bHasConcreteType) &&
       (GetPropertyBagPropertyDescFromDataflowType
                  ((FPropertyBagPropertyDesc *)&local_68.ObjectPtr,param_1->Name,param_1->Type),
       local_48 != Count)) {
      (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)local_68;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_68.DebugPtr != (UObject *)0x0))
      {
        GC::MarkAsReachable(local_68.DebugPtr);
      }
      __return_storage_ptr__->Name = local_50;
      *(undefined2 *)(__return_storage_ptr__->ContainerTypes).Types.Elements = local_47;
      (__return_storage_ptr__->ContainerTypes).NumContainers = local_45;
      __return_storage_ptr__->PropertyFlags = local_40;
      __return_storage_ptr__->CachedProperty = local_38;
      __return_storage_ptr__->CachedIndex = local_30;
      (__return_storage_ptr__->ID).A = (undefined4)local_60;
      (__return_storage_ptr__->ID).B = local_60._4_4_;
      (__return_storage_ptr__->ID).C = (undefined4)uStack_58;
      (__return_storage_ptr__->ID).D = uStack_58._4_4_;
      __return_storage_ptr__->ValueType = local_48;
      return __return_storage_ptr__;
    }
    pFVar2 = (FFieldClass *)pFVar9->_padding_;
    pFVar7 = FStructProperty::StaticClass();
    if (pFVar7->Id == CASTCLASS_None) {
      for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
        if (pFVar2 == pFVar7) {
          bVar5 = true;
          goto LAB_1462de365;
        }
      }
      bVar5 = false;
    }
    else {
      bVar5 = (pFVar2->CastFlags & pFVar7->Id) != CASTCLASS_None;
    }
LAB_1462de365:
    if (((bVar5) && ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x14 & 1) != 0)) &&
       (pFVar9 != (FProperty *)0x0)) {
      lVar3 = pFVar9[1]._padding_;
      pUVar8 = FDataflowAnyType::StaticStruct();
      if (pUVar8 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_80.Struct = (UStruct *)pFVar9[1]._padding_;
          if (local_80.Struct == (UStruct *)0x0) {
            local_80.Field = (FField *)0x0;
          }
          else {
            local_80.Field = (local_80.Struct)->ChildProperties;
          }
          local_80.InterfaceIndex = -1;
          local_80.bIncludeSuper = true;
          local_80.bIncludeDeprecated = true;
          local_80.bIncludeInterface = false;
          TFieldIterator<FProperty>::IterateToNext(&local_80);
          pFVar9 = (FProperty *)local_80.Field;
          while (local_80.Field = (FField *)pFVar9, pFVar9 != (FProperty *)0x0) {
            bVar5 = IsThisNotNull(pFVar9,"FField::GetFName");
            if (bVar5) {
              local_88 = (FName)pFVar9->_padding_;
            }
            else {
              local_88.ComparisonIndex.Value = 0;
              local_88.Number = 0;
            }
            bVar5 = ::FName::Equals(local_88,"Value");
            if (bVar5) goto LAB_1462de467;
            local_80.Field = (FField *)pFVar9->_padding_;
            TFieldIterator<FProperty>::IterateToNext(&local_80);
            pFVar9 = (FProperty *)local_80.Field;
          }
        }
      }
    }
  }
  pFVar9 = param_1->Property;
LAB_1462de467:
  FPropertyBagPropertyDesc::FPropertyBagPropertyDesc(__return_storage_ptr__,param_1->Name,pFVar9);
  return __return_storage_ptr__;
}

// GetPropertyBagPropertyDescFromDataflowType @ 1462de4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPropertyBagPropertyDesc * __cdecl
UE::Dataflow::Type::GetPropertyBagPropertyDescFromDataflowType
          (FPropertyBagPropertyDesc *__return_storage_ptr__,FName param_1,FName param_2)

{
  FName FVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UClass *pUVar7;
  UObject *pUVar8;
  EPropertyBagPropertyType EVar9;
  FName local_res18;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  undefined2 local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FName local_60;
  EPropertyBagPropertyType local_58;
  undefined2 local_57;
  uchar local_55;
  ulong64 local_50;
  FProperty *local_48;
  int local_40;
  ulonglong local_38;
  size_t sVar6;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_res18 = param_2;
  ::FName::FName((FName *)&local_b8,L"bool");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = Bool;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
LAB_1462de507:
    __return_storage_ptr__->Name = param_1;
    __return_storage_ptr__->PropertyFlags = 1;
    __return_storage_ptr__->CachedProperty = (FProperty *)0x0;
    __return_storage_ptr__->CachedIndex = -1;
    return __return_storage_ptr__;
  }
  ::FName::FName((FName *)&local_b8,L"int32");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = Int32;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::FName((FName *)&local_b8,L"int64");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = Int64;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::FName((FName *)&local_b8,L"uint32");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = UInt32;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::FName((FName *)&local_b8,L"uint64");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = UInt64;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::FName((FName *)&local_b8,L"float");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = Float;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::FName((FName *)&local_b8,L"double");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = Double;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::FName((FName *)&local_b8,L"FName");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = Name;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::FName((FName *)&local_b8,L"FString");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = String;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::FName((FName *)&local_b8,L"FText");
  if (local_res18 == (FName)local_b8.Data.AllocatorInstance.Data) {
    (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (__return_storage_ptr__->ID).A = 0;
    (__return_storage_ptr__->ID).B = 0;
    (__return_storage_ptr__->ID).C = 0;
    (__return_storage_ptr__->ID).D = 0;
    __return_storage_ptr__->ValueType = Text;
    (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
    (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
    goto LAB_1462de507;
  }
  ::FName::ToString(&local_res18,&local_88);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  bVar3 = FDataflowUObjectConvertibleTypePolicy::GetObjectPtrInnerType(&local_88,&local_b8);
  FVar2.Data = local_b8.Data.AllocatorInstance.Data;
  iVar5 = 0;
  if (bVar3) {
    if (local_b8.Data.ArrayNum == 0) {
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
LAB_1462de74f:
      sVar6 = wcslen((wchar_t *)local_b8.Data.AllocatorInstance.Data);
      iVar4 = (int)sVar6;
    }
    else {
      iVar4 = iVar5;
      if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_1462de74f;
    }
    local_b8.Data.ArrayNum = iVar4;
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
    local_98.Size = local_b8.Data.ArrayNum;
    local_98._12_4_ = local_b8.Data.ArrayMax;
    pUVar8 = StaticFindFirstObjectSafe(pUVar7,&local_98,None,NoLogging,(wchar_t *)0x0);
    if (pUVar8 != (UObject *)0x0) {
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (__return_storage_ptr__,param_1,Object,pUVar8);
      goto LAB_1462dea51;
    }
  }
  ::FString::FString(&local_b8,"U");
  iVar4 = local_b8.Data.ArrayNum + -1;
  FVar1 = (FName)local_b8.Data.AllocatorInstance;
  if (local_b8.Data.ArrayNum == 0) {
    iVar4 = iVar5;
    FVar1 = (FName)L"";
  }
  bVar3 = ::FString::StartsWith(&local_88,(wchar_t *)FVar1,iVar4,IgnoreCase);
  if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    ::FString::RightChop(&local_88,&local_b8,1);
    if (local_b8.Data.ArrayNum == 0) {
      local_98.DataPtr = L"";
LAB_1462de814:
      sVar6 = wcslen(local_98.DataPtr);
      iVar5 = (int)sVar6;
    }
    else {
      local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
      if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_1462de814;
    }
    local_98.Size = iVar5;
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    pUVar8 = StaticFindFirstObjectSafe(pUVar7,&local_98,None,NoLogging,(wchar_t *)0x0);
    if (pUVar8 != (UObject *)0x0) {
      EVar9 = Object;
LAB_1462de850:
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (__return_storage_ptr__,param_1,EVar9,pUVar8);
      if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
LAB_1462dea51:
      if ((FName)FVar2.Data != (FName)0x0) {
        FMemory::Free(FVar2.Data);
      }
      if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    ::FString::FString((FString *)&local_98,"F");
    iVar4 = local_98.Size + -1;
    FVar1 = (FName)local_98.DataPtr;
    if (local_98.Size == 0) {
      iVar4 = iVar5;
      FVar1 = (FName)L"";
    }
    bVar3 = ::FString::StartsWith(&local_88,(wchar_t *)FVar1,iVar4,IgnoreCase);
    if ((FName)local_98.DataPtr != (FName)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (!bVar3) {
      bVar3 = FDataflowArrayTypePolicy::SupportsTypeStatic(local_res18);
      if (!bVar3) goto LAB_1462de93d;
      FDataflowArrayTypePolicy::GetElementType((FName)&local_b8);
      GetPropertyBagPropertyDescFromDataflowType
                ((FPropertyBagPropertyDesc *)&local_78.ObjectPtr,param_1,
                 (FName)local_b8.Data.AllocatorInstance.Data);
      local_a8 = 1;
      (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)local_78;
      local_57 = 1;
      local_55 = '\x01';
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_78.DebugPtr != (UObject *)0x0))
      {
        GC::MarkAsReachable(local_78.DebugPtr);
      }
      __return_storage_ptr__->Name = local_60;
      __return_storage_ptr__->ValueType = local_58;
      __return_storage_ptr__->PropertyFlags = local_50;
      __return_storage_ptr__->CachedProperty = local_48;
      *(undefined2 *)(__return_storage_ptr__->ContainerTypes).Types.Elements = local_57;
      __return_storage_ptr__->CachedIndex = local_40;
      (__return_storage_ptr__->ID).A = (undefined4)local_70;
      (__return_storage_ptr__->ID).B = local_70._4_4_;
      (__return_storage_ptr__->ID).C = (undefined4)uStack_68;
      (__return_storage_ptr__->ID).D = uStack_68._4_4_;
      (__return_storage_ptr__->ContainerTypes).NumContainers = local_55;
      goto LAB_1462dea51;
    }
    ::FString::RightChop(&local_88,&local_b8,1);
    if (local_b8.Data.ArrayNum == 0) {
      local_98.DataPtr = L"";
LAB_1462de8f2:
      sVar6 = wcslen(local_98.DataPtr);
      iVar5 = (int)sVar6;
    }
    else {
      local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
      if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_1462de8f2;
    }
    local_98.Size = iVar5;
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    pUVar8 = StaticFindFirstObjectSafe(pUVar7,&local_98,None,NoLogging,(wchar_t *)0x0);
    if (pUVar8 != (UObject *)0x0) {
      EVar9 = Struct;
      goto LAB_1462de850;
    }
  }
  if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
LAB_1462de93d:
  if ((FName)FVar2.Data != (FName)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->ID).A = 0;
  (__return_storage_ptr__->ID).B = 0;
  (__return_storage_ptr__->ID).C = 0;
  (__return_storage_ptr__->ID).D = 0;
  __return_storage_ptr__->Name = param_1;
  __return_storage_ptr__->ValueType = Count;
  (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
  (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
  __return_storage_ptr__->PropertyFlags = 1;
  __return_storage_ptr__->CachedProperty = (FProperty *)0x0;
  __return_storage_ptr__->CachedIndex = -1;
  return __return_storage_ptr__;
}

// GetRandomColor @ 1462dea80

FLinearColor * __cdecl
UE::Dataflow::Color::GetRandomColor(FLinearColor *__return_storage_ptr__,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  
  fVar3 = __real_42fe0000;
  fVar2 = __real_43000000;
  fVar1 = __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  uVar5 = param_1 * 0x51e89d73 + param_2 * -0x203fd383 + 0x3619636b;
  uVar4 = uVar5 * 0xbb38435 + 0x3619636b;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       FLinearColor::sRGBToLinearTable
       [(int)(((float)(uVar5 >> 9 | 0x3f800000) - fVar1) * fVar3 + fVar2) & 0xff];
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       FLinearColor::sRGBToLinearTable
       [(int)(((float)(uVar4 >> 9 | 0x3f800000) - fVar1) * fVar3 + fVar2) & 0xff];
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       FLinearColor::sRGBToLinearTable
       [(int)(((float)(uVar4 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar1) * fVar3 + fVar2) &
        0xff];
  return __return_storage_ptr__;
}

// GetTerminalNodeNameFromObject @ 1462ded10

FName __cdecl UE::Dataflow::InstanceUtils::GetTerminalNodeNameFromObject(UObject *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  longlong lVar3;
  FProperty *this;
  undefined8 *puVar4;
  UObjectBaseUtility *in_RDX;
  
  if (in_RDX != (UObjectBaseUtility *)0x0) {
    pUVar1 = UDataflowInstanceInterface::StaticClass();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(in_RDX,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + 8);
      return (FName)param_1;
    }
    if (*(UStruct **)&in_RDX->field_0x10 != (UStruct *)0x0) {
      this = UStruct::FindPropertyByName
                       (*(UStruct **)&in_RDX->field_0x10,DataflowTerminalPropertyName);
      if (this != (FProperty *)0x0) {
        puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,(UObject *)in_RDX,0);
        *(undefined8 *)param_1 = *puVar4;
        return (FName)param_1;
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetTerminalNodeNames @ 1462dedb0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UE::Dataflow::InstanceUtils::GetTerminalNodeNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UDataflow *param_1)

{
  int iVar1;
  FGraph *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  TReferenceControllerBase<1> *local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (UDataflow *)0x0) {
    pFVar2 = (param_1->Dataflow).Object;
    local_res18 = (param_1->Dataflow).SharedReferenceCount.ReferenceController;
    if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FGraph *)0x0) {
      pFVar10 = (pFVar2->Nodes).AllocatorInstance.Data;
      iVar1 = (pFVar2->Nodes).ArrayNum;
      pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pFVar2->Nodes).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar10 == pFVar11) break;
        if ((*(longlong *)pFVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        plVar9 = *(longlong **)pFVar10;
        ::FName::FName(&local_res10,"FDataflowTerminalNode");
        cVar6 = (**(code **)(*plVar9 + 0x128))(plVar9,local_res10);
        if (cVar6 == '\0') {
          plVar9 = (longlong *)0x0;
        }
        if (plVar9 != (longlong *)0x0) {
          if ((*(longlong *)pFVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          uVar3 = *(undefined8 *)(*(longlong *)pFVar10 + 0x8c);
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               uVar3;
        }
        pFVar10 = pFVar10 + 0x10;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18)
    ;
  }
  return __return_storage_ptr__;
}

// GlobalTransforms @ 1462df280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Dataflow::Animation::GlobalTransforms
          (FReferenceSkeleton *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool local_res8 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_res8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&local_18,local_res8,(param_1->FinalRefBoneInfo).ArrayNum);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,(param_1->FinalRefBoneInfo).ArrayNum,Default);
  iVar1 = (param_1->FinalRefBoneInfo).ArrayNum;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    GlobalTransformsInternal(iVar1,param_1,param_2,&local_18);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GlobalTransformsInternal @ 1462df310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Dataflow::Animation::GlobalTransformsInternal
          (int param_1,FReferenceSkeleton *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TMatrix<double> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_228;
  undefined8 uStack_220;
  TMatrix<double> *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_268;
  lVar11 = (longlong)param_1;
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < param_4->ArrayNum) {
    uVar7 = uVar12;
  }
  local_228 = param_3;
  if (uVar7 == 0) {
    local_248 = lVar11;
    local_240 = (longlong)param_4->ArrayNum;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_4->AllocatorInstance).Data[lVar11] == (FScriptContainerElement)0x0) {
    iVar2 = (param_2->FinalRefBoneInfo).ArrayNum;
    uVar7 = 0;
    if (param_1 < iVar2) {
      uVar7 = uVar12;
    }
    if (uVar7 == 0) {
      local_248 = lVar11;
      local_240 = (longlong)iVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = *(uint *)((param_2->FinalRefBoneInfo).AllocatorInstance.Data + lVar11 * 0xc + 8);
    if ((uVar7 == 0xffffffff) || (uVar7 == param_1)) {
      iVar2 = (param_2->FinalRefBonePose).ArrayNum;
      local_240 = (longlong)iVar2;
      uVar7 = 0;
      if (param_1 < iVar2) {
        uVar7 = uVar12;
      }
      if (uVar7 == 0) {
        local_248 = lVar11;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (param_2->FinalRefBonePose).AllocatorInstance.Data;
      local_240 = (longlong)param_3->ArrayNum;
      lVar10 = lVar11 * 0x60;
      local_218 = *(TMatrix<double> **)(pFVar3 + lVar10 + 0x10);
      uStack_210 = *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8);
      local_228 = *(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> **)
                   (pFVar3 + lVar10 + 0x20);
      uStack_220 = *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8);
      pFVar1 = pFVar3 + lVar10;
      local_238 = *(FScriptContainerElement **)pFVar1;
      uStack_230 = *(undefined4 *)(pFVar1 + 8);
      uStack_22c = *(undefined4 *)(pFVar1 + 0xc);
      local_208 = *(undefined8 *)(pFVar3 + lVar10 + 0x30);
      uStack_200 = *(undefined8 *)(pFVar3 + lVar10 + 0x30 + 8);
      local_1e8 = *(undefined8 *)(pFVar3 + lVar10 + 0x50);
      uStack_1e0 = *(undefined8 *)(pFVar3 + lVar10 + 0x50 + 8);
      local_1f8 = *(undefined8 *)(pFVar3 + lVar10 + 0x40);
      uStack_1f0 = *(undefined8 *)(pFVar3 + lVar10 + 0x40 + 8);
      uVar7 = 0;
      if (param_1 < param_3->ArrayNum) {
        uVar7 = uVar12;
      }
      uVar13 = *(undefined4 *)pFVar1;
      uVar14 = *(undefined4 *)(pFVar1 + 4);
      if (uVar7 == 0) {
        local_248 = lVar11;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = (undefined4)local_238;
        uVar14 = local_238._4_4_;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      pFVar1 = pFVar3 + lVar10;
      *(undefined4 *)pFVar1 = uVar13;
      *(undefined4 *)(pFVar1 + 4) = uVar14;
      *(undefined4 *)(pFVar1 + 8) = uStack_230;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_22c;
      *(TMatrix<double> **)(pFVar3 + lVar10 + 0x10) = local_218;
      *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8) = uStack_210;
      *(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> **)(pFVar3 + lVar10 + 0x20)
           = local_228;
      *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8) = uStack_220;
      *(undefined8 *)(pFVar3 + lVar10 + 0x30) = local_208;
      *(undefined8 *)(pFVar3 + lVar10 + 0x30 + 8) = uStack_200;
      *(undefined8 *)(pFVar3 + lVar10 + 0x40) = local_1f8;
      *(undefined8 *)(pFVar3 + lVar10 + 0x40 + 8) = uStack_1f0;
      *(undefined8 *)(pFVar3 + lVar10 + 0x50) = local_1e8;
      *(undefined8 *)(pFVar3 + lVar10 + 0x50 + 8) = uStack_1e0;
    }
    else {
      GlobalTransformsInternal(uVar7,param_2,param_3,param_4);
      uVar8 = 0;
      if (param_1 < param_3->ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        local_248 = lVar11;
        local_240 = (longlong)param_3->ArrayNum;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_238 = (param_3->AllocatorInstance).Data;
      iVar2 = (param_2->FinalRefBonePose).ArrayNum;
      uVar8 = 0;
      if (param_1 < iVar2) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        local_248 = lVar11;
        local_240 = (longlong)iVar2;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_218 = UE::Math::TTransform<double>::ToMatrixWithScale
                            ((TTransform<double> *)
                             ((param_2->FinalRefBonePose).AllocatorInstance.Data + lVar11 * 0x60),
                             &local_158);
      pTVar5 = local_228;
      uVar8 = 0;
      if ((int)uVar7 < local_228->ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_248 = (longlong)(int)uVar7;
        local_240 = (longlong)local_228->ArrayNum;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar9 = UE::Math::TTransform<double>::ToMatrixWithScale
                         ((TTransform<double> *)
                          ((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x60),&local_d8
                         );
      VectorMatrixMultiply(&local_1d8,local_218,pTVar9);
      UE::Math::TTransform<double>::SetFromMatrix
                ((TTransform<double> *)(local_238 + lVar11 * 0x60),&local_1d8);
    }
    local_240 = (longlong)param_4->ArrayNum;
    uVar7 = 0;
    if (param_1 < param_4->ArrayNum) {
      uVar7 = uVar12;
    }
    if (uVar7 == 0) {
      local_248 = lVar11;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (param_4->AllocatorInstance).Data[lVar11] = (FScriptContainerElement)0x1;
  }
  return;
}

// HasValidDataflowAsset @ 1462df8b0

bool __cdecl UE::Dataflow::InstanceUtils::HasValidDataflowAsset(UObject *param_1)

{
  UStruct *this;
  UClass *pUVar1;
  void *pvVar2;
  FProperty *pFVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UDataflowInstanceInterface::StaticClass();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (pvVar2 != (void *)0x0) {
      return true;
    }
  }
  this = *(UStruct **)&param_1->field_0x10;
  if (((this != (UStruct *)0x0) &&
      (pFVar3 = UStruct::FindPropertyByName(this,DataflowAssetPropertyName),
      pFVar3 != (FProperty *)0x0)) &&
     (pFVar3 = UStruct::FindPropertyByName(this,DataflowTerminalPropertyName),
     pFVar3 != (FProperty *)0x0)) {
    return true;
  }
  return false;
}

// MakeUniqueNameForPropertyBag @ 1462dffb0

FName __cdecl
UE::Dataflow::Type::MakeUniqueNameForPropertyBag(FName param_1,FInstancedPropertyBag *param_2)

{
  FPropertyBagPropertyDesc *pFVar1;
  int iVar2;
  FInstancedPropertyBag *in_R8;
  
  *(FInstancedPropertyBag **)param_1 = param_2;
  iVar2 = 1;
  pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(in_R8,(FName)param_2);
  while (pFVar1 != (FPropertyBagPropertyDesc *)0x0) {
    *(int *)((longlong)param_1 + 4) = iVar2;
    iVar2 = iVar2 + 1;
    pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(in_R8,*(FName *)param_1);
  }
  return param_1;
}

// RegisterSubGraphNodes @ 1462e2fd0

void __cdecl UE::Dataflow::RegisterSubGraphNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FDataflowSubGraphInputNode");
  FVar1 = local_res8[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphInputNode,(UObject *)pUVar2,
                         L"DataflowSubGraphInputNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton,FVar1,
             "SubGraphInput","SubGraph",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowSubGraphInputNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FDataflowSubGraphOutputNode");
  FVar1 = local_res8[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphOutputNode,(UObject *)pUVar2,
                         L"DataflowSubGraphOutputNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton,FVar1,
             "SubGraphOutput","SubGraph",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowSubGraphOutputNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FDataflowSubGraphGetCurrentIndexNode");
  FVar1 = local_res8[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode,
                         (UObject *)pUVar2,L"DataflowSubGraphGetCurrentIndexNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowSubGraphGetCurrentIndexNode.OuterSingleton,
             FVar1,"GetCurrentIndex","SubGraph",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FDataflowSubGraphGetCurrentIndexNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FDataflowCallSubGraphNode");
  if (Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCallSubGraphNode,(UObject *)pUVar2,
                         L"DataflowCallSubGraphNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton,
             local_res8[0],"SubGraphCall","SubGraph",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowCallSubGraphNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterTextureAssetNodes @ 1462e3230

void __cdecl UE::Dataflow::RegisterTextureAssetNodes(void)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FDataflowTextureTerminalNode");
  FVar1 = local_res8[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureTerminalNode,(UObject *)pUVar2,
                         L"DataflowTextureTerminalNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton,FVar1,
             "TextureTerminal","Terminal",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowTextureTerminalNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Texture Image");
  ::FName::FName(local_res8,"FDataflowTextureToImageNode");
  FVar1 = local_res8[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureToImageNode,(UObject *)pUVar2,
                         L"DataflowTextureToImageNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton,FVar1,
             "TextureToImage","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowTextureToImageNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Image Texture");
  ::FName::FName(local_res8,"FDataflowImageToTextureNode");
  if (Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageToTextureNode,(UObject *)pUVar2,
                         L"DataflowImageToTextureNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton,
             local_res8[0],"ImageToTexture","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageToTextureNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterVariableNodes @ 1462e3400

void __cdecl UE::Dataflow::RegisterVariableNodes(void)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FGetDataflowVariableNode");
  if (Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetDataflowVariableNode,(UObject *)pUVar1,
                         L"GetDataflowVariableNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton,local_res8[0]
             ,"GetVariable","Dataflow",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetDataflowVariableNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ResetCacheTimestamp @ 1462e3ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::DataflowContextHelpers::ResetCacheTimestamp(TObjectPtr<UObject> *param_1,UDataflow *param_2)

{
  ulonglong uVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  int local_114;
  int local_110;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar8 = UDataflowBaseContent::StaticClass();
    iVar12 = (int)pUVar8->_padding_;
    if (((iVar12 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
         &pUVar8->_padding_)) && (*(longlong *)&pUVar2[1].field_0x20 != 0)) {
      uVar11 = (param_2->LastModifiedRenderTarget).Value + 1;
      if ((uVar11 == Dataflow::FTimestamp::Invalid) ||
         (*(ulonglong *)&pUVar2[4].field_0x10 < uVar11)) {
        *(ulonglong *)&pUVar2[4].field_0x10 = uVar11;
      }
      local_5c = 0x80;
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_68 = (uint *)0x0;
      uVar13 = 0;
      local_60 = 0;
      local_54 = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_58 = 0xffffffff;
      if ((*(longlong *)&pUVar2[1].field_0x20 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      (**(code **)(**(longlong **)&pUVar2[1].field_0x20 + 0x48))
                (*(longlong **)&pUVar2[1].field_0x20,local_88);
      uVar15 = local_60;
      uStack_fc = 1;
      local_e8 = 0;
      uStack_ec = local_e8;
      if (local_60 != 0) {
        puVar14 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar14 = local_68;
        }
        uVar16 = *puVar14;
        uVar13 = 0;
        local_e8 = 0;
        while (uVar16 == 0) {
          uVar13 = uVar13 + 1;
          local_e8 = local_e8 + 0x20;
          uStack_ec = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_1462e4060;
          uVar16 = puVar14[(int)uVar13];
        }
        uStack_fc = -uVar16 & uVar16;
        uVar1 = (ulonglong)uStack_fc * 2 + 1;
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_114 = (int)lVar3;
        uStack_ec = local_114 + -1 + local_e8;
        if ((int)local_60 < (int)uStack_ec) {
          uStack_ec = local_60;
        }
      }
LAB_1462e4060:
      local_108 = (longlong *)local_88;
      uStack_e4 = local_8c;
      local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar16 = local_60 & 0xffffffe0;
      iStack_e0 = local_88._8_4_ - local_54;
      uStack_f0 = 0xffffffff;
      TStack_d0.CurrentBitIndex = uStack_ec;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      TStack_d0._padding_ = CONCAT44(uStack_fc,uVar13);
      iVar12 = (int)local_60 >> 5;
      TStack_d0._28_4_ = local_8c;
      TStack_d0.BaseBitIndex = local_e8;
      uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
      bVar10 = (byte)local_60;
      uStack_100 = uVar13;
      local_d8 = local_108;
      TStack_d0.Array = local_f8;
      if (((int)local_60 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (uVar15 != local_60) {
        puVar14 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar14 = local_68;
        }
        uVar13 = -1 << (bVar10 & 0x1f) & puVar14[iVar12];
        while (uVar13 == 0) {
          iVar12 = iVar12 + 1;
          uVar16 = uVar16 + 0x20;
          uVar15 = local_60;
          if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar12)
          goto LAB_1462e4190;
          uVar13 = puVar14[iVar12];
        }
        uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_110 = (int)lVar3;
        uVar15 = local_110 + -1 + uVar16;
        if ((int)local_60 < (int)uVar15) {
          uVar15 = local_60;
        }
      }
LAB_1462e4190:
      do {
        plVar5 = local_d8;
        if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
          local_118[0] = 0;
          `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
        }
        if (((TStack_d0.CurrentBitIndex == uVar15) &&
            (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar5 == (longlong *)local_88)) {
          bVar6 = true;
          goto LAB_1462e424f;
        }
        uVar13 = *(uint *)(*plVar5 + (longlong)TStack_d0.CurrentBitIndex * 0xc);
        if ((*(longlong *)&pUVar2[1].field_0x20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pTVar9 = Dataflow::FContext::GetDataImpl(*(FContext **)&pUVar2[1].field_0x20,uVar13);
        if ((pTVar9 == (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                        *)0x0) || (pTVar9->Ptr == (FContextCacheElementBase *)0x0)) {
          bVar6 = false;
LAB_1462e424f:
          local_40 = 0;
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_88);
          return bVar6;
        }
        (pTVar9->Ptr->Timestamp).Value = uVar11;
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      } while( true );
    }
  }
  return false;
}

// ValidateCachedNodeHash @ 1462e7de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::DataflowContextHelpers::ValidateCachedNodeHash(TObjectPtr<UObject> *param_1,UDataflow *param_2)

{
  undefined1 *this;
  ulonglong uVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *pUVar3;
  FContextCacheElementBase *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FGraph *this_00;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  UClass *pUVar10;
  TEngineContext<UE::Dataflow::FContextSingle> *pTVar11;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  TSharedPtr<FDataflowNode,1> local_120;
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  FGraph *local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FGuid local_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar2 = (param_2->Dataflow).SharedReferenceCount.ReferenceController;
  local_d8 = (param_2->Dataflow).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_d8 != (FGraph *)0x0) &&
     (pUVar3 = (param_1->field0_0x0).DebugPtr, pUVar3 != (UObject *)0x0)) {
    pUVar10 = UDataflowBaseContent::StaticClass();
    iVar14 = (int)pUVar10->_padding_;
    if ((iVar14 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       (((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar14 * 8) ==
         &pUVar10->_padding_ &&
        (this = &pUVar3[1].field_0x20, *(longlong *)&pUVar3[1].field_0x20 != 0)))) {
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_68 = (uint *)0x0;
      uVar16 = 0;
      local_60 = 0;
      local_54 = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      pTVar11 = TSharedPtr<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1>::operator->
                          ((TSharedPtr<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1>
                            *)this);
      (**(code **)(pTVar11->_padding_ + 0x48))(pTVar11,local_88);
      uVar18 = local_60;
      uStack_104 = 1;
      local_f0 = 0;
      uStack_f4 = local_f0;
      if (local_60 != 0) {
        puVar17 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar17 = local_68;
        }
        uVar15 = *puVar17;
        uVar16 = 0;
        local_f0 = 0;
        while (uVar15 == 0) {
          uVar16 = uVar16 + 1;
          local_f0 = local_f0 + 0x20;
          uStack_f4 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
          goto LAB_1462e7f50;
          uVar15 = puVar17[(int)uVar16];
        }
        uStack_104 = -uVar15 & uVar15;
        uVar1 = (ulonglong)uStack_104 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_e0 = (int)lVar5;
        uStack_f4 = local_e0 + -1 + local_f0;
        if ((int)local_60 < (int)uStack_f4) {
          uStack_f4 = local_60;
        }
      }
LAB_1462e7f50:
      local_110 = (longlong *)local_88;
      local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar15 = local_60 & 0xffffffe0;
      iStack_e8 = local_88._8_4_ - local_54;
      uStack_f8 = 0xffffffff;
      TStack_c8.CurrentBitIndex = uStack_f4;
      TStack_c8.UnvisitedBitMask = 0xffffffff;
      TStack_c8._padding_ = CONCAT44(uStack_104,uVar16);
      iVar14 = (int)local_60 >> 5;
      TStack_c8._28_4_ = uStack_f4;
      TStack_c8.BaseBitIndex = local_f0;
      uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
      bVar13 = (byte)local_60;
      uStack_108 = uVar16;
      uStack_ec = uStack_f4;
      local_d0 = local_110;
      TStack_c8.Array = local_100;
      if (((int)local_60 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      this_00 = local_d8;
      if (uVar18 != local_60) {
        puVar17 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar17 = local_68;
        }
        uVar16 = -1 << (bVar13 & 0x1f) & puVar17[iVar14];
        while (uVar16 == 0) {
          iVar14 = iVar14 + 1;
          uVar15 = uVar15 + 0x20;
          uVar18 = local_60;
          if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar14)
          goto LAB_1462e8080;
          uVar16 = puVar17[iVar14];
        }
        uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_dc = (int)lVar5;
        uVar18 = local_dc + -1 + uVar15;
        if ((int)local_60 < (int)uVar18) {
          uVar18 = local_60;
        }
      }
LAB_1462e8080:
      do {
        plVar7 = local_d0;
        if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
          local_128[0] = 0;
          `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
        }
        if (((TStack_c8.CurrentBitIndex == uVar18) &&
            (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar7 == (longlong *)local_88)) {
          bVar8 = true;
          goto LAB_1462e8188;
        }
        uVar16 = *(uint *)(*plVar7 + (longlong)TStack_c8.CurrentBitIndex * 0xc);
        if ((*(longlong *)this == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pTVar12 = Dataflow::FContext::GetDataImpl(*(FContext **)this,uVar16);
        if (((pTVar12 ==
              (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
               *)0x0) || (pFVar4 = pTVar12->Ptr, pFVar4 == (FContextCacheElementBase *)0x0)) ||
           (pFVar4->Property == (FProperty *)0x0)) goto LAB_1462e8186;
        local_98.A = (pFVar4->NodeGuid).A;
        local_98.B = (pFVar4->NodeGuid).B;
        local_98.C = (pFVar4->NodeGuid).C;
        local_98.D = (pFVar4->NodeGuid).D;
        Dataflow::FGraph::FindBaseNode(this_00,&local_120,&local_98);
        if ((local_120.Object == (FDataflowNode *)0x0) ||
           (uVar16 = pTVar12->Ptr->NodeHash, uVar15 = FDataflowNode::GetValueHash(local_120.Object),
           uVar16 != uVar15)) goto LAB_1462e8181;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_120.SharedReferenceCount.ReferenceController);
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
      } while( true );
    }
  }
  bVar8 = false;
LAB_1462e81ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar8;
LAB_1462e8181:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
LAB_1462e8186:
  bVar8 = false;
LAB_1462e8188:
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  goto LAB_1462e81ba;
}

