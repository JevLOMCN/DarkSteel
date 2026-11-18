// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 23

// FBaseOutputController @ 14ae57a80

FBaseOutputController * __thiscall
Metasound::Frontend::FBaseOutputController::FBaseOutputController
          (FBaseOutputController *this,FInitParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBaseOutputController_Frontend_Metasound__6B_;
  uVar4 = (param_1->ID).B;
  uVar5 = (param_1->ID).C;
  uVar6 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar4;
  (this->ID).C = uVar5;
  (this->ID).D = uVar6;
  (this->NodeVertexPtr).CachedObjectPtr = (param_1->NodeVertexPtr).CachedObjectPtr;
  lVar1 = *(longlong *)&(param_1->NodeVertexPtr).GetObject;
  *(undefined8 *)&(this->NodeVertexPtr).GetObject.field_0x28 = 0;
  *(longlong *)&(this->NodeVertexPtr).GetObject = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->NodeVertexPtr).GetObject.field_0x28;
    puVar7 = (undefined8 *)&(param_1->NodeVertexPtr).GetObject.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = puVar2;
    }
    (**(code **)*puVar7)();
  }
  (this->ClassOutputPtr).CachedObjectPtr = (param_1->ClassOutputPtr).CachedObjectPtr;
  lVar1 = *(longlong *)&(param_1->ClassOutputPtr).GetObject;
  *(longlong *)&(this->ClassOutputPtr).GetObject = lVar1;
  *(undefined8 *)&(this->ClassOutputPtr).GetObject.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->ClassOutputPtr).GetObject.field_0x28;
    puVar7 = (undefined8 *)&(param_1->ClassOutputPtr).GetObject.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = puVar2;
    }
    (**(code **)*puVar7)();
  }
  (this->GraphPtr).CachedObjectPtr = (param_1->GraphPtr).CachedObjectPtr;
  lVar1 = *(longlong *)&(param_1->GraphPtr).GetObject;
  *(longlong *)&(this->GraphPtr).GetObject = lVar1;
  *(undefined8 *)&(this->GraphPtr).GetObject.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->GraphPtr).GetObject.field_0x28;
    puVar7 = (undefined8 *)&(param_1->GraphPtr).GetObject.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = puVar2;
    }
    (**(code **)*puVar7)();
  }
  (this->OwningNode).Object = (param_1->OwningNode).Object;
  pTVar3 = (param_1->OwningNode).SharedReferenceCount.ReferenceController;
  (this->OwningNode).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FBaseOutputController @ 14ae5c080

void __thiscall
Metasound::Frontend::FBaseOutputController::~FBaseOutputController(FBaseOutputController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningNode).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar3 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar4 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->ClassOutputPtr).GetObject != 0) {
    plVar3 = *(longlong **)&(this->ClassOutputPtr).GetObject.field_0x28;
    plVar4 = (longlong *)&(this->ClassOutputPtr).GetObject.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->NodeVertexPtr).GetObject != 0) {
    plVar3 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
    plVar4 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ae5c11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// CanConnectTo @ 14ae65be0

FConnectability * __thiscall
Metasound::Frontend::FBaseOutputController::CanConnectTo
          (FBaseOutputController *this,FConnectability *__return_storage_ptr__,
          IInputController *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0xa0))(param_1,__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// Connect @ 14ae663e0

bool __thiscall
Metasound::Frontend::FBaseOutputController::Connect
          (FBaseOutputController *this,IInputController *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ae663ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xa8))(param_1,this);
  return (bool)uVar1;
}

// ConnectWithConverterNode @ 14ae66410

bool __thiscall
Metasound::Frontend::FBaseOutputController::ConnectWithConverterNode
          (FBaseOutputController *this,IInputController *param_1,FConverterNodeClassInfo *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ae6641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb0))(param_1,this);
  return (bool)uVar1;
}

// Disconnect @ 14ae6d820

