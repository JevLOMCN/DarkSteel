// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10b8b0

UScriptStruct * __cdecl FOptimusNodeGraphAction_AddNodePair::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddNodePair.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddNodePair.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_AddNodePair");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddNodePair.OuterSingleton;
}

// Do @ 14e10b8f0

bool __thiscall
FOptimusNodeGraphAction_AddNodePair::Do
          (FOptimusNodeGraphAction_AddNodePair *this,IOptimusPathResolver *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  UOptimusNode *this_00;
  UOptimusNode *this_01;
  FString *pFVar7;
  FOptimusNodeGraphAction_AddNode *pFVar8;
  FOptimusNodeGraphAction_AddNode *pFVar9;
  FOptimusNodeGraphAction_AddNode *pFVar10;
  FOptimusNodeGraphAction_AddNode *pFVar11;
  FString local_28;
  FString local_18;
  
  if ((1 < (int)this->_padding_) && (1 < (int)this->_padding_)) {
    bVar4 = FOptimusNodeGraphAction_AddRemoveNodePair::AddNodePair
                      ((FOptimusNodeGraphAction_AddRemoveNodePair *)this,param_1);
    return bVar4;
  }
  if ((this->AddFirstNodeAction).Object == (FOptimusNodeGraphAction_AddNode *)0x0) {
    return false;
  }
  pTVar1 = (this->AddFirstNodeAction).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return false;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return false;
  }
  if ((this->AddSecondNodeAction).Object == (FOptimusNodeGraphAction_AddNode *)0x0) {
    return false;
  }
  pTVar1 = (this->AddSecondNodeAction).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return false;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return false;
  }
  pFVar9 = (FOptimusNodeGraphAction_AddNode *)0x0;
  pFVar11 = (FOptimusNodeGraphAction_AddNode *)
            (this->AddFirstNodeAction).WeakReferenceCount.ReferenceController;
  pFVar8 = pFVar9;
  pFVar10 = pFVar11;
  if (pFVar11 == (FOptimusNodeGraphAction_AddNode *)0x0) {
LAB_14e10b9a5:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pFVar11 = pFVar10;
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pFVar11->field_0x8;
    do {
      pFVar8 = (FOptimusNodeGraphAction_AddNode *)0x0;
      pFVar10 = pFVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e10b9a5;
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar11->field_0x8;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        *(atomic<int> *)&pFVar11->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    pFVar8 = (this->AddFirstNodeAction).Object;
    pFVar10 = pFVar11;
    if (pFVar8 == (FOptimusNodeGraphAction_AddNode *)0x0) goto LAB_14e10b9a5;
  }
  this_00 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&pFVar8->NodePath);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  pFVar11 = (FOptimusNodeGraphAction_AddNode *)
            (this->AddSecondNodeAction).WeakReferenceCount.ReferenceController;
  pFVar8 = pFVar11;
  if (pFVar11 != (FOptimusNodeGraphAction_AddNode *)0x0) {
    aVar3 = *(atomic<int> *)&pFVar11->field_0x8;
    do {
      pFVar8 = pFVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e10ba15;
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar11->field_0x8;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        *(atomic<int> *)&pFVar11->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    pFVar9 = (this->AddSecondNodeAction).Object;
    pFVar8 = pFVar11;
    if (pFVar9 != (FOptimusNodeGraphAction_AddNode *)0x0) goto LAB_14e10ba3b;
  }
LAB_14e10ba15:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pFVar11 = pFVar8;
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_14e10ba3b:
  this_01 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&pFVar9->NodePath);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  if ((this_00 != (UOptimusNode *)0x0) && (this_01 != (UOptimusNode *)0x0)) {
    pFVar7 = UOptimusNode::GetNodePath(this_00,&local_28);
    ::FString::operator=((FString *)&this->_padding_,pFVar7);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar7 = UOptimusNode::GetNodePath(this_01,&local_18);
    ::FString::operator=((FString *)&this->_padding_,pFVar7);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar4 = FOptimusNodeGraphAction_AddRemoveNodePair::AddNodePair
                      ((FOptimusNodeGraphAction_AddRemoveNodePair *)this,param_1);
    return bVar4;
  }
  return false;
}

// Undo @ 14e10bb10

