// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 68

// Copy<FSimulationProxiesTerminalDataflowNode> @ 1462e9d50

bool __cdecl
UE::CoreUObject::Private::Copy<FSimulationProxiesTerminalDataflowNode>
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
      TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar4 + 0x248),
                 (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + (longlong)pvVar4 + (0x248 - (longlong)param_1)));
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 600);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFilterSimulationProxiesDataflowNode> @ 1462e9df0

void __cdecl
UE::CoreUObject::Private::Construct<FFilterSimulationProxiesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FFilterSimulationProxiesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// ConstructForTests<FFilterSimulationProxiesDataflowNode> @ 1462e9e40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFilterSimulationProxiesDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FFilterSimulationProxiesDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// Destruct<FFilterSimulationProxiesDataflowNode> @ 1462e9e90

void __cdecl UE::CoreUObject::Private::Destruct<FFilterSimulationProxiesDataflowNode>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x268),*(int *)((longlong)param_1 + 0x270));
  if (*(void **)((longlong)param_1 + 0x268) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x268));
  }
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FFilterSimulationProxiesDataflowNode> @ 1462e9ea0

bool __cdecl
UE::CoreUObject::Private::Copy<FFilterSimulationProxiesDataflowNode>
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
    TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + 0x248),
               (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + 600),
               (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0x268),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x268 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x278);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FAdvancePhysicsSolversDataflowNode> @ 1462e9f70

void __cdecl UE::CoreUObject::Private::Construct<FAdvancePhysicsSolversDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FAdvancePhysicsSolversDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FAdvancePhysicsSolversDataflowNode> @ 1462e9fc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAdvancePhysicsSolversDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FAdvancePhysicsSolversDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FAdvancePhysicsSolversDataflowNode> @ 1462ea010

void __cdecl UE::CoreUObject::Private::Destruct<FAdvancePhysicsSolversDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FAdvancePhysicsSolversDataflowNode> @ 1462ea050

bool __cdecl
UE::CoreUObject::Private::Copy<FAdvancePhysicsSolversDataflowNode>
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
    *(undefined4 *)((longlong)pvVar2 + 0x250) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1));
    TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + 600),
               (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FGetPhysicsSolversDataflowNode> @ 1462ea250

void __cdecl UE::CoreUObject::Private::Construct<FGetPhysicsSolversDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetPhysicsSolversDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// ConstructForTests<FGetPhysicsSolversDataflowNode> @ 1462ea2a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGetPhysicsSolversDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetPhysicsSolversDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  return;
}

// Destruct<FGetPhysicsSolversDataflowNode> @ 1462ea2f0

void __cdecl UE::CoreUObject::Private::Destruct<FGetPhysicsSolversDataflowNode>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 600),*(int *)((longlong)param_1 + 0x260));
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FGetPhysicsSolversDataflowNode> @ 1462ea350

bool __cdecl
UE::CoreUObject::Private::Copy<FGetPhysicsSolversDataflowNode>
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
    TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + 0x248),
               (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 600),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (600 - (longlong)param_1)));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x268);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FGetSimulationTimeDataflowNode> @ 1462ea410

void __cdecl UE::CoreUObject::Private::Construct<FGetSimulationTimeDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetSimulationTimeDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// ConstructForTests<FGetSimulationTimeDataflowNode> @ 1462ea450

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGetSimulationTimeDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGetSimulationTimeDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Destruct<FGetSimulationTimeDataflowNode> @ 1462ea490

void __cdecl UE::CoreUObject::Private::Destruct<FGetSimulationTimeDataflowNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FGetSimulationTimeDataflowNode> @ 1462ea4b0

bool __cdecl
UE::CoreUObject::Private::Copy<FGetSimulationTimeDataflowNode>
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
    *(undefined4 *)((longlong)pvVar2 + 0x250) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x250 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 600);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FDataflowSimulationTime> @ 1462eb020

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSimulationTime>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDataflowSimulationTime> @ 1462eb030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSimulationTime>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDataflowSimulationTime> @ 1462eb040

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSimulationTime>(void *param_1)

{
  return;
}

// Copy<FDataflowSimulationTime> @ 1462eb050

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSimulationTime>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowExecutionNode> @ 1462eb510

