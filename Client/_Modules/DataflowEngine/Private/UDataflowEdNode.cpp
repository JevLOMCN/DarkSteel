// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 35

// StaticClass @ 1462c1310

UClass * __cdecl UDataflowEdNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowEdNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowEdNode",
               &Z_Registration_Info_UClass_UDataflowEdNode.InnerSingleton,
               StaticRegisterNativesUDataflowEdNode,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowEdNode>,InternalVTableHelperCtorCaller<UDataflowEdNode>,
               local_res8,UEdGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowEdNode.InnerSingleton;
}

// UDataflowEdNode @ 1462cf2e0

UDataflowEdNode * __thiscall
UDataflowEdNode::UDataflowEdNode(UDataflowEdNode *this,FVTableHelper *param_1)

{
  UEdGraphNode::UEdGraphNode((UEdGraphNode *)this,param_1);
  this->bEditablePinReentranceGuard = false;
  this->bRenderInAssetEditor = false;
  this->bRenderWireframeInAssetEditor = false;
  this->bCanEnableRenderWireframe = true;
  this->_padding_ = (longlong)&___7UDataflowEdNode__6B_;
  (this->DataflowNodeGuid).A = 0;
  (this->DataflowNodeGuid).B = 0;
  (this->DataflowNodeGuid).C = 0;
  (this->DataflowNodeGuid).D = 0;
  (this->DataflowGraph).Object = (FGraph *)0x0;
  (this->DataflowGraph).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WatchedConnections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WatchedConnections).ArrayNum = 0;
  (this->WatchedConnections).ArrayMax = 0;
  (this->OnNodeInvalidatedDelegateHandle).ID = 0;
  return this;
}

// UDataflowEdNode @ 1462cf350

UDataflowEdNode * __thiscall
UDataflowEdNode::UDataflowEdNode(UDataflowEdNode *this,FObjectInitializer *param_1)

{
  UEdGraphNode::UEdGraphNode((UEdGraphNode *)this,param_1);
  this->bEditablePinReentranceGuard = false;
  this->bRenderInAssetEditor = false;
  this->bRenderWireframeInAssetEditor = false;
  this->bCanEnableRenderWireframe = true;
  this->_padding_ = (longlong)&___7UDataflowEdNode__6B_;
  (this->DataflowNodeGuid).A = 0;
  (this->DataflowNodeGuid).B = 0;
  (this->DataflowNodeGuid).C = 0;
  (this->DataflowNodeGuid).D = 0;
  (this->DataflowGraph).Object = (FGraph *)0x0;
  (this->DataflowGraph).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WatchedConnections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WatchedConnections).ArrayNum = 0;
  (this->WatchedConnections).ArrayMax = 0;
  (this->OnNodeInvalidatedDelegateHandle).ID = 0;
  return this;
}

// ~UDataflowEdNode @ 1462d0320

void __thiscall UDataflowEdNode::~UDataflowEdNode(UDataflowEdNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataflowEdNode__6B_;
  UnRegisterDelegateHandle(this);
  pFVar1 = (this->WatchedConnections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataflowGraph).SharedReferenceCount.ReferenceController);
  UEdGraphNode::~UEdGraphNode((UEdGraphNode *)this);
  return;
}

// AddOptionPin @ 1462d2160

void __thiscall UDataflowEdNode::AddOptionPin(UDataflowEdNode *this)

{
  return;
}

// AllocateDefaultPins @ 1462d28f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataflowEdNode::AllocateDefaultPins(UDataflowEdNode *this)

{
  if (5 < (byte)DATAFLOWNODE_LOG._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&DATAFLOWNODE_LOG);
    return;
  }
  return;
}

// CanEnableWireframeRenderNode @ 1462d4f00

bool __thiscall UDataflowEdNode::CanEnableWireframeRenderNode(UDataflowEdNode *this)

{
  return this->bCanEnableRenderWireframe;
}

// GetConnectionFromPin @ 1462dc130

FDataflowConnection * __cdecl UDataflowEdNode::GetConnectionFromPin(UEdGraphPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowConnection *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8883929836465158895>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowEdNode.cpp"
                     ,0x511,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataflowConnection *)(*pcVar1)();
    return pFVar3;
  }
  return (FDataflowConnection *)0x0;
}

