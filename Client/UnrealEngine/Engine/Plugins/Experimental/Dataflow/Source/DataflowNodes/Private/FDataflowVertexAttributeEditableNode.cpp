// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 9

// StaticStruct @ 14dac0700

UScriptStruct * __cdecl FDataflowVertexAttributeEditableNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexAttributeEditableNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowVertexAttributeEditableNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVertexAttributeEditableNode,
                         (UObject *)pUVar1,L"DataflowVertexAttributeEditableNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVertexAttributeEditableNode.OuterSingleton;
}

// GetSupportedViewModes @ 14dac0740

void __thiscall
FDataflowVertexAttributeEditableNode::GetSupportedViewModes
          (FDataflowVertexAttributeEditableNode *this,FContext *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8418930722512830561>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Public\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.h"
                     ,0x61,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetVertexAttributeValues @ 14dac0780

void __thiscall
FDataflowVertexAttributeEditableNode::GetVertexAttributeValues
          (FDataflowVertexAttributeEditableNode *this,FContext *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8418930722512830564>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Public\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.h"
                     ,100,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetVertexAttributeValues @ 14dac07c0

void __thiscall
FDataflowVertexAttributeEditableNode::SetVertexAttributeValues
          (FDataflowVertexAttributeEditableNode *this,FContext *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8418930722512830567>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Public\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.h"
                     ,0x67,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetExtraVertexMapping @ 14dac0800

void __thiscall
FDataflowVertexAttributeEditableNode::GetExtraVertexMapping
          (FDataflowVertexAttributeEditableNode *this,FContext *param_1,FName param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  piVar1 = &param_4->ArrayMax;
  pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)(param_4->AllocatorInstance).Data;
  if (-1 < *piVar1) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar2,param_4->ArrayNum);
    param_4->ArrayNum = 0;
    return;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar2,param_4->ArrayNum);
  param_4->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_4->AllocatorInstance,0,piVar1);
  }
  return;
}

// GetStoredAttributeValues @ 14dac08b0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowVertexAttributeEditableNode::GetStoredAttributeValues
          (FDataflowVertexAttributeEditableNode *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FDataflowVertexAttributeEditableNode::GetStoredAttributeValues'::__l2::
             _dynamic_atexit_destructor_for__ConstEmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4203191773394108267>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.cpp"
                     ,0x95,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return &ConstEmptyArray;
}

// SwapStoredAttributeValuesWith @ 14dac0950

void __thiscall
FDataflowVertexAttributeEditableNode::SwapStoredAttributeValuesWith
          (FDataflowVertexAttributeEditableNode *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8418930722512830574>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Public\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.h"
                     ,0x6e,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FDataflowVertexAttributeEditableNode @ 14dacd550

FDataflowVertexAttributeEditableNode * __thiscall
FDataflowVertexAttributeEditableNode::FDataflowVertexAttributeEditableNode
          (FDataflowVertexAttributeEditableNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined ***)this = &___7FDataflowVertexAttributeEditableNode__6B_;
  return this;
}

// MakeEditNodeToolChange @ 14dad7100

TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> __thiscall
FDataflowVertexAttributeEditableNode::MakeEditNodeToolChange
          (FDataflowVertexAttributeEditableNode *this)

{
  FEditNodeToolChange *this_00;
  FToolCommandChange FVar1;
  FToolCommandChange *in_RDX;
  
  this_00 = ::operator_new(0x28);
  if (this_00 != (FEditNodeToolChange *)0x0) {
    FVar1 = (FToolCommandChange)FEditNodeToolChange::FEditNodeToolChange(this_00,this);
    *in_RDX = FVar1;
    return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
  }
  *in_RDX = (FToolCommandChange)0x0;
  return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
}