void __cdecl UE::CoreUObject::Private::Construct<FDataflowExecutionNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowExecutionNode__6B_;
  return;
}

// ConstructForTests<FDataflowExecutionNode> @ 1462eb540

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowExecutionNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowExecutionNode__6B_;
  return;
}

// Destruct<FDataflowExecutionNode> @ 1462eb570

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowExecutionNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowExecutionNode> @ 1462eb590

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowExecutionNode>(void *param_1,void *param_2,int param_3)

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

// Construct<FDataflowInvalidNode> @ 1462ec7d0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowInvalidNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowInvalidNode__6B_;
  return;
}

// ConstructForTests<FDataflowInvalidNode> @ 1462ec800

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowInvalidNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowInvalidNode__6B_;
  return;
}

// Destruct<FDataflowInvalidNode> @ 1462ec830

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowInvalidNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowInvalidNode> @ 1462ec850

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowInvalidNode>(void *param_1,void *param_2,int param_3)

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

// Construct<FDataflowSimulationNode> @ 1462ecd20

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSimulationNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  return;
}

// ConstructForTests<FDataflowSimulationNode> @ 1462ecd50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSimulationNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  return;
}

// Destruct<FDataflowSimulationNode> @ 1462ecd80

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSimulationNode>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FDataflowSimulationNode> @ 1462ecda0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSimulationNode>(void *param_1,void *param_2,int param_3)

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

// Construct<FDataflowSimulationProperty> @ 1462eceb0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSimulationProperty>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FDataflowSimulationProperty> @ 1462ecec0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSimulationProperty>(void *param_1)

{
  return;
}

// Construct<FDataflowPhysicsSolverProxy> @ 1462ecfd0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowPhysicsSolverProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowPhysicsSolverProxy__6B_;
  return;
}

// ConstructForTests<FDataflowPhysicsSolverProxy> @ 1462ed020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowPhysicsSolverProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowPhysicsSolverProxy__6B_;
  return;
}

// Destruct<FDataflowPhysicsSolverProxy> @ 1462ed070

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowPhysicsSolverProxy>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  return;
}

// Copy<FDataflowPhysicsSolverProxy> @ 1462ed230

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowPhysicsSolverProxy>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
             ((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8) != pTVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8),pTVar1);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + 0x28),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    pvVar2 = (void *)((longlong)pvVar2 + 0x78);
  }
  return true;
}

// Construct<FDataflowSimulationAsset> @ 1462ed380

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSimulationAsset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FDataflowSimulationAsset> @ 1462ed3c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSimulationAsset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FDataflowSimulationAsset> @ 1462ed400

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSimulationAsset>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FDataflowSimulationAsset> @ 1462ed440

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSimulationAsset>(void *param_1,void *param_2,int param_3)

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
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(puVar2 + 1),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(puVar1 + 1));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0xb;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataflowPhysicsObjectProxy> @ 1462ed750

void __cdecl UE::CoreUObject::Private::Construct<FDataflowPhysicsObjectProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowPhysicsObjectProxy__6B_;
  return;
}

// ConstructForTests<FDataflowPhysicsObjectProxy> @ 1462ed7a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowPhysicsObjectProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowPhysicsObjectProxy__6B_;
  return;
}

// Destruct<FDataflowPhysicsObjectProxy> @ 1462ed7f0

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowPhysicsObjectProxy>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  return;
}

// Copy<FDataflowPhysicsObjectProxy> @ 1462ed880

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowPhysicsObjectProxy>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
             ((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8) != pTVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8),pTVar1);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + 0x28),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    pvVar2 = (void *)((longlong)pvVar2 + 0x78);
  }
  return true;
}

// Construct<FDataflowConstraintObjectProxy> @ 1462eda50

void __cdecl UE::CoreUObject::Private::Construct<FDataflowConstraintObjectProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowConstraintObjectProxy__6B_;
  return;
}

// ConstructForTests<FDataflowConstraintObjectProxy> @ 1462edae0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowConstraintObjectProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowConstraintObjectProxy__6B_;
  return;
}

// Destruct<FDataflowConstraintObjectProxy> @ 1462edb70

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowConstraintObjectProxy>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  return;
}

