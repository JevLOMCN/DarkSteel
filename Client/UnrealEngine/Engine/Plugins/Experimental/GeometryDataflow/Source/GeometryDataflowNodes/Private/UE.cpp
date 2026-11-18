// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryDataflowNodes
// Functions: 5

// Construct<FMeshBooleanDataflowNode> @ 14e7ffcf0

void __cdecl UE::CoreUObject::Private::Construct<FMeshBooleanDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined1 *)((longlong)param_1 + 0x248) = 1;
  *(undefined ***)param_1 = &___7FMeshBooleanDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FMeshBooleanDataflowNode> @ 14e7ffd40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMeshBooleanDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined1 *)((longlong)param_1 + 0x248) = 1;
  *(undefined ***)param_1 = &___7FMeshBooleanDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FMeshBooleanDataflowNode> @ 14e7ffd90

void __cdecl UE::CoreUObject::Private::Destruct<FMeshBooleanDataflowNode>(void *param_1)

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

// Copy<FMeshBooleanDataflowNode> @ 14e7ffda0

bool __cdecl
UE::CoreUObject::Private::Copy<FMeshBooleanDataflowNode>(void *param_1,void *param_2,int param_3)

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
    *(undefined1 *)((longlong)pvVar3 + 0x248) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x250) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 600) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x268);
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// MeshBooleanNodes @ 14e801470

void __cdecl UE::Dataflow::MeshBooleanNodes(void)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res8,"FMeshBooleanDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryDataflowNodes();
    Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode,(UObject *)pUVar1,
                         L"MeshBooleanDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton,local_res8[0]
             ,"MeshBoolean","Mesh|Utilities",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMeshBooleanDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

