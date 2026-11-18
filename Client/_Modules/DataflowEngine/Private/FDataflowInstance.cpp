// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 16

// StaticStruct @ 1462c5c70

UScriptStruct * __cdecl FDataflowInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowInstance.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowInstance,(UObject *)pUVar1,
                         L"DataflowInstance");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowInstance.OuterSingleton;
}

// FDataflowInstance @ 1462ce250

FDataflowInstance * __thiscall
FDataflowInstance::FDataflowInstance
          (FDataflowInstance *this,UObject *param_1,UDataflow *param_2,FName param_3)

{
  (this->DataflowAsset).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UDataflow *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  this->DataflowTerminal = param_3;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->VariableOverrides);
  (this->VariableOverrides).Owner = this;
  (this->VariableOverrides).OverriddenVariableGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableOverrides).OverriddenVariableGuids.ArrayNum = 0;
  (this->VariableOverrides).OverriddenVariableGuids.ArrayMax = 0;
  (this->Owner).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  return this;
}

// ~FDataflowInstance @ 1462cfe60

void __thiscall FDataflowInstance::~FDataflowInstance(FDataflowInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->VariableOverrides).OverriddenVariableGuids.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->VariableOverrides);
  return;
}

// GetDataflowAsset @ 1462dc4b0

UDataflow * __thiscall FDataflowInstance::GetDataflowAsset(FDataflowInstance *this)

{
  return (this->DataflowAsset).field0_0x0.DebugPtr;
}

// GetDataflowAssetPropertyName @ 1462dc760

FName __cdecl FDataflowInstance::GetDataflowAssetPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0xd,L"DataflowAsset",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetDataflowTerminal @ 1462dcb40

FName __thiscall FDataflowInstance::GetDataflowTerminal(FDataflowInstance *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->DataflowTerminal;
  return in_RDX;
}

// GetDataflowTerminalPropertyName @ 1462dcb60

FName __cdecl FDataflowInstance::GetDataflowTerminalPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x10,L"DataflowTerminal",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetVariableOverrides @ 1462df140

FDataflowVariableOverrides * __thiscall
FDataflowInstance::GetVariableOverrides(FDataflowInstance *this)

{
  return &this->VariableOverrides;
}

// GetVariableOverrides @ 1462df150

FDataflowVariableOverrides * __thiscall
FDataflowInstance::GetVariableOverrides(FDataflowInstance *this)

{
  return &this->VariableOverrides;
}

// GetVariableOverridesPropertyName @ 1462df160

FName __cdecl FDataflowInstance::GetVariableOverridesPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x11,L"VariableOverrides",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetVariables @ 1462df1e0

FInstancedPropertyBag * __thiscall FDataflowInstance::GetVariables(FDataflowInstance *this)

{
  return &(this->VariableOverrides).Variables;
}

// GetVariables @ 1462df1f0

FInstancedPropertyBag * __thiscall FDataflowInstance::GetVariables(FDataflowInstance *this)

{
  return &(this->VariableOverrides).Variables;
}

// SetDataflowAsset @ 1462e4f40

void __thiscall FDataflowInstance::SetDataflowAsset(FDataflowInstance *this,UDataflow *param_1)

{
  UDataflow *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->DataflowAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UDataflow *)0x0) {
    bVar2 = param_1 == (UDataflow *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDataflow *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->DataflowAsset).field0_0x0.DebugPtr = param_1;
    FDataflowVariableOverrides::SyncVariables(&this->VariableOverrides);
  }
  return;
}

// SetDataflowTerminal @ 1462e5290

void __thiscall FDataflowInstance::SetDataflowTerminal(FDataflowInstance *this,FName param_1)

{
  this->DataflowTerminal = param_1;
  return;
}

// SyncVariables @ 1462e6610

void __thiscall FDataflowInstance::SyncVariables(FDataflowInstance *this)

{
  FDataflowVariableOverrides::SyncVariables(&this->VariableOverrides);
  return;
}

// UpdateOwnerAsset @ 1462e78a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FDataflowInstance::UpdateOwnerAsset(FDataflowInstance *this,bool param_1)