// GetDataflowNode @ 1462dc7e0

TSharedPtr<FDataflowNode,1> * __thiscall
UDataflowEdNode::GetDataflowNode
          (UDataflowEdNode *this,TSharedPtr<FDataflowNode,1> *__return_storage_ptr__)

{
  FGraph *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FGuid local_18;
  
  this_00 = (this->DataflowGraph).Object;
  pTVar1 = (this->DataflowGraph).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != (FGraph *)0x0) {
    local_18.A = (this->DataflowNodeGuid).A;
    local_18.B = (this->DataflowNodeGuid).B;
    local_18.C = (this->DataflowNodeGuid).C;
    local_18.D = (this->DataflowNodeGuid).D;
    UE::Dataflow::FGraph::FindBaseNode(this_00,__return_storage_ptr__,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  __return_storage_ptr__->Object = (FDataflowNode *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetDataflowNode @ 1462dc860

TSharedPtr<FDataflowNode_const_,1> * __thiscall
UDataflowEdNode::GetDataflowNode
          (UDataflowEdNode *this,TSharedPtr<FDataflowNode_const_,1> *__return_storage_ptr__)

{
  uint uVar1;
  undefined4 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGraph *pFVar4;
  FDataflowNode *pFVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  ulonglong uVar13;
  TSharedPtr<FDataflowNode_const_,1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  
  pTVar3 = (this->DataflowGraph).SharedReferenceCount.ReferenceController;
  pFVar4 = (this->DataflowGraph).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar4 == (FGraph *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    __return_storage_ptr__->Object = (FDataflowNode *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    uVar1 = (pFVar4->Nodes).ArrayNum;
    uVar13 = (ulonglong)(int)uVar1;
    uVar8 = (this->DataflowNodeGuid).A;
    uVar9 = (this->DataflowNodeGuid).B;
    uVar10 = (this->DataflowNodeGuid).C;
    uVar11 = (this->DataflowNodeGuid).D;
    pFVar16 = (pFVar4->Nodes).AllocatorInstance.Data;
    pFVar17 = pFVar16 + uVar13 * 0x10;
    while( true ) {
      if ((pFVar4->Nodes).ArrayNum != (int)uVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar16 == pFVar17) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Object = (FDataflowNode *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        goto LAB_1462dc9a5;
      }
      pTVar15 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar5 = *(FDataflowNode **)pFVar16;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar5 == (FDataflowNode *)0x0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TSharedPtr<FDataflowNode_const_,1> *)(*pcVar7)();
          return pTVar14;
        }
      }
      uVar2 = (pFVar5->Guid).C;
      uVar6 = (pFVar5->Guid).D;
      if (((uVar6 == uVar11 && (pFVar5->Guid).B == uVar9) && uVar10 == uVar2) &&
          uVar8 == (pFVar5->Guid).A) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      uVar13 = (ulonglong)uVar1;
      pFVar16 = pFVar16 + 0x10;
    }
    __return_storage_ptr__->Object = pFVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_1462dc9a5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return __return_storage_ptr__;
}

// GetDataflowNodeFromEdNode @ 1462dca00

TSharedPtr<FDataflowNode_const_,1> * __cdecl
UDataflowEdNode::GetDataflowNodeFromEdNode
          (TSharedPtr<FDataflowNode_const_,1> *__return_storage_ptr__,UEdGraphNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UEdGraphNode *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      GetDataflowNode((UDataflowEdNode *)param_1,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FDataflowNode *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetDataflowNodeFromEdNode @ 1462dca70

TSharedPtr<FDataflowNode,1> * __cdecl
UDataflowEdNode::GetDataflowNodeFromEdNode
          (TSharedPtr<FDataflowNode,1> *__return_storage_ptr__,UEdGraphNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UEdGraphNode *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      GetDataflowNode((UDataflowEdNode *)param_1,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FDataflowNode *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetNodeTitle @ 1462dd5c0

FText * __thiscall
UDataflowEdNode::GetNodeTitle(UDataflowEdNode *this,FText *__return_storage_ptr__,Type param_1)

{
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,&local_18);
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1462ddea0

UClass * __cdecl UDataflowEdNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowEdNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowEdNode",
               &Z_Registration_Info_UClass_UDataflowEdNode.InnerSingleton,
               StaticRegisterNativesUDataflowEdNode,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowEdNode>,InternalVTableHelperCtorCaller<UDataflowEdNode>,
               local_res8,UEdGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowEdNode.InnerSingleton;
}

// GetRenderParameters @ 1462dec50

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
UDataflowEdNode::GetRenderParameters
          (UDataflowEdNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FDataflowNode_const_,1> local_18;
  
  GetDataflowNode(this,&local_18);
  if (local_18.Object == (FDataflowNode *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (local_18.Object == (FDataflowNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)((local_18.Object)->_padding_ + 0x30))(local_18.Object,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HasAnyWatchedConnection @ 1462df770

bool __thiscall UDataflowEdNode::HasAnyWatchedConnection(UDataflowEdNode *this)

{
  return 0 < (this->WatchedConnections).ArrayNum;
}

// IsConnectionWatched @ 1462dfc20

bool __thiscall
UDataflowEdNode::IsConnectionWatched(UDataflowEdNode *this,FDataflowConnection *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  pFVar5 = (this->WatchedConnections).AllocatorInstance.Data;
  uVar1 = (param_1->Guid).A;
  uVar2 = (param_1->Guid).B;
  uVar3 = (param_1->Guid).C;
  uVar4 = (param_1->Guid).D;
  pFVar6 = pFVar5 + (longlong)(this->WatchedConnections).ArrayNum * 0x10;
  if (pFVar5 != pFVar6) {
    do {
      if (((uVar4 == *(int *)(pFVar5 + 0xc) && uVar3 == *(int *)(pFVar5 + 8)) &&
          uVar2 == *(int *)(pFVar5 + 4)) && uVar1 == *(int *)pFVar5) {
        return true;
      }
      pFVar5 = pFVar5 + 0x10;
    } while (pFVar5 != pFVar6);
  }
  return false;
}

// IsPinWatched @ 1462dfd60

bool __thiscall UDataflowEdNode::IsPinWatched(UDataflowEdNode *this,UEdGraphPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8883929836465158895>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowEdNode.cpp"
                     ,0x511,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// PinIsCompatibleWithType @ 1462e2140

bool __thiscall
UDataflowEdNode::PinIsCompatibleWithType
          (UDataflowEdNode *this,UEdGraphPin *param_1,FEdGraphPinType *param_2)

{
  return false;
}

// RegisterDelegateHandle @ 1462e2da0

void __thiscall UDataflowEdNode::RegisterDelegateHandle(UDataflowEdNode *this)

{
  return;
}

// RemoveOptionPin @ 1462e3890

void __thiscall UDataflowEdNode::RemoveOptionPin(UDataflowEdNode *this)

{
  return;
}

// RemoveSpacesInAllPinTypes @ 1462e3af0

void __thiscall UDataflowEdNode::RemoveSpacesInAllPinTypes(UDataflowEdNode *this)

{
  return;
}

// Serialize @ 1462e45b0

void __thiscall UDataflowEdNode::Serialize(UDataflowEdNode *this,FArchive *param_1)

{
  UEdGraphNode::Serialize((UEdGraphNode *)this,param_1);
  ::operator<<(param_1,&this->DataflowNodeGuid);
  return;
}

// Serialize @ 1462e45f0

void __thiscall UDataflowEdNode::Serialize(UDataflowEdNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UEdGraphNode::Serialize((UEdGraphNode *)this,pFVar1);
  ::operator<<(pFVar1,&this->DataflowNodeGuid);
  return;
}

// SetCanEnableWireframeRenderNode @ 1462e4b50

void __thiscall UDataflowEdNode::SetCanEnableWireframeRenderNode(UDataflowEdNode *this,bool param_1)

{
  this->bCanEnableRenderWireframe = param_1;
  return;
}

// SetDataflowNodeGuid @ 1462e5160

void __thiscall UDataflowEdNode::SetDataflowNodeGuid(UDataflowEdNode *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  UnRegisterDelegateHandle(this);
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->DataflowNodeGuid).A = param_1->A;
  (this->DataflowNodeGuid).B = uVar1;
  (this->DataflowNodeGuid).C = uVar2;
  (this->DataflowNodeGuid).D = uVar3;
  return;
}

// SetShouldRenderNode @ 1462e59d0

void __thiscall UDataflowEdNode::SetShouldRenderNode(UDataflowEdNode *this,bool param_1)

{
  this->bRenderInAssetEditor = param_1;
  return;
}

// SetShouldWireframeRenderNode @ 1462e59e0

void __thiscall UDataflowEdNode::SetShouldWireframeRenderNode(UDataflowEdNode *this,bool param_1)

{
  this->bRenderWireframeInAssetEditor = param_1;
  return;
}

// StaticRegisterNativesUDataflowEdNode @ 1462e6270

void __cdecl UDataflowEdNode::StaticRegisterNativesUDataflowEdNode(void)

{
  return;
}

// UnRegisterDelegateHandle @ 1462e6ec0

void __thiscall UDataflowEdNode::UnRegisterDelegateHandle(UDataflowEdNode *this)

{
  FGraph *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  code *pcVar3;
  FDataflowNode *pFVar4;
  bool bVar5;
  TSharedPtr<FDataflowNode,1> local_28;
  FGuid local_18;
  
  this_00 = (this->DataflowGraph).Object;
  pTVar1 = (this->DataflowGraph).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FGraph *)0x0) {
    local_28.Object = (FDataflowNode *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_18.A = (this->DataflowNodeGuid).A;
    local_18.B = (this->DataflowNodeGuid).B;
    local_18.C = (this->DataflowNodeGuid).C;
    local_18.D = (this->DataflowNodeGuid).D;
    UE::Dataflow::FGraph::FindBaseNode(this_00,&local_28,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar4 = local_28.Object;
  if (local_28.Object != (FDataflowNode *)0x0) {
    if (local_28.Object == (FDataflowNode *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pFVar4->OnNodeInvalidatedDelegate);
    if ((bVar5) && ((this->OnNodeInvalidatedDelegateHandle).ID != 0)) {
      if (pFVar4 == (FDataflowNode *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar2.ID = (this->OnNodeInvalidatedDelegateHandle).ID;
      if (FVar2.ID != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar4->OnNodeInvalidatedDelegate,FVar2);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UpdatePinsConnectionsFromDataflowNode @ 1462e7cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataflowEdNode::UpdatePinsConnectionsFromDataflowNode(UDataflowEdNode *this)

{
  if (5 < (byte)DATAFLOWNODE_LOG._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&DATAFLOWNODE_LOG);
    return;
  }
  return;
}

// UpdatePinsDefaultValuesFromNode @ 1462e7ce0

void __thiscall UDataflowEdNode::UpdatePinsDefaultValuesFromNode(UDataflowEdNode *this)

{
  return;
}

// UpdatePinsFromDataflowNode @ 1462e7cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataflowEdNode::UpdatePinsFromDataflowNode(UDataflowEdNode *this)

{
  if (5 < (byte)DATAFLOWNODE_LOG._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&DATAFLOWNODE_LOG);
    return;
  }
  return;
}

// WatchConnection @ 1462e81f0

void __thiscall
UDataflowEdNode::WatchConnection(UDataflowEdNode *this,FDataflowConnection *param_1,bool param_2)

{
  FGuid local_18;
  
  local_18.A = (param_1->Guid).A;
  local_18.B = (param_1->Guid).B;
  local_18.C = (param_1->Guid).C;
  local_18.D = (param_1->Guid).D;
  if (param_2) {
    TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid>
              (&this->WatchedConnections,&local_18);
    return;
  }
  TArray<FGuid,TSizedDefaultAllocator<32>_>::Remove(&this->WatchedConnections,&local_18);
  return;
}

// WatchPin @ 1462e8230

void __thiscall UDataflowEdNode::WatchPin(UDataflowEdNode *this,UEdGraphPin *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8883929836465158895>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowEdNode.cpp"
                     ,0x511,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