// Copy<FDataflowConstraintObjectProxy> @ 1462edbc0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowConstraintObjectProxy>
          (void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
             ((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8) != pTVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8),pTVar1);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + 0x28),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    pvVar2 = (void *)((longlong)pvVar2 + 0x78);
  }
  return true;
}

// Construct<FDataflowCollisionObjectProxy> @ 1462edcd0

void __cdecl UE::CoreUObject::Private::Construct<FDataflowCollisionObjectProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowCollisionObjectProxy__6B_;
  return;
}

// ConstructForTests<FDataflowCollisionObjectProxy> @ 1462edd20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDataflowCollisionObjectProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowCollisionObjectProxy__6B_;
  return;
}

// Destruct<FDataflowCollisionObjectProxy> @ 1462edd70

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowCollisionObjectProxy>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  return;
}

// Copy<FDataflowCollisionObjectProxy> @ 1462eddc0

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowCollisionObjectProxy>
          (void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
             ((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8) != pTVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8),pTVar1);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + 0x28),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    pvVar2 = (void *)((longlong)pvVar2 + 0x78);
  }
  return true;
}

// Construct<FDataflowSimulationProxy> @ 1462edf90

void __cdecl UE::CoreUObject::Private::Construct<FDataflowSimulationProxy>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FDataflowSimulationProxy__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FDataflowSimulationProxy> @ 1462edff0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowSimulationProxy>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDataflowSimulationProxy__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FDataflowSimulationProxy> @ 1462ee040

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowSimulationProxy>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  return;
}

// Copy<FDataflowSimulationProxy> @ 1462ee090

bool __cdecl
UE::CoreUObject::Private::Copy<FDataflowSimulationProxy>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
             ((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8) != pTVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 8),pTVar1);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + 0x28),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    pvVar2 = (void *)((longlong)pvVar2 + 0x78);
  }
  return true;
}

// Construct<FSimulationProxiesTerminalDataflowNode> @ 1462ee1a0

void __cdecl
UE::CoreUObject::Private::Construct<FSimulationProxiesTerminalDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSimulationProxiesTerminalDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// ConstructForTests<FSimulationProxiesTerminalDataflowNode> @ 1462ee1e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSimulationProxiesTerminalDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSimulationProxiesTerminalDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  return;
}

// Destruct<FSimulationProxiesTerminalDataflowNode> @ 1462ee220

void __cdecl
UE::CoreUObject::Private::Destruct<FSimulationProxiesTerminalDataflowNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// CheckStructType<FDataflowSimulationTime> @ 1462ef560

void __cdecl UE::StructUtils::CheckStructType<FDataflowSimulationTime>(void)

{
  return;
}

// GetStructRef<FDataflowSimulationTime> @ 1462f03f0

FDataflowSimulationTime * __cdecl
UE::StructUtils::GetStructRef<FDataflowSimulationTime>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowSimulationTime *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowSimulationTime *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDataflowSimulationTime *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationTime,(UObject *)pUVar5,
                         L"DataflowSimulationTime");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationTime,(UObject *)pUVar5,
                         L"DataflowSimulationTime");
    if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1462f04eb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton)->_padding_
  ;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1462f04eb:
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationTime,(UObject *)pUVar5,
                         L"DataflowSimulationTime");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton,&local_18,
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
  pFVar4 = (FDataflowSimulationTime *)(*pcVar2)();
  return pFVar4;
}

// EvaluateSimulationGraph @ 1462f56d0

void __cdecl
UE::Dataflow::EvaluateSimulationGraph
          (TObjectPtr<UDataflow> *param_1,
          TSharedPtr<UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>,1> *param_2,
          float param_3,float param_4)