{
  UDataflow *pUVar1;
  FName FVar2;
  UObject *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  TObjectPtr<UObject>_u_0 TVar5;
  code *pcVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FGraph *pFVar11;
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  TSharedPtr<UE::Dataflow::FGraph,1> *this_00;
  FDataflowNode *this_01;
  ForAnyElementType FVar14;
  bool bVar15;
  TSharedPtr<FDataflowNode,1> *pTVar16;
  undefined1 auStackY_438 [32];
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> local_3e8;
  undefined1 local_3d8 [8];
  TSharedPtr<FDataflowNode,1> local_3d0;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  TObjectPtr<UObject>_u_0 local_3a8;
  FContext local_3a0;
  UObject *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_438;
  bVar15 = false;
  pUVar1 = (this->DataflowAsset).field0_0x0.DebugPtr;
  if (((pUVar1 != (UDataflow *)0x0) &&
      (this_00 = &pUVar1->Dataflow, this_00->Object != (FGraph *)0x0)) &&
     ((this->Owner).field0_0x0.DebugPtr != (UObject *)0x0)) {
    local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.ArrayNum = 0;
    local_3e8.ArrayMax = 0;
    if (param_1) {
      pFVar11 = TSharedPtr<UE::Dataflow::FGraph,1>::operator->(this_00);
      ::FName::FName(&local_3c0,"FDataflowTerminalNode");
      pTVar12 = UE::Dataflow::FGraph::GetFilteredNodes(pFVar11,&local_3c0);
      if (&local_3e8 != pTVar12) {
        DestructItems<TSharedPtr<FDataflowNode,1>,int>
                  ((TSharedPtr<FDataflowNode,1> *)local_3e8.AllocatorInstance.Data,
                   local_3e8.ArrayNum);
        iVar10 = pTVar12->ArrayNum;
        pTVar16 = (TSharedPtr<FDataflowNode,1> *)(pTVar12->AllocatorInstance).Data;
        local_3e8.ArrayNum = iVar10;
        if ((iVar10 == 0) && (local_3e8.ArrayMax == 0)) {
          local_3e8.ArrayNum = 0;
          local_3e8.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar10,local_3e8.ArrayMax,&local_3e8.AllocatorInstance,iVar10,
                     &local_3e8.ArrayMax);
          ConstructItems<TSharedPtr<FDataflowNode,1>,TSharedPtr<FDataflowNode,1>,int>
                    (local_3e8.AllocatorInstance.Data,pTVar16,iVar10);
        }
      }
    }
    else {
      pFVar11 = TSharedPtr<UE::Dataflow::FGraph,1>::operator->(this_00);
      FVar2 = this->DataflowTerminal;
      ::FName::FName(&local_3b8,"FDataflowTerminalNode");
      UE::Dataflow::FGraph::FindFilteredNode(pFVar11,&local_3d0,&local_3b8,FVar2);
      if (local_3d0.Object != (FDataflowNode *)0x0) {
        if (((local_3e8.AllocatorInstance.Data <= &local_3d0) &&
            (&local_3d0 <
             (TSharedPtr<FDataflowNode,1> *)
             (local_3e8.AllocatorInstance.Data + (longlong)local_3e8.ArrayMax * 0x10))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return (bool)uVar7;
        }
        iVar10 = local_3e8.ArrayNum;
        if (local_3e8.ArrayNum == local_3e8.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_3e8.AllocatorInstance,&local_3e8.ArrayMax);
        }
        local_3e8.ArrayNum = iVar10 + 1;
        *(FDataflowNode **)&local_3e8.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 =
             local_3d0.Object;
        *(TReferenceControllerBase<1> **)
         (local_3e8.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) =
             local_3d0.SharedReferenceCount.ReferenceController;
        if (local_3d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_3d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3d0.SharedReferenceCount.ReferenceController);
    }
    pUVar3 = (this->Owner).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    memset(&local_3a0,0,0x360);
    UE::Dataflow::FContext::FContext(&local_3a0);
    local_3a0._padding_ =
         (longlong)
         &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
          _vftable__for__UE__Dataflow__IContextCacheStore__;
    local_3a0._padding_ =
         (longlong)
         &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
          _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
    local_40 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    iVar10 = local_3e8.ArrayNum;
    uVar13 = (ulonglong)local_3e8.ArrayNum;
    pTVar16 = (TSharedPtr<FDataflowNode,1> *)(local_3e8.AllocatorInstance.Data + uVar13 * 0x10);
    FVar14.Data = local_3e8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar10) {
        `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_3d8);
      }
      if ((TSharedPtr<FDataflowNode,1> *)FVar14.Data == pTVar16) break;
      pTVar4 = (((TSharedPtr<FDataflowNode,1> *)FVar14.Data)->SharedReferenceCount).
               ReferenceController;
      this_01 = ((TSharedPtr<FDataflowNode,1> *)FVar14.Data)->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_01 != (FDataflowNode *)0x0) {
        ::FName::FName(&local_3b0,"FDataflowTerminalNode");
        cVar8 = (**(code **)(this_01->_padding_ + 0x128))(this_01,local_3b0);
        if (cVar8 == '\0') {
          this_01 = (FDataflowNode *)0x0;
        }
        if (this_01 != (FDataflowNode *)0x0) {
          (**(code **)(this_01->_padding_ + 0x160))(this_01);
          bVar9 = FDataflowNode::IsActive(this_01,false);
          if ((bVar9) &&
             (TVar5 = (TObjectPtr<UObject>_u_0)(this->Owner).field0_0x0.DebugPtr,
             TVar5.DebugPtr != (UObject *)0x0)) {
            pcVar6 = *(code **)(this_01->_padding_ + 0x158);
            local_3a8 = TVar5;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(TVar5.DebugPtr);
            }
            (*pcVar6)(this_01,&local_3a8,&local_3a0);
            bVar15 = true;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar13 = local_3e8._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 0x10;
    }
    local_3a0._padding_ =
         (longlong)
         &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
          _vftable__for__UE__Dataflow__IContextCacheStore__;
    local_3a0._padding_ =
         (longlong)
         &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
          _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
    UE::Dataflow::FContext::~FContext(&local_3a0);
    DestructItems<TSharedPtr<FDataflowNode,1>,int>
              ((TSharedPtr<FDataflowNode,1> *)local_3e8.AllocatorInstance.Data,local_3e8.ArrayNum);
    if ((TSharedPtr<FDataflowNode,1> *)local_3e8.AllocatorInstance.Data !=
        (TSharedPtr<FDataflowNode,1> *)0x0) {
      FMemory::Free(local_3e8.AllocatorInstance.Data);
    }
  }
  return bVar15;
}

