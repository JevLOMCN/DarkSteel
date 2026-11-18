// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 21

// ~FVariableController @ 14ae1dd30

void __thiscall
Metasound::Frontend::FVariableController::~FVariableController(FVariableController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningGraph).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->VariablePtr).GetObject != 0) {
    plVar3 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
    plVar4 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
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
                    /* WARNING: Could not recover jumptable at 0x00014ae1dd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// FVariableController @ 14af3d810

FVariableController * __thiscall
Metasound::Frontend::FVariableController::FVariableController
          (FVariableController *this,FInitParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVariableController_Frontend_Metasound__6B_;
  (this->VariablePtr).CachedObjectPtr = (param_1->VariablePtr).CachedObjectPtr;
  lVar1 = *(longlong *)&(param_1->VariablePtr).GetObject;
  *(undefined8 *)&(this->VariablePtr).GetObject.field_0x28 = 0;
  *(longlong *)&(this->VariablePtr).GetObject = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->VariablePtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_1->VariablePtr).GetObject.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    (**(code **)*puVar4)();
  }
  (this->OwningGraph).Object = (param_1->OwningGraph).Object;
  pTVar3 = (param_1->OwningGraph).SharedReferenceCount.ReferenceController;
  (this->OwningGraph).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FindAccessorNodes @ 14af91240

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FVariableController::FindAccessorNodes
          (FVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar5 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendVariable *)0x0) {
    GetNodeArray(this,__return_storage_ptr__,&pFVar4->AccessorNodeIDs);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindAccessorNodes @ 14af912d0

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FVariableController::FindAccessorNodes
          (FVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar5 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendVariable *)0x0) {
    GetNodeArray(this,__return_storage_ptr__,&pFVar4->AccessorNodeIDs);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindDeferredAccessorNodes @ 14af914e0

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FVariableController::FindDeferredAccessorNodes
          (FVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar5 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendVariable *)0x0) {
    GetNodeArray(this,__return_storage_ptr__,&pFVar4->DeferredAccessorNodeIDs);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindDeferredAccessorNodes @ 14af91570

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FVariableController::FindDeferredAccessorNodes
          (FVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar5 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendVariable *)0x0) {
    GetNodeArray(this,__return_storage_ptr__,&pFVar4->DeferredAccessorNodeIDs);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindMutatorNode @ 14af91600

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FVariableController::FindMutatorNode
          (FVariableController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  IGraphController *pIVar3;
  undefined8 uVar4;
  FMetasoundFrontendVariable *pFVar5;
  longlong *plVar6;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar6 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  pFVar5 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar4);
  (this->VariablePtr).CachedObjectPtr = pFVar5;
  if ((pFVar5 != (FMetasoundFrontendVariable *)0x0) &&
     ((((pFVar5->MutatorNodeID).D != FrontendInvalidID.D ||
       (pFVar5->MutatorNodeID).C != FrontendInvalidID.C) ||
      (pFVar5->MutatorNodeID).B != FrontendInvalidID.B) ||
      FrontendInvalidID.A != (pFVar5->MutatorNodeID).A)) {
    local_18 = (pFVar5->MutatorNodeID).A;
    uStack_14 = (pFVar5->MutatorNodeID).B;
    uStack_10 = (pFVar5->MutatorNodeID).C;
    uStack_c = (pFVar5->MutatorNodeID).D;
    pIVar3 = (this->OwningGraph).Object;
    (**(code **)(*(longlong *)pIVar3 + 0x60))(pIVar3,__return_storage_ptr__,&local_18);
    return __return_storage_ptr__;
  }
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindMutatorNode @ 14af916e0

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FVariableController::FindMutatorNode
          (FVariableController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  IGraphController *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  FMetasoundFrontendVariable *pFVar6;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar7;
  longlong *plVar8;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  TSharedRef<Metasound::Frontend::INodeController,1> local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar8 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar8 = plVar1;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  pFVar6 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar5);
  (this->VariablePtr).CachedObjectPtr = pFVar6;
  if ((pFVar6 == (FMetasoundFrontendVariable *)0x0) ||
     ((((pFVar6->MutatorNodeID).D == FrontendInvalidID.D &&
       (pFVar6->MutatorNodeID).C == FrontendInvalidID.C) &&
      (pFVar6->MutatorNodeID).B == FrontendInvalidID.B) &&
      FrontendInvalidID.A == (pFVar6->MutatorNodeID).A)) {
    pTVar7 = INodeController::GetInvalidHandle(&local_18);
  }
  else {
    local_28 = (pFVar6->MutatorNodeID).A;
    uStack_24 = (pFVar6->MutatorNodeID).B;
    uStack_20 = (pFVar6->MutatorNodeID).C;
    uStack_1c = (pFVar6->MutatorNodeID).D;
    pIVar3 = (this->OwningGraph).Object;
    pTVar7 = (TSharedRef<Metasound::Frontend::INodeController,1> *)
             (**(code **)(*(longlong *)pIVar3 + 0x60))(pIVar3,&local_18,&local_28);
  }
  __return_storage_ptr__->Object = pTVar7->Object;
  pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetDataType @ 14af951f0

FName * __thiscall Metasound::Frontend::FVariableController::GetDataType(FVariableController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  FName *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar6 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendVariable *)0x0) {
    return &pFVar4->TypeName;
  }
  pFVar5 = Frontend::Invalid::GetInvalidName();
  return pFVar5;
}

// GetID @ 14af9ac10

FGuid * __thiscall
Metasound::Frontend::FVariableController::GetID
          (FVariableController *this,FGuid *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar5 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 == (FMetasoundFrontendVariable *)0x0) {
    uVar6 = FrontendInvalidID.A;
    uVar7 = FrontendInvalidID.B;
    uVar8 = FrontendInvalidID.C;
    uVar9 = FrontendInvalidID.D;
  }
  else {
    uVar6 = (pFVar4->ID).A;
    uVar7 = (pFVar4->ID).B;
    uVar8 = (pFVar4->ID).C;
    uVar9 = (pFVar4->ID).D;
  }
  __return_storage_ptr__->A = uVar6;
  __return_storage_ptr__->B = uVar7;
  __return_storage_ptr__->C = uVar8;
  __return_storage_ptr__->D = uVar9;
  return __return_storage_ptr__;
}

// GetLiteral @ 14af9b3c0

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FVariableController::GetLiteral(FVariableController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  FMetasoundFrontendLiteral *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar6 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendVariable *)0x0) {
    return &pFVar4->Literal;
  }
  pFVar5 = Frontend::Invalid::GetInvalidLiteral();
  return pFVar5;
}

// GetName @ 14af9b450

FName * __thiscall Metasound::Frontend::FVariableController::GetName(FVariableController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar5 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 == (FMetasoundFrontendVariable *)0x0) {
    pFVar4 = (FMetasoundFrontendVariable *)Frontend::Invalid::GetInvalidName();
  }
  return &pFVar4->Name;
}

// GetNodeArray @ 14af9b4b0

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FVariableController::GetNodeArray
          (FVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  IGraphController *pIVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar10 == pFVar9) break;
    pIVar2 = (this->OwningGraph).Object;
    local_38 = *(undefined4 *)pFVar10;
    uStack_34 = *(undefined4 *)(pFVar10 + 4);
    uStack_30 = *(undefined4 *)(pFVar10 + 8);
    uStack_2c = *(undefined4 *)(pFVar10 + 0xc);
    (**(code **)(*(longlong *)pIVar2 + 0x60))(pIVar2,&local_48,&local_38);
    cVar4 = (**(code **)(*local_48 + 0x18))();
    if (cVar4 != '\0') {
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(longlong **)pFVar8 = local_48;
      *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_40;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    pFVar10 = pFVar10 + 0x10;
  }
  return __return_storage_ptr__;
}

// GetNodeArray @ 14af9b640

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FVariableController::GetNodeArray
          (FVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  IGraphController *pIVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar11 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar10) break;
    pIVar2 = (this->OwningGraph).Object;
    local_48 = *(undefined4 *)pFVar11;
    uStack_44 = *(undefined4 *)(pFVar11 + 4);
    uStack_40 = *(undefined4 *)(pFVar11 + 8);
    uStack_3c = *(undefined4 *)(pFVar11 + 0xc);
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)pIVar2 + 0x60))(pIVar2,local_38,&local_48);
    local_58 = (longlong *)*puVar7;
    local_50 = (TReferenceControllerBase<1> *)puVar7[1];
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    cVar4 = (**(code **)(*local_58 + 0x18))();
    if (cVar4 != '\0') {
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(longlong **)pFVar9 = local_58;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_50;
      if (local_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    pFVar11 = pFVar11 + 0x10;
  }
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14afa6b80

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FVariableController::GetOwningGraph
          (FVariableController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningGraph).Object;
  pTVar1 = (this->OwningGraph).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14afa6bb0

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FVariableController::GetOwningGraph
          (FVariableController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningGraph).Object;
  pTVar1 = (this->OwningGraph).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsValid @ 14afb0220

bool __thiscall Metasound::Frontend::FVariableController::IsValid(FVariableController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  FMetasoundFrontendVariable *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar6 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  pFVar5 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar4);
  (this->VariablePtr).CachedObjectPtr = pFVar5;
  if (pFVar5 != (FMetasoundFrontendVariable *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014afb026e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)(this->OwningGraph).Object + 0x18))();
    return (bool)uVar3;
  }
  return false;
}

// SetLiteral @ 14afbda10

bool __thiscall
Metasound::Frontend::FVariableController::SetLiteral
          (FVariableController *this,FMetasoundFrontendLiteral *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  FMetasoundFrontendVariable *pFVar9;
  longlong *plVar10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar5 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar6 = *(code **)&(this->VariablePtr).GetObject;
  plVar10 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar10 = plVar5;
  }
  uVar8 = (**(code **)(*plVar10 + 8))();
  pFVar9 = (FMetasoundFrontendVariable *)(*pcVar6)(uVar8);
  (this->VariablePtr).CachedObjectPtr = pFVar9;
  if (pFVar9 != (FMetasoundFrontendVariable *)0x0) {
    (pFVar9->Literal).Type = param_1->Type;
    (pFVar9->Literal).AsNumDefault = param_1->AsNumDefault;
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              (&(pFVar9->Literal).AsBoolean,&param_1->AsBoolean);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&(pFVar9->Literal).AsInteger,&param_1->AsInteger);
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&(pFVar9->Literal).AsFloat,&param_1->AsFloat);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              (&(pFVar9->Literal).AsString,&param_1->AsString);
    pTVar1 = &(pFVar9->Literal).AsUObject;
    if (pTVar1 != &param_1->AsUObject) {
      iVar3 = (param_1->AsUObject).ArrayNum;
      piVar2 = &(pFVar9->Literal).AsUObject.ArrayMax;
      pFVar7 = (param_1->AsUObject).AllocatorInstance.Data;
      iVar4 = *piVar2;
      (pFVar9->Literal).AsUObject.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
        return true;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar7,iVar3);
    }
    return true;
  }
  return false;
}

// SetName @ 14afbdb30

void __thiscall
Metasound::Frontend::FVariableController::SetName(FVariableController *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendVariable *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->VariablePtr).GetObject);
  plVar1 = *(longlong **)&(this->VariablePtr).GetObject.field_0x28;
  pcVar2 = *(code **)&(this->VariablePtr).GetObject;
  plVar5 = (longlong *)&(this->VariablePtr).GetObject.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVariable *)(*pcVar2)(uVar3);
  (this->VariablePtr).CachedObjectPtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendVariable *)0x0) {
    pFVar4->Name = *param_1;
  }
  return;
}

// ShareAccess @ 14afbe430

FDocumentAccess * __thiscall
Metasound::Frontend::FVariableController::ShareAccess
          (FVariableController *this,FDocumentAccess *__return_storage_ptr__)

{
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShareAccess @ 14afbe450

FConstDocumentAccess * __thiscall
Metasound::Frontend::FVariableController::ShareAccess
          (FVariableController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