{
  int iVar1;
  TSimulationContext<UE::Dataflow::FContextSingle> *pTVar2;
  UDataflow *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGraph *this;
  FDataflowNode *this_00;
  code *pcVar5;
  bool bVar6;
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  undefined1 local_48 [4];
  FName local_44;
  FTimestamp local_38;
  FName local_30;
  
  pTVar2 = param_2->Object;
  if (pTVar2 != (TSimulationContext<UE::Dataflow::FContextSingle> *)0x0) {
    pTVar2->DeltaTime = param_3;
    pTVar2->SimulationTime = param_4;
    pUVar3 = (param_1->field0_0x0).DebugPtr;
    if (pUVar3 != (UDataflow *)0x0) {
      pTVar4 = (pUVar3->Dataflow).SharedReferenceCount.ReferenceController;
      this = (pUVar3->Dataflow).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this != (FGraph *)0x0) {
        ::FName::FName(&local_44,"FDataflowInvalidNode");
        pTVar7 = FGraph::GetFilteredNodes(this,&local_44);
        iVar1 = pTVar7->ArrayNum;
        pFVar8 = (pTVar7->AllocatorInstance).Data;
        pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
        while( true ) {
          if (pTVar7->ArrayNum != iVar1) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar8 == pFVar9) break;
          if ((*(longlong *)pFVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = *(FDataflowNode **)pFVar8;
          local_38.Value = FTimestamp::Current();
          FDataflowNode::Invalidate(this_00,&local_38);
          pFVar8 = pFVar8 + 0x10;
        }
        ::FName::FName(&local_30,"FDataflowExecutionNode");
        pTVar7 = FGraph::GetFilteredNodes(this,&local_30);
        iVar1 = pTVar7->ArrayNum;
        pFVar8 = (pTVar7->AllocatorInstance).Data;
        pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
        while( true ) {
          if (pTVar7->ArrayNum != iVar1) {
            local_48[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_48);
          }
          if (pFVar8 == pFVar9) break;
          if ((param_2->Object == (TSimulationContext<UE::Dataflow::FContextSingle> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(param_2->Object->_padding_ + 0x58))(param_2->Object,*(undefined8 *)pFVar8,0);
          pFVar8 = pFVar8 + 0x10;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return;
}

// RegisterDataflowSimulationNodes @ 1462faa60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::Dataflow::RegisterDataflowSimulationNodes(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  UPackage *pUVar3;
  FNodeColorsRegistry *pFVar4;
  longlong lVar5;
  FName local_res8;
  undefined1 local_28 [16];
  FLinearColor_u_0 local_18;
  
  FVar1.Data = UDataflow::SimulationTag.Data.AllocatorInstance.Data;
  lVar5 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  local_28._0_8_ = (void *)0x0;
  local_28._8_4_ = UDataflow::SimulationTag.Data.ArrayNum;
  if (UDataflow::SimulationTag.Data.ArrayNum == 0) {
    local_28._8_8_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,UDataflow::SimulationTag.Data.ArrayNum,0,
               (ForAnyElementType *)&((FLinearColor_u_0 *)local_28)->_s_0,
               UDataflow::SimulationTag.Data.ArrayNum,
               (int *)&(((FLinearColor_u_0 *)local_28)->_s_0).A);
    memcpy((void *)local_28._0_8_,FVar1.Data,lVar5 * 2);
  }
  ::FName::FName(&local_res8,"FGetSimulationTimeDataflowNode");
  FVar2 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode,(UObject *)pUVar3,
                         L"GetSimulationTimeDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetSimulationTimeDataflowNode.OuterSingleton,FVar2,
             "GetSimulationTime","Physics|Common",(FString *)&((FLinearColor_u_0 *)local_28)->_s_0,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetSimulationTimeDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if ((void *)local_28._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  FVar1.Data = UDataflow::SimulationTag.Data.AllocatorInstance.Data;
  lVar5 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  local_28._0_8_ = (void *)0x0;
  local_28._8_4_ = UDataflow::SimulationTag.Data.ArrayNum;
  if (UDataflow::SimulationTag.Data.ArrayNum == 0) {
    local_28._8_8_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,UDataflow::SimulationTag.Data.ArrayNum,0,
               (ForAnyElementType *)&((FLinearColor_u_0 *)local_28)->_s_0,
               UDataflow::SimulationTag.Data.ArrayNum,
               (int *)&(((FLinearColor_u_0 *)local_28)->_s_0).A);
    memcpy((void *)local_28._0_8_,FVar1.Data,lVar5 * 2);
  }
  ::FName::FName(&local_res8,"FGetPhysicsSolversDataflowNode");
  FVar2 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode,(UObject *)pUVar3,
                         L"GetPhysicsSolversDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton,FVar2,
             "GetPhysicsSolvers","Physics|Solver",(FString *)&((FLinearColor_u_0 *)local_28)->_s_0,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetPhysicsSolversDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if ((void *)local_28._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  FVar1.Data = UDataflow::SimulationTag.Data.AllocatorInstance.Data;
  lVar5 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  local_28._0_8_ = (void *)0x0;
  local_28._8_4_ = UDataflow::SimulationTag.Data.ArrayNum;
  if (UDataflow::SimulationTag.Data.ArrayNum == 0) {
    local_28._8_8_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,UDataflow::SimulationTag.Data.ArrayNum,0,
               (ForAnyElementType *)&((FLinearColor_u_0 *)local_28)->_s_0,
               UDataflow::SimulationTag.Data.ArrayNum,
               (int *)&(((FLinearColor_u_0 *)local_28)->_s_0).A);
    memcpy((void *)local_28._0_8_,FVar1.Data,lVar5 * 2);
  }
  ::FName::FName(&local_res8,"FAdvancePhysicsSolversDataflowNode");
  FVar2 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode,
                         (UObject *)pUVar3,L"AdvancePhysicsSolversDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FAdvancePhysicsSolversDataflowNode.OuterSingleton,
             FVar2,"AdvancePhysicsSolvers","Physics|Solver",
             (FString *)&((FLinearColor_u_0 *)local_28)->_s_0,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAdvancePhysicsSolversDataflowNode>'
             ::__l2::<lambda_1>::<lambda_invoker_cdecl>);
  if ((void *)local_28._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  FVar1.Data = UDataflow::SimulationTag.Data.AllocatorInstance.Data;
  lVar5 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  local_28._0_8_ = (void *)0x0;
  local_28._8_4_ = UDataflow::SimulationTag.Data.ArrayNum;
  if (UDataflow::SimulationTag.Data.ArrayNum == 0) {
    local_28._8_8_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,UDataflow::SimulationTag.Data.ArrayNum,0,
               (ForAnyElementType *)&((FLinearColor_u_0 *)local_28)->_s_0,
               UDataflow::SimulationTag.Data.ArrayNum,
               (int *)&(((FLinearColor_u_0 *)local_28)->_s_0).A);
    memcpy((void *)local_28._0_8_,FVar1.Data,lVar5 * 2);
  }
  ::FName::FName(&local_res8,"FFilterSimulationProxiesDataflowNode");
  FVar2 = local_res8;
  if (Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode,
                         (UObject *)pUVar3,L"FilterSimulationProxiesDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton,
             FVar2,"FilterSimulationProxies","Physics|Proxy",
             (FString *)&((FLinearColor_u_0 *)local_28)->_s_0,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FFilterSimulationProxiesDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if ((void *)local_28._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  FVar1.Data = UDataflow::SimulationTag.Data.AllocatorInstance.Data;
  lVar5 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  local_28._0_8_ = (void *)0x0;
  local_28._8_4_ = UDataflow::SimulationTag.Data.ArrayNum;
  if (UDataflow::SimulationTag.Data.ArrayNum == 0) {
    local_28._8_8_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,UDataflow::SimulationTag.Data.ArrayNum,0,
               (ForAnyElementType *)&((FLinearColor_u_0 *)local_28)->_s_0,
               UDataflow::SimulationTag.Data.ArrayNum,
               (int *)&(((FLinearColor_u_0 *)local_28)->_s_0).A);
    memcpy((void *)local_28._0_8_,FVar1.Data,lVar5 * 2);
  }
  ::FName::FName(&local_res8,"FSimulationProxiesTerminalDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode,
                         (UObject *)pUVar3,L"SimulationProxiesTerminalDataflowNode");
  }
  FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton
             ,local_res8,"SimulationProxiesTerminal","Terminal|Proxy",
             (FString *)&((FLinearColor_u_0 *)local_28)->_s_0,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FSimulationProxiesTerminalDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if ((void *)local_28._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  pFVar4 = FNodeColorsRegistry::Get();
  local_28._0_8_ = ___xmm_3f80000000000000000000003f800000;
  local_28._8_8_ = _UNK_15076b188;
  local_18 = CDefaultNodeBodyTintColor.field0_0x0;
  ::FName::FName(&local_res8,"Terminal");
  FNodeColorsRegistry::RegisterNodeColors
            (pFVar4,&local_res8,(FNodeColors *)&((FLinearColor_u_0 *)local_28)->_s_0);
  pFVar4 = FNodeColorsRegistry::Get();
  local_28._0_8_ = ___xmm_3f800000000000003f8000003f800000;
  local_28._8_8_ = _UNK_150a07f68;
  local_18 = CDefaultNodeBodyTintColor.field0_0x0;
  ::FName::FName(&local_res8,"Setup");
  FNodeColorsRegistry::RegisterNodeColors
            (pFVar4,&local_res8,(FNodeColors *)&((FLinearColor_u_0 *)local_28)->_s_0);
  pFVar4 = FNodeColorsRegistry::Get();
  local_28._0_8_ = ___xmm_3f8000003e5d0aaa3f06f1023f13dc48;
  local_28._8_8_ = _UNK_15124b908;
  local_18 = CDefaultNodeBodyTintColor.field0_0x0;
  ::FName::FName(&local_res8,"Physics");
  FNodeColorsRegistry::RegisterNodeColors
            (pFVar4,&local_res8,(FNodeColors *)&((FLinearColor_u_0 *)local_28)->_s_0);
  return;
}

// RegisterSimulationInterface @ 1462fc480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Dataflow::RegisterSimulationInterface(TObjectPtr<UObject> *param_1)

{
  UObjectBaseUtility *this;
  char cVar1;
  UClass *pUVar2;
  IDataflowSimulationInterface *pIVar3;
  longlong *plVar4;
  UWorld *this_00;
  UDataflowSimulationManager *this_01;
  
  this = (UObjectBaseUtility *)(param_1->field0_0x0).DebugPtr;
  if (this == (UObjectBaseUtility *)0x0) {
    return;
  }
  pUVar2 = UDataflowSimulationInterface::StaticClass();
  pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
  if (pIVar3 != (IDataflowSimulationInterface *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
    if (*plVar4 != 0) {
      plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x30))(pIVar3);
      if ((plVar4 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar4 + 8))(plVar4), cVar1 == '\0')
         ) {
        (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
      }
      this_00 = (UWorld *)(**(code **)(*(longlong *)(param_1->field0_0x0).DebugPtr + 0x180))();
      if (this_00 != (UWorld *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)this_00);
        }
        this_01 = UWorld::GetSubsystem<UDataflowSimulationManager>(this_00);
        if (this_01 != (UDataflowSimulationManager *)0x0) {
          UDataflowSimulationManager::AddSimulationInterface(this_01,pIVar3);
        }
      }
      return;
    }
    return;
  }
  return;
}