bool __thiscall
FOptimusNodeGraphAction_AddNodePair::Undo
          (FOptimusNodeGraphAction_AddNodePair *this,IOptimusPathResolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((1 < (int)this->_padding_) && (1 < (int)this->_padding_)) {
    bVar2 = FOptimusNodeGraphAction_AddRemoveNodePair::RemoveNodePair
                      ((FOptimusNodeGraphAction_AddRemoveNodePair *)this,param_1);
    return bVar2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5689001813563408983>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                     ,599,"!FirstNodePath.IsEmpty() && !SecondNodePath.IsEmpty()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// FOptimusNodeGraphAction_AddNodePair @ 14e153e70

FOptimusNodeGraphAction_AddNodePair * __thiscall
FOptimusNodeGraphAction_AddNodePair::FOptimusNodeGraphAction_AddNodePair
          (FOptimusNodeGraphAction_AddNodePair *this,FString *param_1,FString *param_2)

{
  longlong *plVar1;
  FString local_18;
  
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,param_1);
  ::FString::operator=((FString *)&this->_padding_,param_2);
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddNodePair__6B_;
  (this->AddFirstNodeAction).Object = (FOptimusNodeGraphAction_AddNode *)0x0;
  (this->AddFirstNodeAction).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AddSecondNodeAction).Object = (FOptimusNodeGraphAction_AddNode *)0x0;
  (this->AddSecondNodeAction).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FString::PrintfImpl(&local_18,L"Add Node Pair");
  if ((FString *)plVar1 != &local_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FOptimusNodeGraphAction_AddNodePair @ 14e153f70

FOptimusNodeGraphAction_AddNodePair * __thiscall
FOptimusNodeGraphAction_AddNodePair::FOptimusNodeGraphAction_AddNodePair
          (FOptimusNodeGraphAction_AddNodePair *this,
          TWeakPtr<FOptimusNodeGraphAction_AddNode,1> *param_1,
          TWeakPtr<FOptimusNodeGraphAction_AddNode,1> *param_2)

{
  longlong *plVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FOptimusNodeGraphAction_AddNode *pFVar5;
  FWeakReferencer<1> *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FString local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddNodePair__6B_;
  (this->AddFirstNodeAction).Object = (FOptimusNodeGraphAction_AddNode *)0x0;
  (this->AddFirstNodeAction).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AddSecondNodeAction).Object = (FOptimusNodeGraphAction_AddNode *)0x0;
  (this->AddSecondNodeAction).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  pFVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_38 = *(undefined4 *)&(this->AddFirstNodeAction).Object;
  uStack_34 = *(undefined4 *)((longlong)&(this->AddFirstNodeAction).Object + 4);
  pFVar6 = &(this->AddFirstNodeAction).WeakReferenceCount;
  uStack_30 = *(undefined4 *)&pFVar6->ReferenceController;
  uStack_2c = *(undefined4 *)
               ((longlong)&(this->AddFirstNodeAction).WeakReferenceCount.ReferenceController + 4);
  pTVar7 = pFVar6->ReferenceController;
  (this->AddFirstNodeAction).Object = pFVar5;
  (this->AddFirstNodeAction).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  pFVar5 = param_2->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28 = *(undefined4 *)&(this->AddSecondNodeAction).Object;
  uStack_24 = *(undefined4 *)((longlong)&(this->AddSecondNodeAction).Object + 4);
  pFVar6 = &(this->AddSecondNodeAction).WeakReferenceCount;
  uStack_20 = *(undefined4 *)&pFVar6->ReferenceController;
  uStack_1c = *(undefined4 *)
               ((longlong)&(this->AddSecondNodeAction).WeakReferenceCount.ReferenceController + 4);
  pTVar7 = pFVar6->ReferenceController;
  (this->AddSecondNodeAction).Object = pFVar5;
  (this->AddSecondNodeAction).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  ::FString::PrintfImpl(&local_48,L"Add Node Pair");
  if ((FString *)plVar1 != &local_48) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_48.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_48.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return this;
}

// ~FOptimusNodeGraphAction_AddNodePair @ 14e1616f0

void __thiscall
FOptimusNodeGraphAction_AddNodePair::~FOptimusNodeGraphAction_AddNodePair
          (FOptimusNodeGraphAction_AddNodePair *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->AddSecondNodeAction).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->AddFirstNodeAction).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