bool __thiscall
Metasound::Frontend::FBaseOutputController::Disconnect
          (FBaseOutputController *this,IInputController *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ae6d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xc0))(param_1,this);
  return (bool)uVar1;
}

// Disconnect @ 14ae6d840

bool __thiscall Metasound::Frontend::FBaseOutputController::Disconnect(FBaseOutputController *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IInputController *pIVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar6;
  bool bVar7;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar8;
  undefined1 local_res8 [8];
  TSharedRef<Metasound::Frontend::IInputController,1> *local_38;
  int local_30;
  
  bVar7 = true;
  (**(code **)(this->_padding_ + 0x70))(this,&local_38);
  iVar3 = local_30;
  pTVar8 = local_38 + local_30;
  pTVar6 = local_38;
  while( true ) {
    if (local_30 != iVar3) {
      `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IInputController,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar6 == pTVar8) break;
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar4 = (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2);
    if (cVar4 != '\0') {
      bVar5 = (**(code **)(this->_padding_ + 0x80))(this,pIVar2);
      bVar7 = (bool)(bVar7 & bVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pTVar6 = pTVar6 + 1;
  }
  DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_38,local_30);
  if (local_38 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
    FMemory::Free(local_38);
  }
  return bVar7;
}

// FindEdges @ 14ae71bc0

TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FBaseOutputController::FindEdges
          (FBaseOutputController *this,
          TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  FMetasoundFrontendGraph *pFVar7;
  TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
  pcVar1 = *(code **)&(this->GraphPtr).GetObject;
  plVar2 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
  plVar9 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
  }
  uVar6 = (**(code **)(*plVar9 + 8))();
  pFVar7 = (FMetasoundFrontendGraph *)(*pcVar1)(uVar6);
  (this->GraphPtr).CachedObjectPtr = pFVar7;
  if (pFVar7 == (FMetasoundFrontendGraph *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    (**(code **)(this->_padding_ + 0x40))(this,&local_28);
    (**(code **)(this->_padding_ + 0x20))(this,&local_18);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    pFVar11 = (pFVar7->Edges).AllocatorInstance.Data;
    pFVar12 = pFVar11 + (longlong)(pFVar7->Edges).ArrayNum * 0x40;
    for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 0x40) {
      if ((((local_24 == *(int *)(pFVar11 + 4) && local_20 == *(int *)(pFVar11 + 8)) &&
           local_1c == *(int *)(pFVar11 + 0xc)) && local_28 == *(int *)pFVar11) &&
         (((local_18 == *(int *)(pFVar11 + 0x10) && local_14 == *(int *)(pFVar11 + 0x14)) &&
          local_10 == *(int *)(pFVar11 + 0x18)) && local_c == *(int *)(pFVar11 + 0x1c))) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= pFVar11) &&
           ((pFVar11 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x40 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar1 = (code *)swi(3);
          pTVar8 = (TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar8;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x440,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        uVar6 = *(undefined8 *)(pFVar11 + 8);
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        lVar10 = (longlong)iVar5 * 0x40;
        *(undefined8 *)(pFVar3 + lVar10) = *(undefined8 *)pFVar11;
        *(undefined8 *)(pFVar3 + lVar10 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar11 + 0x18);
        *(undefined8 *)(pFVar3 + lVar10 + 0x10) = *(undefined8 *)(pFVar11 + 0x10);
        *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar11 + 0x28);
        *(undefined8 *)(pFVar3 + lVar10 + 0x20) = *(undefined8 *)(pFVar11 + 0x20);
        *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar11 + 0x38);
        *(undefined8 *)(pFVar3 + lVar10 + 0x30) = *(undefined8 *)(pFVar11 + 0x30);
        *(undefined8 *)(pFVar3 + lVar10 + 0x30 + 8) = uVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetConnectedInputs @ 14ae74a20

TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FBaseOutputController::GetConnectedInputs
          (FBaseOutputController *this,
          TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  INodeController *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> local_68;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pIVar1 = (this->OwningNode).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x178))(pIVar1,&local_48);
  FindEdges(this,&local_68);
  iVar7 = local_68.ArrayNum;
  pFVar9 = local_68.AllocatorInstance.Data + 0x30;
  pFVar10 = local_68.AllocatorInstance.Data + (longlong)iVar7 * 0x40;
  while( true ) {
    if (local_68.ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendEdge,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 + -0x30 == pFVar10) break;
    local_38 = *(undefined4 *)(pFVar9 + -0x10);
    uStack_34 = *(undefined4 *)(pFVar9 + -0xc);
    uStack_30 = *(undefined4 *)(pFVar9 + -8);
    uStack_2c = *(undefined4 *)(pFVar9 + -4);
    (**(code **)(*local_48 + 0x60))(local_48,&local_58,&local_38);
    local_28 = *(undefined4 *)pFVar9;
    uStack_24 = *(undefined4 *)(pFVar9 + 4);
    uStack_20 = *(undefined4 *)(pFVar9 + 8);
    uStack_1c = *(undefined4 *)(pFVar9 + 0xc);
    (**(code **)(*local_58 + 0xb8))(local_58,&local_78,&local_28);
    cVar3 = (**(code **)(*local_78 + 0x18))();
    if (cVar3 != '\0') {
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(longlong **)pFVar8 = local_78;
      *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_70;
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    pFVar9 = pFVar9 + 0x40;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return __return_storage_ptr__;
}

// GetConstConnectedInputs @ 14ae74c00

TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FBaseOutputController::GetConstConnectedInputs
          (FBaseOutputController *this,
          TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  INodeController *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> local_78;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pIVar1 = (this->OwningNode).Object;
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)pIVar1 + 0x178))(pIVar1,local_58);
  pTVar2 = (TReferenceControllerBase<1> *)puVar8[1];
  plVar3 = (longlong *)*puVar8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  FindEdges(this,&local_78);
  iVar10 = local_78.ArrayNum;
  pFVar12 = local_78.AllocatorInstance.Data + 0x30;
  pFVar13 = local_78.AllocatorInstance.Data + (longlong)iVar10 * 0x40;
  while( true ) {
    if (local_78.ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendEdge,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 + -0x30 == pFVar13) break;
    local_48 = *(undefined4 *)(pFVar12 + -0x10);
    uStack_44 = *(undefined4 *)(pFVar12 + -0xc);
    uStack_40 = *(undefined4 *)(pFVar12 + -8);
    uStack_3c = *(undefined4 *)(pFVar12 + -4);
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_68,&local_48);
    local_38 = *(undefined4 *)pFVar12;
    uStack_34 = *(undefined4 *)(pFVar12 + 4);
    uStack_30 = *(undefined4 *)(pFVar12 + 8);
    uStack_2c = *(undefined4 *)(pFVar12 + 0xc);
    (**(code **)(*local_68 + 0xb0))(local_68,&local_88,&local_38);
    cVar5 = (**(code **)(*local_88 + 0x18))();
    if (cVar5 != '\0') {
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(longlong **)pFVar11 = local_88;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = local_80;
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    pFVar12 = pFVar12 + 0x40;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetDataType @ 14ae75860

FName * __thiscall
Metasound::Frontend::FBaseOutputController::GetDataType(FBaseOutputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVertex *pFVar4;
  FName *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
  plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
  plVar6 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar3);
  (this->NodeVertexPtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendVertex *)0x0) {
    return &pFVar4->TypeName;
  }
  pFVar5 = Frontend::Invalid::GetInvalidName();
  return pFVar5;
}

// GetID @ 14ae75be0

FGuid * __thiscall
Metasound::Frontend::FBaseOutputController::GetID
          (FBaseOutputController *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->ID).B;
  uVar2 = (this->ID).C;
  uVar3 = (this->ID).D;
  __return_storage_ptr__->A = (this->ID).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetName @ 14ae77410

FName * __thiscall Metasound::Frontend::FBaseOutputController::GetName(FBaseOutputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVertex *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
  plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
  plVar5 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar3);
  (this->NodeVertexPtr).CachedObjectPtr = pFVar4;
  if (pFVar4 == (FMetasoundFrontendVertex *)0x0) {
    pFVar4 = (FMetasoundFrontendVertex *)Frontend::Invalid::GetInvalidName();
  }
  return &pFVar4->Name;
}

// GetOwningNode @ 14ae78540

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FBaseOutputController::GetOwningNode
          (FBaseOutputController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningNode).Object;
  pTVar1 = (this->OwningNode).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOwningNode @ 14ae78570

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FBaseOutputController::GetOwningNode
          (FBaseOutputController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningNode).Object;
  pTVar1 = (this->OwningNode).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOwningNodeID @ 14ae785a0

FGuid * __thiscall
Metasound::Frontend::FBaseOutputController::GetOwningNodeID
          (FBaseOutputController *this,FGuid *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->OwningNode).Object + 0x158))();
  return __return_storage_ptr__;
}

// GetVertexAccessType @ 14ae78c70

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FBaseOutputController::GetVertexAccessType(FBaseOutputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  EMetasoundFrontendVertexAccessType EVar6;
  IOutputController *pIVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  FMetasoundFrontendClassOutput *pFVar11;
  longlong *plVar12;
  IOutputController *pIVar13;
  IOutputController *pIVar14;
  IOutputController *pIVar15;
  bool bVar16;
  TSharedRef<Metasound::Frontend::IOutputController_const_,1> local_68;
  TSharedRef<Metasound::Frontend::IOutputController_const_,1> local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pIVar7 = (IOutputController *)this->_padding_;
  pIVar15 = (IOutputController *)0x0;
  pIVar13 = pIVar7;
  pIVar14 = pIVar15;
  if (pIVar7 != (IOutputController *)0x0) {
    iVar3 = *(int *)&pIVar7->field_0x8;
    do {
      pIVar13 = pIVar15;
      pIVar14 = (IOutputController *)0x0;
      if (iVar3 == 0) goto LAB_14ae78cb1;
      LOCK();
      iVar5 = *(int *)&pIVar7->field_0x8;
      bVar16 = iVar3 == iVar5;
      if (bVar16) {
        *(int *)&pIVar7->field_0x8 = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar16);
    pIVar13 = pIVar7;
    pIVar14 = (IOutputController *)this->_padding_;
  }
LAB_14ae78cb1:
  pIVar7 = (IOutputController *)&pIVar14->field_0x8;
  if (pIVar14 == (IOutputController *)0x0) {
    pIVar7 = pIVar15;
  }
  if ((pIVar7 != (IOutputController *)&this->_padding_) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x69a,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  if ((pIVar14 == (IOutputController *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  local_58.Object = pIVar14;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar13;
  if ((pIVar14 == (IOutputController *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FindReroutedOutput(&local_68,&local_58);
  cVar4 = (**(code **)(*(longlong *)local_68.Object + 0x18))();
  if (cVar4 == '\0') {
LAB_14ae78e26:
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassOutputPtr).GetObject);
    pcVar2 = *(code **)&(this->ClassOutputPtr).GetObject;
    plVar1 = *(longlong **)&(this->ClassOutputPtr).GetObject.field_0x28;
    plVar12 = (longlong *)&(this->ClassOutputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar12 = plVar1;
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    pFVar11 = (FMetasoundFrontendClassOutput *)(*pcVar2)(uVar10);
    (this->ClassOutputPtr).CachedObjectPtr = pFVar11;
    if (pFVar11 == (FMetasoundFrontendClassOutput *)0x0) {
      EVar6 = Unset;
    }
    else {
      EVar6 = *(EMetasoundFrontendVertexAccessType *)&pFVar11->field_0x30;
    }
  }
  else {
    piVar8 = (int *)(**(code **)(this->_padding_ + 0x40))(this,local_48);
    piVar9 = (int *)(**(code **)(*(longlong *)local_68.Object + 0x40))(local_68.Object,local_38);
    if (((piVar9[3] == piVar8[3] && piVar9[2] == piVar8[2]) && piVar9[1] == piVar8[1]) &&
        *piVar8 == *piVar9) {
      piVar8 = (int *)(**(code **)(this->_padding_ + 0x20))(this,local_28);
      piVar9 = (int *)(**(code **)(*(longlong *)local_68.Object + 0x20))(local_68.Object,local_18);
      if (((piVar9[3] == piVar8[3] && piVar9[2] == piVar8[2]) && piVar9[1] == piVar8[1]) &&
          *piVar8 == *piVar9) goto LAB_14ae78e26;
    }
    EVar6 = (**(code **)(*(longlong *)local_68.Object + 0x38))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return EVar6;
}

// IsConnected @ 14ae7a240

bool __thiscall Metasound::Frontend::FBaseOutputController::IsConnected(FBaseOutputController *this)

{
  int iVar1;
  TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar2 = FindEdges(this,&local_18);
  iVar1 = pTVar2->ArrayNum;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return 0 < iVar1;
}

// IsConnectionUserModifiable @ 14ae7a280

bool __thiscall
Metasound::Frontend::FBaseOutputController::IsConnectionUserModifiable(FBaseOutputController *this)

{
  code *pcVar1;
  EMetasoundFrontendClassType EVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendClassMetadata *pFVar5;
  undefined8 *puVar6;
  FMetasoundFrontendVersionNumber *pFVar7;
  INodeTemplateRegistry *pIVar8;
  longlong *plVar9;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  EMetasoundFrontendClassType local_38;
  FName local_34;
  FName FStack_2c;
  FName local_24;
  FMetasoundFrontendVersionNumber local_1c;
  
  (**(code **)(this->_padding_ + 0x48))(this,&local_58);
  pFVar5 = (FMetasoundFrontendClassMetadata *)(**(code **)(*local_58 + 0x118))();
  EVar2 = FMetasoundFrontendClassMetadata::GetType(pFVar5);
  if (EVar2 == Template) {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x48))(this,local_48);
    pFVar5 = (FMetasoundFrontendClassMetadata *)(**(code **)(*(longlong *)*puVar6 + 0x118))();
    local_38 = FMetasoundFrontendClassMetadata::GetType(pFVar5);
    local_34 = (pFVar5->ClassName).Namespace;
    FStack_2c = (pFVar5->ClassName).Name;
    local_24 = (pFVar5->ClassName).Variant;
    pFVar7 = FMetasoundFrontendClassMetadata::GetVersion(pFVar5);
    local_1c = *pFVar7;
    EVar2 = FMetasoundFrontendClassMetadata::GetType(pFVar5);
    if (EVar2 == Graph) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                         ,0xa9,
                         L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    pIVar8 = INodeTemplateRegistry::Get();
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
    if (plVar9 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar9 + 0x68))(plVar9);
      goto LAB_14ae7a38b;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_752319785965977443>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendOutputController.cpp"
                       ,0x9d,"Template");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  uVar4 = 1;
LAB_14ae7a38b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  return (bool)uVar4;
}

// IsValid @ 14ae7a860

bool __thiscall Metasound::Frontend::FBaseOutputController::IsValid(FBaseOutputController *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  FMetasoundFrontendVertex *pFVar5;
  FMetasoundFrontendGraph *pFVar6;
  longlong *plVar7;
  
  cVar3 = (**(code **)(*(longlong *)(this->OwningNode).Object + 0x18))();
  if (cVar3 != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodeVertexPtr).GetObject);
    plVar1 = *(longlong **)&(this->NodeVertexPtr).GetObject.field_0x28;
    pcVar2 = *(code **)&(this->NodeVertexPtr).GetObject;
    plVar7 = (longlong *)&(this->NodeVertexPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar7 = plVar1;
    }
    uVar4 = (**(code **)(*plVar7 + 8))();
    pFVar5 = (FMetasoundFrontendVertex *)(*pcVar2)(uVar4);
    (this->NodeVertexPtr).CachedObjectPtr = pFVar5;
    if (pFVar5 != (FMetasoundFrontendVertex *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
      pcVar2 = *(code **)&(this->GraphPtr).GetObject;
      plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
      plVar7 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar7 = plVar1;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      pFVar6 = (FMetasoundFrontendGraph *)(*pcVar2)(uVar4);
      (this->GraphPtr).CachedObjectPtr = pFVar6;
      if (pFVar6 != (FMetasoundFrontendGraph *)0x0) {
        return true;
      }
    }
  }
  return false;
}

// SetName @ 14ae89080

void __thiscall
Metasound::Frontend::FBaseOutputController::SetName(FBaseOutputController *this,FName *param_1)

{
  return;
}

// ShareAccess @ 14ae89d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FBaseOutputController::ShareAccess
          (FBaseOutputController *this,FDocumentAccess *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  TAccessPtr<FMetasoundFrontendVertex_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)__return_storage_ptr__,
             &this->NodeVertexPtr);
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendClassOutput_const_> *)&__return_storage_ptr__->_padding_,
             &this->ClassOutputPtr);
  TAccessPtr<FMetasoundFrontendGraph>::operator=(&__return_storage_ptr__->Graph,&this->GraphPtr);
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,&this->GraphPtr,Tag);
  __return_storage_ptr__->_padding_ = local_58._0_8_;
  lVar7 = __return_storage_ptr__->_padding_;
  lVar8 = __return_storage_ptr__->_padding_;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->_padding_;
  uVar2 = *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  uVar3 = *(undefined4 *)&__return_storage_ptr__->_padding_;
  uVar4 = *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  lVar5 = __return_storage_ptr__->_padding_;
  plVar6 = (longlong *)__return_storage_ptr__->_padding_;
  __return_storage_ptr__->_padding_ = local_58._16_8_;
  __return_storage_ptr__->_padding_ = local_58._24_8_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._32_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._36_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._40_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._44_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._48_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._52_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._56_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = lVar5;
  local_58._56_8_ = plVar6;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    local_58._16_8_ = lVar7;
    local_58._24_8_ = lVar8;
    (**(code **)(*plVar9 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ShareAccess @ 14ae89e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FBaseOutputController::ShareAccess
          (FBaseOutputController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  TAccessPtr<FMetasoundFrontendVertex_const_>::operator=
            (&__return_storage_ptr__->ConstVertex,&this->NodeVertexPtr);
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::operator=
            (&__return_storage_ptr__->ConstClassOutput,&this->ClassOutputPtr);
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,&this->GraphPtr,Tag);
  (__return_storage_ptr__->ConstGraph).CachedObjectPtr = (FMetasoundFrontendGraph *)local_58._0_8_;
  lVar7 = *(longlong *)&(__return_storage_ptr__->ConstGraph).GetObject;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x8;
  uVar1 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x10;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x14;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x18;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x1c;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x20;
  plVar6 = *(longlong **)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject = local_58._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x8 = local_58._24_8_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x10 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x14 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x18 = local_58._40_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x1c = local_58._44_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x20 = local_58._48_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x24 = local_58._52_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x28 = local_58._56_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x2c = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = uVar5;
  local_58._56_8_ = plVar6;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    local_58._16_8_ = lVar7;
    local_58._24_8_ = uVar8;
    (**(code **)(*plVar9 + 0x10))();
  }
  return __return_storage_ptr__;
}