// UnregisterSimulationInterface @ 1462fea80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Dataflow::UnregisterSimulationInterface(TObjectPtr<UObject> *param_1)

{
  UObjectBaseUtility *this;
  char cVar1;
  UClass *pUVar2;
  IDataflowSimulationInterface *pIVar3;
  longlong *plVar4;
  UWorld *this_00;
  UDataflowSimulationManager *this_01;
  
  this = (UObjectBaseUtility *)(param_1->field0_0x0).DebugPtr;
  if (this != (UObjectBaseUtility *)0x0) {
    pUVar2 = UDataflowSimulationInterface::StaticClass();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
    if (pIVar3 != (IDataflowSimulationInterface *)0x0) {
      plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
      if (*plVar4 != 0) {
        plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x30))(pIVar3);
        if (plVar4 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar4 + 8))(plVar4);
          if (cVar1 != '\0') {
            (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3);
          }
        }
        this_00 = (UWorld *)(**(code **)(*(longlong *)(param_1->field0_0x0).DebugPtr + 0x180))();
        if (this_00 != (UWorld *)0x0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable((UObject *)this_00);
          }
          this_01 = UWorld::GetSubsystem<UDataflowSimulationManager>(this_00);
          if (this_01 != (UDataflowSimulationManager *)0x0) {
            UDataflowSimulationManager::RemoveSimulationInterface(this_01,pIVar3);
          }
        }
      }
    }
  }
  return;
}

