// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 18

// StaticClass @ 14e114c70

UClass * __cdecl UOptimusActionStack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusActionStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusActionStack",
               &Z_Registration_Info_UClass_UOptimusActionStack.InnerSingleton,
               StaticRegisterNativesUOptimusActionStack,0xc0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusActionStack>,
               InternalVTableHelperCtorCaller<UOptimusActionStack>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusActionStack.InnerSingleton;
}

// RunAction<FOptimusNodeGraphAction_AddNodePair,FString_const_&,FString_const_&> @ 14e145990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UOptimusActionStack::RunAction<FOptimusNodeGraphAction_AddNodePair,FString_const_&,FString_const_&>
          (UOptimusActionStack *this,FString *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FString local_38;
  TSharedPtr<FOptimusAction,1> local_28;
  
  pTVar5 = ::operator_new(0x68);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    local_28.Object = ___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNodePair___00_SharedPointerInternals__6B_
    ;
    paVar1 = &pTVar5[1].SharedReferenceCount;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    ::FString::operator=((FString *)&pTVar5[2].SharedReferenceCount,param_1);
    ::FString::operator=((FString *)&pTVar5[3].SharedReferenceCount,param_2);
    pTVar5[1]._padding_ = (longlong)&___7FOptimusNodeGraphAction_AddNodePair__6B_;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[6]._padding_ = 0;
    ::FString::PrintfImpl(&local_38,L"Add Node Pair");
    if (paVar1 != (atomic<int> *)&local_38) {
      if (*(void **)paVar1 != (void *)0x0) {
        FMemory::Free(*(void **)paVar1);
      }
      *(FScriptContainerElement **)paVar1 = local_38.Data.AllocatorInstance.Data;
      *(int *)&pTVar5[2]._padding_ = local_38.Data.ArrayNum;
      *(int *)((longlong)&pTVar5[2]._padding_ + 4) = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((FOptimusAction *)(pTVar5 + 1) == (FOptimusAction *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar5;
    local_28.Object = (FOptimusAction *)(pTVar5 + 1);
    local_28.SharedReferenceCount.ReferenceController = pTVar5;
  }
  bVar3 = RunAction(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar3;
}

// RunAction<FOptimusNodeGraphAction_RemoveGraph,UOptimusNodeGraph_*_&> @ 14e145b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UOptimusActionStack::RunAction<FOptimusNodeGraphAction_RemoveGraph,UOptimusNodeGraph_*_&>
          (UOptimusActionStack *this,UOptimusNodeGraph **param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FOptimusAction,1> local_18;
  
  pTVar4 = ::operator_new(0x68);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = ___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveGraph___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeGraphAction_RemoveGraph::FOptimusNodeGraphAction_RemoveGraph
              ((FOptimusNodeGraphAction_RemoveGraph *)(pTVar4 + 1),*param_1);
    local_18.Object = (FOptimusAction *)(pTVar4 + 1);
    if (local_18.Object == (FOptimusAction *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  bVar2 = RunAction(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar2;
}

// RunAction<FOptimusNodeGraphAction_RenameGraph,UOptimusNodeGraph_*_&,FName> @ 14e145c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UOptimusActionStack::RunAction<FOptimusNodeGraphAction_RenameGraph,UOptimusNodeGraph_*_&,FName>
          (UOptimusActionStack *this,UOptimusNodeGraph **param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FOptimusAction,1> local_18;
  
  pTVar4 = ::operator_new(0x58);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = ___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RenameGraph___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeGraphAction_RenameGraph::FOptimusNodeGraphAction_RenameGraph
              ((FOptimusNodeGraphAction_RenameGraph *)(pTVar4 + 1),*param_1,*param_2);
    local_18.Object = (FOptimusAction *)(pTVar4 + 1);
    if (local_18.Object == (FOptimusAction *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  bVar2 = RunAction(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar2;
}

// UOptimusActionStack @ 14e1580e0

UOptimusActionStack * __thiscall
UOptimusActionStack::UOptimusActionStack(UOptimusActionStack *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusActionStack__6B_;
  this->TransactedActionIndex = 0;
  this->CurrentActionIndex = 0;
  this->bIsRunningAction = false;
  (this->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actions).ArrayNum = 0;
  (this->Actions).ArrayMax = 0;
  (this->ActionScopes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionScopes).ArrayNum = 0;
  (this->ActionScopes).ArrayMax = 0;
  *(undefined8 *)&this->BeginScopeFunc = 0;
  *(undefined8 *)&(this->BeginScopeFunc).field_0x28 = 0;
  *(undefined8 *)&this->EndScopeFunc = 0;
  *(undefined8 *)&(this->EndScopeFunc).field_0x28 = 0;
  return this;
}

// UOptimusActionStack @ 14e158140

UOptimusActionStack * __thiscall UOptimusActionStack::UOptimusActionStack(UOptimusActionStack *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UOptimusActionStack__6B_;
  this->TransactedActionIndex = 0;
  this->CurrentActionIndex = 0;
  this->bIsRunningAction = false;
  (this->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actions).ArrayNum = 0;
  (this->Actions).ArrayMax = 0;
  (this->ActionScopes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionScopes).ArrayNum = 0;
  (this->ActionScopes).ArrayMax = 0;
  *(undefined8 *)&this->BeginScopeFunc = 0;
  *(undefined8 *)&(this->BeginScopeFunc).field_0x28 = 0;
  *(undefined8 *)&this->EndScopeFunc = 0;
  *(undefined8 *)&(this->EndScopeFunc).field_0x28 = 0;
  return this;
}

// ~UOptimusActionStack @ 14e162050

void __thiscall UOptimusActionStack::~UOptimusActionStack(UOptimusActionStack *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UOptimusActionStack__6B_;
  if (*(longlong *)&this->EndScopeFunc != 0) {
    plVar1 = *(longlong **)&(this->EndScopeFunc).field_0x28;
    plVar3 = (longlong *)&(this->EndScopeFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->BeginScopeFunc != 0) {
    plVar1 = *(longlong **)&(this->BeginScopeFunc).field_0x28;
    plVar3 = (longlong *)&(this->BeginScopeFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<TSharedPtr<FOptimusCompoundAction,1>,int>
            ((TSharedPtr<FOptimusCompoundAction,1> *)(this->ActionScopes).AllocatorInstance.Data,
             (this->ActionScopes).ArrayNum);
  pFVar2 = (this->ActionScopes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FOptimusAction,1>,int>
            ((TSharedPtr<FOptimusAction,1> *)(this->Actions).AllocatorInstance.Data,
             (this->Actions).ArrayNum);
  pFVar2 = (this->Actions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CloseActionScope @ 14e183230

bool __thiscall UOptimusActionStack::CloseActionScope(UOptimusActionStack *this)

{
  int *piVar1;
  FOptimusAction *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TSharedPtr<FOptimusAction,1> local_28;
  
  if ((this->ActionScopes).ArrayNum < 1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3926983981366509426>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusActionStack.cpp"
                       ,0x8e,"ActionScopes.Num() > 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  else {
    lVar8 = (longlong)(this->ActionScopes).ArrayNum;
    pFVar9 = (this->ActionScopes).AllocatorInstance.Data;
    pFVar2 = *(FOptimusAction **)(pFVar9 + lVar8 * 0x10 + -0x10);
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar9 + lVar8 * 0x10 + -8);
    *(undefined8 *)(pFVar9 + lVar8 * 0x10 + -8) = 0;
    *(undefined8 *)(pFVar9 + lVar8 * 0x10 + -0x10) = 0;
    iVar7 = (this->ActionScopes).ArrayNum;
    pFVar9 = (this->ActionScopes).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar9 + -8));
    iVar7 = (this->ActionScopes).ArrayNum - iVar7;
    if (iVar7 != 0) {
      memmove(pFVar9 + -0x10,pFVar9,(longlong)iVar7 << 4);
    }
    piVar1 = &(this->ActionScopes).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->ActionScopes).AllocatorInstance,(this->ActionScopes).ArrayNum,
               &(this->ActionScopes).ArrayMax);
    if (pFVar2 == (FOptimusAction *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    if (*(int *)&pFVar2[1].Title.Data.AllocatorInstance.Data != 0) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pFVar2;
      local_28.SharedReferenceCount.ReferenceController = pTVar3;
      bVar5 = RunAction(this,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return bVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return false;
}

// GetGraphCollectionRoot @ 14e1c56a0

IOptimusPathResolver * __thiscall
UOptimusActionStack::GetGraphCollectionRoot(UOptimusActionStack *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  IOptimusPathResolver *pIVar2;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    return pIVar2;
  }
  return (IOptimusPathResolver *)0x0;
}

// GetPrivateStaticClass @ 14e1d4370

UClass * __cdecl UOptimusActionStack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusActionStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusActionStack",
               &Z_Registration_Info_UClass_UOptimusActionStack.InnerSingleton,
               StaticRegisterNativesUOptimusActionStack,0xc0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusActionStack>,
               InternalVTableHelperCtorCaller<UOptimusActionStack>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusActionStack.InnerSingleton;
}

// OpenActionScope @ 14e1f5b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UOptimusActionStack::OpenActionScope(UOptimusActionStack *this,FString *param_1)

{
  TArray<TSharedPtr<FOptimusCompoundAction,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar1 = &this->ActionScopes;
  pTVar6 = ::operator_new(0x38);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pTStack_10 = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusCompoundAction___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)&___7FOptimusAction__6B_;
    ::FString::FString((FString *)&pTVar6[1].SharedReferenceCount,param_1);
    pTVar6[1]._padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    local_18 = pTVar6 + 1;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    if (local_18 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_10 = pTVar6;
  }
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar7 + (longlong)(this->ActionScopes).ArrayMax * 0x10
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ActionScopes).ArrayNum;
  piVar2 = &(this->ActionScopes).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ActionScopes).ArrayNum = iVar5 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar7 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTStack_10;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Redo @ 14e205140

bool __thiscall UOptimusActionStack::Redo(UOptimusActionStack *this)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  UObjectBaseUtility *this_00;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UClass *pUVar7;
  void *pvVar8;
  FScriptContainerElement *pFVar9;
  
  uVar1 = (this->Actions).ArrayNum;
  uVar2 = this->CurrentActionIndex;
  if (uVar2 == uVar1) {
    return false;
  }
  this->CurrentActionIndex = uVar2 + 1;
  pvVar8 = (void *)0x0;
  uVar6 = 0;
  if ((int)uVar2 < (int)uVar1) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar5 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar5;
    }
  }
  pFVar9 = (this->Actions).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
  if (*(longlong *)pFVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar5 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar5;
    }
  }
  plVar3 = *(longlong **)pFVar9;
  this_00 = (UObjectBaseUtility *)this->_padding_;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar7 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
    pvVar8 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e205230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(plVar3,pvVar8);
  return (bool)uVar5;
}

// RunAction @ 14e21a9b0

bool __thiscall
UOptimusActionStack::RunAction(UOptimusActionStack *this,TSharedPtr<FOptimusAction,1> *param_1)

{
  int *piVar1;
  UObjectBaseUtility *this_00;
  TSharedPtr<FOptimusAction,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  FOptimusCompoundAction *this_01;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  UClass *pUVar14;
  void *pvVar15;
  FOptimusAction *pFVar16;
  undefined8 uVar17;
  longlong *plVar18;
  FScriptContainerElement *pFVar19;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  UOptimusActionStack *local_res20;
  TSharedPtr<FOptimusAction,1> local_48;
  
  if (this->bIsRunningAction != false) {
    local_res8[0] = 0;
    bVar6 = `UOptimusActionStack::RunAction'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
  }
  bVar6 = this->bIsRunningAction;
  this->bIsRunningAction = true;
  iVar12 = (this->ActionScopes).ArrayNum;
  if (iVar12 == 0) {
    this_00 = (UObjectBaseUtility *)this->_padding_;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar14 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
      pvVar15 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar14);
      if (pvVar15 != (void *)0x0) {
        if ((*(longlong *)&this->BeginScopeFunc == 0) || (*(longlong *)&this->EndScopeFunc == 0)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pFVar16 = TSharedPtr<FOptimusAction,1>::operator->(param_1);
        cVar7 = (**(code **)(pFVar16->_padding_ + 8))(pFVar16,pvVar15);
        if (cVar7 != '\0') {
          iVar12 = (this->Actions).ArrayNum;
          uVar13 = this->CurrentActionIndex;
          if (iVar12 < (int)uVar13) {
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,uVar13 - iVar12,&(this->Actions).AllocatorInstance,
                                &(this->Actions).ArrayNum,&(this->Actions).ArrayMax);
            memset((this->Actions).AllocatorInstance.Data + (longlong)iVar11 * 0x10,0,
                   (longlong)(int)(uVar13 - iVar12) << 4);
          }
          else {
            if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
            }
            if ((int)uVar13 < iVar12) {
              uVar21 = iVar12 - uVar13;
              if (((int)(uVar21 | uVar13) < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              if (uVar21 != 0) {
                TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                          (&this->Actions,uVar13,uVar21);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,&(this->Actions).AllocatorInstance,(this->Actions).ArrayNum,
                           &(this->Actions).ArrayMax);
              }
            }
          }
          pTVar20 = &this->Actions;
          pTVar2 = (TSharedPtr<FOptimusAction,1> *)(pTVar20->AllocatorInstance).Data;
          if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Actions).ArrayMax)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          iVar12 = (this->Actions).ArrayNum;
          piVar1 = &(this->Actions).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar20->AllocatorInstance,piVar1);
            (this->Actions).ArrayNum = iVar12;
          }
          (this->Actions).ArrayNum = iVar12 + 1;
          pFVar19 = (pTVar20->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(FOptimusAction **)pFVar19 = param_1->Object;
          pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
          *(TReferenceControllerBase<1> **)(pFVar19 + 8) = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (bVar10) {
            this->CurrentActionIndex = this->CurrentActionIndex + 1;
            pFVar16 = TSharedPtr<FOptimusAction,1>::operator->(param_1);
            local_res20 = this;
            UE::Core::Private::Function::CheckCallable(*(void **)&this->BeginScopeFunc);
            pcVar5 = *(code **)&this->BeginScopeFunc;
            plVar4 = *(longlong **)&(this->BeginScopeFunc).field_0x28;
            plVar18 = (longlong *)&(this->BeginScopeFunc).field_0x10;
            if (plVar4 != (longlong *)0x0) {
              plVar18 = plVar4;
            }
            uVar17 = (**(code **)(*plVar18 + 8))();
            local_res18[0] = (*pcVar5)(uVar17,&local_res20,&pFVar16->Title);
            this->TransactedActionIndex = this->TransactedActionIndex + 1;
            UE::Core::Private::Function::CheckCallable(*(void **)&this->EndScopeFunc);
            pcVar5 = *(code **)&this->EndScopeFunc;
            plVar4 = *(longlong **)&(this->EndScopeFunc).field_0x28;
            plVar18 = (longlong *)&(this->EndScopeFunc).field_0x10;
            if (plVar4 != (longlong *)0x0) {
              plVar18 = plVar4;
            }
            uVar17 = (**(code **)(*plVar18 + 8))();
            (*pcVar5)(uVar17,local_res18);
          }
          goto LAB_14e21ad85;
        }
      }
    }
    this->bIsRunningAction = bVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    uVar13 = 0;
    if ((int)(iVar12 - 1U) < iVar12) {
      uVar13 = ~(iVar12 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    iVar12 = (this->ActionScopes).ArrayNum;
    pFVar19 = (this->ActionScopes).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar19 + (longlong)iVar12 * 0x10 + -0x10) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    local_48.Object = param_1->Object;
    this_01 = *(FOptimusCompoundAction **)(pFVar19 + (longlong)iVar12 * 0x10 + -0x10);
    local_48.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FOptimusCompoundAction::AddSubAction(this_01,&local_48);
LAB_14e21ad85:
    this->bIsRunningAction = bVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// RunAction @ 14e21add0

bool __thiscall UOptimusActionStack::RunAction(UOptimusActionStack *this,FOptimusAction *param_1)

{
  bool bVar1;
  TSharedPtr<FOptimusAction,1> local_18;
  
  local_18.Object = param_1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)param_1;
  }
  bVar1 = RunAction(this,&local_18);
  return bVar1;
}

// SetTransactionScopeFunctions @ 14e2229b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusActionStack::SetTransactionScopeFunctions
          (UOptimusActionStack *this,TFunction<int___cdecl(UObject_*,FString_const_&)> *param_1,
          TFunction<void___cdecl(int)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->BeginScopeFunc;
  uVar7 = *(undefined8 *)&(this->BeginScopeFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->BeginScopeFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->BeginScopeFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->BeginScopeFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->BeginScopeFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->BeginScopeFunc).field_0x20;
  plVar10 = *(longlong **)&(this->BeginScopeFunc).field_0x28;
  *(longlong *)&this->BeginScopeFunc = local_58;
  *(undefined8 *)&(this->BeginScopeFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->BeginScopeFunc).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->BeginScopeFunc).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->BeginScopeFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->BeginScopeFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->BeginScopeFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->BeginScopeFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->BeginScopeFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->BeginScopeFunc).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    local_58 = lVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_58 = *(longlong *)param_2;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->EndScopeFunc;
  uVar7 = *(undefined8 *)&(this->EndScopeFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->EndScopeFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->EndScopeFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->EndScopeFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->EndScopeFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->EndScopeFunc).field_0x20;
  plVar10 = *(longlong **)&(this->EndScopeFunc).field_0x28;
  *(longlong *)&this->EndScopeFunc = local_58;
  *(undefined8 *)&(this->EndScopeFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->EndScopeFunc).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->EndScopeFunc).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->EndScopeFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->EndScopeFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->EndScopeFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->EndScopeFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->EndScopeFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->EndScopeFunc).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// StaticRegisterNativesUOptimusActionStack @ 14e225740

void __cdecl UOptimusActionStack::StaticRegisterNativesUOptimusActionStack(void)

{
  return;
}

// Undo @ 14e229850

bool __thiscall UOptimusActionStack::Undo(UOptimusActionStack *this)

{
  longlong *plVar1;
  UObjectBaseUtility *this_00;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  UClass *pUVar5;
  void *pvVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  if (this->CurrentActionIndex == 0) {
    return false;
  }
  uVar7 = this->CurrentActionIndex - 1;
  this->CurrentActionIndex = uVar7;
  pvVar6 = (void *)0x0;
  uVar4 = 0;
  if ((int)uVar7 < (this->Actions).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar3;
    }
  }
  pFVar8 = (this->Actions).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
  if (*(longlong *)pFVar8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar3;
    }
  }
  plVar1 = *(longlong **)pFVar8;
  this_00 = (UObjectBaseUtility *)this->_padding_;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x10);
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar5 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
    pvVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e229944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar1,pvVar6);
  return (bool)uVar3;
}

// operator() @ 150594ba0

bool __thiscall `UOptimusActionStack::RunAction'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3926983981366509547>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3926983981366509547>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

